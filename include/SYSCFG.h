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
#ifndef __SOOL_SYSCFG_H
#define __SOOL_SYSCFG_H

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 


#include "lib_utils/peripheral_include.h"
#include "RCC.h"

//region defines

#if defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) ||\
    defined(STM32F779xx ) 
#define SYSCFG_CBR
#define SYSCFG_MEMRMP_1_SWP_FB SWP_FB               // 1 bits @ 8
#define SYSCFG_PMC_0_I2C4_FMP I2C4_FMP             // 1 bits @ 3
#define SYSCFG_MAP0_CBR      CBR_TypeDef CBR
#else
#define SYSCFG_MEMRMP_1_SWP_FB
#define SYSCFG_PMC_0_I2C4_FMP
#define SYSCFG_MAP0_CBR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32H7     ) 
#define SYSCFG_CCCR
#define SYSCFG_CCCSR
#define SYSCFG_CCVR
#define SYSCFG_PKGR
#define SYSCFG_PMCR
#define SYSCFG_UR0
#define SYSCFG_UR1
#define SYSCFG_UR10
#define SYSCFG_UR11
#define SYSCFG_UR12
#define SYSCFG_UR13
#define SYSCFG_UR14
#define SYSCFG_UR15
#define SYSCFG_UR16
#define SYSCFG_UR17
#define SYSCFG_UR2
#define SYSCFG_UR3
#define SYSCFG_UR4
#define SYSCFG_UR5
#define SYSCFG_UR6
#define SYSCFG_UR7
#define SYSCFG_UR8
#define SYSCFG_UR9
#define SYSCFG_MAP2_PMCR     PMCR_TypeDef PMCR
#define SYSCFG_MAP1_CCCSR    CCCSR_TypeDef CCCSR
#define SYSCFG_MAP1_CCVR     CCVR_TypeDef CCVR
#define SYSCFG_MAP0_CCCR     CCCR_TypeDef CCCR
#define SYSCFG_MAP0_PKGR     PKGR_TypeDef PKGR
#define SYSCFG_MAP0_UR0      UR0_TypeDef UR0
#define SYSCFG_MAP0_UR1      uint32_t UR1
#define SYSCFG_MAP0_UR2      UR2_TypeDef UR2
#define SYSCFG_MAP0_UR3      UR3_TypeDef UR3
#define SYSCFG_MAP0_UR4      UR4_TypeDef UR4
#define SYSCFG_MAP0_UR5      UR5_TypeDef UR5
#define SYSCFG_MAP0_UR6      UR6_TypeDef UR6
#define SYSCFG_MAP0_UR7      UR7_TypeDef UR7
#define SYSCFG_MAP0_UR8      UR8_TypeDef UR8
#define SYSCFG_MAP0_UR9      UR9_TypeDef UR9
#define SYSCFG_MAP0_UR10     UR10_TypeDef UR10
#define SYSCFG_MAP0_UR11     UR11_TypeDef UR11
#define SYSCFG_MAP0_UR12     UR12_TypeDef UR12
#define SYSCFG_MAP0_UR13     UR13_TypeDef UR13
#define SYSCFG_MAP0_UR14     UR14_TypeDef UR14
#define SYSCFG_MAP0_UR15     UR15_TypeDef UR15
#define SYSCFG_MAP0_UR16     UR16_TypeDef UR16
#define SYSCFG_MAP0_UR17     UR17_TypeDef UR17
#else
#define SYSCFG_MAP2_PMCR __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP1_CCCSR __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP1_CCVR __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_CCCR __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_PKGR __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR0 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR1 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR2 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR3 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR4 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR5 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR6 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR7 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR8 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR9 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR10 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR11 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR12 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR13 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR14 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR15 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR16 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP0_UR17 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F423xx ) || defined(STM32F446xx ) 
#define SYSCFG_CFGR
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L0     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define SYSCFG_CFGR1
#endif

#if defined(STM32F0     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32L0     ) 
#define SYSCFG_CFGR1_0
#endif

#if defined(STM32F0     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F318xx ) || defined(STM32F328xx ) ||\
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32L0     ) 
#define SYSCFG_CFGR1_0_MEM_MODE MEM_MODE             // 2 bits @ 0
#else
#define SYSCFG_CFGR1_0_MEM_MODE
#endif

#if defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) 
#define SYSCFG_CFGR1_0_UFB   UFB                  // 1 bits @ 3
#define SYSCFG_CFGR2_0_I2C3_FMP I2C3_FMP             // 1 bits @ 14
#else
#define SYSCFG_CFGR1_0_UFB
#define SYSCFG_CFGR2_0_I2C3_FMP
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) 
#define SYSCFG_CFGR1_0_PA11_PA12_RMP PA11_PA12_RMP        // 1 bits @ 4
#else
#define SYSCFG_CFGR1_0_PA11_PA12_RMP
#endif

#if defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) 
#define SYSCFG_CFGR1_0_USB_IT_RMP USB_IT_RMP           // 1 bits @ 5
#else
#define SYSCFG_CFGR1_0_USB_IT_RMP
#endif

#if defined(STM32F091xC ) || defined(STM32F098xx ) 
#define SYSCFG_CFGR1_0_IR_MOD IR_MOD               // 2 bits @ 6
#define SYSCFG_IT_LINE_SR
#define SYSCFG_MAP0_IT_LINE_SR IT_LINE_SR_TypeDef IT_LINE_SR
#else
#define SYSCFG_CFGR1_0_IR_MOD
#define SYSCFG_MAP0_IT_LINE_SR __SOOL_PERIPH_PADDING_128
#endif

#if defined(STM32F030x4 ) || defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F031x6 ) ||\
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070x6 ) 
#define SYSCFG_CFGR1_0_DMA_RMP DMA_RMP              // 5 bits @ 8
#else
#define SYSCFG_CFGR1_0_DMA_RMP
#endif

#if defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) 
#define SYSCFG_CFGR1_0_TIM16_DMA_RMP2 TIM16_DMA_RMP2       // 1 bits @ 13
#define SYSCFG_CFGR1_0_TIM17_DMA_RMP2 TIM17_DMA_RMP2       // 1 bits @ 14
#define SYSCFG_CFGR1_0_SPI2_DMA_RMP SPI2_DMA_RMP         // 1 bits @ 24
#define SYSCFG_CFGR1_0_USART2_DMA_RMP USART2_DMA_RMP       // 1 bits @ 25
#define SYSCFG_CFGR1_0_I2C1_DMA_RMP I2C1_DMA_RMP         // 1 bits @ 27
#define SYSCFG_CFGR1_0_TIM1_DMA_RMP TIM1_DMA_RMP         // 1 bits @ 28
#define SYSCFG_CFGR1_0_TIM2_DMA_RMP TIM2_DMA_RMP         // 1 bits @ 29
#define SYSCFG_CFGR1_0_TIM3_DMA_RMP TIM3_DMA_RMP         // 1 bits @ 30
#else
#define SYSCFG_CFGR1_0_TIM16_DMA_RMP2
#define SYSCFG_CFGR1_0_TIM17_DMA_RMP2
#define SYSCFG_CFGR1_0_SPI2_DMA_RMP
#define SYSCFG_CFGR1_0_USART2_DMA_RMP
#define SYSCFG_CFGR1_0_I2C1_DMA_RMP
#define SYSCFG_CFGR1_0_TIM1_DMA_RMP
#define SYSCFG_CFGR1_0_TIM2_DMA_RMP
#define SYSCFG_CFGR1_0_TIM3_DMA_RMP
#endif

#if defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 ) 
#define SYSCFG_CFGR1_0_DAC2Ch1_DMA_RMP DAC2Ch1_DMA_RMP      // 1 bits @ 15
#define SYSCFG_CFGR3_0_DMA_RMP DMA_RMP              // 10 bits @ 0
#define SYSCFG_CFGR3_1
#define SYSCFG_MAP0_CFGR3    CFGR3_TypeDef CFGR3
#else
#define SYSCFG_CFGR1_0_DAC2Ch1_DMA_RMP
#define SYSCFG_CFGR3_0_DMA_RMP
#define SYSCFG_MAP0_CFGR3 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) 
#define SYSCFG_CFGR1_0_I2C_FMP_PB6 I2C_FMP_PB6          // 1 bits @ 16
#define SYSCFG_CFGR1_0_I2C_FMP_PB7 I2C_FMP_PB7          // 1 bits @ 17
#define SYSCFG_CFGR1_0_I2C_FMP_PB8 I2C_FMP_PB8          // 1 bits @ 18
#define SYSCFG_CFGR1_0_I2C_FMP_PB9 I2C_FMP_PB9          // 1 bits @ 19
#define SYSCFG_CFGR2_0_SRAM_PEF SRAM_PEF             // 1 bits @ 8
#else
#define SYSCFG_CFGR1_0_I2C_FMP_PB6
#define SYSCFG_CFGR1_0_I2C_FMP_PB7
#define SYSCFG_CFGR1_0_I2C_FMP_PB8
#define SYSCFG_CFGR1_0_I2C_FMP_PB9
#define SYSCFG_CFGR2_0_SRAM_PEF
#endif

#if defined(STM32F030x6 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) || defined(STM32F038xx ) ||\
    defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) ||\
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) ||\
    defined(STM32F098xx ) 
#define SYSCFG_CFGR1_0_I2C_FMP_I2C1 I2C_FMP_I2C1         // 1 bits @ 20
#else
#define SYSCFG_CFGR1_0_I2C_FMP_I2C1
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) 
#define SYSCFG_CFGR1_0_I2C_FMP_I2C2 I2C_FMP_I2C2         // 1 bits @ 21
#else
#define SYSCFG_CFGR1_0_I2C_FMP_I2C2
#endif

#if defined(STM32F030x6 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) || defined(STM32F038xx ) ||\
    defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || defined(STM32F091xC ) ||\
    defined(STM32F098xx ) 
#define SYSCFG_CFGR1_0_I2C_FMP_PA9 I2C_FMP_PA9          // 1 bits @ 22
#define SYSCFG_CFGR1_0_I2C_FMP_PA10 I2C_FMP_PA10         // 1 bits @ 23
#else
#define SYSCFG_CFGR1_0_I2C_FMP_PA9
#define SYSCFG_CFGR1_0_I2C_FMP_PA10
#endif

#if defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) 
#define SYSCFG_CFGR1_0_USART3_DMA_RMP USART3_DMA_RMP       // 1 bits @ 26
#else
#define SYSCFG_CFGR1_0_USART3_DMA_RMP
#endif

#if defined(STM32F030x4 ) || defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F031x6 ) ||\
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F3     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define SYSCFG_CFGR1_1
#endif

#if defined(STM32F302xE ) || defined(STM32F303xE ) || defined(STM32F398xx ) 
#define SYSCFG_CFGR1_1_MEM_MODE MEM_MODE             // 3 bits @ 0
#else
#define SYSCFG_CFGR1_1_MEM_MODE
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) 
#define SYSCFG_CFGR1_1_TIM1_ITR3_RMP TIM1_ITR3_RMP        // 1 bits @ 6
#define SYSCFG_CFGR1_1_DAC1_TRIG1_RMP DAC1_TRIG1_RMP       // 1 bits @ 7
#define SYSCFG_CFGR1_1_ENCODER_MODE ENCODER_MODE         // 2 bits @ 22
#else
#define SYSCFG_CFGR1_1_TIM1_ITR3_RMP
#define SYSCFG_CFGR1_1_DAC1_TRIG1_RMP
#define SYSCFG_CFGR1_1_ENCODER_MODE
#endif

#if defined(STM32F030x4 ) || defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F031x6 ) ||\
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) 
#define SYSCFG_CFGR1_1_ADC_DMA_RMP ADC_DMA_RMP          // 1 bits @ 8
#define SYSCFG_CFGR1_1_USART1TX_DMA_RMP USART1TX_DMA_RMP     // 1 bits @ 9
#define SYSCFG_CFGR1_1_USART1RX_DMA_RMP USART1RX_DMA_RMP     // 1 bits @ 10
#else
#define SYSCFG_CFGR1_1_ADC_DMA_RMP
#define SYSCFG_CFGR1_1_USART1TX_DMA_RMP
#define SYSCFG_CFGR1_1_USART1RX_DMA_RMP
#endif

#if defined(STM32F030x4 ) || defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F031x6 ) ||\
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F3     ) 
#define SYSCFG_CFGR1_1_TIM16_DMA_RMP TIM16_DMA_RMP        // 1 bits @ 11
#define SYSCFG_CFGR1_1_TIM17_DMA_RMP TIM17_DMA_RMP        // 1 bits @ 12
#else
#define SYSCFG_CFGR1_1_TIM16_DMA_RMP
#define SYSCFG_CFGR1_1_TIM17_DMA_RMP
#endif

#if defined(STM32F3     ) 
#define SYSCFG_CFGR1_1_TIM6DAC1Ch1_DMA_RMP TIM6DAC1Ch1_DMA_RMP  // 1 bits @ 13
#define SYSCFG_CFGR1_1_FPU_IE FPU_IE               // 6 bits @ 26
#else
#define SYSCFG_CFGR1_1_TIM6DAC1Ch1_DMA_RMP
#define SYSCFG_CFGR1_1_FPU_IE
#endif

#if defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) ||\
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F398xx ) 
#define SYSCFG_CFGR1_1_TIM7DAC1Ch2_DMA_RMP TIM7DAC1Ch2_DMA_RMP  // 1 bits @ 14
#else
#define SYSCFG_CFGR1_1_TIM7DAC1Ch2_DMA_RMP
#endif

#if defined(STM32F373xC ) || defined(STM32F378xx ) 
#define SYSCFG_CFGR1_1_TIM18DAC2Ch1_DMA_RMP TIM18DAC2Ch1_DMA_RMP // 1 bits @ 15
#define SYSCFG_CFGR1_2_VBAT  VBAT                 // 1 bits @ 24
#else
#define SYSCFG_CFGR1_1_TIM18DAC2Ch1_DMA_RMP
#define SYSCFG_CFGR1_2_VBAT
#endif

#if defined(STM32F3     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define SYSCFG_CFGR1_1_I2C_PB6_FMP I2C_PB6_FMP          // 1 bits @ 16
#define SYSCFG_CFGR1_1_I2C_PB7_FMP I2C_PB7_FMP          // 1 bits @ 17
#define SYSCFG_CFGR1_1_I2C1_FMP I2C1_FMP             // 1 bits @ 20
#else
#define SYSCFG_CFGR1_1_I2C_PB6_FMP
#define SYSCFG_CFGR1_1_I2C_PB7_FMP
#define SYSCFG_CFGR1_1_I2C1_FMP
#endif

#if defined(STM32F3     ) || defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) ||\
    defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define SYSCFG_CFGR1_1_I2C_PB8_FMP I2C_PB8_FMP          // 1 bits @ 18
#define SYSCFG_CFGR1_1_I2C_PB9_FMP I2C_PB9_FMP          // 1 bits @ 19
#else
#define SYSCFG_CFGR1_1_I2C_PB8_FMP
#define SYSCFG_CFGR1_1_I2C_PB9_FMP
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) ||\
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32L431xx ) ||\
    defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) ||\
    defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) ||\
    defined(STM32L4P    ) 
#define SYSCFG_CFGR1_1_I2C2_FMP I2C2_FMP             // 1 bits @ 21
#else
#define SYSCFG_CFGR1_1_I2C2_FMP
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F398xx ) 
#define SYSCFG_CFGR1_1_I2C3_FMP I2C3_FMP             // 1 bits @ 24
#else
#define SYSCFG_CFGR1_1_I2C3_FMP
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) ||\
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define SYSCFG_CFGR1_2
#endif

#if defined(STM32L4     ) || defined(STM32L4P    ) 
#define SYSCFG_CFGR1_2_FWDIS FWDIS                // 1 bits @ 0
#define SYSCFG_CFGR1_2_I2C3_FMP I2C3_FMP             // 1 bits @ 22
#define SYSCFG_CFGR1_4
#define SYSCFG_CFGR2_0_ECCL  ECCL                 // 1 bits @ 3
#define SYSCFG_CFGR2_2_CLL   CLL                  // 1 bits @ 0
#define SYSCFG_CFGR2_3
#define SYSCFG_SCSR
#define SYSCFG_SKR
#define SYSCFG_SWPR
#define SYSCFG_MAP4_CFGR1    CFGR1_TypeDef CFGR1
#define SYSCFG_MAP1_SCSR     SCSR_TypeDef SCSR
#define SYSCFG_MAP3_SWPR     SWPR_TypeDef SWPR
#define SYSCFG_MAP2_SKR      SKR_TypeDef SKR
#else
#define SYSCFG_CFGR1_2_FWDIS
#define SYSCFG_CFGR1_2_I2C3_FMP
#define SYSCFG_CFGR2_0_ECCL
#define SYSCFG_CFGR2_2_CLL
#define SYSCFG_MAP4_CFGR1 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP1_SCSR __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP3_SWPR __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP2_SKR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F358xx ) || defined(STM32F398xx ) 
#define SYSCFG_CFGR1_2_ADC24_DMA_RMP ADC24_DMA_RMP        // 1 bits @ 8
#else
#define SYSCFG_CFGR1_2_ADC24_DMA_RMP
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F318xx ) 
#define SYSCFG_CFGR1_2_DMA_RMP DMA_RMP              // 3 bits @ 11
#else
#define SYSCFG_CFGR1_2_DMA_RMP
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define SYSCFG_CFGR1_2_I2C4_FMP I2C4_FMP             // 1 bits @ 23
#else
#define SYSCFG_CFGR1_2_I2C4_FMP
#endif

#if defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32L0     ) 
#define SYSCFG_CFGR1_3
#endif

#if defined(STM32L0     ) 
#define SYSCFG_CFGR1_3_BOOT_MODE BOOT_MODE            // 2 bits @ 8
#define SYSCFG_CFGR2_0_I2C_PB7_FMP I2C_PB7_FMP          // 1 bits @ 9
#define SYSCFG_CFGR2_0_I2C_PB8_FMP I2C_PB8_FMP          // 1 bits @ 10
#define SYSCFG_CFGR2_0_I2C_PB9_FMP I2C_PB9_FMP          // 1 bits @ 11
#define SYSCFG_CFGR2_0_I2C1_FMP I2C1_FMP             // 1 bits @ 12
#define SYSCFG_CFGR2_1_FWDISEN FWDISEN              // 1 bits @ 0
#define SYSCFG_CFGR2_2_I2C_PB6_FMP I2C_PB6_FMP          // 1 bits @ 8
#define SYSCFG_CFGR3_0_ENBUFLP_VREFINT_COMP ENBUFLP_VREFINT_COMP // 1 bits @ 12
#define SYSCFG_CFGR3_0_VREFINT_RDYF VREFINT_RDYF         // 1 bits @ 30
#define SYSCFG_CFGR3_0_REF_LOCK REF_LOCK             // 1 bits @ 31
#define SYSCFG_CFGR3_2
#define SYSCFG_MAP3_CFGR2    CFGR2_TypeDef CFGR2
#define SYSCFG_MAP2_CFGR3    CFGR3_TypeDef CFGR3
#else
#define SYSCFG_CFGR1_3_BOOT_MODE
#define SYSCFG_CFGR2_0_I2C_PB7_FMP
#define SYSCFG_CFGR2_0_I2C_PB8_FMP
#define SYSCFG_CFGR2_0_I2C_PB9_FMP
#define SYSCFG_CFGR2_0_I2C1_FMP
#define SYSCFG_CFGR2_1_FWDISEN
#define SYSCFG_CFGR2_2_I2C_PB6_FMP
#define SYSCFG_CFGR3_0_ENBUFLP_VREFINT_COMP
#define SYSCFG_CFGR3_0_VREFINT_RDYF
#define SYSCFG_CFGR3_0_REF_LOCK
#define SYSCFG_MAP3_CFGR2 __SOOL_PERIPH_PADDING_4
#define SYSCFG_MAP2_CFGR3 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) 
#define SYSCFG_CFGR1_3_DMA_RMP DMA_RMP              // 5 bits @ 11
#else
#define SYSCFG_CFGR1_3_DMA_RMP
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32L0     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define SYSCFG_CFGR2
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32L0     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define SYSCFG_CFGR2_0
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F413xx ) || defined(STM32F423xx ) 
#define SYSCFG_CFGR2_0_LOCKUP_LOCK LOCKUP_LOCK          // 1 bits @ 0
#else
#define SYSCFG_CFGR2_0_LOCKUP_LOCK
#endif

#if defined(STM32F0     ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) ||\
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) || defined(STM32F334x8 ) ||\
    defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) 
#define SYSCFG_CFGR2_0_SRAM_PARITY_LOCK SRAM_PARITY_LOCK     // 1 bits @ 1
#else
#define SYSCFG_CFGR2_0_SRAM_PARITY_LOCK
#endif

#if defined(STM32F031x6 ) || defined(STM32F042x6 ) || defined(STM32F051x8 ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F091xC ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) ||\
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F334x8 ) || defined(STM32F373xC ) || defined(STM32F410Cx ) ||\
    defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F413xx ) || defined(STM32F423xx ) 
#define SYSCFG_CFGR2_0_PVD_LOCK PVD_LOCK             // 1 bits @ 2
#else
#define SYSCFG_CFGR2_0_PVD_LOCK
#endif

#if defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) 
#define SYSCFG_CFGR2_0_BYP_ADDR_PAR BYP_ADDR_PAR         // 1 bits @ 4
#else
#define SYSCFG_CFGR2_0_BYP_ADDR_PAR
#endif

#if defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) ||\
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) ||\
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) 
#define SYSCFG_CFGR2_0_I2C2_FMP I2C2_FMP             // 1 bits @ 13
#else
#define SYSCFG_CFGR2_0_I2C2_FMP
#endif

#if defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32L0     ) 
#define SYSCFG_CFGR2_1
#endif

#if defined(STM32L053xx ) || defined(STM32L063xx ) 
#define SYSCFG_CFGR2_1_CAPA  CAPA                 // 3 bits @ 1
#else
#define SYSCFG_CFGR2_1_CAPA
#endif

#if defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) 
#define SYSCFG_CFGR2_1_SRAM_PE SRAM_PE              // 1 bits @ 8
#else
#define SYSCFG_CFGR2_1_SRAM_PE
#endif

#if defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define SYSCFG_CFGR2_2
#endif

#if defined(STM32L073xx ) || defined(STM32L083xx ) 
#define SYSCFG_CFGR2_2_CAPA  CAPA                 // 5 bits @ 1
#else
#define SYSCFG_CFGR2_2_CAPA
#endif

#if defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32L0     ) 
#define SYSCFG_CFGR3
#endif

#if defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) ||\
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) 
#define SYSCFG_CFGR3_0_ENREF_HSI48 ENREF_HSI48          // 1 bits @ 13
#else
#define SYSCFG_CFGR3_0_ENREF_HSI48
#endif

#if defined(STM32F334x8 ) 
#define SYSCFG_CFGR3_0_TRIGGER_RMP TRIGGER_RMP          // 2 bits @ 16
#define SYSCFG_CFGR3_1_DAC1_TRG3_RMP DAC1_TRG3_RMP        // 1 bits @ 16
#define SYSCFG_CFGR3_1_DAC1_TRG5_RMP DAC1_TRG5_RMP        // 1 bits @ 17
#else
#define SYSCFG_CFGR3_0_TRIGGER_RMP
#define SYSCFG_CFGR3_1_DAC1_TRG3_RMP
#define SYSCFG_CFGR3_1_DAC1_TRG5_RMP
#endif

#if defined(STM32F303xE ) || defined(STM32F398xx ) 
#define SYSCFG_CFGR4
#define SYSCFG_RCR_PAGE8     PAGE8                // 1 bits @ 8
#define SYSCFG_RCR_PAGE9     PAGE9                // 1 bits @ 9
#define SYSCFG_RCR_PAGE10    PAGE10               // 1 bits @ 10
#define SYSCFG_RCR_PAGE11    PAGE11               // 1 bits @ 11
#define SYSCFG_RCR_PAGE12    PAGE12               // 1 bits @ 12
#define SYSCFG_RCR_PAGE13    PAGE13               // 1 bits @ 13
#define SYSCFG_RCR_PAGE14    PAGE14               // 1 bits @ 14
#define SYSCFG_RCR_PAGE15    PAGE15               // 1 bits @ 15
#define SYSCFG_MAP0_CFGR4    CFGR4_TypeDef CFGR4
#else
#define SYSCFG_RCR_PAGE8
#define SYSCFG_RCR_PAGE9
#define SYSCFG_RCR_PAGE10
#define SYSCFG_RCR_PAGE11
#define SYSCFG_RCR_PAGE12
#define SYSCFG_RCR_PAGE13
#define SYSCFG_RCR_PAGE14
#define SYSCFG_RCR_PAGE15
#define SYSCFG_MAP0_CFGR4 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define SYSCFG_CMPCR
#define SYSCFG_MAP0_CMPCR    CMPCR_TypeDef CMPCR
#else
#define SYSCFG_MAP0_CMPCR __SOOL_PERIPH_PADDING_4
#endif

#define SYSCFG_EXTICR

#if defined(STM32F091xC ) 
#define SYSCFG_IT_LINE_SR_SR_PVDOUT SR_PVDOUT            // 1 bits @ 32
#else
#define SYSCFG_IT_LINE_SR_SR_PVDOUT
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx ) 
#define SYSCFG_MCHDLYCR
#define SYSCFG_MAP0_MCHDLYCR MCHDLYCR_TypeDef MCHDLYCR
#else
#define SYSCFG_MAP0_MCHDLYCR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define SYSCFG_MEMRMP
#define SYSCFG_MAP1_MEMRMP   MEMRMP_TypeDef MEMRMP
#else
#define SYSCFG_MAP1_MEMRMP __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     ) 
#define SYSCFG_MEMRMP_0
#define SYSCFG_PMC
#define SYSCFG_MAP0_PMC      PMC_TypeDef PMC
#else
#define SYSCFG_MAP0_PMC __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) ||\
    defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F423xx ) || defined(STM32L1     ) 
#define SYSCFG_MEMRMP_0_MEM_MODE MEM_MODE             // 2 bits @ 0
#else
#define SYSCFG_MEMRMP_0_MEM_MODE
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) 
#define SYSCFG_MEMRMP_0_UFB_MODE UFB_MODE             // 1 bits @ 8
#else
#define SYSCFG_MEMRMP_0_UFB_MODE
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) 
#define SYSCFG_MEMRMP_0_SWP_FMC SWP_FMC              // 2 bits @ 10
#define SYSCFG_PMC_0_ADC2DC2 ADC2DC2              // 1 bits @ 17
#define SYSCFG_PMC_0_ADC3DC2 ADC3DC2              // 1 bits @ 18
#define SYSCFG_PMC_1_ADCxDC2 ADCxDC2              // 3 bits @ 16
#else
#define SYSCFG_MEMRMP_0_SWP_FMC
#define SYSCFG_PMC_0_ADC2DC2
#define SYSCFG_PMC_0_ADC3DC2
#define SYSCFG_PMC_1_ADCxDC2
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F765xx ) ||\
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define SYSCFG_MEMRMP_1
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define SYSCFG_MEMRMP_1_MEM_MODE MEM_MODE             // 3 bits @ 0
#else
#define SYSCFG_MEMRMP_1_MEM_MODE
#endif

#if defined(STM32F7     ) || defined(STM32L1     ) 
#define SYSCFG_MEMRMP_2
#endif

#if defined(STM32F7     ) 
#define SYSCFG_MEMRMP_2_MEM_BOOT MEM_BOOT             // 1 bits @ 0
#else
#define SYSCFG_MEMRMP_2_MEM_BOOT
#endif

#if defined(STM32L1     ) 
#define SYSCFG_MEMRMP_2_BOOT_MODE BOOT_MODE            // 2 bits @ 8
#define SYSCFG_PMC_1_USB_PU  USB_PU               // 1 bits @ 0
#else
#define SYSCFG_MEMRMP_2_BOOT_MODE
#define SYSCFG_PMC_1_USB_PU
#endif

#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define SYSCFG_MEMRMP_3
#endif

#if defined(STM32F207xx ) || defined(STM32F217xx ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define SYSCFG_PMC_0
#endif

#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) ||\
    defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) ||\
    defined(STM32F779xx ) 
#define SYSCFG_PMC_0_I2C1_FMP I2C1_FMP             // 1 bits @ 0
#define SYSCFG_PMC_0_I2C2_FMP I2C2_FMP             // 1 bits @ 1
#define SYSCFG_PMC_0_I2C3_FMP I2C3_FMP             // 1 bits @ 2
#define SYSCFG_PMC_0_I2C_PB6_FMP I2C_PB6_FMP          // 1 bits @ 4
#define SYSCFG_PMC_0_I2C_PB7_FMP I2C_PB7_FMP          // 1 bits @ 5
#define SYSCFG_PMC_0_I2C_PB8_FMP I2C_PB8_FMP          // 1 bits @ 6
#define SYSCFG_PMC_0_I2C_PB9_FMP I2C_PB9_FMP          // 1 bits @ 7
#else
#define SYSCFG_PMC_0_I2C1_FMP
#define SYSCFG_PMC_0_I2C2_FMP
#define SYSCFG_PMC_0_I2C3_FMP
#define SYSCFG_PMC_0_I2C_PB6_FMP
#define SYSCFG_PMC_0_I2C_PB7_FMP
#define SYSCFG_PMC_0_I2C_PB8_FMP
#define SYSCFG_PMC_0_I2C_PB9_FMP
#endif

#if defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) 
#define SYSCFG_PMC_0_ADC1DC2 ADC1DC2              // 1 bits @ 16
#else
#define SYSCFG_PMC_0_ADC1DC2
#endif

#if defined(STM32F207xx ) || defined(STM32F217xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F765xx ) ||\
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) 
#define SYSCFG_PMC_0_MII_RMII_SEL MII_RMII_SEL         // 1 bits @ 23
#else
#define SYSCFG_PMC_0_MII_RMII_SEL
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) ||\
    defined(STM32L1     ) 
#define SYSCFG_PMC_1
#endif

#if defined(STM32L100xB ) || defined(STM32L100xBA) || defined(STM32L100xC ) || defined(STM32L152xB ) ||\
    defined(STM32L152xBA) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) ||\
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) ||\
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) 
#define SYSCFG_PMC_1_LCD_CAPA LCD_CAPA             // 5 bits @ 1
#else
#define SYSCFG_PMC_1_LCD_CAPA
#endif

#if defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) ||\
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) 
#define SYSCFG_RCR
#define SYSCFG_MAP1_RCR      RCR_TypeDef RCR
#else
#define SYSCFG_MAP1_RCR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F398xx ) 
#define SYSCFG_RCR_PAGE4     PAGE4                // 1 bits @ 4
#define SYSCFG_RCR_PAGE5     PAGE5                // 1 bits @ 5
#define SYSCFG_RCR_PAGE6     PAGE6                // 1 bits @ 6
#define SYSCFG_RCR_PAGE7     PAGE7                // 1 bits @ 7
#else
#define SYSCFG_RCR_PAGE4
#define SYSCFG_RCR_PAGE5
#define SYSCFG_RCR_PAGE6
#define SYSCFG_RCR_PAGE7
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define SYSCFG_SWPR_PAGE16   PAGE16               // 1 bits @ 16
#define SYSCFG_SWPR_PAGE17   PAGE17               // 1 bits @ 17
#define SYSCFG_SWPR_PAGE18   PAGE18               // 1 bits @ 18
#define SYSCFG_SWPR_PAGE19   PAGE19               // 1 bits @ 19
#define SYSCFG_SWPR_PAGE20   PAGE20               // 1 bits @ 20
#define SYSCFG_SWPR_PAGE21   PAGE21               // 1 bits @ 21
#define SYSCFG_SWPR_PAGE22   PAGE22               // 1 bits @ 22
#define SYSCFG_SWPR_PAGE23   PAGE23               // 1 bits @ 23
#define SYSCFG_SWPR_PAGE24   PAGE24               // 1 bits @ 24
#define SYSCFG_SWPR_PAGE25   PAGE25               // 1 bits @ 25
#define SYSCFG_SWPR_PAGE26   PAGE26               // 1 bits @ 26
#define SYSCFG_SWPR_PAGE27   PAGE27               // 1 bits @ 27
#define SYSCFG_SWPR_PAGE28   PAGE28               // 1 bits @ 28
#define SYSCFG_SWPR_PAGE29   PAGE29               // 1 bits @ 29
#define SYSCFG_SWPR_PAGE30   PAGE30               // 1 bits @ 30
#define SYSCFG_SWPR_PAGE31   PAGE31               // 1 bits @ 31
#else
#define SYSCFG_SWPR_PAGE16
#define SYSCFG_SWPR_PAGE17
#define SYSCFG_SWPR_PAGE18
#define SYSCFG_SWPR_PAGE19
#define SYSCFG_SWPR_PAGE20
#define SYSCFG_SWPR_PAGE21
#define SYSCFG_SWPR_PAGE22
#define SYSCFG_SWPR_PAGE23
#define SYSCFG_SWPR_PAGE24
#define SYSCFG_SWPR_PAGE25
#define SYSCFG_SWPR_PAGE26
#define SYSCFG_SWPR_PAGE27
#define SYSCFG_SWPR_PAGE28
#define SYSCFG_SWPR_PAGE29
#define SYSCFG_SWPR_PAGE30
#define SYSCFG_SWPR_PAGE31
#endif

#if defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define SYSCFG_SWPR2
#define SYSCFG_MAP1_SWPR2    SWPR2_TypeDef SWPR2
#else
#define SYSCFG_MAP1_SWPR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L0     ) 
#define SYSCFG_MAP0_CFGR1    CFGR1_TypeDef CFGR1
#else
#define SYSCFG_MAP0_CFGR1 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) 
#define SYSCFG_MAP0_CFGR2    CFGR2_TypeDef CFGR2
#else
#define SYSCFG_MAP0_CFGR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F423xx ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define SYSCFG_MAP1_CFGR2    CFGR2_TypeDef CFGR2
#else
#define SYSCFG_MAP1_CFGR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) 
#define SYSCFG_MAP0_CFGR     CFGR_TypeDef CFGR
#else
#define SYSCFG_MAP0_CFGR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F446xx ) 
#define SYSCFG_MAP1_CFGR     CFGR_TypeDef CFGR
#else
#define SYSCFG_MAP1_CFGR __SOOL_PERIPH_PADDING_4
#endif

//endregion
namespace sool
{
	namespace core
	{
//region related-types
		
//endregion
//region peripheral-declaration
		
		class SYSCFG
		{
			
			
			public :
			
			#ifdef SYSCFG_CBR
			struct CBR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CLL                  :1;
					uint32_t                      :1;
					uint32_t PVDL                 :1;
					uint32_t                      :29;
			
				
			};
			#endif
			
			#ifdef SYSCFG_CCCR
			struct CCCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t NCC                  :4;
					uint32_t PCC                  :4;
					uint32_t                      :24;
			
				
			};
			#endif
			
			#ifdef SYSCFG_CCCSR
			struct CCCSR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t EN                   :1;
					uint32_t CS                   :1;
					uint32_t                      :6;
					uint32_t READY                :1;
					uint32_t                      :7;
					uint32_t HSLV                 :1;
					uint32_t                      :15;
			
				
			};
			#endif
			
			#ifdef SYSCFG_CCVR
			struct CCVR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t NCV                  :4;
					uint32_t PCV                  :4;
					uint32_t                      :24;
			
				
			};
			#endif
			
			#ifdef SYSCFG_CFGR
			struct CFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t FMPI2C1_SCL          :1;
					uint32_t FMPI2C1_SDA          :1;
					uint32_t                      :30;
			
				
			};
			#endif
			
			#ifdef SYSCFG_CFGR1
			struct CFGR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef SYSCFG_CFGR1_0
					struct
					{
						uint32_t SYSCFG_CFGR1_0_MEM_MODE :2;
						uint32_t                      :1;
						uint32_t SYSCFG_CFGR1_0_UFB   :1;
						uint32_t SYSCFG_CFGR1_0_PA11_PA12_RMP :1;
						uint32_t SYSCFG_CFGR1_0_USB_IT_RMP :1;
						uint32_t SYSCFG_CFGR1_0_IR_MOD :2;
						uint32_t SYSCFG_CFGR1_0_DMA_RMP :5;
						uint32_t SYSCFG_CFGR1_0_TIM16_DMA_RMP2 :1;
						uint32_t SYSCFG_CFGR1_0_TIM17_DMA_RMP2 :1;
						uint32_t SYSCFG_CFGR1_0_DAC2Ch1_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_0_I2C_FMP_PB6 :1;
						uint32_t SYSCFG_CFGR1_0_I2C_FMP_PB7 :1;
						uint32_t SYSCFG_CFGR1_0_I2C_FMP_PB8 :1;
						uint32_t SYSCFG_CFGR1_0_I2C_FMP_PB9 :1;
						uint32_t SYSCFG_CFGR1_0_I2C_FMP_I2C1 :1;
						uint32_t SYSCFG_CFGR1_0_I2C_FMP_I2C2 :1;
						uint32_t SYSCFG_CFGR1_0_I2C_FMP_PA9 :1;
						uint32_t SYSCFG_CFGR1_0_I2C_FMP_PA10 :1;
						uint32_t SYSCFG_CFGR1_0_SPI2_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_0_USART2_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_0_USART3_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_0_I2C1_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_0_TIM1_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_0_TIM2_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_0_TIM3_DMA_RMP :1;
						uint32_t                      :1;
					};
					#endif
					#ifdef SYSCFG_CFGR1_1
					struct
					{
						uint32_t SYSCFG_CFGR1_1_MEM_MODE :3;
						uint32_t                      :3;
						uint32_t SYSCFG_CFGR1_1_TIM1_ITR3_RMP :1;
						uint32_t SYSCFG_CFGR1_1_DAC1_TRIG1_RMP :1;
						uint32_t SYSCFG_CFGR1_1_ADC_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_1_USART1TX_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_1_USART1RX_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_1_TIM16_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_1_TIM17_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_1_TIM6DAC1Ch1_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_1_TIM7DAC1Ch2_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_1_TIM18DAC2Ch1_DMA_RMP :1;
						uint32_t SYSCFG_CFGR1_1_I2C_PB6_FMP :1;
						uint32_t SYSCFG_CFGR1_1_I2C_PB7_FMP :1;
						uint32_t SYSCFG_CFGR1_1_I2C_PB8_FMP :1;
						uint32_t SYSCFG_CFGR1_1_I2C_PB9_FMP :1;
						uint32_t SYSCFG_CFGR1_1_I2C1_FMP :1;
						uint32_t SYSCFG_CFGR1_1_I2C2_FMP :1;
						uint32_t SYSCFG_CFGR1_1_ENCODER_MODE :2;
						uint32_t SYSCFG_CFGR1_1_I2C3_FMP :1;
						uint32_t                      :1;
						uint32_t SYSCFG_CFGR1_1_FPU_IE :6;
					};
					#endif
					#ifdef SYSCFG_CFGR1_2
					struct
					{
						uint32_t SYSCFG_CFGR1_2_FWDIS :1;
						uint32_t                      :7;
						uint32_t SYSCFG_CFGR1_2_ADC24_DMA_RMP :1;
						uint32_t                      :2;
						uint32_t SYSCFG_CFGR1_2_DMA_RMP :3;
						uint32_t                      :8;
						uint32_t SYSCFG_CFGR1_2_I2C3_FMP :1;
						uint32_t SYSCFG_CFGR1_2_I2C4_FMP :1;
						uint32_t SYSCFG_CFGR1_2_VBAT  :1;
						uint32_t                      :7;
					};
					#endif
					#ifdef SYSCFG_CFGR1_3
					struct
					{
						uint32_t                      :8;
						uint32_t SYSCFG_CFGR1_3_BOOT_MODE :2;
						uint32_t                      :1;
						uint32_t SYSCFG_CFGR1_3_DMA_RMP :5;
						uint32_t                      :16;
					};
					#endif
					#ifdef SYSCFG_CFGR1_4
					struct
					{
						uint32_t                      :8;
						uint32_t BOOSTEN              :1;
						uint32_t                      :23;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef SYSCFG_CFGR2
			struct CFGR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef SYSCFG_CFGR2_0
					struct
					{
						uint32_t SYSCFG_CFGR2_0_LOCKUP_LOCK :1;
						uint32_t SYSCFG_CFGR2_0_SRAM_PARITY_LOCK :1;
						uint32_t SYSCFG_CFGR2_0_PVD_LOCK :1;
						uint32_t SYSCFG_CFGR2_0_ECCL  :1;
						uint32_t SYSCFG_CFGR2_0_BYP_ADDR_PAR :1;
						uint32_t                      :3;
						uint32_t SYSCFG_CFGR2_0_SRAM_PEF :1;
						uint32_t SYSCFG_CFGR2_0_I2C_PB7_FMP :1;
						uint32_t SYSCFG_CFGR2_0_I2C_PB8_FMP :1;
						uint32_t SYSCFG_CFGR2_0_I2C_PB9_FMP :1;
						uint32_t SYSCFG_CFGR2_0_I2C1_FMP :1;
						uint32_t SYSCFG_CFGR2_0_I2C2_FMP :1;
						uint32_t SYSCFG_CFGR2_0_I2C3_FMP :1;
						uint32_t                      :17;
					};
					#endif
					#ifdef SYSCFG_CFGR2_1
					struct
					{
						uint32_t SYSCFG_CFGR2_1_FWDISEN :1;
						uint32_t SYSCFG_CFGR2_1_CAPA  :3;
						uint32_t                      :4;
						uint32_t SYSCFG_CFGR2_1_SRAM_PE :1;
						uint32_t                      :23;
					};
					#endif
					#ifdef SYSCFG_CFGR2_2
					struct
					{
						uint32_t SYSCFG_CFGR2_2_CLL   :1;
						uint32_t SYSCFG_CFGR2_2_CAPA  :5;
						uint32_t                      :2;
						uint32_t SYSCFG_CFGR2_2_I2C_PB6_FMP :1;
						uint32_t                      :23;
					};
					#endif
					#ifdef SYSCFG_CFGR2_3
					struct
					{
						uint32_t                      :1;
						uint32_t SPL                  :1;
						uint32_t PVDL                 :1;
						uint32_t                      :5;
						uint32_t SPF                  :1;
						uint32_t                      :23;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef SYSCFG_CFGR3
			struct CFGR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t SYSCFG_CFGR3_0_DMA_RMP :10;
						uint32_t                      :2;
						uint32_t SYSCFG_CFGR3_0_ENBUFLP_VREFINT_COMP :1;
						uint32_t SYSCFG_CFGR3_0_ENREF_HSI48 :1;
						uint32_t                      :2;
						uint32_t SYSCFG_CFGR3_0_TRIGGER_RMP :2;
						uint32_t                      :12;
						uint32_t SYSCFG_CFGR3_0_VREFINT_RDYF :1;
						uint32_t SYSCFG_CFGR3_0_REF_LOCK :1;
					};
					#ifdef SYSCFG_CFGR3_1
					struct
					{
						uint32_t SPI1_RX_DMA_RMP      :2;
						uint32_t SPI1_TX_DMA_RMP      :2;
						uint32_t I2C1_RX_DMA_RMP      :2;
						uint32_t I2C1_TX_DMA_RMP      :2;
						uint32_t ADC2_DMA_RMP         :2;
						uint32_t                      :6;
						uint32_t SYSCFG_CFGR3_1_DAC1_TRG3_RMP :1;
						uint32_t SYSCFG_CFGR3_1_DAC1_TRG5_RMP :1;
						uint32_t                      :14;
					};
					#endif
					#ifdef SYSCFG_CFGR3_2
					struct
					{
						uint32_t                      :4;
						uint32_t VREF_OUT             :2;
						uint32_t                      :2;
						uint32_t ENBUF_VREFINT_ADC    :1;
						uint32_t ENBUF_SENSOR_ADC     :1;
						uint32_t                      :22;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef SYSCFG_CFGR4
			struct CFGR4_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t ADC12_EXT2_RMP       :1;
					uint32_t ADC12_EXT3_RMP       :1;
					uint32_t ADC12_EXT5_RMP       :1;
					uint32_t ADC12_EXT13_RMP      :1;
					uint32_t ADC12_EXT15_RMP      :1;
					uint32_t ADC12_JEXT3_RMP      :1;
					uint32_t ADC12_JEXT6_RMP      :1;
					uint32_t ADC12_JEXT13_RMP     :1;
					uint32_t ADC34_EXT5_RMP       :1;
					uint32_t ADC34_EXT6_RMP       :1;
					uint32_t ADC34_EXT15_RMP      :1;
					uint32_t ADC34_JEXT5_RMP      :1;
					uint32_t ADC34_JEXT11_RMP     :1;
					uint32_t ADC34_JEXT14_RMP     :1;
					uint32_t                      :18;
			
				
			};
			#endif
			
			#ifdef SYSCFG_CMPCR
			struct CMPCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CMP_PD               :1;
					uint32_t                      :7;
					uint32_t READY                :1;
					uint32_t                      :23;
			
				
			};
			#endif
			
			#ifdef SYSCFG_EXTICR
			struct EXTICR_TypeDef : public BigArrayReg_t<uint32_t, 0, 4, 4>
			{
				using BigArrayReg_t<uint32_t, 0, 4, 4>::operator=;
				
					uint32_t EXTI0                :4;
					uint32_t EXTI1                :4;
					uint32_t EXTI2                :4;
					uint32_t EXTI3                :4;
					uint32_t                      :16;
					uint32_t EXTI4                :4;
					uint32_t EXTI5                :4;
					uint32_t EXTI6                :4;
					uint32_t EXTI7                :4;
					uint32_t                      :16;
					uint32_t EXTI8                :4;
					uint32_t EXTI9                :4;
					uint32_t EXTI10               :4;
					uint32_t EXTI11               :4;
					uint32_t                      :16;
					uint32_t EXTI12               :4;
					uint32_t EXTI13               :4;
					uint32_t EXTI14               :4;
					uint32_t EXTI15               :4;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef SYSCFG_IT_LINE_SR
			struct IT_LINE_SR_TypeDef : public BigArrayReg_t<uint32_t, 0, 4, 32>
			{
				using BigArrayReg_t<uint32_t, 0, 4, 32>::operator=;
				
					uint32_t SR_EWDG              :1;
					uint32_t                      :31;
					uint32_t SYSCFG_IT_LINE_SR_SR_PVDOUT :1;
					uint32_t SR_VDDIO2            :1;
					uint32_t                      :30;
					uint32_t SR_RTC_ALRA          :1;
					uint32_t SR_RTC_TSTAMP        :1;
					uint32_t SR_RTC_WAKEUP        :1;
					uint32_t                      :29;
					uint32_t SR_FLASH_ITF         :1;
					uint32_t                      :31;
					uint32_t SR_CRS               :1;
					uint32_t SR_CLK_CTRL          :1;
					uint32_t                      :30;
					uint32_t SR_EXTI0             :1;
					uint32_t SR_EXTI1             :1;
					uint32_t                      :30;
					uint32_t SR_EXTI2             :1;
					uint32_t SR_EXTI3             :1;
					uint32_t                      :30;
					uint32_t SR_EXTI4             :1;
					uint32_t SR_EXTI5             :1;
					uint32_t SR_EXTI6             :1;
					uint32_t SR_EXTI7             :1;
					uint32_t SR_EXTI8             :1;
					uint32_t SR_EXTI9             :1;
					uint32_t SR_EXTI10            :1;
					uint32_t SR_EXTI11            :1;
					uint32_t SR_EXTI12            :1;
					uint32_t SR_EXTI13            :1;
					uint32_t SR_EXTI14            :1;
					uint32_t SR_EXTI15            :1;
					uint32_t                      :20;
					uint32_t SR_TSC_EOA           :1;
					uint32_t SR_TSC_MCE           :1;
					uint32_t                      :30;
					uint32_t SR_DMA1_CH1          :1;
					uint32_t                      :31;
					uint32_t SR_DMA1_CH2          :1;
					uint32_t SR_DMA1_CH3          :1;
					uint32_t SR_DMA2_CH1          :1;
					uint32_t SR_DMA2_CH2          :1;
					uint32_t                      :28;
					uint32_t SR_DMA1_CH4          :1;
					uint32_t SR_DMA1_CH5          :1;
					uint32_t SR_DMA1_CH6          :1;
					uint32_t SR_DMA1_CH7          :1;
					uint32_t SR_DMA2_CH3          :1;
					uint32_t SR_DMA2_CH4          :1;
					uint32_t SR_DMA2_CH5          :1;
					uint32_t                      :25;
					uint32_t SR_ADC               :1;
					uint32_t SR_COMP1             :1;
					uint32_t SR_COMP2             :1;
					uint32_t                      :29;
					uint32_t SR_TIM1_BRK          :1;
					uint32_t SR_TIM1_UPD          :1;
					uint32_t SR_TIM1_TRG          :1;
					uint32_t SR_TIM1_CCU          :1;
					uint32_t                      :28;
					uint32_t SR_TIM1_CC           :1;
					uint32_t                      :31;
					uint32_t SR_TIM2_GLB          :1;
					uint32_t                      :31;
					uint32_t SR_TIM3_GLB          :1;
					uint32_t                      :31;
					uint32_t SR_DAC               :1;
					uint32_t SR_TIM6_GLB          :1;
					uint32_t                      :30;
					uint32_t SR_TIM7_GLB          :1;
					uint32_t                      :31;
					uint32_t SR_TIM14_GLB         :1;
					uint32_t                      :31;
					uint32_t SR_TIM15_GLB         :1;
					uint32_t                      :31;
					uint32_t SR_TIM16_GLB         :1;
					uint32_t                      :31;
					uint32_t SR_TIM17_GLB         :1;
					uint32_t                      :31;
					uint32_t SR_I2C1_GLB          :1;
					uint32_t                      :31;
					uint32_t SR_I2C2_GLB          :1;
					uint32_t                      :31;
					uint32_t SR_SPI1              :1;
					uint32_t                      :31;
					uint32_t SR_SPI2              :1;
					uint32_t                      :31;
					uint32_t SR_USART1_GLB        :1;
					uint32_t                      :31;
					uint32_t SR_USART2_GLB        :1;
					uint32_t                      :31;
					uint32_t SR_USART3_GLB        :1;
					uint32_t SR_USART4_GLB        :1;
					uint32_t SR_USART5_GLB        :1;
					uint32_t SR_USART6_GLB        :1;
					uint32_t SR_USART7_GLB        :1;
					uint32_t SR_USART8_GLB        :1;
					uint32_t                      :26;
					uint32_t SR_CAN               :1;
					uint32_t SR_CEC               :1;
					uint32_t                      :32;
					uint32_t                      :30;
			
				
			};
			#endif
			
			#ifdef SYSCFG_MCHDLYCR
			struct MCHDLYCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t BSCKSEL              :1;
					uint32_t MCHDLY1EN            :1;
					uint32_t DFSDM1D0SEL          :1;
					uint32_t DFSDM1D2SEL          :1;
					uint32_t DFSDM1CK02SEL        :1;
					uint32_t DFSDM1CK13SEL        :1;
					uint32_t DFSDM1CFG            :1;
					uint32_t DFSDM1CKOSEL         :1;
					uint32_t MCHDLY2EN            :1;
					uint32_t DFSDM2D0SEL          :1;
					uint32_t DFSDM2D2SEL          :1;
					uint32_t DFSDM2D4SEL          :1;
					uint32_t DFSDM2D6SEL          :1;
					uint32_t DFSDM2CK04SEL        :1;
					uint32_t DFSDM2CK15SEL        :1;
					uint32_t DFSDM2CK26SEL        :1;
					uint32_t DFSDM2CK37SEL        :1;
					uint32_t DFSDM2CFG            :1;
					uint32_t DFSDM2CKOSEL         :1;
					uint32_t                      :13;
			
				
			};
			#endif
			
			#ifdef SYSCFG_MEMRMP
			struct MEMRMP_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef SYSCFG_MEMRMP_0
					struct
					{
						uint32_t SYSCFG_MEMRMP_0_MEM_MODE :2;
						uint32_t                      :6;
						uint32_t SYSCFG_MEMRMP_0_UFB_MODE :1;
						uint32_t                      :1;
						uint32_t SYSCFG_MEMRMP_0_SWP_FMC :2;
						uint32_t                      :20;
					};
					#endif
					#ifdef SYSCFG_MEMRMP_1
					struct
					{
						uint32_t SYSCFG_MEMRMP_1_MEM_MODE :3;
						uint32_t                      :5;
						uint32_t SYSCFG_MEMRMP_1_SWP_FB :1;
						uint32_t                      :23;
					};
					#endif
					#ifdef SYSCFG_MEMRMP_2
					struct
					{
						uint32_t SYSCFG_MEMRMP_2_MEM_BOOT :1;
						uint32_t                      :7;
						uint32_t SYSCFG_MEMRMP_2_BOOT_MODE :2;
						uint32_t                      :22;
					};
					#endif
					#ifdef SYSCFG_MEMRMP_3
					struct
					{
						uint32_t                      :8;
						uint32_t FB_MODE              :1;
						uint32_t                      :23;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef SYSCFG_PKGR
			struct PKGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PKG                  :4;
					uint32_t                      :28;
			
				
			};
			#endif
			
			#ifdef SYSCFG_PMC
			struct PMC_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef SYSCFG_PMC_0
					struct
					{
						uint32_t SYSCFG_PMC_0_I2C1_FMP :1;
						uint32_t SYSCFG_PMC_0_I2C2_FMP :1;
						uint32_t SYSCFG_PMC_0_I2C3_FMP :1;
						uint32_t SYSCFG_PMC_0_I2C4_FMP :1;
						uint32_t SYSCFG_PMC_0_I2C_PB6_FMP :1;
						uint32_t SYSCFG_PMC_0_I2C_PB7_FMP :1;
						uint32_t SYSCFG_PMC_0_I2C_PB8_FMP :1;
						uint32_t SYSCFG_PMC_0_I2C_PB9_FMP :1;
						uint32_t                      :8;
						uint32_t SYSCFG_PMC_0_ADC1DC2 :1;
						uint32_t SYSCFG_PMC_0_ADC2DC2 :1;
						uint32_t SYSCFG_PMC_0_ADC3DC2 :1;
						uint32_t                      :4;
						uint32_t SYSCFG_PMC_0_MII_RMII_SEL :1;
						uint32_t                      :8;
					};
					#endif
					#ifdef SYSCFG_PMC_1
					struct
					{
						uint32_t SYSCFG_PMC_1_USB_PU  :1;
						uint32_t SYSCFG_PMC_1_LCD_CAPA :5;
						uint32_t                      :10;
						uint32_t SYSCFG_PMC_1_ADCxDC2 :3;
						uint32_t                      :13;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef SYSCFG_PMCR
			struct PMCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t I2C1_FMP             :1;
					uint32_t I2C2_FMP             :1;
					uint32_t I2C3_FMP             :1;
					uint32_t I2C4_FMP             :1;
					uint32_t I2C_PB6_FMP          :1;
					uint32_t I2C_PB7_FMP          :1;
					uint32_t I2C_PB8_FMP          :1;
					uint32_t I2C_PB9_FMP          :1;
					uint32_t BOOSTEN              :1;
					uint32_t                      :12;
					uint32_t EPIS_SEL             :3;
					uint32_t PA0SO                :1;
					uint32_t PA1SO                :1;
					uint32_t PC2SO                :1;
					uint32_t PC3SO                :1;
					uint32_t                      :4;
			
				
			};
			#endif
			
			#ifdef SYSCFG_RCR
			struct RCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PAGE0                :1;
					uint32_t PAGE1                :1;
					uint32_t PAGE2                :1;
					uint32_t PAGE3                :1;
					uint32_t SYSCFG_RCR_PAGE4     :1;
					uint32_t SYSCFG_RCR_PAGE5     :1;
					uint32_t SYSCFG_RCR_PAGE6     :1;
					uint32_t SYSCFG_RCR_PAGE7     :1;
					uint32_t SYSCFG_RCR_PAGE8     :1;
					uint32_t SYSCFG_RCR_PAGE9     :1;
					uint32_t SYSCFG_RCR_PAGE10    :1;
					uint32_t SYSCFG_RCR_PAGE11    :1;
					uint32_t SYSCFG_RCR_PAGE12    :1;
					uint32_t SYSCFG_RCR_PAGE13    :1;
					uint32_t SYSCFG_RCR_PAGE14    :1;
					uint32_t SYSCFG_RCR_PAGE15    :1;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef SYSCFG_SCSR
			struct SCSR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t SRAM2ER              :1;
					uint32_t SRAM2BSY             :1;
					uint32_t                      :30;
			
				
			};
			#endif
			
			#ifdef SYSCFG_SKR
			struct SKR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t KEY                  :8;
					uint32_t                      :24;
			
				
			};
			#endif
			
			#ifdef SYSCFG_SWPR
			struct SWPR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PAGE0                :1;
					uint32_t PAGE1                :1;
					uint32_t PAGE2                :1;
					uint32_t PAGE3                :1;
					uint32_t PAGE4                :1;
					uint32_t PAGE5                :1;
					uint32_t PAGE6                :1;
					uint32_t PAGE7                :1;
					uint32_t PAGE8                :1;
					uint32_t PAGE9                :1;
					uint32_t PAGE10               :1;
					uint32_t PAGE11               :1;
					uint32_t PAGE12               :1;
					uint32_t PAGE13               :1;
					uint32_t PAGE14               :1;
					uint32_t PAGE15               :1;
					uint32_t SYSCFG_SWPR_PAGE16   :1;
					uint32_t SYSCFG_SWPR_PAGE17   :1;
					uint32_t SYSCFG_SWPR_PAGE18   :1;
					uint32_t SYSCFG_SWPR_PAGE19   :1;
					uint32_t SYSCFG_SWPR_PAGE20   :1;
					uint32_t SYSCFG_SWPR_PAGE21   :1;
					uint32_t SYSCFG_SWPR_PAGE22   :1;
					uint32_t SYSCFG_SWPR_PAGE23   :1;
					uint32_t SYSCFG_SWPR_PAGE24   :1;
					uint32_t SYSCFG_SWPR_PAGE25   :1;
					uint32_t SYSCFG_SWPR_PAGE26   :1;
					uint32_t SYSCFG_SWPR_PAGE27   :1;
					uint32_t SYSCFG_SWPR_PAGE28   :1;
					uint32_t SYSCFG_SWPR_PAGE29   :1;
					uint32_t SYSCFG_SWPR_PAGE30   :1;
					uint32_t SYSCFG_SWPR_PAGE31   :1;
			
				
			};
			#endif
			
			#ifdef SYSCFG_SWPR2
			struct SWPR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PAGE32               :1;
					uint32_t PAGE33               :1;
					uint32_t PAGE34               :1;
					uint32_t PAGE35               :1;
					uint32_t PAGE36               :1;
					uint32_t PAGE37               :1;
					uint32_t PAGE38               :1;
					uint32_t PAGE39               :1;
					uint32_t PAGE40               :1;
					uint32_t PAGE41               :1;
					uint32_t PAGE42               :1;
					uint32_t PAGE43               :1;
					uint32_t PAGE44               :1;
					uint32_t PAGE45               :1;
					uint32_t PAGE46               :1;
					uint32_t PAGE47               :1;
					uint32_t PAGE48               :1;
					uint32_t PAGE49               :1;
					uint32_t PAGE50               :1;
					uint32_t PAGE51               :1;
					uint32_t PAGE52               :1;
					uint32_t PAGE53               :1;
					uint32_t PAGE54               :1;
					uint32_t PAGE55               :1;
					uint32_t PAGE56               :1;
					uint32_t PAGE57               :1;
					uint32_t PAGE58               :1;
					uint32_t PAGE59               :1;
					uint32_t PAGE60               :1;
					uint32_t PAGE61               :1;
					uint32_t PAGE62               :1;
					uint32_t PAGE63               :1;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR0
			struct UR0_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t BKS                  :1;
					uint32_t                      :15;
					uint32_t RDP                  :8;
					uint32_t                      :8;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR10
			struct UR10_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PAEND_BANK2          :12;
					uint32_t                      :4;
					uint32_t SABEG_BANK2          :12;
					uint32_t                      :4;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR11
			struct UR11_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t SAEND_BANK2          :12;
					uint32_t                      :4;
					uint32_t IWDG1M               :1;
					uint32_t                      :15;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR12
			struct UR12_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t                      :16;
					uint32_t SECURE               :1;
					uint32_t                      :15;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR13
			struct UR13_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t SDRS                 :2;
					uint32_t                      :14;
					uint32_t D1SBRST              :1;
					uint32_t                      :15;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR14
			struct UR14_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t D1STPRST             :1;
					uint32_t                      :31;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR15
			struct UR15_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t                      :16;
					uint32_t FZIWDGSTB            :1;
					uint32_t                      :15;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR16
			struct UR16_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t FZIWDGSTP            :1;
					uint32_t                      :15;
					uint32_t PKP                  :1;
					uint32_t                      :15;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR17
			struct UR17_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t IOHSLV               :1;
					uint32_t                      :31;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR2
			struct UR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t BORH                 :2;
					uint32_t                      :14;
					uint32_t BOOT_ADD0            :16;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR3
			struct UR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t BOOT_ADD1            :16;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR4
			struct UR4_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t                      :16;
					uint32_t MEPAD_BANK1          :1;
					uint32_t                      :15;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR5
			struct UR5_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t MESAD_BANK1          :1;
					uint32_t                      :15;
					uint32_t WRPN_BANK1           :8;
					uint32_t                      :8;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR6
			struct UR6_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PABEG_BANK1          :12;
					uint32_t                      :4;
					uint32_t PAEND_BANK1          :12;
					uint32_t                      :4;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR7
			struct UR7_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t SABEG_BANK1          :12;
					uint32_t                      :4;
					uint32_t SAEND_BANK1          :12;
					uint32_t                      :4;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR8
			struct UR8_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t MEPAD_BANK2          :1;
					uint32_t                      :15;
					uint32_t MESAD_BANK2          :1;
					uint32_t                      :15;
			
				
			};
			#endif
			
			#ifdef SYSCFG_UR9
			struct UR9_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t WRPN_BANK2           :8;
					uint32_t                      :8;
					uint32_t PABEG_BANK2          :12;
					uint32_t                      :4;
			
				
			};
			#endif
			
			union
			{
				
				struct
				{
					SYSCFG_MAP0_CFGR1;   // @0x000
					SYSCFG_MAP0_PMC;     // @0x004
					EXTICR_TypeDef EXTICR; // @0x008
					SYSCFG_MAP0_CFGR2;   // @0x018
					SYSCFG_MAP0_CBR;     // @0x01c
					SYSCFG_MAP0_CMPCR;   // @0x020
					SYSCFG_MAP0_CFGR;    // @0x024
					SYSCFG_MAP0_CCCR;    // @0x028
					__SOOL_PERIPH_PADDING_4;
					SYSCFG_MAP0_MCHDLYCR; // @0x030
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_4;
					SYSCFG_MAP0_CFGR4;   // @0x048
					__SOOL_PERIPH_PADDING_4;
					SYSCFG_MAP0_CFGR3;   // @0x050
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					SYSCFG_MAP0_IT_LINE_SR; // @0x080
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_4;
					SYSCFG_MAP0_PKGR;    // @0x124
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					SYSCFG_MAP0_UR0;     // @0x300
					SYSCFG_MAP0_UR1;     // @0x304
					SYSCFG_MAP0_UR2;     // @0x308
					SYSCFG_MAP0_UR3;     // @0x30c
					SYSCFG_MAP0_UR4;     // @0x310
					SYSCFG_MAP0_UR5;     // @0x314
					SYSCFG_MAP0_UR6;     // @0x318
					SYSCFG_MAP0_UR7;     // @0x31c
					SYSCFG_MAP0_UR8;     // @0x320
					SYSCFG_MAP0_UR9;     // @0x324
					SYSCFG_MAP0_UR10;    // @0x328
					SYSCFG_MAP0_UR11;    // @0x32c
					SYSCFG_MAP0_UR12;    // @0x330
					SYSCFG_MAP0_UR13;    // @0x334
					SYSCFG_MAP0_UR14;    // @0x338
					SYSCFG_MAP0_UR15;    // @0x33c
					SYSCFG_MAP0_UR16;    // @0x340
					SYSCFG_MAP0_UR17;    // @0x344
				};
				struct
				{
					SYSCFG_MAP1_MEMRMP;  // @0x000
					SYSCFG_MAP1_RCR;     // @0x004
					__SOOL_PERIPH_PADDING_16;
					SYSCFG_MAP1_SCSR;    // @0x018
					SYSCFG_MAP1_CFGR2;   // @0x01c
					SYSCFG_MAP1_CCCSR;   // @0x020
					SYSCFG_MAP1_CCVR;    // @0x024
					SYSCFG_MAP1_SWPR2;   // @0x028
					SYSCFG_MAP1_CFGR;    // @0x02c
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					SYSCFG_MAP2_PMCR;    // @0x004
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					SYSCFG_MAP2_CFGR3;   // @0x020
					SYSCFG_MAP2_SKR;     // @0x024
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_32;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					SYSCFG_MAP3_CFGR2;   // @0x004
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					SYSCFG_MAP3_SWPR;    // @0x020
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_4;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					SYSCFG_MAP4_CFGR1;   // @0x004
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_64;
				};
			};
			private:
			SYSCFG() = delete;
			public:
				void enable_clock() volatile;
				void disable_clock() volatile;
				bool is_clock_enabled() const volatile;
			
			#if defined(STM32L0) || defined(STM32L4) || defined(STM32L4P)
				void enable_sleep_clock() const volatile;
				void disable_sleep_clock() volatile;
				bool is_sleep_clock_enabled() const volatile;
			#endif
			
			#if defined(STM32F2) || defined(STM32F4) || defined(STM32F7) || defined(STM32L1)
				void enable_low_power_clock() volatile;
				void disable_low_power_clock() volatile;
				bool is_low_power_clock_enabled() const volatile;
			#endif
			
		};
		
//endregion
//region instances
		#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define SYSCFG_BASE_ADDR ((uint32_t)0x40010000U)
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define SYSCFG_BASE_ADDR ((uint32_t)0x40013800U)
#endif

#if defined(STM32H7     ) 
#define SYSCFG_BASE_ADDR ((uint32_t)0x58000400U)
#endif

#ifdef SYSCFG_BASE_ADDR
volatile class SYSCFG * const SYSCFG = reinterpret_cast<class SYSCFG* const>(SYSCFG_BASE_ADDR);
#endif
//endregion
//region peripheral-definition
		
		#if defined(STM32F0)
		inline void SYSCFG::enable_clock() volatile { RCC->APB2ENR.SYSCFGCOMPEN = 1; }
		inline void SYSCFG::disable_clock() volatile { RCC->APB2ENR.SYSCFGCOMPEN = 0; }
		inline bool SYSCFG::is_clock_enabled() const volatile { return RCC->APB2ENR.SYSCFGCOMPEN; }
		
		#elif defined(STM32F2) || defined(STM32F4) || defined(STM32F7)
		inline void SYSCFG::enable_clock() volatile { RCC->APB2ENR.SYSCFGEN = 1; }
		inline void SYSCFG::disable_clock() volatile { RCC->APB2ENR.SYSCFGEN = 0; }
		inline bool SYSCFG::is_clock_enabled() const volatile { return RCC->APB2ENR.SYSCFGEN; }
		
		#elif defined(STM32F3) || defined(STM32L0) || defined(STM32L1) || defined(STM32L4) || defined(STM32L4P)
		inline void SYSCFG::enable_clock() volatile { RCC->APB2ENR.SYSCFGEN = 1; }
		inline void SYSCFG::disable_clock() volatile { RCC->APB2ENR.SYSCFGEN = 0; }
		inline bool SYSCFG::is_clock_enabled() const volatile { return RCC->APB2ENR.SYSCFGEN; }
		
		#elif defined(STM32H7)
		inline void SYSCFG::enable_clock() volatile { RCC->APB4ENR.SYSCFGEN = 1; }
		inline void SYSCFG::disable_clock() volatile { RCC->APB4ENR.SYSCFGEN = 0; }
		inline bool SYSCFG::is_clock_enabled() const volatile { return RCC->APB4ENR.SYSCFGEN; }
		inline void SYSCFG::enable_low_power_clock() volatile { RCC->APB4LPENR.SYSCFGLPEN = 1; }
		inline void SYSCFG::disable_low_power_clock() volatile { RCC->APB4LPENR.SYSCFGLPEN = 0; }
		inline bool SYSCFG::is_low_power_clock_enabled() const volatile { RCC->APB4LPENR.SYSCFGLPEN; }
		
		#endif
		
		#if defined(STM32L0) || defined(STM32L4) || defined(STM32L4P)
		inline void SYSCFG::enable_sleep_clock() volatile { RCC->APB2SMENR.SYSCFGSMENR = 1; }
		inline void SYSCFG::disable_sleep_clock() volatile { RCC->APB2SMENR.SYSCFGSMENR = 1; }
		inline bool SYSCFG::is_sleep_clock_enabled() const volatile { return RCC->APB2SMENR.SYSCFGSMENR; }
		#endif
		
		#if defined(STM32F2) || defined(STM32F4) || defined(STM32F7) || defined(STM32L1)
		inline void SYSCFG::enable_low_power_clock() volatile { RCC->APB2LPENR.SYSCFGLPEN = 1; }
		inline void SYSCFG::disable_low_power_clock() volatile { RCC->APB2LPENR.SYSCFGLPEN = 0; }
		inline bool SYSCFG::is_low_power_clock_enabled() const volatile { RCC->APB2LPENR.SYSCFGLPEN; }
		#endif
		
		
//endregion
	};
};
//region undef
#undef SYSCFG_MEMRMP_1_SWP_FB
#undef SYSCFG_PMC_0_I2C4_FMP
#undef SYSCFG_MAP0_CBR
#undef SYSCFG_MAP2_PMCR
#undef SYSCFG_MAP1_CCCSR
#undef SYSCFG_MAP1_CCVR
#undef SYSCFG_MAP0_CCCR
#undef SYSCFG_MAP0_PKGR
#undef SYSCFG_MAP0_UR0
#undef SYSCFG_MAP0_UR1
#undef SYSCFG_MAP0_UR2
#undef SYSCFG_MAP0_UR3
#undef SYSCFG_MAP0_UR4
#undef SYSCFG_MAP0_UR5
#undef SYSCFG_MAP0_UR6
#undef SYSCFG_MAP0_UR7
#undef SYSCFG_MAP0_UR8
#undef SYSCFG_MAP0_UR9
#undef SYSCFG_MAP0_UR10
#undef SYSCFG_MAP0_UR11
#undef SYSCFG_MAP0_UR12
#undef SYSCFG_MAP0_UR13
#undef SYSCFG_MAP0_UR14
#undef SYSCFG_MAP0_UR15
#undef SYSCFG_MAP0_UR16
#undef SYSCFG_MAP0_UR17
#undef SYSCFG_CFGR1_0_MEM_MODE
#undef SYSCFG_CFGR1_0_UFB
#undef SYSCFG_CFGR2_0_I2C3_FMP
#undef SYSCFG_CFGR1_0_PA11_PA12_RMP
#undef SYSCFG_CFGR1_0_USB_IT_RMP
#undef SYSCFG_CFGR1_0_IR_MOD
#undef SYSCFG_MAP0_IT_LINE_SR
#undef SYSCFG_CFGR1_0_DMA_RMP
#undef SYSCFG_CFGR1_0_TIM16_DMA_RMP2
#undef SYSCFG_CFGR1_0_TIM17_DMA_RMP2
#undef SYSCFG_CFGR1_0_SPI2_DMA_RMP
#undef SYSCFG_CFGR1_0_USART2_DMA_RMP
#undef SYSCFG_CFGR1_0_I2C1_DMA_RMP
#undef SYSCFG_CFGR1_0_TIM1_DMA_RMP
#undef SYSCFG_CFGR1_0_TIM2_DMA_RMP
#undef SYSCFG_CFGR1_0_TIM3_DMA_RMP
#undef SYSCFG_CFGR1_0_DAC2Ch1_DMA_RMP
#undef SYSCFG_CFGR3_0_DMA_RMP
#undef SYSCFG_MAP0_CFGR3
#undef SYSCFG_CFGR1_0_I2C_FMP_PB6
#undef SYSCFG_CFGR1_0_I2C_FMP_PB7
#undef SYSCFG_CFGR1_0_I2C_FMP_PB8
#undef SYSCFG_CFGR1_0_I2C_FMP_PB9
#undef SYSCFG_CFGR2_0_SRAM_PEF
#undef SYSCFG_CFGR1_0_I2C_FMP_I2C1
#undef SYSCFG_CFGR1_0_I2C_FMP_I2C2
#undef SYSCFG_CFGR1_0_I2C_FMP_PA9
#undef SYSCFG_CFGR1_0_I2C_FMP_PA10
#undef SYSCFG_CFGR1_0_USART3_DMA_RMP
#undef SYSCFG_CFGR1_1_MEM_MODE
#undef SYSCFG_CFGR1_1_TIM1_ITR3_RMP
#undef SYSCFG_CFGR1_1_DAC1_TRIG1_RMP
#undef SYSCFG_CFGR1_1_ENCODER_MODE
#undef SYSCFG_CFGR1_1_ADC_DMA_RMP
#undef SYSCFG_CFGR1_1_USART1TX_DMA_RMP
#undef SYSCFG_CFGR1_1_USART1RX_DMA_RMP
#undef SYSCFG_CFGR1_1_TIM16_DMA_RMP
#undef SYSCFG_CFGR1_1_TIM17_DMA_RMP
#undef SYSCFG_CFGR1_1_TIM6DAC1Ch1_DMA_RMP
#undef SYSCFG_CFGR1_1_FPU_IE
#undef SYSCFG_CFGR1_1_TIM7DAC1Ch2_DMA_RMP
#undef SYSCFG_CFGR1_1_TIM18DAC2Ch1_DMA_RMP
#undef SYSCFG_CFGR1_2_VBAT
#undef SYSCFG_CFGR1_1_I2C_PB6_FMP
#undef SYSCFG_CFGR1_1_I2C_PB7_FMP
#undef SYSCFG_CFGR1_1_I2C1_FMP
#undef SYSCFG_CFGR1_1_I2C_PB8_FMP
#undef SYSCFG_CFGR1_1_I2C_PB9_FMP
#undef SYSCFG_CFGR1_1_I2C2_FMP
#undef SYSCFG_CFGR1_1_I2C3_FMP
#undef SYSCFG_CFGR1_2_FWDIS
#undef SYSCFG_CFGR1_2_I2C3_FMP
#undef SYSCFG_CFGR2_0_ECCL
#undef SYSCFG_CFGR2_2_CLL
#undef SYSCFG_MAP4_CFGR1
#undef SYSCFG_MAP1_SCSR
#undef SYSCFG_MAP3_SWPR
#undef SYSCFG_MAP2_SKR
#undef SYSCFG_CFGR1_2_ADC24_DMA_RMP
#undef SYSCFG_CFGR1_2_DMA_RMP
#undef SYSCFG_CFGR1_2_I2C4_FMP
#undef SYSCFG_CFGR1_3_BOOT_MODE
#undef SYSCFG_CFGR2_0_I2C_PB7_FMP
#undef SYSCFG_CFGR2_0_I2C_PB8_FMP
#undef SYSCFG_CFGR2_0_I2C_PB9_FMP
#undef SYSCFG_CFGR2_0_I2C1_FMP
#undef SYSCFG_CFGR2_1_FWDISEN
#undef SYSCFG_CFGR2_2_I2C_PB6_FMP
#undef SYSCFG_CFGR3_0_ENBUFLP_VREFINT_COMP
#undef SYSCFG_CFGR3_0_VREFINT_RDYF
#undef SYSCFG_CFGR3_0_REF_LOCK
#undef SYSCFG_MAP3_CFGR2
#undef SYSCFG_MAP2_CFGR3
#undef SYSCFG_CFGR1_3_DMA_RMP
#undef SYSCFG_CFGR2_0_LOCKUP_LOCK
#undef SYSCFG_CFGR2_0_SRAM_PARITY_LOCK
#undef SYSCFG_CFGR2_0_PVD_LOCK
#undef SYSCFG_CFGR2_0_BYP_ADDR_PAR
#undef SYSCFG_CFGR2_0_I2C2_FMP
#undef SYSCFG_CFGR2_1_CAPA
#undef SYSCFG_CFGR2_1_SRAM_PE
#undef SYSCFG_CFGR2_2_CAPA
#undef SYSCFG_CFGR3_0_ENREF_HSI48
#undef SYSCFG_CFGR3_0_TRIGGER_RMP
#undef SYSCFG_CFGR3_1_DAC1_TRG3_RMP
#undef SYSCFG_CFGR3_1_DAC1_TRG5_RMP
#undef SYSCFG_RCR_PAGE8
#undef SYSCFG_RCR_PAGE9
#undef SYSCFG_RCR_PAGE10
#undef SYSCFG_RCR_PAGE11
#undef SYSCFG_RCR_PAGE12
#undef SYSCFG_RCR_PAGE13
#undef SYSCFG_RCR_PAGE14
#undef SYSCFG_RCR_PAGE15
#undef SYSCFG_MAP0_CFGR4
#undef SYSCFG_MAP0_CMPCR
#undef SYSCFG_IT_LINE_SR_SR_PVDOUT
#undef SYSCFG_MAP0_MCHDLYCR
#undef SYSCFG_MAP1_MEMRMP
#undef SYSCFG_MAP0_PMC
#undef SYSCFG_MEMRMP_0_MEM_MODE
#undef SYSCFG_MEMRMP_0_UFB_MODE
#undef SYSCFG_MEMRMP_0_SWP_FMC
#undef SYSCFG_PMC_0_ADC2DC2
#undef SYSCFG_PMC_0_ADC3DC2
#undef SYSCFG_PMC_1_ADCxDC2
#undef SYSCFG_MEMRMP_1_MEM_MODE
#undef SYSCFG_MEMRMP_2_MEM_BOOT
#undef SYSCFG_MEMRMP_2_BOOT_MODE
#undef SYSCFG_PMC_1_USB_PU
#undef SYSCFG_PMC_0_I2C1_FMP
#undef SYSCFG_PMC_0_I2C2_FMP
#undef SYSCFG_PMC_0_I2C3_FMP
#undef SYSCFG_PMC_0_I2C_PB6_FMP
#undef SYSCFG_PMC_0_I2C_PB7_FMP
#undef SYSCFG_PMC_0_I2C_PB8_FMP
#undef SYSCFG_PMC_0_I2C_PB9_FMP
#undef SYSCFG_PMC_0_ADC1DC2
#undef SYSCFG_PMC_0_MII_RMII_SEL
#undef SYSCFG_PMC_1_LCD_CAPA
#undef SYSCFG_MAP1_RCR
#undef SYSCFG_RCR_PAGE4
#undef SYSCFG_RCR_PAGE5
#undef SYSCFG_RCR_PAGE6
#undef SYSCFG_RCR_PAGE7
#undef SYSCFG_SWPR_PAGE16
#undef SYSCFG_SWPR_PAGE17
#undef SYSCFG_SWPR_PAGE18
#undef SYSCFG_SWPR_PAGE19
#undef SYSCFG_SWPR_PAGE20
#undef SYSCFG_SWPR_PAGE21
#undef SYSCFG_SWPR_PAGE22
#undef SYSCFG_SWPR_PAGE23
#undef SYSCFG_SWPR_PAGE24
#undef SYSCFG_SWPR_PAGE25
#undef SYSCFG_SWPR_PAGE26
#undef SYSCFG_SWPR_PAGE27
#undef SYSCFG_SWPR_PAGE28
#undef SYSCFG_SWPR_PAGE29
#undef SYSCFG_SWPR_PAGE30
#undef SYSCFG_SWPR_PAGE31
#undef SYSCFG_MAP1_SWPR2
#undef SYSCFG_MAP0_CFGR1
#undef SYSCFG_MAP0_CFGR2
#undef SYSCFG_MAP1_CFGR2
#undef SYSCFG_MAP0_CFGR
#undef SYSCFG_MAP1_CFGR

//endregion
#endif // chips selection
#endif //__SOOL_SYSCFG_H
