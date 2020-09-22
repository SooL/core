//
// Created by julien on 21/09/2020.
//

#include "../include/LTDC.h"
namespace sool {
namespace core
{
void LTDC::clut_write(const Layer l,const uint32_t table[],const int table_length) volatile
{
	volatile LxCLUTWR_t* target = (l == Layer::Layer1) ? &L1CLUTWR : &L2CLUTWR;
	for(int i = 0; i < table_length; i++)
		*target = table[i];
	update_shadow_registers(true);
}
}
}