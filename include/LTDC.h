/**
 * Copyright (c) 2018-2020 FAUCHER Julien & FRANCE Loic
 * This file is part of SooL core Library.
 *
 *  SooL core Library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation, either version 3
 *  of the License, or (at your option) any later version.
 *
 *  SooL core Library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with SooL core Library. If not, see <https://www.gnu.org/licenses/>.
 */


//Generated 2020-09-17T19:51:13.093030

#ifndef __SOOL_CORE_LTDC_H
#define __SOOL_CORE_LTDC_H
#include "lib_utils/peripheral_include.h"
//SOOL-LTDC-INCLUDES-BEGIN
#include "RCC.h"
//SOOL-LTDC-INCLUDES-END

#if	defined(STM32H7      ) || defined(STM32F407xx  ) || defined(STM32F417xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || \
    defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F479xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || \
    defined(STM32F765xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  )
#if	defined(STM32H7      )
#define LTDC_BPCR_0_AHBP AHBP
#define LTDC_AWCR_0_AAV AAV
#define LTDC_TWCR_0_TOTALW TOTALW
#define LTDC_BCCR_0
#define LTDC_MAP0_L2CKCR LxCKCR_t L2CKCR
#else
#define LTDC_BPCR_0_AHBP
#define LTDC_AWCR_0_AAV
#define LTDC_TWCR_0_TOTALW
#define LTDC_MAP0_L2CKCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F407xx  ) || defined(STM32F417xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F479xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F765xx  ) || \
    defined(STM32F769xx  ) || defined(STM32F777xx  )
#define LTDC_BPCR_1
#define LTDC_AWCR_1
#define LTDC_TWCR_1
#define LTDC_BCCR_1
#define LTDC_L2CKCR
#define LTDC_MAP1
#endif

namespace sool {
	namespace core {
		class LTDC /// lcd tft controller
		{
		public:
			//SOOL-LTDC-SUB-TYPES-BEGIN
			enum class Layer
			{
			Layer1,
			Layer2
			};
			
			enum class PixelFormat
			{
			ARGB8888 = 0,
			RGB888,
			RGB565,
			ARGB1555,
			ARGB4444,
			L8, //8bit luminance
			AL44,//4bit alpha, 4bit luminance
			AL88 //8bit alpha, 8bit luminance
			};
			//SOOL-LTDC-SUB-TYPES-END
			struct SSCR_t: public Reg32_t /// Synchronization Size Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t VSH              : 11; /// Vertical Synchronization Height (in units of horizontal scan line)
				uint32_t                  : 5;
				uint32_t HSW              : 10; /// Horizontal Synchronization Width (in units of pixel clock period)
				uint32_t                  : 6;
				//SOOL-LTDC_SSCR-DECLARATIONS
			};
			struct BPCR_t: public Reg32_t /// Back Porch Configuration Register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t AVBP             : 11; /// Accumulated Vertical back porch (in units of horizontal scan line)
						uint32_t                  : 5;
						uint32_t LTDC_BPCR_0_AHBP : 12; /// Accumulated Horizontal back porch (in units of pixel clock period)
						uint32_t                  : 4;
					};
					#ifdef LTDC_BPCR_1
					struct
					{
						uint32_t                  : 16;
						uint32_t AHBP             : 10; /// Accumulated Horizontal back porch (in units of pixel clock period)
						uint32_t                  : 6;
					};
					#endif
				};
				//SOOL-LTDC_BPCR-DECLARATIONS
			};
			struct AWCR_t: public Reg32_t /// Active Width Configuration Register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t AAH              : 11; /// Accumulated Active Height (in units of horizontal scan line)
						uint32_t                  : 5;
						uint32_t LTDC_AWCR_0_AAV  : 12;
						uint32_t                  : 4;
					};
					#ifdef LTDC_AWCR_1
					struct
					{
						uint32_t                  : 16;
						uint32_t AAV              : 10;
						uint32_t                  : 6;
					};
					#endif
				};
				//SOOL-LTDC_AWCR-DECLARATIONS
			};
			struct TWCR_t: public Reg32_t /// Total Width Configuration Register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t TOTALH           : 11; /// Total Height (in units of horizontal scan line)
						uint32_t                  : 5;
						uint32_t LTDC_TWCR_0_TOTALW : 12; /// Total Width (in units of pixel clock period)
						uint32_t                  : 4;
					};
					#ifdef LTDC_TWCR_1
					struct
					{
						uint32_t                  : 16;
						uint32_t TOTALW           : 10; /// Total Width (in units of pixel clock period)
						uint32_t                  : 6;
					};
					#endif
				};
				//SOOL-LTDC_TWCR-DECLARATIONS
			};
			struct GCR_t: public Reg32_t /// Global Control Register
			{
				using Reg32_t::operator=;
				uint32_t LTDCEN           : 1; /// LCD-TFT controller enable bit
				uint32_t                  : 3;
				uint32_t DBW              : 3; /// Dither Blue Width
				uint32_t                  : 1;
				uint32_t DGW              : 3; /// Dither Green Width
				uint32_t                  : 1;
				uint32_t DRW              : 3; /// Dither Red Width
				uint32_t                  : 1;
				uint32_t DEN              : 1; /// Dither Enable
				uint32_t                  : 11;
				uint32_t PCPOL            : 1; /// Pixel Clock Polarity
				uint32_t DEPOL            : 1; /// Data Enable Polarity
				uint32_t VSPOL            : 1; /// Vertical Synchronization Polarity
				uint32_t HSPOL            : 1; /// Horizontal Synchronization Polarity
				//SOOL-LTDC_GCR-DECLARATIONS
			};
			struct SRCR_t: public Reg32_t /// Shadow Reload Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t IMR              : 1; /// Immediate Reload
				uint32_t VBR              : 1; /// Vertical Blanking Reload
				uint32_t                  : 30;
				//SOOL-LTDC_SRCR-DECLARATIONS
			};
			struct BCCR_t: public Reg32_t /// Background Color Configuration Register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef LTDC_BCCR_0
					struct
					{
						uint32_t BCBLUE           : 8; /// Background Color Blue value
						uint32_t BCGREEN          : 8; /// Background Color Green value
						uint32_t BCRED            : 8; /// Background Color Red value
						uint32_t                  : 8;
					};
					#endif
					#ifdef LTDC_BCCR_1
					struct
					{
						uint32_t BC               : 24; /// Background Color Red value
						uint32_t                  : 8;
					};
					#endif
				};
				//SOOL-LTDC_BCCR-DECLARATIONS
			};
			struct IER_t: public Reg32_t /// Interrupt Enable Register
			{
				using Reg32_t::operator=;
				uint32_t LIE              : 1; /// Line Interrupt Enable
				uint32_t FUIE             : 1; /// FIFO Underrun Interrupt Enable
				uint32_t TERRIE           : 1; /// Transfer Error Interrupt Enable
				uint32_t RRIE             : 1; /// Register Reload interrupt enable
				uint32_t                  : 28;
				//SOOL-LTDC_IER-DECLARATIONS
			};
			struct ISR_t: public Reg32_t /// Interrupt Status Register
			{
				using Reg32_t::operator=;
				uint32_t LIF              : 1; /// Line Interrupt flag
				uint32_t FUIF             : 1; /// FIFO Underrun Interrupt flag
				uint32_t TERRIF           : 1; /// Transfer Error interrupt flag
				uint32_t RRIF             : 1; /// Register Reload Interrupt Flag
				uint32_t                  : 28;
				//SOOL-LTDC_ISR-DECLARATIONS
			};
			struct ICR_t: public Reg32_t /// Interrupt Clear Register
			{
				using Reg32_t::operator=;
				uint32_t CLIF             : 1; /// Clears the Line Interrupt Flag
				uint32_t CFUIF            : 1; /// Clears the FIFO Underrun Interrupt flag
				uint32_t CTERRIF          : 1; /// Clears the Transfer Error Interrupt Flag
				uint32_t CRRIF            : 1; /// Clears Register Reload Interrupt Flag
				uint32_t                  : 28;
				//SOOL-LTDC_ICR-DECLARATIONS
			};
			struct LIPCR_t: public Reg32_t /// Line Interrupt Position Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t LIPOS            : 11; /// Line Interrupt Position
				uint32_t                  : 21;
				//SOOL-LTDC_LIPCR-DECLARATIONS
			};
			struct CPSR_t: public Reg32_t /// Current Position Status Register
			{
				using Reg32_t::operator=;
				uint32_t CYPOS            : 16; /// Current Y Position
				uint32_t CXPOS            : 16; /// Current X Position
				//SOOL-LTDC_CPSR-DECLARATIONS
			};
			struct CDSR_t: public Reg32_t /// Current Display Status Register
			{
				using Reg32_t::operator=;
				uint32_t VDES             : 1; /// Vertical Data Enable display Status
				uint32_t HDES             : 1; /// Horizontal Data Enable display Status
				uint32_t VSYNCS           : 1; /// Vertical Synchronization display Status
				uint32_t HSYNCS           : 1; /// Horizontal Synchronization display Status
				uint32_t                  : 28;
				//SOOL-LTDC_CDSR-DECLARATIONS
			};
			struct LxCR_t: public Reg32_t /// Layerx Control Register
			{
				using Reg32_t::operator=;
				uint32_t LEN              : 1; /// Layer Enable
				uint32_t COLKEN           : 1; /// Color Keying Enable
				uint32_t                  : 2;
				uint32_t CLUTEN           : 1; /// Color Look-Up Table Enable
				uint32_t                  : 27;
				//SOOL-LTDC_LxCR-DECLARATIONS
			};
			struct LxWHPCR_t: public Reg32_t /// Layerx Window Horizontal Position Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t WHSTPOS          : 12; /// Window Horizontal Start Position
				uint32_t                  : 4;
				uint32_t WHSPPOS          : 12; /// Window Horizontal Stop Position
				uint32_t                  : 4;
				//SOOL-LTDC_LxWHPCR-DECLARATIONS
			};
			struct LxWVPCR_t: public Reg32_t /// Layerx Window Vertical Position Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t WVSTPOS          : 11; /// Window Vertical Start Position
				uint32_t                  : 5;
				uint32_t WVSPPOS          : 11; /// Window Vertical Stop Position
				uint32_t                  : 5;
				//SOOL-LTDC_LxWVPCR-DECLARATIONS
			};
			struct LxCKCR_t: public Reg32_t /// Layerx Color Keying Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t CKBLUE           : 8; /// Color Key Blue value
				uint32_t CKGREEN          : 8; /// Color Key Green value
				uint32_t CKRED            : 8; /// Color Key Red value
				uint32_t                  : 8;
				//SOOL-LTDC_LxCKCR-DECLARATIONS
			};
			struct LxPFCR_t: public Reg32_t /// Layerx Pixel Format Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t PF               : 3; /// Pixel Format
				uint32_t                  : 29;
				//SOOL-LTDC_LxPFCR-DECLARATIONS
			};
			struct LxCACR_t: public Reg32_t /// Layerx Constant Alpha Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t CONSTA           : 8; /// Constant Alpha
				uint32_t                  : 24;
				//SOOL-LTDC_LxCACR-DECLARATIONS
			};
			struct LxDCCR_t: public Reg32_t /// Layerx Default Color Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t DCBLUE           : 8; /// Default Color Blue
				uint32_t DCGREEN          : 8; /// Default Color Green
				uint32_t DCRED            : 8; /// Default Color Red
				uint32_t DCALPHA          : 8; /// Default Color Alpha
				//SOOL-LTDC_LxDCCR-DECLARATIONS
			};
			struct LxBFCR_t: public Reg32_t /// Layerx Blending Factors Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t BF2              : 3; /// Blending Factor 2
				uint32_t                  : 5;
				uint32_t BF1              : 3; /// Blending Factor 1
				uint32_t                  : 21;
				//SOOL-LTDC_LxBFCR-DECLARATIONS
			};
			struct LxCFBAR_t: public Reg32_t /// Layerx Color Frame Buffer Address Register
			{
				using Reg32_t::operator=;
				uint32_t CFBADD           : 32; /// Color Frame Buffer Start Address
				//SOOL-LTDC_LxCFBAR-DECLARATIONS
			};
			struct LxCFBLR_t: public Reg32_t /// Layerx Color Frame Buffer Length Register
			{
				using Reg32_t::operator=;
				uint32_t CFBLL            : 13; /// Color Frame Buffer Line Length
				uint32_t                  : 3;
				uint32_t CFBP             : 13; /// Color Frame Buffer Pitch in bytes
				uint32_t                  : 3;
				//SOOL-LTDC_LxCFBLR-DECLARATIONS
			};
			struct LxCFBLNR_t: public Reg32_t /// Layerx ColorFrame Buffer Line Number Register
			{
				using Reg32_t::operator=;
				uint32_t CFBLNBR          : 11; /// Frame Buffer Line Number
				uint32_t                  : 21;
				//SOOL-LTDC_LxCFBLNR-DECLARATIONS
			};
			struct LxCLUTWR_t: public Reg32_t /// Layerx CLUT Write Register
			{
				using Reg32_t::operator=;
				uint32_t BLUE             : 8; /// Blue value
				uint32_t GREEN            : 8; /// Green value
				uint32_t RED              : 8; /// Red value
				uint32_t CLUTADD          : 8; /// CLUT Address
				//SOOL-LTDC_LxCLUTWR-DECLARATIONS
			};
			#ifdef LTDC_L2CKCR
			struct L2CKCR_t: public Reg32_t /// Layerx Color Keying Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t CKBLUE           : 8; /// Color Key Blue value
				uint32_t CKGREEN          : 7; /// Color Key Green value
				uint32_t CKRED            : 9; /// Color Key Red value
				uint32_t                  : 8;
				//SOOL-LTDC_L2CKCR-DECLARATIONS
			};
			#endif
			union
			{
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					SSCR_t SSCR; /// Synchronization Size Configuration Register
					BPCR_t BPCR; /// Back Porch Configuration Register
					AWCR_t AWCR; /// Active Width Configuration Register
					TWCR_t TWCR; /// Total Width Configuration Register
					GCR_t GCR; /// Global Control Register
					__SOOL_PERIPH_PADDING_8;
					SRCR_t SRCR; /// Shadow Reload Configuration Register
					__SOOL_PERIPH_PADDING_4;
					BCCR_t BCCR; /// Background Color Configuration Register
					__SOOL_PERIPH_PADDING_4;
					IER_t IER; /// Interrupt Enable Register
					ISR_t ISR; /// Interrupt Status Register
					ICR_t ICR; /// Interrupt Clear Register
					LIPCR_t LIPCR; /// Line Interrupt Position Configuration Register
					CPSR_t CPSR; /// Current Position Status Register
					CDSR_t CDSR; /// Current Display Status Register
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					LxCR_t L1CR; /// Layerx Control Register
					LxWHPCR_t L1WHPCR; /// Layerx Window Horizontal Position Configuration Register
					LxWVPCR_t L1WVPCR; /// Layerx Window Vertical Position Configuration Register
					LxCKCR_t L1CKCR; /// Layerx Color Keying Configuration Register
					LxPFCR_t L1PFCR; /// Layerx Pixel Format Configuration Register
					LxCACR_t L1CACR; /// Layerx Constant Alpha Configuration Register
					LxDCCR_t L1DCCR; /// Layerx Default Color Configuration Register
					LxBFCR_t L1BFCR; /// Layerx Blending Factors Configuration Register
					__SOOL_PERIPH_PADDING_8;
					LxCFBAR_t L1CFBAR; /// Layerx Color Frame Buffer Address Register
					LxCFBLR_t L1CFBLR; /// Layerx Color Frame Buffer Length Register
					LxCFBLNR_t L1CFBLNR; /// Layerx ColorFrame Buffer Line Number Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					LxCLUTWR_t L1CLUTWR; /// Layerx CLUT Write Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					LxCR_t L2CR; /// Layerx Control Register
					LxWHPCR_t L2WHPCR; /// Layerx Window Horizontal Position Configuration Register
					LxWVPCR_t L2WVPCR; /// Layerx Window Vertical Position Configuration Register
					LTDC_MAP0_L2CKCR; /// Layerx Color Keying Configuration Register
					LxPFCR_t L2PFCR; /// Layerx Pixel Format Configuration Register
					LxCACR_t L2CACR; /// Layerx Constant Alpha Configuration Register
					LxDCCR_t L2DCCR; /// Layerx Default Color Configuration Register
					LxBFCR_t L2BFCR; /// Layerx Blending Factors Configuration Register
					__SOOL_PERIPH_PADDING_8;
					LxCFBAR_t L2CFBAR; /// Layerx Color Frame Buffer Address Register
					LxCFBLR_t L2CFBLR; /// Layerx Color Frame Buffer Length Register
					LxCFBLNR_t L2CFBLNR; /// Layerx ColorFrame Buffer Line Number Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					LxCLUTWR_t L2CLUTWR; /// Layerx CLUT Write Register
				};
				#ifdef LTDC_MAP1
				struct
				{
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_256;
					L2CKCR_t L2CKCR; /// Layerx Color Keying Configuration Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
				};
				#endif
			};
			//SOOL-LTDC-DECLARATIONS-BEGIN
			constexpr volatile Reg32_t &get_clock_enable_reg(const uintptr_t addr) volatile;
			constexpr uint32_t get_clock_enable_bit(const uintptr_t addr) volatile;
			
			inline void enable_clock() volatile;
			inline void clut_write(Layer l,uint8_t address, uint32_t color) volatile;
			inline void clut_write(Layer l,uint8_t address, uint8_t r, uint8_t g, uint8_t b) volatile;
			
			void clut_write(const Layer l,const uint32_t table[],const int table_length) volatile;
			
			inline void enable_clut(Layer l) volatile;
			inline void enable_color_keying(Layer l,uint32_t color) volatile;
			
			inline void enable() volatile {GCR.LTDCEN = 1;};
			inline void disable() volatile{GCR.LTDCEN = 0;};
			
			inline void update_shadow_registers(bool immediate = false) volatile
			{
			if(immediate)
			SRCR.IMR = 1;
			else
			SRCR.VBR = 1;
			};
			//SOOL-LTDC-DECLARATIONS-END

			#if __SOOL_DEBUG_NOPHY
				LTDC(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() const volatile {return myaddr;};
			#else
				inline const uintptr_t get_addr() const volatile {return reinterpret_cast<uintptr_t>(this);};
			private:
				LTDC() = delete;
			#endif
		};

#if	defined(STM32H7      )
#define LTDC_BASE_ADDR ((uint32_t)0x50001000U)
#define LTDC_TMPL
#endif

#if	defined(STM32F407xx  ) || defined(STM32F417xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F479xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F765xx  ) || \
    defined(STM32F769xx  ) || defined(STM32F777xx  )
#define LTDC_BASE_ADDR ((uint32_t)0x40016800U)
#define LTDC_TMPL
#endif


//Instances for peripheral LTDC
		#if __SOOL_DEBUG_NOPHY
			volatile class LTDC * const LTDC = new class LTDC(LTDC_BASE_ADDR);
		#else
			volatile class LTDC * const LTDC = reinterpret_cast<class LTDC* const>(LTDC_BASE_ADDR);
		#endif

		//SOOL-LTDC-DEFINES
		//SOOL-LTDC-DEFINITIONS-BEGIN
		constexpr volatile Reg32_t& LTDC::get_clock_enable_reg(const uintptr_t addr) volatile
		{
			switch (addr)
			{
		//Output for LTDCEN
		#ifdef LTDC_BASE_ADDR
		case LTDC_BASE_ADDR :
			#if defined(STM32H7      )
		return RCC->APB3ENR;
			#elif defined(STM32F4      ) || defined(STM32F7      )
		return RCC->APB2ENR;
			#endif
		#endif
			}
		}
		constexpr uint32_t LTDC::get_clock_enable_bit(const uintptr_t addr) volatile
		{
			switch (addr)
			{
		//Output for LTDCEN
		#ifdef LTDC_BASE_ADDR
		case LTDC_BASE_ADDR :
			#if defined(STM32H7      )
		return 1 << 3;
			#elif defined(STM32F4      ) || defined(STM32F7      )
		return 1 << 26;
			#endif
		#endif
			}
			return 0;
		}
		
		inline void LTDC::enable_clock() volatile
		{
			get_clock_enable_reg(get_addr()) |= get_clock_enable_bit(get_addr());
		}
		
		inline void LTDC::clut_write(LTDC::Layer l,uint8_t address, uint32_t color) volatile
		{
			switch (l)
			{
		case Layer::Layer1:
			L1CLUTWR = address << 24 | (color & 0xFFFFFF);
			return;
		case Layer::Layer2:
			L2CLUTWR = address << 24 | (color & 0xFFFFFF);
			return;
			}
		
		}
		inline void LTDC::clut_write(LTDC::Layer l,uint8_t address, uint8_t r, uint8_t g, uint8_t b) volatile
		{
			switch (l)
			{
		case Layer::Layer1:
			L1CLUTWR = address << 24 | (r & 0xFF) << 16 | (g & 0xFF) << 8 | (b & 0xFF);
			return;
		case Layer::Layer2:
			L2CLUTWR = address << 24 | (r & 0xFF) << 16 | (g & 0xFF) << 8 | (b & 0xFF);
			return;
			}
		}
		
		inline void LTDC::enable_clut(LTDC::Layer l) volatile
		{
			if(l == Layer::Layer1)
		L1CR.CLUTEN = 1;
			else
		L2CR.CLUTEN = 1;
			update_shadow_registers(true);
		}
		
		inline void LTDC::enable_color_keying(LTDC::Layer l,uint32_t color) volatile
		{
			if(l == Layer::Layer1)
			{
		L1CKCR = color & 0xFFFFFF;
		L1CR.COLKEN = 1;
			}
			else
			{
		L2CKCR = color & 0xFFFFFF;
		L2CR.COLKEN = 1;
			}
			update_shadow_registers(true);
		}
		
		//SOOL-LTDC-DEFINITIONS-END
	};
};
#undef LTDC_BCCR_0
#undef LTDC_BPCR_0_AHBP
#undef LTDC_AWCR_1
#undef LTDC_BPCR_1
#undef LTDC_MAP1
#undef LTDC_TWCR_0_TOTALW
#undef LTDC_TWCR_1
#undef LTDC_BCCR_1
#undef LTDC_MAP0_L2CKCR
#undef LTDC_AWCR_0_AAV
#undef LTDC_TMPL

#endif

#endif //__SOOL_CORE_LTDC_H