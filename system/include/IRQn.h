/**
 * Copyright (c) 2018-2019 FAUCHER Julien & FRANCE Loic
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
#ifndef __SOOL_IRQN_H
#define __SOOL_IRQN_H

#include "../../sool_chip_setup.h"
#include "system_stm32.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{

	NonMaskableInt_IRQn = -14,
	PendSV_IRQn = -2,
	SysTick_IRQn = -1,
	WWDG_IRQn = 0,
#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )

	HardFault_IRQn  = -13,
#endif
#if defined(STM32F0     ) || defined(STM32L0     ) || defined(STM32L1     )

	SVC_IRQn        = -5,
#endif
#if defined(STM32F0     ) || defined(STM32L0     )

	RTC_IRQn        = 2,
	FLASH_IRQn      = 3,
	EXTI0_1_IRQn    = 5,
	EXTI2_3_IRQn    = 6,
	EXTI4_15_IRQn   = 7,
	I2C1_IRQn       = 23,
	SPI1_IRQn       = 25,
#endif
#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) || \
    defined(STM32F038xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F070x6 ) || \
    defined(STM32F070xB ) || defined(STM32L011xx ) || defined(STM32L021xx ) || defined(STM32L031xx ) || \
    defined(STM32L041xx ) || defined(STM32L051xx ) || defined(STM32L061xx ) || defined(STM32L071xx ) || \
    defined(STM32L081xx )

	RCC_IRQn        = 4,
#endif
#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) || \
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || \
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) || \
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32L0     )

	DMA1_Channel1_IRQn = 9,
	DMA1_Channel2_3_IRQn = 10,
#endif
#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) || \
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || \
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB )

	DMA1_Channel4_5_IRQn = 11,
#endif
#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) || \
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || \
    defined(STM32F070xB )

	ADC1_IRQn       = 12,
#endif
#if defined(STM32F0     )

	TIM1_BRK_UP_TRG_COM_IRQn = 13,
	TIM1_CC_IRQn    = 14,
	TIM14_IRQn      = 19,
	TIM16_IRQn      = 21,
	TIM17_IRQn      = 22,
#endif
#if defined(STM32F0     ) || defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || \
    defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx )

	TIM3_IRQn       = 16,
#endif
#if defined(STM32F0     ) || defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || \
    defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx )

	USART1_IRQn     = 27,
#endif
#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F070xB ) || defined(STM32L051xx ) || \
    defined(STM32L061xx ) || defined(STM32L071xx ) || defined(STM32L081xx )

	TIM6_IRQn       = 17,
#endif
#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || \
    defined(STM32F091xC ) || defined(STM32F098xx )

	TIM15_IRQn      = 20,
#endif
#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || \
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L051xx ) || defined(STM32L052xx ) || \
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || \
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx )

	I2C2_IRQn       = 24,
#endif
#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || \
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F070xB ) || defined(STM32F071xB ) || \
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || \
    defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || \
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || \
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx )

	SPI2_IRQn       = 26,
#endif
#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || \
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32L0     )

	USART2_IRQn     = 28,
#endif
#if defined(STM32F030xC ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L071xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx )

	TIM7_IRQn       = 18,
#endif
#if defined(STM32F030xC )

	USART3_6_IRQn   = 29,
#endif
#if defined(STM32F031x6 ) || defined(STM32F051x8 ) || defined(STM32F1     ) || defined(STM32F2     ) || \
    defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F334x8 ) || \
    defined(STM32F373xC ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || \
    defined(STM32L1     )

	PVD_IRQn        = 1,
#endif
#if defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || \
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L0     )

	TIM2_IRQn       = 15,
#endif
#if defined(STM32F042x6 ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F091xC )

	PVD_VDDIO2_IRQn = 1,
#endif
#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L052xx ) || \
    defined(STM32L053xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L072xx ) || \
    defined(STM32L073xx ) || defined(STM32L082xx ) || defined(STM32L083xx )

	RCC_CRS_IRQn    = 4,
#endif
#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L062xx ) || \
    defined(STM32L063xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx )

	TSC_IRQn        = 8,
#endif
#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx )

	CEC_CAN_IRQn    = 30,
#endif
#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || \
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || \
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx )

	USB_IRQn        = 31,
#endif
#if defined(STM32F048xx ) || defined(STM32F078xx ) || defined(STM32F098xx )

	VDDIO2_IRQn     = 1,
#endif
#if defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L0     )

	ADC1_COMP_IRQn  = 12,
#endif
#if defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L052xx ) || \
    defined(STM32L053xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L072xx ) || \
    defined(STM32L073xx ) || defined(STM32L082xx ) || defined(STM32L083xx )

	TIM6_DAC_IRQn   = 17,
#endif
#if defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx )

	USART3_4_IRQn   = 29,
#endif
#if defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32L0     )

	DMA1_Channel4_5_6_7_IRQn = 11,
#endif
#if defined(STM32F091xC ) || defined(STM32F098xx )

	DMA1_Ch1_IRQn   = 9,
	DMA1_Ch2_3_DMA2_Ch1_2_IRQn = 10,
	DMA1_Ch4_7_DMA2_Ch3_5_IRQn = 11,
	USART3_8_IRQn   = 29,
#endif
#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) || \
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )

	MemoryManagement_IRQn = -12,
	BusFault_IRQn   = -11,
	UsageFault_IRQn = -10,
	DebugMonitor_IRQn = -4,
	FLASH_IRQn      = 4,
	RCC_IRQn        = 5,
	EXTI0_IRQn      = 6,
	EXTI1_IRQn      = 7,
	EXTI3_IRQn      = 9,
	EXTI4_IRQn      = 10,
	EXTI9_5_IRQn    = 23,
	I2C1_EV_IRQn    = 31,
	I2C1_ER_IRQn    = 32,
	USART1_IRQn     = 37,
	USART2_IRQn     = 38,
	EXTI15_10_IRQn  = 40,
	RTC_Alarm_IRQn  = 41,
#endif
#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) || \
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )

	SVCall_IRQn     = -5,
#endif
#if defined(STM32F1     )

	TAMPER_IRQn     = 2,
	RTC_IRQn        = 3,
#endif
#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )

	EXTI2_IRQn      = 8,
#endif
#if defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L1     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )

	DMA1_Channel1_IRQn = 11,
	DMA1_Channel2_IRQn = 12,
	DMA1_Channel3_IRQn = 13,
	DMA1_Channel4_IRQn = 14,
	DMA1_Channel5_IRQn = 15,
	DMA1_Channel6_IRQn = 16,
	DMA1_Channel7_IRQn = 17,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101x6 ) || defined(STM32F101xB ) || \
    defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F102x6 ) || defined(STM32F102xB ) || \
    defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F318xx ) || defined(STM32F373xC ) || \
    defined(STM32F378xx ) || defined(STM32L1     ) || defined(STM32L431xx ) || defined(STM32L432xx ) || \
    defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L4P    )

	ADC1_IRQn       = 18,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || \
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || \
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32L4     ) || defined(STM32L4P    )

	TIM1_BRK_TIM15_IRQn = 24,
	TIM1_UP_TIM16_IRQn = 25,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || \
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || \
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || \
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )

	TIM1_TRG_COM_TIM17_IRQn = 26,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F103x6 ) || defined(STM32F103xB ) || \
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || \
    defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || \
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || \
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )

	TIM1_CC_IRQn    = 27,
#endif
#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F401xC ) || \
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )

	TIM2_IRQn       = 28,
#endif
#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) || \
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || \
    defined(STM32F398xx ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || \
    defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || \
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )

	TIM3_IRQn       = 29,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) || \
    defined(STM32F101xG ) || defined(STM32F102xB ) || defined(STM32F103xB ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || \
    defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || \
    defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L471xx ) || \
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )

	TIM4_IRQn       = 30,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) || \
    defined(STM32F101xG ) || defined(STM32F102xB ) || defined(STM32F103xB ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F4     ) || \
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L431xx ) || \
    defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || \
    defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )

	I2C2_EV_IRQn    = 33,
	I2C2_ER_IRQn    = 34,
#endif
#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) || \
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || \
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || \
    defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )

	SPI1_IRQn       = 35,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) || \
    defined(STM32F101xG ) || defined(STM32F102xB ) || defined(STM32F103xB ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F401xC ) || \
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || \
    defined(STM32F410Rx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || \
    defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || \
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )

	SPI2_IRQn       = 36,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) || \
    defined(STM32F101xG ) || defined(STM32F102xB ) || defined(STM32F103xB ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F3     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || \
    defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || \
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )

	USART3_IRQn     = 39,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F373xC ) || defined(STM32F378xx )

	CEC_IRQn        = 42,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F2     ) || defined(STM32F301x8 ) || \
    defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) || defined(STM32F398xx ) || \
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || \
    defined(STM32F410Tx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )

	TIM6_DAC_IRQn   = 54,
#endif
#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || \
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || \
    defined(STM32F2     ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L431xx ) || defined(STM32L432xx ) || \
    defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) || defined(STM32L471xx ) || \
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )

	TIM7_IRQn       = 55,
#endif
#if defined(STM32F100xE ) || defined(STM32F101xG ) || defined(STM32F373xC ) || defined(STM32F378xx )

	TIM12_IRQn      = 43,
	TIM13_IRQn      = 44,
	TIM14_IRQn      = 45,
#endif
#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F4     ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )

	TIM5_IRQn       = 50,
#endif
#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F401xC ) || \
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )

	SPI3_IRQn       = 51,
#endif
#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || \
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || \
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )

	UART4_IRQn      = 52,
#endif
#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )

	UART5_IRQn      = 53,
#endif
#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F302xC ) || \
    defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32L4     ) || \
    defined(STM32L4P    )

	DMA2_Channel1_IRQn = 56,
	DMA2_Channel2_IRQn = 57,
	DMA2_Channel3_IRQn = 58,
#endif
#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG )

	DMA2_Channel4_5_IRQn = 59,
#endif
#if defined(STM32F100xE ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F302xC ) || \
    defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32L4     ) || \
    defined(STM32L4P    )

	DMA2_Channel4_IRQn = 59,
	DMA2_Channel5_IRQn = 60,
#endif
#if defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx )

	FSMC_IRQn       = 48,
#endif
#if defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx )

	TIM6_IRQn       = 54,
#endif
#if defined(STM32F101xG )

	TIM9_IRQn       = 24,
	TIM10_IRQn      = 25,
	TIM11_IRQn      = 26,
#endif
#if defined(STM32F102x6 ) || defined(STM32F102xB ) || defined(STM32L1     )

	USB_HP_IRQn     = 19,
	USB_LP_IRQn     = 20,
#endif
#if defined(STM32F102x6 ) || defined(STM32F102xB ) || defined(STM32F103x6 ) || defined(STM32F103xB ) || \
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || \
    defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE )

	USBWakeUp_IRQn  = 42,
#endif
#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) || \
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32L471xx ) || \
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx )

	ADC1_2_IRQn     = 18,
#endif
#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG )

	USB_HP_CAN1_TX_IRQn = 19,
	USB_LP_CAN1_RX0_IRQn = 20,
#endif
#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32L4     ) || defined(STM32L4P    )

	CAN1_RX1_IRQn   = 21,
	CAN1_SCE_IRQn   = 22,
#endif
#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F105xC ) || \
    defined(STM32F107xC ) || defined(STM32H7     )

	TIM1_BRK_IRQn   = 24,
#endif
#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F105xC ) || \
    defined(STM32F107xC ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || \
    defined(STM32H7     )

	TIM1_UP_IRQn    = 25,
#endif
#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F105xC ) || \
    defined(STM32F107xC ) || defined(STM32H7     ) || defined(STM32L431xx ) || defined(STM32L432xx ) || \
    defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx )

	TIM1_TRG_COM_IRQn = 26,
#endif
#if defined(STM32F103xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || \
    defined(STM32F398xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )

	TIM8_BRK_IRQn   = 43,
	TIM8_UP_IRQn    = 44,
	TIM8_TRG_COM_IRQn = 45,
#endif
#if defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F2     ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || \
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )

	TIM8_CC_IRQn    = 46,
#endif
#if defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || \
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx )

	ADC3_IRQn       = 47,
#endif
#if defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F2     ) || defined(STM32F401xC ) || \
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx )

	SDIO_IRQn       = 49,
#endif
#if defined(STM32F103xG ) || defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     )

	TIM1_BRK_TIM9_IRQn = 24,
	TIM1_TRG_COM_TIM11_IRQn = 26,
#endif
#if defined(STM32F103xG ) || defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || \
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )

	TIM1_UP_TIM10_IRQn = 25,
#endif
#if defined(STM32F103xG ) || defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     )

	TIM8_BRK_TIM12_IRQn = 43,
	TIM8_UP_TIM13_IRQn = 44,
	TIM8_TRG_COM_TIM14_IRQn = 45,
#endif
#if defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32L4     ) || defined(STM32L4P    )

	CAN1_TX_IRQn    = 19,
	CAN1_RX0_IRQn   = 20,
#endif
#if defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F401xC ) || \
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )

	OTG_FS_WKUP_IRQn = 42,
#endif
#if defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F765xx ) || \
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx )

	CAN2_TX_IRQn    = 63,
	CAN2_RX0_IRQn   = 64,
	CAN2_RX1_IRQn   = 65,
	CAN2_SCE_IRQn   = 66,
#endif
#if defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F401xC ) || \
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )

	OTG_FS_IRQn     = 67,
#endif
#if defined(STM32F107xC ) || defined(STM32F207xx ) || defined(STM32F217xx ) || defined(STM32F407xx ) || \
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     )

	ETH_IRQn        = 61,
	ETH_WKUP_IRQn   = 62,
#endif
#if defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )

	TAMP_STAMP_IRQn = 2,
#endif
#if defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )

	RTC_WKUP_IRQn   = 3,
#endif
#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     )

	DMA1_Stream0_IRQn = 11,
	DMA1_Stream1_IRQn = 12,
	DMA1_Stream2_IRQn = 13,
	DMA1_Stream3_IRQn = 14,
	DMA1_Stream4_IRQn = 15,
	DMA1_Stream5_IRQn = 16,
	DMA1_Stream6_IRQn = 17,
	ADC_IRQn        = 18,
	DMA1_Stream7_IRQn = 47,
	DMA2_Stream0_IRQn = 56,
	DMA2_Stream1_IRQn = 57,
	DMA2_Stream2_IRQn = 58,
	DMA2_Stream3_IRQn = 59,
	DMA2_Stream4_IRQn = 60,
	DMA2_Stream5_IRQn = 68,
	DMA2_Stream6_IRQn = 69,
	DMA2_Stream7_IRQn = 70,
#endif
#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     )

	USART6_IRQn     = 71,
#endif
#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || \
    defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F398xx ) || defined(STM32F401xC ) || \
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )

	I2C3_EV_IRQn    = 72,
	I2C3_ER_IRQn    = 73,
#endif
#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32H7     )

	OTG_HS_EP1_OUT_IRQn = 74,
	OTG_HS_EP1_IN_IRQn = 75,
	OTG_HS_WKUP_IRQn = 76,
	OTG_HS_IRQn     = 77,
#endif
#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F756xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32H750xx ) || defined(STM32H753xx ) || \
    defined(STM32L4A6xx )

	HASH_RNG_IRQn   = 80,
#endif
#if defined(STM32F207xx ) || defined(STM32F217xx ) || defined(STM32F407xx ) || defined(STM32F417xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || \
    defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || \
    defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32H7     )

	DCMI_IRQn       = 78,
#endif
#if defined(STM32F215xx ) || defined(STM32F217xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F479xx ) || defined(STM32F756xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32H750xx ) || defined(STM32H753xx )

	CRYP_IRQn       = 79,
#endif
#if defined(STM32F3     )

	EXTI2_TSC_IRQn  = 8,
#endif
#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F303x8 ) || defined(STM32F318xx ) || \
    defined(STM32F328xx ) || defined(STM32F334x8 )

	COMP2_IRQn      = 64,
#endif
#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303x8 ) || defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 )

	COMP4_6_IRQn    = 65,
#endif
#if defined(STM32F3     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )

	FPU_IRQn        = 81,
#endif
#if defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || \
    defined(STM32F303xE )

	USB_HP_CAN_TX_IRQn = 19,
	USB_LP_CAN_RX0_IRQn = 20,
	USBWakeUp_RMP_IRQn = 76,
#endif
#if defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || \
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || \
    defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx )

	CAN_RX1_IRQn    = 21,
	CAN_SCE_IRQn    = 22,
#endif
#if defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F373xC )

	USB_HP_IRQn     = 74,
	USB_LP_IRQn     = 75,
#endif
#if defined(STM32F302xC ) || defined(STM32F302xE )

	COMP1_2_IRQn    = 64,
#endif
#if defined(STM32F302xE ) || defined(STM32F303xE ) || defined(STM32F398xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) || \
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || \
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )

	FMC_IRQn        = 48,
#endif
#if defined(STM32F302xE ) || defined(STM32F303xE ) || defined(STM32F398xx ) || defined(STM32F401xC ) || \
    defined(STM32F401xE ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     )

	SPI4_IRQn       = 84,
#endif
#if defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx )

	CAN_TX_IRQn     = 19,
	CAN_RX0_IRQn    = 20,
#endif
#if defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F373xC ) || \
    defined(STM32F378xx )

	TIM6_DAC1_IRQn  = 54,
#endif
#if defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 )

	TIM7_DAC2_IRQn  = 55,
#endif
#if defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F398xx )

	ADC4_IRQn       = 61,
	COMP1_2_3_IRQn  = 64,
	COMP4_5_6_IRQn  = 65,
	COMP7_IRQn      = 66,
#endif
#if defined(STM32F303xE ) || defined(STM32F398xx )

	TIM20_BRK_IRQn  = 77,
	TIM20_UP_IRQn   = 78,
	TIM20_TRG_COM_IRQn = 79,
	TIM20_CC_IRQn   = 80,
#endif
#if defined(STM32F334x8 )

	HRTIM1_Master_IRQn = 67,
	HRTIM1_TIMA_IRQn = 68,
	HRTIM1_TIMB_IRQn = 69,
	HRTIM1_TIMC_IRQn = 70,
	HRTIM1_TIMD_IRQn = 71,
	HRTIM1_TIME_IRQn = 72,
	HRTIM1_FLT_IRQn = 73,
#endif
#if defined(STM32F373xC ) || defined(STM32F378xx )

	TIM15_IRQn      = 24,
	TIM16_IRQn      = 25,
	TIM17_IRQn      = 26,
	TIM18_DAC2_IRQn = 27,
	SDADC1_IRQn     = 61,
	SDADC2_IRQn     = 62,
	SDADC3_IRQn     = 63,
	TIM19_IRQn      = 78,
#endif
#if defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32L4     ) || defined(STM32L4P    )

	COMP_IRQn       = 64,
#endif
#if defined(STM32F373xC )

	USBWakeUp_IRQn  = 76,
#endif
#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || \
    defined(STM32F733xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F765xx ) || \
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32H743xx ) || defined(STM32L431xx ) || \
    defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) || \
    defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || \
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4P    )

	RNG_IRQn        = 80,
#endif
#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     )

	SPI5_IRQn       = 85,
#endif
#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F446xx )

	FMPI2C1_EV_IRQn = 95,
	FMPI2C1_ER_IRQn = 96,
#endif
#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx )

	LPTIM1_IRQn     = 97,
#endif
#if defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || \
    defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )

	DFSDM1_FLT0_IRQn = 61,
	DFSDM1_FLT1_IRQn = 62,
#endif
#if defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F446xx ) || defined(STM32F7     ) || defined(STM32H7     )

	QUADSPI_IRQn    = 92,
#endif
#if defined(STM32F413xx ) || defined(STM32F423xx )

	CAN3_TX_IRQn    = 74,
	CAN3_RX0_IRQn   = 75,
	CAN3_RX1_IRQn   = 76,
	CAN3_SCE_IRQn   = 77,
	UART9_IRQn      = 88,
	UART10_IRQn     = 89,
	DFSDM2_FLT0_IRQn = 98,
	DFSDM2_FLT1_IRQn = 99,
	DFSDM2_FLT2_IRQn = 100,
	DFSDM2_FLT3_IRQn = 101,
#endif
#if defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32H7     )

	UART7_IRQn      = 82,
	UART8_IRQn      = 83,
#endif
#if defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     )

	SAI1_IRQn       = 87,
#endif
#if defined(STM32F423xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) || defined(STM32L442xx ) || \
    defined(STM32L443xx ) || defined(STM32L462xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4S5xx ) || defined(STM32L4S7xx ) || defined(STM32L4S9xx )

	AES_IRQn        = 79,
#endif
#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) || \
    defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32H7     )

	SPI6_IRQn       = 86,
#endif
#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) || \
    defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32H7     ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )

	DMA2D_IRQn      = 90,
#endif
#if defined(STM32F429xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32H7     )

	LTDC_IRQn       = 88,
	LTDC_ER_IRQn    = 89,
#endif
#if defined(STM32F446xx ) || defined(STM32F7     ) || defined(STM32H7     )

	SAI2_IRQn       = 91,
#endif
#if defined(STM32F446xx )

	CEC_IRQn        = 93,
	SPDIF_RX_IRQn   = 94,
#endif
#if defined(STM32F469xx ) || defined(STM32F479xx )

	QUADSPI_IRQn    = 91,
	DSI_IRQn        = 92,
#endif
#if defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L431xx ) || defined(STM32L433xx ) || \
    defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || \
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || \
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )

	SDMMC1_IRQn     = 49,
#endif
#if defined(STM32F7     ) || defined(STM32H7     )

	LPTIM1_IRQn     = 93,
#endif
#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) || \
    defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || \
    defined(STM32F779xx )

	SDMMC2_IRQn     = 103,
#endif
#if defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F765xx ) || \
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) || \
    defined(STM32H7     )

	CEC_IRQn        = 94,
	I2C4_EV_IRQn    = 95,
	I2C4_ER_IRQn    = 96,
	SPDIF_RX_IRQn   = 97,
#endif
#if defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || \
    defined(STM32F779xx )

	DFSDM1_FLT0_IRQn = 99,
	DFSDM1_FLT1_IRQn = 100,
	DFSDM1_FLT2_IRQn = 101,
	DFSDM1_FLT3_IRQn = 102,
	CAN3_TX_IRQn    = 104,
	CAN3_RX0_IRQn   = 105,
	CAN3_RX1_IRQn   = 106,
	CAN3_SCE_IRQn   = 107,
	MDIOS_IRQn      = 109,
#endif
#if defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx )

	JPEG_IRQn       = 108,
#endif
#if defined(STM32F769xx ) || defined(STM32F779xx )

	DSI_IRQn        = 98,
#endif
#if defined(STM32H7     )

	PVD_AVD_IRQn    = 1,
	FDCAN1_IT0_IRQn = 19,
	FDCAN2_IT0_IRQn = 20,
	FDCAN1_IT1_IRQn = 21,
	FDCAN2_IT1_IRQn = 22,
	FDCAN_CAL_IRQn  = 63,
	OTG_FS_EP1_OUT_IRQn = 98,
	OTG_FS_EP1_IN_IRQn = 99,
	OTG_FS_WKUP_IRQn = 100,
	OTG_FS_IRQn     = 101,
	DMAMUX1_OVR_IRQn = 102,
	HRTIM1_Master_IRQn = 103,
	HRTIM1_TIMA_IRQn = 104,
	HRTIM1_TIMB_IRQn = 105,
	HRTIM1_TIMC_IRQn = 106,
	HRTIM1_TIMD_IRQn = 107,
	HRTIM1_TIME_IRQn = 108,
	HRTIM1_FLT_IRQn = 109,
	DFSDM1_FLT0_IRQn = 110,
	DFSDM1_FLT1_IRQn = 111,
	DFSDM1_FLT2_IRQn = 112,
	DFSDM1_FLT3_IRQn = 113,
	SAI3_IRQn       = 114,
	SWPMI1_IRQn     = 115,
	TIM15_IRQn      = 116,
	TIM16_IRQn      = 117,
	TIM17_IRQn      = 118,
	MDIOS_WKUP_IRQn = 119,
	MDIOS_IRQn      = 120,
	JPEG_IRQn       = 121,
	MDMA_IRQn       = 122,
	SDMMC2_IRQn     = 124,
	HSEM1_IRQn      = 125,
	ADC3_IRQn       = 127,
	DMAMUX2_OVR_IRQn = 128,
	BDMA_Channel0_IRQn = 129,
	BDMA_Channel1_IRQn = 130,
	BDMA_Channel2_IRQn = 131,
	BDMA_Channel3_IRQn = 132,
	BDMA_Channel4_IRQn = 133,
	BDMA_Channel5_IRQn = 134,
	BDMA_Channel6_IRQn = 135,
	BDMA_Channel7_IRQn = 136,
	COMP_IRQn       = 137,
	LPTIM2_IRQn     = 138,
	LPTIM3_IRQn     = 139,
	LPTIM4_IRQn     = 140,
	LPTIM5_IRQn     = 141,
	LPUART1_IRQn    = 142,
	CRS_IRQn        = 144,
	SAI4_IRQn       = 146,
	WAKEUP_PIN_IRQn = 149,
#endif
#if defined(STM32L0     )

	LPTIM1_IRQn     = 13,
	TIM21_IRQn      = 20,
#endif
#if defined(STM32L011xx ) || defined(STM32L031xx ) || defined(STM32L051xx ) || defined(STM32L071xx )

	LPUART1_IRQn    = 29,
#endif
#if defined(STM32L021xx ) || defined(STM32L041xx ) || defined(STM32L061xx ) || defined(STM32L081xx )

	AES_LPUART1_IRQn = 29,
#endif
#if defined(STM32L031xx ) || defined(STM32L041xx ) || defined(STM32L051xx ) || defined(STM32L052xx ) || \
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || \
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx )

	TIM22_IRQn      = 22,
#endif
#if defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L072xx ) || defined(STM32L073xx )

	RNG_LPUART1_IRQn = 29,
#endif
#if defined(STM32L053xx ) || defined(STM32L063xx ) || defined(STM32L073xx ) || defined(STM32L083xx )

	LCD_IRQn        = 30,
#endif
#if defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L082xx ) || defined(STM32L083xx )

	AES_RNG_LPUART1_IRQn = 29,
#endif
#if defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx )

	USART4_5_IRQn   = 14,
	I2C3_IRQn       = 21,
#endif
#if defined(STM32L1     )

	TAMPER_STAMP_IRQn = 2,
	DAC_IRQn        = 21,
	COMP_IRQn       = 22,
	TIM9_IRQn       = 25,
	TIM10_IRQn      = 26,
	TIM11_IRQn      = 27,
	USB_FS_WKUP_IRQn = 42,
	TIM6_IRQn       = 43,
	TIM7_IRQn       = 44,
#endif
#if defined(STM32L100xB ) || defined(STM32L100xBA) || defined(STM32L100xC ) || defined(STM32L152xB ) || \
    defined(STM32L152xBA) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || \
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || \
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )

	LCD_IRQn        = 24,
#endif
#if defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || \
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || \
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || \
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )

	SPI3_IRQn       = 47,
	DMA2_Channel1_IRQn = 50,
	DMA2_Channel2_IRQn = 51,
	DMA2_Channel3_IRQn = 52,
	DMA2_Channel4_IRQn = 53,
	DMA2_Channel5_IRQn = 54,
	COMP_ACQ_IRQn   = 56,
#endif
#if defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || \
    defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || \
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || \
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )

	TIM5_IRQn       = 46,
#endif
#if defined(STM32L151xD ) || defined(STM32L152xD ) || defined(STM32L162xD )

	SDIO_IRQn       = 45,
#endif
#if defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xD ) || \
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xD ) || defined(STM32L162xDx) || \
    defined(STM32L162xE )

	UART4_IRQn      = 48,
	UART5_IRQn      = 49,
#endif
#if defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || \
    defined(STM32L162xE )

	AES_IRQn        = 55,
#endif
#if defined(STM32L4     ) || defined(STM32L4P    )

	PVD_PVM_IRQn    = 1,
	LPTIM1_IRQn     = 65,
	LPTIM2_IRQn     = 66,
	DMA2_Channel6_IRQn = 68,
	DMA2_Channel7_IRQn = 69,
	LPUART1_IRQn    = 70,
	SAI1_IRQn       = 74,
	TSC_IRQn        = 77,
#endif
#if defined(STM32L4     )

	QUADSPI_IRQn    = 71,
#endif
#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || \
    defined(STM32L443xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx )

	SWPMI1_IRQn     = 76,
#endif
#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || \
    defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4R5xx ) || defined(STM32L4R7xx ) || \
    defined(STM32L4R9xx )

	CRS_IRQn        = 82,
#endif
#if defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx )

	USB_IRQn        = 67,
#endif
#if defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L476xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx )

	LCD_IRQn        = 78,
#endif
#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )

	I2C4_EV_IRQn    = 83,
	I2C4_ER_IRQn    = 84,
#endif
#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || \
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )

	DFSDM1_FLT3_IRQn = 42,
	DFSDM1_FLT2_IRQn = 63,
	SAI2_IRQn       = 75,
#endif
#if defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )

	DCMI_IRQn       = 85,
#endif
#if defined(STM32L496xx ) || defined(STM32L4A6xx )

	CAN2_TX_IRQn    = 86,
	CAN2_RX0_IRQn   = 87,
	CAN2_RX1_IRQn   = 88,
	CAN2_SCE_IRQn   = 89,
#endif
#if defined(STM32L4P    )

	OCTOSPI1_IRQn   = 71,
	OCTOSPI2_IRQn   = 76,
	DMAMUX1_OVR_IRQn = 94,
#endif
#if defined(STM32L4R7xx ) || defined(STM32L4R9xx ) || defined(STM32L4S7xx ) || defined(STM32L4S9xx )

	LTDC_IRQn       = 91,
	LTDC_ER_IRQn    = 92,
	GFXMMU_IRQn     = 93,
#endif
#if defined(STM32L4R9xx ) || defined(STM32L4S9xx )

	DSI_IRQn        = 78,
#endif
#if defined(STM32L4S5xx ) || defined(STM32L4S7xx ) || defined(STM32L4S9xx )

	HASH_CRS_IRQn   = 82
#endif

} IRQn_Type;

#ifdef __cplusplus
}
#endif

#endif //__SOOL_IRQN_H
