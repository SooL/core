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


//Generated 2020-08-04T14:00:04.895735

#ifndef __SOOL_CORE_DMA2D_H
#define __SOOL_CORE_DMA2D_H
#include "lib_utils/peripheral_include.h"
//SOOL-DMA2D-INCLUDES-BEGIN
#include "RCC.h"
//SOOL-DMA2D-INCLUDES-END

#if	defined(STM32H7      ) || defined(STM32F429xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || \
    defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || \
    defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#if	defined(STM32H7      )
#define DMA2D_FGPFCCR
#define DMA2D_OCOLR_0_ALPHA ALPHA
#define DMA2D_MAP0_FGPFCCR FGPFCCR_t FGPFCCR
#else
#define DMA2D_OCOLR_0_ALPHA
#define DMA2D_MAP0_FGPFCCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32H7      ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define DMA2D_xGPFCCR_AI AI
#define DMA2D_xGPFCCR_RBS RBS
#define DMA2D_OPFCCR_AI AI
#define DMA2D_OPFCCR_RBS RBS
#else
#define DMA2D_xGPFCCR_AI
#define DMA2D_xGPFCCR_RBS
#define DMA2D_OPFCCR_AI
#define DMA2D_OPFCCR_RBS
#endif

#if	defined(STM32F429xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F745xx  ) || \
    defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || \
    defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define DMA2D_OCOLR_1
#define DMA2D_MAP1_FGPFCCR xGPFCCR_t FGPFCCR
#define DMA2D_MAP1_FGCLUT OCOLR_t FGCLUT
#define DMA2D_MAP1_BGCLUT OCOLR_t BGCLUT
#else
#define DMA2D_MAP1_FGPFCCR __SOOL_PERIPH_PADDING_4
#define DMA2D_MAP1_FGCLUT __SOOL_PERIPH_PADDING_4
#define DMA2D_MAP1_BGCLUT __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F429xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F745xx  ) || \
    defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || \
    defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || \
    defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H750xx  ) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7) || \
    defined(STM32H7B0xx  ) || defined(STM32H7B0xxQ ) || defined(STM32H7B3xx  ) || defined(STM32H7B3xxQ ) || defined(STM32L476xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define DMA2D_MAP0_FGCMAR xMAR_t FGCMAR
#else
#define DMA2D_MAP0_FGCMAR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F429xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F745xx  ) || \
    defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || \
    defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32H7A3xx  ) || defined(STM32H7A3xxQ ) || \
    defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define DMA2D_MAP1
#endif

#if	defined(STM32H7A3xx  ) || defined(STM32H7A3xxQ )
#define DMA2D_MAP1_DFGCMAR xMAR_t DFGCMAR
#else
#define DMA2D_MAP1_DFGCMAR __SOOL_PERIPH_PADDING_4
#endif

namespace sool {
	namespace core {
		class DMA2D /// dma2d
		{
		public:
			//SOOL-DMA2D-SUB-TYPES
			struct CR_t: public Reg32_t /// DMA2D control register
			{
				using Reg32_t::operator=;
				uint32_t START            : 1; /// Start This bit can be used to launch the DMA2D according to the parameters loaded in the various configuration registers
				uint32_t SUSP             : 1; /// Suspend This bit can be used to suspend the current transfer. This bit is set and reset by software. It is automatically reset by hardware when the START bit is reset.
				uint32_t ABORT            : 1; /// Abort This bit can be used to abort the current transfer. This bit is set by software and is automatically reset by hardware when the START bit is reset.
				uint32_t                  : 5;
				uint32_t TEIE             : 1; /// Transfer error interrupt enable This bit is set and cleared by software.
				uint32_t TCIE             : 1; /// Transfer complete interrupt enable This bit is set and cleared by software.
				uint32_t TWIE             : 1; /// Transfer watermark interrupt enable This bit is set and cleared by software.
				uint32_t CAEIE            : 1; /// CLUT access error interrupt enable This bit is set and cleared by software.
				uint32_t CTCIE            : 1; /// CLUT transfer complete interrupt enable This bit is set and cleared by software.
				uint32_t CEIE             : 1; /// Configuration Error Interrupt Enable This bit is set and cleared by software.
				uint32_t                  : 2;
				uint32_t MODE             : 2; /// DMA2D mode This bit is set and cleared by software. It cannot be modified while a transfer is ongoing.
				uint32_t                  : 14;
				//SOOL-DMA2D_CR-DECLARATIONS
			};
			struct ISR_t: public Reg32_t /// DMA2D Interrupt Status Register
			{
				using Reg32_t::operator=;
				uint32_t TEIF             : 1; /// Transfer error interrupt flag This bit is set when an error occurs during a DMA transfer (data transfer or automatic CLUT loading).
				uint32_t TCIF             : 1; /// Transfer complete interrupt flag This bit is set when a DMA2D transfer operation is complete (data transfer only).
				uint32_t TWIF             : 1; /// Transfer watermark interrupt flag This bit is set when the last pixel of the watermarked line has been transferred.
				uint32_t CAEIF            : 1; /// CLUT access error interrupt flag This bit is set when the CPU accesses the CLUT while the CLUT is being automatically copied from a system memory to the internal DMA2D.
				uint32_t CTCIF            : 1; /// CLUT transfer complete interrupt flag This bit is set when the CLUT copy from a system memory area to the internal DMA2D memory is complete.
				uint32_t CEIF             : 1; /// Configuration error interrupt flag This bit is set when the START bit of DMA2D_CR, DMA2DFGPFCCR or DMA2D_BGPFCCR is set and a wrong configuration has been programmed.
				uint32_t                  : 26;
				//SOOL-DMA2D_ISR-DECLARATIONS
			};
			struct IFCR_t: public Reg32_t /// DMA2D interrupt flag clear register
			{
				using Reg32_t::operator=;
				uint32_t CTEIF            : 1; /// Clear Transfer error interrupt flag Programming this bit to 1 clears the TEIF flag in the DMA2D_ISR register
				uint32_t CTCIF            : 1; /// Clear transfer complete interrupt flag Programming this bit to 1 clears the TCIF flag in the DMA2D_ISR register
				uint32_t CTWIF            : 1; /// Clear transfer watermark interrupt flag Programming this bit to 1 clears the TWIF flag in the DMA2D_ISR register
				uint32_t CAECIF           : 1; /// Clear CLUT access error interrupt flag Programming this bit to 1 clears the CAEIF flag in the DMA2D_ISR register
				uint32_t CCTCIF           : 1; /// Clear CLUT transfer complete interrupt flag Programming this bit to 1 clears the CTCIF flag in the DMA2D_ISR register
				uint32_t CCEIF            : 1; /// Clear configuration error interrupt flag Programming this bit to 1 clears the CEIF flag in the DMA2D_ISR register
				uint32_t                  : 26;
				//SOOL-DMA2D_IFCR-DECLARATIONS
			};
			struct xMAR_t: public Reg32_t /// DMA2D foreground memory address register
			{
				using Reg32_t::operator=;
				uint32_t MA               : 32; /// Memory address Address of the data used for the foreground image. This register can only be written when data transfers are disabled. Once the data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned.
				//SOOL-DMA2D_xMAR-DECLARATIONS
			};
			struct xOR_t: public Reg32_t /// DMA2D foreground offset register
			{
				using Reg32_t::operator=;
				uint32_t LO               : 14; /// Line offset Line offset used for the foreground expressed in pixel. This value is used to generate the address. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once a data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even.
				uint32_t                  : 18;
				//SOOL-DMA2D_xOR-DECLARATIONS
			};
			#ifdef DMA2D_FGPFCCR
			struct FGPFCCR_t: public Reg32_t /// DMA2D foreground PFC control register
			{
				using Reg32_t::operator=;
				uint32_t CM               : 4; /// Color mode These bits defines the color format of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
				uint32_t CCM              : 1; /// CLUT color mode This bit defines the color format of the CLUT. It can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only.
				uint32_t START            : 1; /// Start This bit can be set to start the automatic loading of the CLUT. It is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already ongoing (data transfer or automatic background CLUT transfer).
				uint32_t                  : 2;
				uint32_t CS               : 8; /// CLUT size These bits define the size of the CLUT used for the foreground image. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
				uint32_t AM               : 2; /// Alpha mode These bits select the alpha channel value to be used for the foreground image. They can only be written data the transfer are disabled. Once the transfer has started, they become read-only. other configurations are meaningless
				uint32_t CSS              : 2; /// Chroma Sub-Sampling These bits define the chroma sub-sampling mode for YCbCr color mode. Once the transfer has started, these bits are read-only. others: meaningless
				uint32_t AI               : 1; /// Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
				uint32_t RBS              : 1; /// Red Blue Swap This bit allows to swap the R &amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.
				uint32_t                  : 2;
				uint32_t ALPHA            : 8; /// Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied by the original alpha value according to the alpha mode selected through the AM[1:0] bits. These bits can only be written when data transfers are disabled. Once a transfer has started, they become read-only.
				//SOOL-DMA2D_FGPFCCR-DECLARATIONS
			};
			#endif
			struct xGCOLR_t: public Reg32_t /// DMA2D foreground color register
			{
				using Reg32_t::operator=;
				uint32_t BLUE             : 8; /// Blue Value These bits defines the blue value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
				uint32_t GREEN            : 8; /// Green Value These bits defines the green value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
				uint32_t RED              : 8; /// Red Value These bits defines the red value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
				uint32_t                  : 8;
				//SOOL-DMA2D_xGCOLR-DECLARATIONS
			};
			struct xGPFCCR_t: public Reg32_t /// DMA2D background PFC control register
			{
				using Reg32_t::operator=;
				uint32_t CM               : 4; /// Color mode These bits define the color format of the foreground image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
				uint32_t CCM              : 1; /// CLUT Color mode These bits define the color format of the CLUT. This register can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only.
				uint32_t START            : 1; /// Start This bit is set to start the automatic loading of the CLUT. This bit is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in the DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already on going (data transfer or automatic BackGround CLUT transfer).
				uint32_t                  : 2;
				uint32_t CS               : 8; /// CLUT size These bits define the size of the CLUT used for the BG. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
				uint32_t AM               : 2; /// Alpha mode These bits define which alpha channel value to be used for the background image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
				uint32_t                  : 2;
				uint32_t DMA2D_xGPFCCR_AI : 1; /// Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
				uint32_t DMA2D_xGPFCCR_RBS : 1; /// Red Blue Swap This bit allows to swap the R &amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.
				uint32_t                  : 2;
				uint32_t ALPHA            : 8; /// Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied with the original alpha value according to the alpha mode selected with bits AM[1: 0]. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
				//SOOL-DMA2D_xGPFCCR-DECLARATIONS
			};
			struct OPFCCR_t: public Reg32_t /// DMA2D output PFC control register
			{
				using Reg32_t::operator=;
				uint32_t CM               : 3; /// Color mode These bits define the color format of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
				uint32_t                  : 17;
				uint32_t DMA2D_OPFCCR_AI  : 1; /// Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only.
				uint32_t DMA2D_OPFCCR_RBS : 1; /// Red Blue Swap This bit allows to swap the R &amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only.
				uint32_t                  : 10;
				//SOOL-DMA2D_OPFCCR-DECLARATIONS
			};
			struct OCOLR_t: public Reg32_t /// DMA2D output color register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t BLUE             : 8; /// Blue Value These bits define the blue value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
						uint32_t GREEN            : 8; /// Green Value These bits define the green value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
						uint32_t RED              : 8; /// Red Value These bits define the red value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
						uint32_t DMA2D_OCOLR_0_ALPHA : 8; /// Alpha Channel Value These bits define the alpha channel of the output color. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
					};
					#ifdef DMA2D_OCOLR_1
					struct
					{
						uint32_t                  : 24;
						uint32_t APLHA            : 8; /// Alpha Channel Value
					};
					#endif
				};
				//SOOL-DMA2D_OCOLR-DECLARATIONS
			};
			struct NLR_t: public Reg32_t /// DMA2D number of line register
			{
				using Reg32_t::operator=;
				uint32_t NL               : 16; /// Number of lines Number of lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
				uint32_t PL               : 14; /// Pixel per lines Number of pixels per lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. If any of the input image format is 4-bit per pixel, pixel per lines must be even.
				uint32_t                  : 2;
				//SOOL-DMA2D_NLR-DECLARATIONS
			};
			struct LWR_t: public Reg32_t /// DMA2D line watermark register
			{
				using Reg32_t::operator=;
				uint32_t LW               : 16; /// Line watermark These bits allow to configure the line watermark for interrupt generation. An interrupt is raised when the last pixel of the watermarked line has been transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
				uint32_t                  : 16;
				//SOOL-DMA2D_LWR-DECLARATIONS
			};
			struct AMTCR_t: public Reg32_t /// DMA2D AXI master timer configuration register
			{
				using Reg32_t::operator=;
				uint32_t EN               : 1; /// Enable Enables the dead time functionality.
				uint32_t                  : 7;
				uint32_t DT               : 8; /// Dead Time Dead time value in the AXI clock cycle inserted between two consecutive accesses on the AXI master port. These bits represent the minimum guaranteed number of cycles between two consecutive AXI accesses.
				uint32_t                  : 16;
				//SOOL-DMA2D_AMTCR-DECLARATIONS
			};
			union
			{
				struct
				{
					CR_t CR; /// DMA2D control register
					ISR_t ISR; /// DMA2D Interrupt Status Register
					IFCR_t IFCR; /// DMA2D interrupt flag clear register
					xMAR_t FGMAR; /// DMA2D foreground memory address register
					xOR_t FGOR; /// DMA2D foreground offset register
					xMAR_t BGMAR; /// DMA2D background memory address register
					xOR_t BGOR; /// DMA2D background offset register
					DMA2D_MAP0_FGPFCCR; /// DMA2D foreground PFC control register
					xGCOLR_t FGCOLR; /// DMA2D foreground color register
					xGPFCCR_t BGPFCCR; /// DMA2D background PFC control register
					xGCOLR_t BGCOLR; /// DMA2D background color register
					DMA2D_MAP0_FGCMAR; /// DMA2D foreground CLUT memory address register
					xMAR_t BGCMAR; /// DMA2D background CLUT memory address register
					OPFCCR_t OPFCCR; /// DMA2D output PFC control register
					OCOLR_t OCOLR; /// DMA2D output color register
					xMAR_t OMAR; /// DMA2D output memory address register
					xOR_t OOR; /// DMA2D output offset register
					NLR_t NLR; /// DMA2D number of line register
					LWR_t LWR; /// DMA2D line watermark register
					AMTCR_t AMTCR; /// DMA2D AXI master timer configuration register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
				};
				#ifdef DMA2D_MAP1
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					DMA2D_MAP1_FGPFCCR; /// foreground PFC control register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					DMA2D_MAP1_DFGCMAR; /// DMA2D foreground CLUT memory address register
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					DMA2D_MAP1_FGCLUT; /// DMA2D output color register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					DMA2D_MAP1_BGCLUT; /// DMA2D output color register
				};
				#endif
			};
			//SOOL-DMA2D-DECLARATIONS-BEGIN
			#if __SOOL_DEBUG_NOPHY
				DMA2D(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() const volatile {return myaddr;};
			#else
				inline const uintptr_t get_addr() const volatile {return reinterpret_cast<uintptr_t>(this);};
			private:
				DMA2D() = delete;
			#endif
			private:
				static constexpr uint32_t get_clock_enable_bit(const uintptr_t addr);
				static constexpr volatile Reg32_t& get_clock_enable_reg(const uintptr_t addr);
			public:
				void enable_clock() volatile;
			//SOOL-DMA2D-DECLARATIONS-END
			private:
				DMA2D() = delete;
		};

#if	defined(STM32H7      )
#define DMA2D_BASE_ADDR ((uint32_t)0x52001000U)
#define DMA2D_TMPL
#endif

#if	defined(STM32F429xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F745xx  ) || \
    defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || \
    defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define DMA2D_BASE_ADDR ((uint32_t)0x4002b000U)
#define DMA2D_TMPL
#endif


//Instances for peripheral DMA2D
		volatile class DMA2D * const DMA2D = reinterpret_cast<class DMA2D* const>(DMA2D_BASE_ADDR);
		//SOOL-DMA2D-DEFINES
		//SOOL-DMA2D-DEFINITIONS-BEGIN
		inline void DMA2D::enable_clock() volatile
		{
			get_clock_enable_reg(get_addr()) |= get_clock_enable_bit(get_addr());
		}
		
		inline constexpr volatile Reg32_t& DMA2D::get_clock_enable_reg(const uintptr_t addr)
		{
			switch (addr)
			{
		//Output for DMA2DEN
		#ifdef DMA2D_BASE_ADDR
		case DMA2D_BASE_ADDR :
			#if defined(STM32H7A3xx  ) || defined(STM32H7A3xxQ ) || defined(STM32H7B0xx  ) || defined(STM32H7B0xxQ ) || defined(STM32H7B3xx  ) || \
			    defined(STM32H7B3xxQ )
		return RCC->C1_AHB3ENR;
			#elif defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H747xx_CORE_CM4) || \
			      defined(STM32H747xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || \
			      defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
		return RCC->AHB3ENR;
			#elif defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32L4      )
		return RCC->AHB1ENR;
			#endif
		#endif
			}
		}
		inline constexpr uint32_t DMA2D::get_clock_enable_bit(const uintptr_t addr)
		{
			switch (addr)
			{
		//Output for DMA2DEN
		#ifdef DMA2D_BASE_ADDR
		case DMA2D_BASE_ADDR :
			#if defined(STM32H7      )
		return 1 << 4;
			#elif defined(STM32F4      ) || defined(STM32F7      )
		return 1 << 23;
			#elif defined(STM32L4      )
		return 1 << 17;
			#endif
		#endif
			}
		}
		
		//SOOL-DMA2D-DEFINITIONS-END
	};
};
#undef DMA2D_MAP1
#undef DMA2D_xGPFCCR_RBS
#undef DMA2D_MAP1_FGPFCCR
#undef DMA2D_MAP1_FGCLUT
#undef DMA2D_MAP0_FGCMAR
#undef DMA2D_OCOLR_1
#undef DMA2D_OPFCCR_AI
#undef DMA2D_MAP1_BGCLUT
#undef DMA2D_MAP0_FGPFCCR
#undef DMA2D_OPFCCR_RBS
#undef DMA2D_TMPL
#undef DMA2D_OCOLR_0_ALPHA
#undef DMA2D_xGPFCCR_AI
#undef DMA2D_MAP1_DFGCMAR

#endif

#endif //__SOOL_CORE_DMA2D_H