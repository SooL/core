//
// Created by julien on 11/09/2020.
//

#include "../include/DSI.h"
namespace sool {
namespace core {

void DSI::write_short(const int channel_id, const DSI::ShortWriteType mode, const uint8_t param1, const uint8_t param2) volatile
{
	GHCR_t header{};

	header.DT = static_cast<const uint32_t>(mode);
	header.VCID = channel_id;
	header.WCLSB=param1;
	header.WCMSB=param2;

	//Command is sent on writing in GHCR.
	while(! GPSR.CMDFE)
		asm("nop");
	GHCR = header;
}

void DSI::write_long(const int channel_id, const DSI::LongWriteType mode, const unsigned int payload_length, const uint8_t *payload) volatile
{
	//Waiting for the command FIFO to be empty
	while(! GPSR.CMDFE)
		asm("nop");

	uint32_t buffer = 0;
	unsigned int buffer_index= 0;
	for(unsigned int param_index = 0; param_index < payload_length; param_index++)
	{
		if(buffer_index > 3)
		{
			GPDR = buffer;
			buffer_index = 0;
			buffer = 0;
		}
		buffer |= payload[param_index] << (8U * buffer_index);
		buffer_index ++;
	}
	if(buffer_index != 0)
		GPDR = buffer;

	GHCR_t header{};

	header.VCID = channel_id;
	header.DT = static_cast<uint32_t>(mode);
	header.WCLSB = (payload_length) & 0x00FFU;
	header.WCMSB = ((payload_length ) & 0xFF00U) >> 8U;

	//The send action is done on writing in header register.
	GHCR = header;
}

} // End of core
} // End of SooL
