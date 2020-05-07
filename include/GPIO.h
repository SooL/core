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


//Generated 2020-05-07T21:15:37.949986

#ifndef __SOOL_CORE_GPIO_H
#define __SOOL_CORE_GPIO_H
#include "lib_utils/peripheral_include.h"
#include "RCC.h"



#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || \
    defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32WB      )
#define PERIPH_GPIO
#endif

#if	defined(STM32MP1     )
#define GPIO_VERR
#define GPIO_IPIDR
#define GPIO_SIDR
#define GPIO_MAP0_VERR VERR_t VERR
#define GPIO_MAP0_IPIDR IPIDR_t IPIDR
#define GPIO_MAP0_SIDR SIDR_t SIDR
#else
#define GPIO_MAP0_VERR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP0_IPIDR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP0_SIDR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32L0      ) || defined(STM32WB      ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || \
    defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || \
    defined(STM32F779xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define GPIO_BRR
#define GPIO_MAP1_BRR BRR_t BRR
#else
#define GPIO_MAP1_BRR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define GPIO_ASCR
#define GPIO_MAP1_ASCR ASCR_t ASCR
#else
#define GPIO_MAP1_ASCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32W1      )
#define PERIPH_GPIO_OLD
#define PERIPH_GPIO_DBG
#endif

namespace sool {
	namespace core {
		#ifdef PERIPH_GPIO
		class GPIO /// general purpose i/os
		{
		public:
			public:
			//##################################################################################################
			//#                                              Pin                                              #
			//##################################################################################################
				enum class Pin : uint32_t
				{
					None = (0),
					P0 = (1U << 0U),
					P1 = (1U << 1U),
					P2 = (1U << 2U),
					P3 = (1U << 3U),
					P4 = (1U << 4U),
					P5 = (1U << 5U),
					P6 = (1U << 6U),
					P7 = (1U << 7U),
					P8 = (1U << 8U),
					P9 = (1U << 9U),
					P10 = (1U << 10U),
					P11 = (1U << 11U),
					P12 = (1U << 12U),
					P13 = (1U << 13U),
					P14 = (1U << 14U),
					P15 = (1U << 15U),
					All = 0xFFFF
				};
			
			//##################################################################################################
			//#                                             enums                                              #
			//##################################################################################################
				enum class Mode : std::uint8_t
				{
					Input = 0, IN = 0,
			#ifndef STM32F1
					Output = 1, OUT = 1,
					AlternateFunction = 2, AF = 2,
					Analog = 3,
			#else
					Output_10MHz = 1, OUT_10M = 1,
					Output_2MHz = 2, OUT_2M = 2,
					Output_50MHz = 3, OUT_50M = 3,
			#endif
					Mask = 3
				};
			#ifndef STM32F1
				enum class OutType : std::uint8_t
				{
					PushPull = 0,
					OpenDrain = 1,
					Mask = 1
				};
			
				enum class Speed : std::uint8_t
				{
					Slow = 0,
					Medium = 1,
					High = 2,
					VeryHigh = 3,
					Mask = 3
				};
			
				enum class PuPd : std::uint8_t
				{
					NoPull = 0,
					PullUp = 1,
					PullDown = 2,
					Mask = 3
				};
			
				enum class AF : std::uint8_t
				{
					AF0 = 0x0U,
					AF1 = 0x1U,
					AF2 = 0x2U,
					AF3 = 0x3U,
					AF4 = 0x4U,
					AF5 = 0x5U,
					AF6 = 0x6U,
					AF7 = 0x7U,
					AF8 = 0x8U,
					AF9 = 0x9U,
					AF10 = 0xAU,
					AF11 = 0xBU,
					AF12 = 0xCU,
					AF13 = 0xDU,
					AF14 = 0xEU,
					AF15 = 0xFU,
					Mask = 0xFU
				};
			#ifdef GPIO_ASCR
				enum class ASC : std::uint8_t
				{
					Disconnected = 0,
					Connected = 1,
					Mask = 1
				};
			#endif
			#else
				enum class CNF : std::uint8_t
				{
					IN_Analog = 0,
					IN_Floating = 1,
					IN_PuPd = 2,
					OUT_GP_PushPull = 0,
					OUT_GP_OpenDrain = 1,
					OUT_AF_PushPull = 2,
					OUT_AF_OpenDrain = 3,
					Mask = 3
				};
			#endif
			
				struct PinConfig
				{
					Mode mode:2;
			
					PinConfig(const Mode &mode) : mode(mode), modif(1)
					{};
			#ifndef STM32F1
					OutType outType:1;
					Speed speed:2;
					PuPd pupd:2;
					AF af:4;
			
					PinConfig(const OutType &oType) : outType(oType), modif(2)
					{};
			
					PinConfig(const Speed &speed) : speed(speed), modif(4)
					{};
			
					PinConfig(const PuPd &pupd) : pupd(pupd), modif(8)
					{};
			
					PinConfig(const AF &af) : af(af), modif(16)
					{};
			#ifdef GPIO_ASCR
					ASC asc: 1;
					PinConfig(const ASC& asc):asc(asc), modif(32){};
			#endif
			#else
					CNF cnf : 2;
					PinConfig(const CNF& cnf):cnf(cnf), modif(2){};
			#endif
					uint8_t modif;
				};
			
			struct MODER_t: public Reg32_t /// GPIO port mode register
			{
				using Reg32_t::operator=;
				uint32_t MODE0            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE1            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE2            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE3            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE4            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE5            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE6            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE7            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE8            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE9            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE10           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE11           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE12           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE13           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE14           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				uint32_t MODE15           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O mode.
				
			};
			struct OTYPER_t: public Reg32_t /// GPIO port output type register
			{
				using Reg32_t::operator=;
				uint32_t OT0              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT1              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT2              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT3              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT4              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT5              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT6              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT7              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT8              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT9              : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT10             : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT11             : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT12             : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT13             : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT14             : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t OT15             : 1; /// Port x configuration bits written by software to configure the I/O output type.
				uint32_t                  : 16;
				
			};
			struct OSPEEDR_t: public Reg32_t /// GPIO port output speed register
			{
				using Reg32_t::operator=;
				uint32_t OSPEED0          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED1          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED2          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED3          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED4          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED5          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED6          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED7          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED8          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED9          : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED10         : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED11         : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED12         : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED13         : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED14         : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				uint32_t OSPEED15         : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O output speed. Note: Refer to the device datasheet for the frequency specifications and the power supply and load conditions for each speed.
				
			};
			struct PUPDR_t: public Reg32_t /// GPIO port pull-up/pull-down register
			{
				using Reg32_t::operator=;
				uint32_t PUPD0            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD1            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD2            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD3            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD4            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD5            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD6            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD7            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD8            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD9            : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD10           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD11           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD12           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD13           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD14           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				uint32_t PUPD15           : 2; /// [1:0]: Port x configuration bits written by software to configure the I/O pull-up or pull-down
				
			};
			struct IDR_t: public Reg32_t /// GPIO port input data register
			{
				using Reg32_t::operator=;
				uint32_t ID0              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID1              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID2              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID3              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID4              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID5              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID6              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID7              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID8              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID9              : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID10             : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID11             : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID12             : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID13             : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID14             : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t ID15             : 1; /// Port input data bit read-only. They contain the input value of the corresponding I/O port.
				uint32_t                  : 16;
				
			};
			struct ODR_t: public Reg32_t /// GPIO port output data register
			{
				using Reg32_t::operator=;
				uint32_t OD0              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD1              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD2              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD3              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD4              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD5              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD6              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD7              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD8              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD9              : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD10             : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD11             : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD12             : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD13             : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD14             : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t OD15             : 1; /// Port output data bit These bits can be read and written by software. Note: For atomic bit set/reset, the OD bits can be individually set and/or reset by writing to the GPIOx_BSRR or GPIOx_BRR registers (x = A..F).
				uint32_t                  : 16;
					const GPIO::ODR_t &operator=(const Pin &p) volatile;
				
					const GPIO::ODR_t &operator|=(const Pin &p) volatile;
				
					const GPIO::ODR_t &operator&=(const Pin &p) volatile;
				
					const GPIO::ODR_t &operator^=(const Pin &p) volatile;
				
					const GPIO::ODR_t &operator+=(const Pin &p) volatile;
				
					const GPIO::ODR_t &operator-=(const Pin &p) volatile;
				
			};
			struct BSRR_t: public Reg32_t /// GPIO port bit set/reset register
			{
				using Reg32_t::operator=;
				uint32_t BS0              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS1              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS2              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS3              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS4              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS5              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS6              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS7              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS8              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS9              : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS10             : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS11             : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS12             : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS13             : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS14             : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BS15             : 1; /// Port x set bit y (y= 0..15) write-only. A read to these bits returns the value 0x0000.
				uint32_t BR0              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR1              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR2              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR3              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR4              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR5              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR6              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR7              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR8              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR9              : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR10             : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR11             : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR12             : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR13             : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR14             : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				uint32_t BR15             : 1; /// Port x reset bit y write-only. A read to these bits returns the value 0x0000. Note: If both BSx and BRx are set, BSx has priority.
				
			};
			struct LCKR_t: public Reg32_t /// This register is used to lock the configuration of the port bits when a correct write sequence is applied to bit 16 (LCKK). The value of bits [15:0] is used to lock the configuration of the GPIO. During the write sequence, the value of LCKR[15:0] must not change. When the LOCK sequence has been applied on a port bit, the value of this port bit can no longer be modified until the next MCU reset or peripheral reset. A specific write sequence is used to write to the GPIOx_LCKR register. Only word access (32-bit long) is allowed during this locking sequence. Each lock bit freezes a specific configuration register (control and alternate function registers).
			{
				using Reg32_t::operator=;
				uint32_t LCK0             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK1             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK2             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK3             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK4             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK5             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK6             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK7             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK8             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK9             : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK10            : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK11            : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK12            : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK13            : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK14            : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCK15            : 1; /// Port x lock bit y (y= 0..15) read/write but can only be written when the LCKK bit is 0.
				uint32_t LCKK             : 1; /// Lock key This bit can be read any time. It can only be modified using the lock key write sequence. LOCK key write sequence: WR LCKR[16] = 1 + LCKR[15:0] WR LCKR[16] = 0 + LCKR[15:0] WR LCKR[16] = 1 + LCKR[15:0] RD LCKR RD LCKR[16] = 1 (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK[15:0] must not change. Any error in the lock sequence aborts the lock. After the first lock sequence on any bit of the port, any read access on the LCKK bit will return 1 until the next MCU reset or peripheral reset.
				uint32_t                  : 15;
				
			};
			struct AFRL_t: public Reg32_t /// GPIO alternate function low register
			{
				using Reg32_t::operator=;
				uint32_t AFSEL0           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL1           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL2           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL3           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL4           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL5           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL6           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL7           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				
			};
			struct AFRH_t: public Reg32_t /// GPIO alternate function high register
			{
				using Reg32_t::operator=;
				uint32_t AFSEL8           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL9           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL10          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL11          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL12          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL13          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL14          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL15          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				
			};
			#ifdef GPIO_VERR
			struct VERR_t: public Reg32_t /// GPIO version register
			{
				using Reg32_t::operator=;
				uint32_t MINREV           : 4;
				uint32_t MAJREV           : 4;
				uint32_t                  : 24;
				
			};
			#endif
			#ifdef GPIO_IPIDR
			struct IPIDR_t: public Reg32_t /// GPIO identification register
			{
				using Reg32_t::operator=;
				uint32_t ID               : 32;
				
			};
			#endif
			#ifdef GPIO_SIDR
			struct SIDR_t: public Reg32_t /// GPIO size identification register
			{
				using Reg32_t::operator=;
				uint32_t SID              : 32;
				
			};
			#endif
			struct AFR_t: public SmallArrayRegBase_t<uint64_t, uint32_t> /// GPIO alternate function low register
			{
				using SmallArrayRegBase_t<uint64_t, uint32_t>::operator=;
				uint32_t AFSEL0           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL1           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL2           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL3           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL4           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL5           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL6           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint64_t AFSEL7           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os AFSELy selection:
				uint32_t AFSEL8           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL9           : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL10          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL11          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL12          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL13          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint32_t AFSEL14          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				uint64_t AFSEL15          : 4; /// [3:0]: Alternate function selection for port x pin y written by software to configure alternate function I/Os
				
			};
			#ifdef GPIO_BRR
			struct BRR_t: public Reg32_t /// GPIO port bit reset register
			{
				using Reg32_t::operator=;
				uint32_t BR0              : 1; /// Port Reset bit
				uint32_t BR1              : 1; /// Port Reset bit
				uint32_t BR2              : 1; /// Port Reset bit
				uint32_t BR3              : 1; /// Port Reset bit
				uint32_t BR4              : 1; /// Port Reset bit
				uint32_t BR5              : 1; /// Port Reset bit
				uint32_t BR6              : 1; /// Port Reset bit
				uint32_t BR7              : 1; /// Port Reset bit
				uint32_t BR8              : 1; /// Port Reset bit
				uint32_t BR9              : 1; /// Port Reset bit
				uint32_t BR10             : 1; /// Port Reset bit
				uint32_t BR11             : 1; /// Port Reset bit
				uint32_t BR12             : 1; /// Port Reset bit
				uint32_t BR13             : 1; /// Port Reset bit
				uint32_t BR14             : 1; /// Port Reset bit
				uint32_t BR15             : 1; /// Port Reset bit
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef GPIO_ASCR
			struct ASCR_t: public Reg32_t /// GPIO port analog switch control register
			{
				using Reg32_t::operator=;
				uint32_t ASC0             : 1; /// Port analog switch control
				uint32_t ASC1             : 1; /// Port analog switch control
				uint32_t ASC2             : 1; /// Port analog switch control
				uint32_t ASC3             : 1; /// Port analog switch control
				uint32_t ASC4             : 1; /// Port analog switch control
				uint32_t ASC5             : 1; /// Port analog switch control
				uint32_t ASC6             : 1; /// Port analog switch control
				uint32_t ASC7             : 1; /// Port analog switch control
				uint32_t ASC8             : 1; /// Port analog switch control
				uint32_t ASC9             : 1; /// Port analog switch control
				uint32_t ASC10            : 1; /// Port analog switch control
				uint32_t ASC11            : 1; /// Port analog switch control
				uint32_t ASC12            : 1; /// Port analog switch control
				uint32_t ASC13            : 1; /// Port analog switch control
				uint32_t ASC14            : 1; /// Port analog switch control
				uint32_t ASC15            : 1; /// Port analog switch control
				uint32_t                  : 16;
				
			};
			#endif
			union
			{
				struct
				{
					MODER_t MODER; /// GPIO port mode register
					OTYPER_t OTYPER; /// GPIO port output type register
					OSPEEDR_t OSPEEDR; /// GPIO port output speed register
					PUPDR_t PUPDR; /// GPIO port pull-up/pull-down register
					IDR_t IDR; /// GPIO port input data register
					ODR_t ODR; /// GPIO port output data register
					BSRR_t BSRR; /// GPIO port bit set/reset register
					LCKR_t LCKR; /// This register is used to lock the configuration of the port bits when a correct write sequence is applied to bit 16 (LCKK). The value of bits [15:0] is used to lock the configuration of the GPIO. During the write sequence, the value of LCKR[15:0] must not change. When the LOCK sequence has been applied on a port bit, the value of this port bit can no longer be modified until the next MCU reset or peripheral reset. A specific write sequence is used to write to the GPIOx_LCKR register. Only word access (32-bit long) is allowed during this locking sequence. Each lock bit freezes a specific configuration register (control and alternate function registers).
					AFRL_t AFRL; /// GPIO alternate function low register
					AFRH_t AFRH; /// GPIO alternate function high register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					GPIO_MAP0_VERR; /// GPIO version register
					GPIO_MAP0_IPIDR; /// GPIO identification register
					GPIO_MAP0_SIDR; /// GPIO size identification register
				};
				struct
				{
					__SOOL_PERIPH_PADDING_32;
					AFR_t AFR; /// GPIO alternate function low register
					GPIO_MAP1_BRR; /// GPIO port bit reset register
					GPIO_MAP1_ASCR; /// GPIO port analog switch control register
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
			};

			#if __SOOL_DEBUG_NOPHY
				GPIO(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() const volatile {return myaddr;};
			#else
				inline const uintptr_t get_addr() const volatile {return reinterpret_cast<uintptr_t>(this);};
			private:
				GPIO() = delete;
			#endif
			//##################################################################################################
			//#                                              methods                                           #
			//##################################################################################################
			private:
				static constexpr uint32_t get_clock_enable_bit(const uintptr_t addr);
				static constexpr volatile Reg32_t& get_clock_enable_reg(const uintptr_t addr);
			
			public:
				static constexpr const Pin pin(unsigned int id);
			
				void enable_clock() volatile;
			
				void disable_clock() volatile;
			
				bool is_clock_enabled() const volatile;
			
				void set_AF(Pin pins, GPIO::AF af) volatile;
			
				bool set_locked(Pin pins, bool locked) volatile;
			
			
		};
		#endif
		#ifdef PERIPH_GPIO_OLD
		class GPIO_OLD /// general purpose i/os
		{
		public:
			
			struct CRL_t: public Reg32_t /// Port A configuration register (Low)
			{
				using Reg32_t::operator=;
				uint32_t CNFMODE0         : 4;
				uint32_t CNFMODE1         : 4;
				uint32_t CNFMODE2         : 4;
				uint32_t CNFMODE3         : 4;
				uint32_t                  : 16;
				
			};
			struct CRH_t: public Reg32_t /// Port A configuration register (High)
			{
				using Reg32_t::operator=;
				uint32_t CNFMODE4         : 4;
				uint32_t CNFMODE5         : 4;
				uint32_t CNFMODE6         : 4;
				uint32_t CNFMODE7         : 4;
				uint32_t                  : 16;
				
			};
			struct IDR_t: public Reg32_t /// Port A input data register
			{
				using Reg32_t::operator=;
				uint32_t ID0              : 1;
				uint32_t ID1              : 1;
				uint32_t ID2              : 1;
				uint32_t ID3              : 1;
				uint32_t ID4              : 1;
				uint32_t ID5              : 1;
				uint32_t ID6              : 1;
				uint32_t ID7              : 1;
				uint32_t ID8              : 1;
				uint32_t ID9              : 1;
				uint32_t ID10             : 1;
				uint32_t ID11             : 1;
				uint32_t ID12             : 1;
				uint32_t ID13             : 1;
				uint32_t ID14             : 1;
				uint32_t ID15             : 1;
				uint32_t                  : 16;
				
			};
			struct ODR_t: public Reg32_t /// Port A output data register
			{
				using Reg32_t::operator=;
				uint32_t OD0              : 1;
				uint32_t OD1              : 1;
				uint32_t OD2              : 1;
				uint32_t OD3              : 1;
				uint32_t OD4              : 1;
				uint32_t OD5              : 1;
				uint32_t OD6              : 1;
				uint32_t OD7              : 1;
				uint32_t OD8              : 1;
				uint32_t OD9              : 1;
				uint32_t OD10             : 1;
				uint32_t OD11             : 1;
				uint32_t OD12             : 1;
				uint32_t OD13             : 1;
				uint32_t OD14             : 1;
				uint32_t OD15             : 1;
				uint32_t                  : 16;
				
			};
			struct BSR_t: public Reg32_t /// Port A bit set register
			{
				using Reg32_t::operator=;
				uint32_t BS0              : 1;
				uint32_t BS1              : 1;
				uint32_t BS2              : 1;
				uint32_t BS3              : 1;
				uint32_t BS4              : 1;
				uint32_t BS5              : 1;
				uint32_t BS6              : 1;
				uint32_t BS7              : 1;
				uint32_t BS8              : 1;
				uint32_t BS9              : 1;
				uint32_t BS10             : 1;
				uint32_t BS11             : 1;
				uint32_t BS12             : 1;
				uint32_t BS13             : 1;
				uint32_t BS14             : 1;
				uint32_t BS15             : 1;
				uint32_t                  : 16;
				
			};
			struct BRR_t: public Reg32_t /// Port A output clear register
			{
				using Reg32_t::operator=;
				uint32_t BR0              : 1;
				uint32_t BR1              : 1;
				uint32_t BR2              : 1;
				uint32_t BR3              : 1;
				uint32_t BR4              : 1;
				uint32_t BR5              : 1;
				uint32_t BR6              : 1;
				uint32_t BR7              : 1;
				uint32_t BR8              : 1;
				uint32_t BR9              : 1;
				uint32_t BR10             : 1;
				uint32_t BR11             : 1;
				uint32_t BR12             : 1;
				uint32_t BR13             : 1;
				uint32_t BR14             : 1;
				uint32_t BR15             : 1;
				uint32_t                  : 16;
				
			};
			CRL_t CRL; /// Port A configuration register (Low)
			CRH_t CRH; /// Port A configuration register (High)
			IDR_t IDR; /// Port A input data register
			ODR_t ODR; /// Port A output data register
			BSR_t BSR; /// Port A bit set register
			BRR_t BRR; /// Port A output clear register

			#if __SOOL_DEBUG_NOPHY
				GPIO_OLD(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() const volatile {return myaddr;};
			#else
				inline const uintptr_t get_addr() const volatile {return reinterpret_cast<uintptr_t>(this);};
			private:
				GPIO_OLD() = delete;
			#endif
			
		};
		#endif
		#ifdef PERIPH_GPIO_DBG
		class GPIO_DBG /// general purpose i/os
		{
		public:
			
			struct DBGCR_t: public Reg32_t /// GPIO debug configuration register
			{
				using Reg32_t::operator=;
				uint32_t                  : 4;
				uint32_t EXTREGEN         : 1;
				uint32_t DBGDIS           : 1;
				uint32_t                  : 26;
				
			};
			struct DBGSR_t: public Reg32_t /// GPIO debug status register
			{
				using Reg32_t::operator=;
				uint32_t SWEN             : 1;
				uint32_t FORCEDBG         : 1;
				uint32_t                  : 1;
				uint32_t BOOTMODE         : 1;
				uint32_t                  : 28;
				
			};
			struct PCTRACECR_t: public Reg32_t /// Clock PC trace register
			{
				using Reg32_t::operator=;
				uint32_t SEL              : 1; /// selects PC_TRACE source on bb_debug GPIO pins
				uint32_t                  : 31;
				
			};
			PCTRACECR_t PCTRACECR; /// Clock PC trace register
			__SOOL_PERIPH_PADDING_4;
			__SOOL_PERIPH_PADDING_16;
			__SOOL_PERIPH_PADDING_64;
			__SOOL_PERIPH_PADDING_128;
			__SOOL_PERIPH_PADDING_256;
			__SOOL_PERIPH_PADDING_512;
			__SOOL_PERIPH_PADDING_2048;
			__SOOL_PERIPH_PADDING_4096;
			__SOOL_PERIPH_PADDING_8192;
			__SOOL_PERIPH_PADDING_16384;
			DBGCR_t DBGCR; /// GPIO debug configuration register
			DBGSR_t DBGSR; /// GPIO debug status register

			#if __SOOL_DEBUG_NOPHY
				GPIO_DBG(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() const volatile {return myaddr;};
			#else
				inline const uintptr_t get_addr() const volatile {return reinterpret_cast<uintptr_t>(this);};
			private:
				GPIO_DBG() = delete;
			#endif
			
		};
		#endif

#if	defined(STM32MP1     )
#define GPIOA_BASE_ADDR ((uint32_t)0x50002000U)
#define GPIO_GPIOA
#define GPIOA_TMPL
#define GPIOB_BASE_ADDR ((uint32_t)0x50003000U)
#define GPIO_GPIOB
#define GPIOB_TMPL
#define GPIOC_BASE_ADDR ((uint32_t)0x50004000U)
#define GPIO_GPIOC
#define GPIOC_TMPL
#define GPIOD_BASE_ADDR ((uint32_t)0x50005000U)
#define GPIO_GPIOD
#define GPIOD_TMPL
#define GPIOE_BASE_ADDR ((uint32_t)0x50006000U)
#define GPIO_GPIOE
#define GPIOE_TMPL
#define GPIOF_BASE_ADDR ((uint32_t)0x50007000U)
#define GPIO_GPIOF
#define GPIOF_TMPL
#define GPIOG_BASE_ADDR ((uint32_t)0x50008000U)
#define GPIO_GPIOG
#define GPIOG_TMPL
#define GPIOH_BASE_ADDR ((uint32_t)0x50009000U)
#define GPIO_GPIOH
#define GPIOH_TMPL
#define GPIOI_BASE_ADDR ((uint32_t)0x5000a000U)
#define GPIO_GPIOI
#define GPIOI_TMPL
#define GPIOJ_BASE_ADDR ((uint32_t)0x5000b000U)
#define GPIO_GPIOJ
#define GPIOJ_TMPL
#define GPIOK_BASE_ADDR ((uint32_t)0x5000c000U)
#define GPIO_GPIOK
#define GPIOK_TMPL
#define GPIOZ_BASE_ADDR ((uint32_t)0x54004000U)
#define GPIO_GPIOZ
#define GPIOZ_TMPL
#endif

#if	defined(STM32H7      )
#define GPIOA_BASE_ADDR ((uint32_t)0x58020000U)
#define GPIO_GPIOA
#define GPIOA_TMPL
#define GPIOB_BASE_ADDR ((uint32_t)0x58020400U)
#define GPIO_GPIOB
#define GPIOB_TMPL
#define GPIOC_BASE_ADDR ((uint32_t)0x58020800U)
#define GPIO_GPIOC
#define GPIOC_TMPL
#define GPIOD_BASE_ADDR ((uint32_t)0x58020c00U)
#define GPIO_GPIOD
#define GPIOD_TMPL
#define GPIOE_BASE_ADDR ((uint32_t)0x58021000U)
#define GPIO_GPIOE
#define GPIOE_TMPL
#define GPIOG_BASE_ADDR ((uint32_t)0x58021800U)
#define GPIO_GPIOG
#define GPIOG_TMPL
#define GPIOH_BASE_ADDR ((uint32_t)0x58021c00U)
#define GPIO_GPIOH
#define GPIOH_TMPL
#define GPIOI_BASE_ADDR ((uint32_t)0x58022000U)
#define GPIO_GPIOI
#define GPIOI_TMPL
#define GPIOJ_BASE_ADDR ((uint32_t)0x58022400U)
#define GPIO_GPIOJ
#define GPIOJ_TMPL
#define GPIOK_BASE_ADDR ((uint32_t)0x58022800U)
#define GPIO_GPIOK
#define GPIOK_TMPL
#define GPIOF_BASE_ADDR ((uint32_t)0x58021400U)
#define GPIO_GPIOF
#define GPIOF_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || \
    defined(STM32WB      )
#define GPIOA_BASE_ADDR ((uint32_t)0x48000000U)
#define GPIO_GPIOA
#define GPIOA_TMPL
#define GPIOB_BASE_ADDR ((uint32_t)0x48000400U)
#define GPIO_GPIOB
#define GPIOB_TMPL
#define GPIOC_BASE_ADDR ((uint32_t)0x48000800U)
#define GPIO_GPIOC
#define GPIOC_TMPL
#define GPIOD_BASE_ADDR ((uint32_t)0x48000c00U)
#define GPIO_GPIOD
#define GPIOD_TMPL
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || defined(STM32F031x6  ) || defined(STM32F038xx  ) || \
    defined(STM32F042x6  ) || defined(STM32F048xx  ) || defined(STM32F051x8  ) || defined(STM32F058xx  ) || defined(STM32F071xB  ) || \
    defined(STM32F072xB  ) || defined(STM32F078xx  ) || defined(STM32F091xC  ) || defined(STM32F098xx  ) || defined(STM32F301x8  ) || \
    defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || \
    defined(STM32F328xx  ) || defined(STM32F358xx  ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define GPIOE_BASE_ADDR ((uint32_t)0x48001000U)
#define GPIO_GPIOE
#define GPIOE_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L431xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define GPIOF_BASE_ADDR ((uint32_t)0x48001400U)
#define GPIO_GPIOF
#define GPIOF_TMPL
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F302xE  ) || defined(STM32F303xE  ) || defined(STM32L431xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define GPIOG_BASE_ADDR ((uint32_t)0x48001800U)
#define GPIO_GPIOG
#define GPIOG_TMPL
#endif

#if	defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F302xE  ) || defined(STM32F303xE  )
#define GPIOH_BASE_ADDR ((uint32_t)0x48001c00U)
#define GPIO_GPIOH
#define GPIOH_TMPL
#endif

#if	defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define GPIOI_BASE_ADDR ((uint32_t)0x48002000U)
#define GPIO_GPIOI
#define GPIOI_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32L1      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define GPIOD_BASE_ADDR ((uint32_t)0x40020c00U)
#define GPIO_GPIOD
#define GPIOD_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32L1      )
#define GPIOC_BASE_ADDR ((uint32_t)0x40020800U)
#define GPIO_GPIOC
#define GPIOC_TMPL
#define GPIOB_BASE_ADDR ((uint32_t)0x40020400U)
#define GPIO_GPIOB
#define GPIOB_TMPL
#define GPIOA_BASE_ADDR ((uint32_t)0x40020000U)
#define GPIO_GPIOA
#define GPIOA_TMPL
#endif

#if	defined(STM32F429xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F745xx  ) || \
    defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || \
    defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  )
#define GPIOK_BASE_ADDR ((uint32_t)0x40022800U)
#define GPIO_GPIOK
#define GPIOK_TMPL
#define GPIOJ_BASE_ADDR ((uint32_t)0x40022400U)
#define GPIO_GPIOJ
#define GPIOJ_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define GPIOI_BASE_ADDR ((uint32_t)0x40022000U)
#define GPIO_GPIOI
#define GPIOI_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
#define GPIOH_BASE_ADDR ((uint32_t)0x40021c00U)
#define GPIO_GPIOH
#define GPIOH_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define GPIOG_BASE_ADDR ((uint32_t)0x40021800U)
#define GPIO_GPIOG
#define GPIOG_TMPL
#define GPIOF_BASE_ADDR ((uint32_t)0x40021400U)
#define GPIO_GPIOF
#define GPIOF_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32L151xB  ) || defined(STM32L151xBA ) || defined(STM32L151xC  ) || \
    defined(STM32L151xCA ) || defined(STM32L151xD  ) || defined(STM32L151xE  ) || defined(STM32L152xB  ) || defined(STM32L152xBA ) || \
    defined(STM32L152xC  ) || defined(STM32L152xCA ) || defined(STM32L152xD  ) || defined(STM32L152xE  )
#define GPIOE_BASE_ADDR ((uint32_t)0x40021000U)
#define GPIO_GPIOE
#define GPIOE_TMPL
#endif

#if	defined(STM32G0      ) || defined(STM32L0      )
#define GPIOA_BASE_ADDR ((uint32_t)0x50000000U)
#define GPIO_GPIOA
#define GPIOA_TMPL
#define GPIOB_BASE_ADDR ((uint32_t)0x50000400U)
#define GPIO_GPIOB
#define GPIOB_TMPL
#define GPIOC_BASE_ADDR ((uint32_t)0x50000800U)
#define GPIO_GPIOC
#define GPIOC_TMPL
#define GPIOD_BASE_ADDR ((uint32_t)0x50000c00U)
#define GPIO_GPIOD
#define GPIOD_TMPL
#endif

#if	defined(STM32G0      )
#define GPIOF_BASE_ADDR ((uint32_t)0x50001400U)
#define GPIO_GPIOF
#define GPIOF_TMPL
#endif

#if	defined(STM32L0      )
#define GPIOH_BASE_ADDR ((uint32_t)0x50001c00U)
#define GPIO_GPIOH
#define GPIOH_TMPL
#endif

#if	defined(STM32L010x4  ) || defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || \
    defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L072xx  ) || \
    defined(STM32L073xx  ) || defined(STM32L081xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define GPIOE_BASE_ADDR ((uint32_t)0x50001000U)
#define GPIO_GPIOE
#define GPIOE_TMPL
#endif

#if	defined(STM32L151xB  ) || defined(STM32L151xC  ) || defined(STM32L151xCA ) || defined(STM32L151xD  ) || defined(STM32L151xE  ) || \
    defined(STM32L152xB  ) || defined(STM32L152xC  ) || defined(STM32L152xCA ) || defined(STM32L152xD  ) || defined(STM32L152xE  )
#define GPIOF_BASE_ADDR ((uint32_t)0x40021800U)
#define GPIO_GPIOF
#define GPIOF_TMPL
#define GPIOG_BASE_ADDR ((uint32_t)0x40021c00U)
#define GPIO_GPIOG
#define GPIOG_TMPL
#endif

#if	defined(STM32L151xB  ) || defined(STM32L151xBA ) || defined(STM32L151xC  ) || defined(STM32L151xCA ) || defined(STM32L151xD  ) || \
    defined(STM32L151xE  ) || defined(STM32L152xB  ) || defined(STM32L152xBA ) || defined(STM32L152xC  ) || defined(STM32L152xCA ) || \
    defined(STM32L152xD  ) || defined(STM32L152xE  )
#define GPIOH_BASE_ADDR ((uint32_t)0x40021400U)
#define GPIO_GPIOH
#define GPIOH_TMPL
#endif

#if	defined(STM32W1      )
#define GPIOA_BASE_ADDR ((uint32_t)0x4000b000U)
#define GPIO_OLD_GPIOA
#define GPIOA_TMPL
#define GPIOB_BASE_ADDR ((uint32_t)0x4000b400U)
#define GPIO_OLD_GPIOB
#define GPIOB_TMPL
#define GPIOC_BASE_ADDR ((uint32_t)0x4000b800U)
#define GPIO_OLD_GPIOC
#define GPIOC_TMPL
#define GPIO_DBG_BASE_ADDR ((uint32_t)0x40004028U)
#define GPIO_DBG_GPIO_DBG
#define GPIO_DBG_TMPL
#endif


//Instances for peripheral GPIO

		#if defined(GPIO_GPIOA) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOA = new class GPIO(GPIOA_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOA = reinterpret_cast<class GPIO* const>(GPIOA_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIO_GPIOB) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOB = new class GPIO(GPIOB_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOB = reinterpret_cast<class GPIO* const>(GPIOB_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIO_GPIOC) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOC = new class GPIO(GPIOC_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOC = reinterpret_cast<class GPIO* const>(GPIOC_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIOD_BASE_ADDR) && defined(GPIO_GPIOD) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOD = new class GPIO(GPIOD_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOD = reinterpret_cast<class GPIO* const>(GPIOD_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIOE_BASE_ADDR) && defined(GPIO_GPIOE) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOE = new class GPIO(GPIOE_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOE = reinterpret_cast<class GPIO* const>(GPIOE_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIOF_BASE_ADDR) && defined(GPIO_GPIOF) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOF = new class GPIO(GPIOF_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOF = reinterpret_cast<class GPIO* const>(GPIOF_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIOG_BASE_ADDR) && defined(GPIO_GPIOG) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOG = new class GPIO(GPIOG_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOG = reinterpret_cast<class GPIO* const>(GPIOG_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIOH_BASE_ADDR) && defined(GPIO_GPIOH) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOH = new class GPIO(GPIOH_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOH = reinterpret_cast<class GPIO* const>(GPIOH_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIOI_BASE_ADDR) && defined(GPIO_GPIOI) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOI = new class GPIO(GPIOI_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOI = reinterpret_cast<class GPIO* const>(GPIOI_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIOJ_BASE_ADDR) && defined(GPIO_GPIOJ) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOJ = new class GPIO(GPIOJ_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOJ = reinterpret_cast<class GPIO* const>(GPIOJ_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIOK_BASE_ADDR) && defined(GPIO_GPIOK) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOK = new class GPIO(GPIOK_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOK = reinterpret_cast<class GPIO* const>(GPIOK_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIOZ_BASE_ADDR) && defined(GPIO_GPIOZ) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO * const GPIOZ = new class GPIO(GPIOZ_BASE_ADDR);
			#else
				volatile class GPIO * const GPIOZ = reinterpret_cast<class GPIO* const>(GPIOZ_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral GPIO_OLD

		#if defined(GPIO_OLD_GPIOA) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO_OLD * const GPIOA = new class GPIO_OLD(GPIOA_BASE_ADDR);
			#else
				volatile class GPIO_OLD * const GPIOA = reinterpret_cast<class GPIO_OLD* const>(GPIOA_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIO_OLD_GPIOB) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO_OLD * const GPIOB = new class GPIO_OLD(GPIOB_BASE_ADDR);
			#else
				volatile class GPIO_OLD * const GPIOB = reinterpret_cast<class GPIO_OLD* const>(GPIOB_BASE_ADDR);
			#endif
		#endif

		#if defined(GPIO_OLD_GPIOC) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO_OLD * const GPIOC = new class GPIO_OLD(GPIOC_BASE_ADDR);
			#else
				volatile class GPIO_OLD * const GPIOC = reinterpret_cast<class GPIO_OLD* const>(GPIOC_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral GPIO_DBG

		#if defined(GPIO_DBG_GPIO_DBG) 
			#if __SOOL_DEBUG_NOPHY
				volatile class GPIO_DBG * const GPIO_DBG = new class GPIO_DBG(GPIO_DBG_BASE_ADDR);
			#else
				volatile class GPIO_DBG * const GPIO_DBG = reinterpret_cast<class GPIO_DBG* const>(GPIO_DBG_BASE_ADDR);
			#endif
		#endif
		
		
		template<unsigned char num>
		struct StandAlone_Pin
		{
		#ifndef STM32F1
			union
			{
				GPIO port;
				struct
				{
					uint32_t : num * 2;
					GPIO::Mode mode            : 2;
					uint32_t :(32 - (num + 1) * 2);
					uint32_t : num * 1;
					GPIO::OutType outType    : 1;
					uint32_t :(32 - (num + 1) * 1);
					uint32_t : num * 2;
					GPIO::Speed speed        : 2;
					uint32_t :(32 - (num + 1) * 2);
					uint32_t : num * 2;
					GPIO::PuPd pupd            : 2;
					uint32_t :(32 - (num + 1) * 2);
					uint64_t : 64; // IDR,ODR
					uint64_t : 64; // BSRR,LCKR
					uint64_t : num * 4;
					GPIO::AF af                : 4;
					uint64_t :(64 - (num + 1) * 4);
		#ifdef GPIO_ASCR
					uint32_t : 32; //BRR
					uint32_t: num*1; GPIO::ASC asc			: 1; uint32_t :(32 - (num+1)*1);
		#endif
				};
			};
		
			const GPIO::OutType &operator=(const GPIO::OutType &oType) volatile;
		
			const GPIO::Speed &operator=(const GPIO::Speed &speed) volatile;
		
			const GPIO::PuPd &operator=(const GPIO::PuPd &pupd) volatile;
		
			const GPIO::AF &operator=(const GPIO::AF &af) volatile;
		
		#ifdef GPIO_ASCR
			const GPIO::ASC& operator=(const GPIO::ASC& asc);
		#endif
		
		#else
			union
			{
				GPIO port;
				struct
				{
					uint32_t :num*4; GPIO::Mode mode :2; GPIO::CNF cnf :2; uint32_t : (64 - (num+1)*4);
				};
			};
			const GPIO::CNF& operator=(const CNF& cnf);
		#endif
		
			const GPIO::Mode &operator=(const GPIO::Mode &mode) volatile;
		
			const GPIO::PinConfig &operator=(const GPIO::PinConfig &config) volatile;
		
			operator GPIO::PinConfig const() volatile;
		
			bool read() volatile;
		
			void write(bool value) volatile;
		
			void toggle() volatile;
		
			const GPIO::Pin pin() volatile;
		} __attribute__((__aligned__(4)));
		//#################################################################################################
		//#                                  GPIO methods and operators                                   #
		//#################################################################################################
		
		inline constexpr const GPIO::Pin GPIO::pin(const unsigned int pin_num)
		{
			return static_cast<GPIO::Pin>(1 << pin_num);
		}
		
		inline constexpr volatile Reg32_t& GPIO::get_clock_enable_reg(const uintptr_t addr)
		{
			switch (addr)
			{
				//Output for GPIOAEN
		#ifdef GPIOA_BASE_ADDR
				case GPIOA_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
						return RCC->AHB2ENR;
					#elif defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L1      )
						return RCC->AHBENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#elif defined(STM32G0      ) || defined(STM32L0      )
						return RCC->IOPENR;
					#endif
		#endif
				//Output for GPIOBEN
		#ifdef GPIOB_BASE_ADDR
				case GPIOB_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
						return RCC->AHB2ENR;
					#elif defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L1      )
						return RCC->AHBENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#elif defined(STM32G0      ) || defined(STM32L0      )
						return RCC->IOPENR;
					#endif
		#endif
				//Output for GPIOCEN
		#ifdef GPIOC_BASE_ADDR
				case GPIOC_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
						return RCC->AHB2ENR;
					#elif defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L1      )
						return RCC->AHBENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#elif defined(STM32G0      ) || defined(STM32L0      )
						return RCC->IOPENR;
					#endif
		#endif
				//Output for GPIODEN
		#ifdef GPIOD_BASE_ADDR
				case GPIOD_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
						return RCC->AHB2ENR;
					#elif defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L1      )
						return RCC->AHBENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#elif defined(STM32G0      ) || defined(STM32L0      )
						return RCC->IOPENR;
					#endif
		#endif
				//Output for GPIOEEN
		#ifdef GPIOE_BASE_ADDR
				case GPIOE_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
						return RCC->AHB2ENR;
					#elif defined(STM32F3      ) || defined(STM32L1      )
						return RCC->AHBENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#elif defined(STM32L0      )
						return RCC->IOPENR;
					#endif
		#endif
				//Output for GPIOGEN
		#ifdef GPIOG_BASE_ADDR
				case GPIOG_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      )
						return RCC->AHB2ENR;
					#elif defined(STM32F3      ) || defined(STM32L1      )
						return RCC->AHBENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#endif
		#endif
				//Output for GPIOHEN
		#ifdef GPIOH_BASE_ADDR
				case GPIOH_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32L4      ) || defined(STM32WB      )
						return RCC->AHB2ENR;
					#elif defined(STM32F3      ) || defined(STM32L1      )
						return RCC->AHBENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#elif defined(STM32L0      )
						return RCC->IOPENR;
					#endif
		#endif
				//Output for GPIOIEN
		#ifdef GPIOI_BASE_ADDR
				case GPIOI_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32L4      )
						return RCC->AHB2ENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#endif
		#endif
				//Output for GPIOJEN
		#ifdef GPIOJ_BASE_ADDR
				case GPIOJ_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#endif
		#endif
				//Output for GPIOKEN
		#ifdef GPIOK_BASE_ADDR
				case GPIOK_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#endif
		#endif
				//Output for GPIOFEN
		#ifdef GPIOF_BASE_ADDR
				case GPIOF_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      )
						return RCC->AHB2ENR;
					#elif defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L1      )
						return RCC->AHBENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->AHB1ENR;
					#elif defined(STM32G0      )
						return RCC->IOPENR;
					#endif
		#endif
			}
		}
		inline constexpr uint32_t GPIO::get_clock_enable_bit(const uintptr_t addr)
		{
			switch (addr)
			{
				//Output for GPIOAEN
		#ifdef GPIOA_BASE_ADDR
				case GPIOA_BASE_ADDR :
					#if defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32G4      ) || \
					    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || \
					    defined(STM32WB      )
						return 1 << 0;
					#elif defined(STM32F0      ) || defined(STM32F3      )
						return 1 << 17;
					#endif
		#endif
				//Output for GPIOBEN
		#ifdef GPIOB_BASE_ADDR
				case GPIOB_BASE_ADDR :
					#if defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32G4      ) || \
					    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || \
					    defined(STM32WB      )
						return 1 << 1;
					#elif defined(STM32F0      ) || defined(STM32F3      )
						return 1 << 18;
					#endif
		#endif
				//Output for GPIOCEN
		#ifdef GPIOC_BASE_ADDR
				case GPIOC_BASE_ADDR :
					#if defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32G4      ) || \
					    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || \
					    defined(STM32WB      )
						return 1 << 2;
					#elif defined(STM32F0      ) || defined(STM32F3      )
						return 1 << 19;
					#endif
		#endif
				//Output for GPIODEN
		#ifdef GPIOD_BASE_ADDR
				case GPIOD_BASE_ADDR :
					#if defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32G4      ) || \
					    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || \
					    defined(STM32WB      )
						return 1 << 3;
					#elif defined(STM32F0      ) || defined(STM32F3      )
						return 1 << 20;
					#endif
		#endif
				//Output for GPIOEEN
		#ifdef GPIOE_BASE_ADDR
				case GPIOE_BASE_ADDR :
					#if defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
					    defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32WB      )
						return 1 << 4;
					#elif defined(STM32F3      )
						return 1 << 21;
					#endif
		#endif
				//Output for GPIOGEN
		#ifdef GPIOG_BASE_ADDR
				case GPIOG_BASE_ADDR :
					#if defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
					    defined(STM32H7      ) || defined(STM32L4      )
						return 1 << 6;
					#elif defined(STM32F3      )
						return 1 << 23;
					#elif defined(STM32L1      )
						return 1 << 7;
					#endif
		#endif
				//Output for GPIOHEN
		#ifdef GPIOH_BASE_ADDR
				case GPIOH_BASE_ADDR :
					#if defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32L0      ) || \
					    defined(STM32L4      ) || defined(STM32WB      )
						return 1 << 7;
					#elif defined(STM32F3      )
						return 1 << 16;
					#elif defined(STM32L1      )
						return 1 << 5;
					#endif
		#endif
				//Output for GPIOIEN
		#ifdef GPIOI_BASE_ADDR
				case GPIOI_BASE_ADDR :
					#if 1
						return 1 << 8;
					#endif
		#endif
				//Output for GPIOJEN
		#ifdef GPIOJ_BASE_ADDR
				case GPIOJ_BASE_ADDR :
					#if 1
						return 1 << 9;
					#endif
		#endif
				//Output for GPIOKEN
		#ifdef GPIOK_BASE_ADDR
				case GPIOK_BASE_ADDR :
					#if 1
						return 1 << 10;
					#endif
		#endif
				//Output for GPIOFEN
		#ifdef GPIOF_BASE_ADDR
				case GPIOF_BASE_ADDR :
					#if defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32G4      ) || \
					    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L4      )
						return 1 << 5;
					#elif defined(STM32F0      ) || defined(STM32F3      )
						return 1 << 22;
					#elif defined(STM32L1      )
						return 1 << 6;
					#endif
		#endif
			}
		}
		
		
		
		
		inline void GPIO::enable_clock() volatile
		{
			get_clock_enable_reg(get_addr()) |= get_clock_enable_bit(get_addr());
		}
		
		inline void GPIO::disable_clock() volatile
		{
			const unsigned int mask = ~GPIO::get_clock_enable_bit((unsigned int) reinterpret_cast<const std::size_t>(this));
		
		#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     )
			RCC->AHB1ENR &= mask;
		#elif defined(STM32L4     ) || defined(STM32L4P    )
			RCC->AHB2ENR &= mask;
		#elif defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L1     )
			RCC->AHBENR &= mask;
		#elif defined(RCC_AHB4ENR)
			RCC->AHB4ENR &= mask;
		#endif
		}
		
		inline bool GPIO::is_clock_enabled() const volatile
		{
			const unsigned int bit = GPIO::get_clock_enable_bit((unsigned int) reinterpret_cast<const std::size_t>(this));
		
		#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     )
			return (RCC->AHB1ENR & bit) == bit;
		#elif defined(STM32L4     ) || defined(STM32L4P    )
			return (RCC->AHB2ENR & bit) == bit;
		#elif defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L1     )
			return (RCC->AHBENR & bit) == bit;
		#elif defined(RCC_AHB4ENR)
			return (RCC->AHB4ENR & bit) == bit;
		#endif
		}
		
		//##################################################################################################
		//#                                    Pin methods and operators                                   #
		//##################################################################################################
		inline constexpr GPIO::Pin operator|(const GPIO::Pin &a, const GPIO::Pin &b)
		{ return static_cast<GPIO::Pin>(static_cast<const uint32_t>(a) | static_cast<const uint32_t>(b)); }
		
		inline constexpr GPIO::Pin operator&(const GPIO::Pin &a, const GPIO::Pin &b)
		{ return static_cast<GPIO::Pin>(static_cast<const uint32_t>(a) & static_cast<const uint32_t>(b)); }
		
		inline constexpr GPIO::Pin operator~(const GPIO::Pin &a)
		{ return static_cast<GPIO::Pin>(~static_cast<const uint32_t>(a)); }
		
		inline constexpr GPIO::Pin operator+(const GPIO::Pin &a, const GPIO::Pin &b)
		{ return a | b; }
		
		inline constexpr GPIO::Pin operator-(const GPIO::Pin &a, const GPIO::Pin &b)
		{ return a & (~b); }
		
		inline constexpr GPIO::Pin &operator|=(GPIO::Pin &a, const GPIO::Pin &b)
		{ return a = a | b; }
		
		
		inline constexpr const uint32_t operator*(const GPIO::Pin &pins, const GPIO::Mode &mode)
		{
			uint32_t v = 0, i = 16;
			while (i--) {
				if ((pins & GPIO::pin(i)) != GPIO::Pin::None)
					v |= static_cast<uint32_t>(mode) << (i * 2);
			}
			return v;
		}
		
		inline constexpr const uint32_t operator*(const GPIO::Mode &mode, const GPIO::Pin &pins)
		{ return pins * mode; }
		
		inline constexpr const uint32_t operator*(const GPIO::Pin &pins, const GPIO::OutType &type)
		{ return static_cast<uint32_t>(pins) * static_cast<uint32_t>(type); }
		
		inline constexpr const uint32_t operator*(const GPIO::OutType &type, const GPIO::Pin &pins)
		{ return pins * type; }
		
		inline constexpr const uint32_t operator*(const GPIO::Pin &pins, const GPIO::Speed &speed)
		{
			uint32_t v = 0, i = 16;
			while (i--) {
				if ((pins & GPIO::pin(i)) != GPIO::Pin::None)
					v |= static_cast<uint32_t>(speed) << (i * 2);
			}
			return v;
		}
		
		inline constexpr const uint32_t operator*(const GPIO::Speed &speed, const GPIO::Pin &pins)
		{ return pins * speed; }
		
		inline constexpr const uint32_t operator*(const GPIO::Pin &pins, const GPIO::PuPd &pupd)
		{
			uint32_t v = 0, i = 16;
			while (i--) {
				if ((pins & GPIO::pin(i)) != GPIO::Pin::None)
					v |= static_cast<uint32_t>(pupd) << (i * 2);
			}
			return v;
		}
		
		inline constexpr const uint32_t operator*(const GPIO::PuPd &pupd, const GPIO::Pin &pins)
		{ return pins * pupd; }
		
		inline constexpr const uint64_t operator*(const GPIO::Pin &pins, const GPIO::AF &af)
		{
			uint64_t v = 0;
			uint32_t i = 16;
			while (i--) {
				if ((pins & GPIO::pin(i)) != GPIO::Pin::None)
					v |= ((uint64_t)
				static_cast<uint64_t>(af)) << (i * 4);
			}
			return v;
		}
		
		inline constexpr const uint64_t operator*(const GPIO::AF &af, const GPIO::Pin &pins)
		{ return pins * af; }
		
		
		inline const GPIO::ODR_t &GPIO::ODR_t::operator=(const GPIO::Pin &p) volatile
		{
			*this = static_cast<uint32_t>(p);
			return *const_cast<const GPIO::ODR_t *>(this);
		}
		
		inline const GPIO::ODR_t &GPIO::ODR_t::operator&=(const GPIO::Pin &p) volatile
		{
			*this &= static_cast<uint32_t>(p);
			return *const_cast<const GPIO::ODR_t *>(this);
		}
		
		inline const GPIO::ODR_t &GPIO::ODR_t::operator|=(const GPIO::Pin &p) volatile
		{
			*reinterpret_cast<volatile uint32_t *>(this) |= static_cast<uint32_t>(p);
			return *const_cast<const GPIO::ODR_t *>(this);
		}
		
		inline const GPIO::ODR_t &GPIO::ODR_t::operator^=(const GPIO::Pin &p) volatile
		{
			*this ^= static_cast<uint32_t>(p);
			return *const_cast<const GPIO::ODR_t *>(this);
		}
		
		inline const GPIO::ODR_t &GPIO::ODR_t::operator+=(const GPIO::Pin &p) volatile
		{
			*this |= p;
			return *const_cast<const GPIO::ODR_t *>(this);
		}
		
		inline const GPIO::ODR_t &GPIO::ODR_t::operator-=(const GPIO::Pin &p) volatile
		{
			*this &= ~p;
			return *const_cast<const GPIO::ODR_t *>(this);
		}
		
		//region PinConfig operators
		inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::Mode &mode)
		{
			GPIO::PinConfig result = pin_conf;
			result.mode = mode;
			result.modif |= 1;
			return result;
		}
		
		#ifndef STM32F1
		
		inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::OutType &oType)
		{
			GPIO::PinConfig result = pin_conf;
			result.outType = oType;
			result.modif |= 2;
			return result;
		}
		
		inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::Speed &speed)
		{
			GPIO::PinConfig result = pin_conf;
			result.speed = speed;
			result.modif |= 4;
			return result;
		}
		
		inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::PuPd &pupd)
		{
			GPIO::PinConfig result = pin_conf;
			result.pupd = pupd;
			result.modif |= 8;
			return result;
		}
		
		inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::AF &af)
		{
			GPIO::PinConfig result = pin_conf;
			result.af = af;
			result.modif |= 16;
			return result;
		}
		
		#ifdef GPIO_ASC
		inline const GPIO::PinConfig operator|(const GPIO::PinConfig& pin_conf, const GPIO::ASC& asc)
		{
			GPIO::PinConfig result = pin_config;
			result.asc = asc;
			result.modif |= 32;
			return result;
		}
		#endif
		#else
		inline const GPIO::PinConfig operator|(const GPIO::PinConfig& pin_conf, const GPIO::CNF& cnf)
		{
			GPIO::PinConfig result = pin_conf;
			result.cnf = cnf;
			result.modif |= 2;
			return result;
		}
		#endif
		
		//endregion
		template<unsigned char num>
		inline const GPIO::PinConfig &StandAlone_Pin<num>::operator=(const GPIO::PinConfig &config) volatile
		{
			if (config.modif & 1) this->mode = config.mode;
		#ifndef STM32F1
			if (config.modif & 2)this->outType = config.outType;
			if (config.modif & 4)this->speed = config.speed;
			if (config.modif & 8)this->pupd = config.pupd;
			if (config.modif & 16)this->af = config.af;
		#ifdef GPIO_ASCR
			if(config.modif & 32)this->asc = config.asc;
		#endif
		#else
			if(config.modif & 2)this->cnf = config.cnf;
		#endif
			return config;
		}
		
		template<unsigned char num>
		inline const GPIO::Mode &StandAlone_Pin<num>::operator=(const GPIO::Mode &mode) volatile
		{
			this->mode = mode;
			return mode;
		}
		
		#ifndef STM32F1
		
		template<unsigned char num>
		inline const GPIO::OutType &StandAlone_Pin<num>::operator=(const GPIO::OutType &oType) volatile
		{
			this->outType = oType;
			return oType;
		}
		
		template<unsigned char num>
		inline const GPIO::Speed &StandAlone_Pin<num>::operator=(const GPIO::Speed &speed) volatile
		{
			this->speed = speed;
			return speed;
		}
		
		template<unsigned char num>
		inline const GPIO::PuPd &StandAlone_Pin<num>::operator=(const GPIO::PuPd &pupd) volatile
		{
			this->pupd = pupd;
			return pupd;
		}
		
		template<unsigned char num>
		inline const GPIO::AF &StandAlone_Pin<num>::operator=(const GPIO::AF &af) volatile
		{
			this->af = af;
			return af;
		}
		
		template<unsigned char num>
		inline StandAlone_Pin<num>::operator GPIO::PinConfig const() volatile
		{
			const GPIO::Mode mode = this->mode;
			GPIO::PinConfig config(mode);
		#ifndef STM32F1
			config.modif = 0b11111;
			config.outType = this->outType;
			config.speed = this->speed;
			config.pupd = this->pupd;
			config.af = this->af;
		#ifdef GPIO_ASCR
			config.asc = this->asc;
		#endif
		#else
			config.modif = 0b11;
			config.cnf = this->cnf;
		#endif
			return config;
		}
		
		#ifdef GPIO_ASCR
		template<unsigned char num>
		inline const GPIO::ASC& StandAlone_Pin<num>::operator=(const GPIO::ASC& asc)
		{
			this->asc = asc;
			return asc;
		}
		#endif
		#else // STM32F1
		template<unsigned char num>
		inline const GPIO::CNF& StandAlone_Pin<num>::operator=(const GPIO::CNF& cnf)
		{
			this->cnf = cnf;
			return cnf;
		}
		#endif
		
		template<unsigned char num>
		inline bool StandAlone_Pin<num>::read() volatile
		{
			return (bool) ((reinterpret_cast<volatile GPIO *>(this))->IDR & (1 << num));
		}
		
		template<unsigned char num>
		inline void StandAlone_Pin<num>::write(bool value) volatile
		{
			(reinterpret_cast<volatile GPIO *>(this))->BSRR = value ? (1 << num) : (1 << (num + 16));
		}
		
		template<unsigned char num>
		inline void StandAlone_Pin<num>::toggle() volatile
		{
			(reinterpret_cast<volatile GPIO *>(this))->ODR ^= (1 << num);
		}
		
		template<unsigned char num>
		inline const GPIO::Pin StandAlone_Pin<num>::pin() volatile
		{
			return GPIO::Pin(num);
		}
		
		//region PXn definitions
		#ifdef GPIOA_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PA0 ;
		extern volatile StandAlone_Pin< 1>& PA1 ;
		extern volatile StandAlone_Pin< 2>& PA2 ;
		extern volatile StandAlone_Pin< 3>& PA3 ;
		extern volatile StandAlone_Pin< 4>& PA4 ;
		extern volatile StandAlone_Pin< 5>& PA5 ;
		extern volatile StandAlone_Pin< 6>& PA6 ;
		extern volatile StandAlone_Pin< 7>& PA7 ;
		extern volatile StandAlone_Pin< 8>& PA8 ;
		extern volatile StandAlone_Pin< 9>& PA9 ;
		extern volatile StandAlone_Pin<10>& PA10;
		extern volatile StandAlone_Pin<11>& PA11;
		extern volatile StandAlone_Pin<12>& PA12;
		extern volatile StandAlone_Pin<13>& PA13;
		extern volatile StandAlone_Pin<14>& PA14;
		extern volatile StandAlone_Pin<15>& PA15;
		#endif
		#ifdef GPIOB_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PB0 ;
		extern volatile StandAlone_Pin< 1>& PB1 ;
		extern volatile StandAlone_Pin< 2>& PB2 ;
		extern volatile StandAlone_Pin< 3>& PB3 ;
		extern volatile StandAlone_Pin< 4>& PB4 ;
		extern volatile StandAlone_Pin< 5>& PB5 ;
		extern volatile StandAlone_Pin< 6>& PB6 ;
		extern volatile StandAlone_Pin< 7>& PB7 ;
		extern volatile StandAlone_Pin< 8>& PB8 ;
		extern volatile StandAlone_Pin< 9>& PB9 ;
		extern volatile StandAlone_Pin<10>& PB10;
		extern volatile StandAlone_Pin<11>& PB11;
		extern volatile StandAlone_Pin<12>& PB12;
		extern volatile StandAlone_Pin<13>& PB13;
		extern volatile StandAlone_Pin<14>& PB14;
		extern volatile StandAlone_Pin<15>& PB15;
		#endif
		#ifdef GPIOC_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PC0 ;
		extern volatile StandAlone_Pin< 1>& PC1 ;
		extern volatile StandAlone_Pin< 2>& PC2 ;
		extern volatile StandAlone_Pin< 3>& PC3 ;
		extern volatile StandAlone_Pin< 4>& PC4 ;
		extern volatile StandAlone_Pin< 5>& PC5 ;
		extern volatile StandAlone_Pin< 6>& PC6 ;
		extern volatile StandAlone_Pin< 7>& PC7 ;
		extern volatile StandAlone_Pin< 8>& PC8 ;
		extern volatile StandAlone_Pin< 9>& PC9 ;
		extern volatile StandAlone_Pin<10>& PC10;
		extern volatile StandAlone_Pin<11>& PC11;
		extern volatile StandAlone_Pin<12>& PC12;
		extern volatile StandAlone_Pin<13>& PC13;
		extern volatile StandAlone_Pin<14>& PC14;
		extern volatile StandAlone_Pin<15>& PC15;
		#endif
		#ifdef GPIOD_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PD0 ;
		extern volatile StandAlone_Pin< 1>& PD1 ;
		extern volatile StandAlone_Pin< 2>& PD2 ;
		extern volatile StandAlone_Pin< 3>& PD3 ;
		extern volatile StandAlone_Pin< 4>& PD4 ;
		extern volatile StandAlone_Pin< 5>& PD5 ;
		extern volatile StandAlone_Pin< 6>& PD6 ;
		extern volatile StandAlone_Pin< 7>& PD7 ;
		extern volatile StandAlone_Pin< 8>& PD8 ;
		extern volatile StandAlone_Pin< 9>& PD9 ;
		extern volatile StandAlone_Pin<10>& PD10;
		extern volatile StandAlone_Pin<11>& PD11;
		extern volatile StandAlone_Pin<12>& PD12;
		extern volatile StandAlone_Pin<13>& PD13;
		extern volatile StandAlone_Pin<14>& PD14;
		extern volatile StandAlone_Pin<15>& PD15;
		#endif
		#ifdef GPIOE_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PE0 ;
		extern volatile StandAlone_Pin< 1>& PE1 ;
		extern volatile StandAlone_Pin< 2>& PE2 ;
		extern volatile StandAlone_Pin< 3>& PE3 ;
		extern volatile StandAlone_Pin< 4>& PE4 ;
		extern volatile StandAlone_Pin< 5>& PE5 ;
		extern volatile StandAlone_Pin< 6>& PE6 ;
		extern volatile StandAlone_Pin< 7>& PE7 ;
		extern volatile StandAlone_Pin< 8>& PE8 ;
		extern volatile StandAlone_Pin< 9>& PE9 ;
		extern volatile StandAlone_Pin<10>& PE10;
		extern volatile StandAlone_Pin<11>& PE11;
		extern volatile StandAlone_Pin<12>& PE12;
		extern volatile StandAlone_Pin<13>& PE13;
		extern volatile StandAlone_Pin<14>& PE14;
		extern volatile StandAlone_Pin<15>& PE15;
		#endif
		#ifdef GPIOF_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PF0 ;
		extern volatile StandAlone_Pin< 1>& PF1 ;
		extern volatile StandAlone_Pin< 2>& PF2 ;
		extern volatile StandAlone_Pin< 3>& PF3 ;
		extern volatile StandAlone_Pin< 4>& PF4 ;
		extern volatile StandAlone_Pin< 5>& PF5 ;
		extern volatile StandAlone_Pin< 6>& PF6 ;
		extern volatile StandAlone_Pin< 7>& PF7 ;
		extern volatile StandAlone_Pin< 8>& PF8 ;
		extern volatile StandAlone_Pin< 9>& PF9 ;
		extern volatile StandAlone_Pin<10>& PF10;
		extern volatile StandAlone_Pin<11>& PF11;
		extern volatile StandAlone_Pin<12>& PF12;
		extern volatile StandAlone_Pin<13>& PF13;
		extern volatile StandAlone_Pin<14>& PF14;
		extern volatile StandAlone_Pin<15>& PF15;
		#endif
		#ifdef GPIOG_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PG0 ;
		extern volatile StandAlone_Pin< 1>& PG1 ;
		extern volatile StandAlone_Pin< 2>& PG2 ;
		extern volatile StandAlone_Pin< 3>& PG3 ;
		extern volatile StandAlone_Pin< 4>& PG4 ;
		extern volatile StandAlone_Pin< 5>& PG5 ;
		extern volatile StandAlone_Pin< 6>& PG6 ;
		extern volatile StandAlone_Pin< 7>& PG7 ;
		extern volatile StandAlone_Pin< 8>& PG8 ;
		extern volatile StandAlone_Pin< 9>& PG9 ;
		extern volatile StandAlone_Pin<10>& PG10;
		extern volatile StandAlone_Pin<11>& PG11;
		extern volatile StandAlone_Pin<12>& PG12;
		extern volatile StandAlone_Pin<13>& PG13;
		extern volatile StandAlone_Pin<14>& PG14;
		extern volatile StandAlone_Pin<15>& PG15;
		#endif
		#ifdef GPIOH_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PH0 ;
		extern volatile StandAlone_Pin< 1>& PH1 ;
		extern volatile StandAlone_Pin< 2>& PH2 ;
		extern volatile StandAlone_Pin< 3>& PH3 ;
		extern volatile StandAlone_Pin< 4>& PH4 ;
		extern volatile StandAlone_Pin< 5>& PH5 ;
		extern volatile StandAlone_Pin< 6>& PH6 ;
		extern volatile StandAlone_Pin< 7>& PH7 ;
		extern volatile StandAlone_Pin< 8>& PH8 ;
		extern volatile StandAlone_Pin< 9>& PH9 ;
		extern volatile StandAlone_Pin<10>& PH10;
		extern volatile StandAlone_Pin<11>& PH11;
		extern volatile StandAlone_Pin<12>& PH12;
		extern volatile StandAlone_Pin<13>& PH13;
		extern volatile StandAlone_Pin<14>& PH14;
		extern volatile StandAlone_Pin<15>& PH15;
		#endif
		#ifdef GPIOI_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PI0 ;
		extern volatile StandAlone_Pin< 1>& PI1 ;
		extern volatile StandAlone_Pin< 2>& PI2 ;
		extern volatile StandAlone_Pin< 3>& PI3 ;
		extern volatile StandAlone_Pin< 4>& PI4 ;
		extern volatile StandAlone_Pin< 5>& PI5 ;
		extern volatile StandAlone_Pin< 6>& PI6 ;
		extern volatile StandAlone_Pin< 7>& PI7 ;
		extern volatile StandAlone_Pin< 8>& PI8 ;
		extern volatile StandAlone_Pin< 9>& PI9 ;
		extern volatile StandAlone_Pin<10>& PI10;
		extern volatile StandAlone_Pin<11>& PI11;
		extern volatile StandAlone_Pin<12>& PI12;
		extern volatile StandAlone_Pin<13>& PI13;
		extern volatile StandAlone_Pin<14>& PI14;
		extern volatile StandAlone_Pin<15>& PI15;
		#endif
		#ifdef GPIOJ_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PJ0 ;
		extern volatile StandAlone_Pin< 1>& PJ1 ;
		extern volatile StandAlone_Pin< 2>& PJ2 ;
		extern volatile StandAlone_Pin< 3>& PJ3 ;
		extern volatile StandAlone_Pin< 4>& PJ4 ;
		extern volatile StandAlone_Pin< 5>& PJ5 ;
		extern volatile StandAlone_Pin< 6>& PJ6 ;
		extern volatile StandAlone_Pin< 7>& PJ7 ;
		extern volatile StandAlone_Pin< 8>& PJ8 ;
		extern volatile StandAlone_Pin< 9>& PJ9 ;
		extern volatile StandAlone_Pin<10>& PJ10;
		extern volatile StandAlone_Pin<11>& PJ11;
		extern volatile StandAlone_Pin<12>& PJ12;
		extern volatile StandAlone_Pin<13>& PJ13;
		extern volatile StandAlone_Pin<14>& PJ14;
		extern volatile StandAlone_Pin<15>& PJ15;
		#endif
		#ifdef GPIOK_BASE_ADDR
		extern volatile StandAlone_Pin< 0>& PK0 ;
		extern volatile StandAlone_Pin< 1>& PK1 ;
		extern volatile StandAlone_Pin< 2>& PK2 ;
		extern volatile StandAlone_Pin< 3>& PK3 ;
		extern volatile StandAlone_Pin< 4>& PK4 ;
		extern volatile StandAlone_Pin< 5>& PK5 ;
		extern volatile StandAlone_Pin< 6>& PK6 ;
		extern volatile StandAlone_Pin< 7>& PK7 ;
		extern volatile StandAlone_Pin< 8>& PK8 ;
		extern volatile StandAlone_Pin< 9>& PK9 ;
		extern volatile StandAlone_Pin<10>& PK10;
		extern volatile StandAlone_Pin<11>& PK11;
		extern volatile StandAlone_Pin<12>& PK12;
		extern volatile StandAlone_Pin<13>& PK13;
		extern volatile StandAlone_Pin<14>& PK14;
		extern volatile StandAlone_Pin<15>& PK15;
		#endif
		//endregion
		
	};
};
#undef GPIO_GPIOB
#undef GPIO_GPIOC
#undef GPIO_MAP1_BRR
#undef GPIOD_TMPL
#undef GPIO_GPIOI
#undef GPIOI_TMPL
#undef GPIOK_TMPL
#undef GPIO_OLD_GPIOC
#undef PERIPH_GPIO_DBG
#undef GPIO_GPIOK
#undef GPIOC_TMPL
#undef GPIO_OLD_GPIOB
#undef GPIO_MAP0_IPIDR
#undef PERIPH_GPIO
#undef GPIO_GPIOG
#undef GPIOA_TMPL
#undef GPIO_OLD_GPIOA
#undef GPIOF_TMPL
#undef GPIO_DBG_GPIO_DBG
#undef GPIO_MAP0_VERR
#undef GPIOZ_TMPL
#undef GPIOJ_TMPL
#undef GPIO_GPIOF
#undef GPIO_GPIOH
#undef GPIO_GPIOZ
#undef GPIO_GPIOA
#undef GPIOE_TMPL
#undef GPIO_GPIOD
#undef GPIO_MAP0_SIDR
#undef GPIO_DBG_TMPL
#undef GPIO_GPIOE
#undef GPIO_MAP1_ASCR
#undef PERIPH_GPIO_OLD
#undef GPIO_GPIOJ
#undef GPIOB_TMPL
#undef GPIOH_TMPL
#undef GPIOG_TMPL


#endif //__SOOL_CORE_GPIO_H