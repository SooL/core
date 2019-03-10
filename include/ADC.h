/**
 * Copyright (c) 2018-2019 FAUCHER Julien & FRANCE Loic
 * This file is part of SooL.
 *
 *  SooL is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation, either version 3
 *  of the License, or (at your option) any later version.
 *
 *  SooL is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with SooL. If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef __SOOL_ADC_H
#define __SOOL_ADC_H

#include "lib_utils/peripheral_include.h"
#include "RCC.h"

//region defines

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_AWD2CR
#define ADC_AWD3CR
#define ADC_CFGR
#define ADC_CR_0_JADSTART    JADSTART             // 1 bits @ 3
#define ADC_CR_0_JADSTP      JADSTP               // 1 bits @ 5
#define ADC_CR_0_ADCALDIF    ADCALDIF             // 1 bits @ 30
#define ADC_DIFSEL
#define ADC_IER_1_EOSMP      EOSMP                // 1 bits @ 1
#define ADC_IER_1_EOC        EOC                  // 1 bits @ 2
#define ADC_IER_1_OVR        OVR                  // 1 bits @ 4
#define ADC_IER_1_JEOC       JEOC                 // 1 bits @ 5
#define ADC_IER_1_JEOS       JEOS                 // 1 bits @ 6
#define ADC_IER_1_AWD2       AWD2                 // 1 bits @ 8
#define ADC_IER_1_AWD3       AWD3                 // 1 bits @ 9
#define ADC_IER_1_JQOVF      JQOVF                // 1 bits @ 10
#define ADC_IER_2
#define ADC_ISR_0_JEOC       JEOC                 // 1 bits @ 5
#define ADC_ISR_0_JEOS       JEOS                 // 1 bits @ 6
#define ADC_ISR_0_AWD2       AWD2                 // 1 bits @ 8
#define ADC_ISR_0_AWD3       AWD3                 // 1 bits @ 9
#define ADC_ISR_0_JQOVF      JQOVF                // 1 bits @ 10
#define ADC_JSQR_1
#define ADC_OFR1
#define ADC_OFR2
#define ADC_OFR3
#define ADC_OFR4
#define ADC_SMPR1_0_SMP9     SMP9                 // 3 bits @ 27
#define ADC_SMPR1_1_SMP1     SMP1                 // 3 bits @ 3
#define ADC_SMPR1_1_SMP2     SMP2                 // 3 bits @ 6
#define ADC_SMPR1_1_SMP3     SMP3                 // 3 bits @ 9
#define ADC_SMPR1_1_SMP4     SMP4                 // 3 bits @ 12
#define ADC_SMPR1_1_SMP5     SMP5                 // 3 bits @ 15
#define ADC_SMPR1_1_SMP6     SMP6                 // 3 bits @ 18
#define ADC_SMPR1_1_SMP7     SMP7                 // 3 bits @ 21
#define ADC_SMPR1_1_SMP8     SMP8                 // 3 bits @ 24
#define ADC_SMPR1_2_SMP0     SMP0                 // 3 bits @ 0
#define ADC_SQR1_0_SQ4       SQ4                  // 5 bits @ 24
#define ADC_SQR1_1
#define ADC_SQR2_1
#define ADC_SQR3_1
#define ADC_SQR4_0_SQ15      SQ15                 // 5 bits @ 0
#define ADC_SQR4_0_SQ16      SQ16                 // 5 bits @ 6
#define ADC_Common_CCR_1_CKMODE CKMODE               // 2 bits @ 16
#define ADC_Common_MAP2_CCR  typename plugin::CCR_TypeDef CCR
#define ADC1_CCR_0_CKMODE    CKMODE               // 2 bits @ 16
#define ADC12_CCR_0_CKMODE   CKMODE               // 2 bits @ 16
#define ADC34_CCR_0_CKMODE   CKMODE               // 2 bits @ 16
#define ADC_MAP2_CFGR        CFGR_TypeDef CFGR
#define ADC_MAP2_SMPR1       SMPR1_TypeDef SMPR1
#define ADC_MAP2_SMPR2       SMPR2_TypeDef SMPR2
#define ADC_MAP2_JSQR        JSQR_TypeDef JSQR
#define ADC_MAP0_OFR1        OFR1_TypeDef OFR1
#define ADC_MAP0_OFR2        OFR2_TypeDef OFR2
#define ADC_MAP0_OFR3        OFR3_TypeDef OFR3
#define ADC_MAP0_OFR4        OFR4_TypeDef OFR4
#define ADC_MAP2_JDR1        JDR1_TypeDef JDR1
#define ADC_MAP2_JDR2        JDR2_TypeDef JDR2
#define ADC_MAP2_JDR3        JDR3_TypeDef JDR3
#define ADC_MAP2_JDR4        JDR4_TypeDef JDR4
#define ADC_MAP0_AWD2CR      AWD2CR_TypeDef AWD2CR
#define ADC_MAP0_AWD3CR      AWD3CR_TypeDef AWD3CR
#else
#define ADC_CR_0_JADSTART
#define ADC_CR_0_JADSTP
#define ADC_CR_0_ADCALDIF
#define ADC_IER_1_EOSMP
#define ADC_IER_1_EOC
#define ADC_IER_1_OVR
#define ADC_IER_1_JEOC
#define ADC_IER_1_JEOS
#define ADC_IER_1_AWD2
#define ADC_IER_1_AWD3
#define ADC_IER_1_JQOVF
#define ADC_ISR_0_JEOC
#define ADC_ISR_0_JEOS
#define ADC_ISR_0_AWD2
#define ADC_ISR_0_AWD3
#define ADC_ISR_0_JQOVF
#define ADC_SMPR1_0_SMP9
#define ADC_SMPR1_1_SMP1
#define ADC_SMPR1_1_SMP2
#define ADC_SMPR1_1_SMP3
#define ADC_SMPR1_1_SMP4
#define ADC_SMPR1_1_SMP5
#define ADC_SMPR1_1_SMP6
#define ADC_SMPR1_1_SMP7
#define ADC_SMPR1_1_SMP8
#define ADC_SMPR1_2_SMP0
#define ADC_SQR1_0_SQ4
#define ADC_SQR4_0_SQ15
#define ADC_SQR4_0_SQ16
#define ADC_Common_CCR_1_CKMODE
#define ADC_Common_MAP2_CCR __SOOL_PERIPH_PADDING_4
#define ADC1_CCR_0_CKMODE
#define ADC12_CCR_0_CKMODE
#define ADC34_CCR_0_CKMODE
#define ADC_MAP2_CFGR __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_SMPR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_SMPR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JSQR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_OFR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_OFR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_OFR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_OFR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JDR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JDR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JDR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JDR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_AWD2CR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_AWD3CR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_AWD2CR_0
#define ADC_AWD3CR_0
#define ADC_CALFACT_0
#define ADC_CFGR_0_DMAEN     DMAEN                // 1 bits @ 0
#define ADC_CFGR_0_DMACFG    DMACFG               // 1 bits @ 1
#define ADC_CFGR_0_RES       RES                  // 2 bits @ 3
#define ADC_CFGR_0_ALIGN     ALIGN                // 1 bits @ 5
#define ADC_CFGR_0_EXTSEL    EXTSEL               // 4 bits @ 6
#define ADC_DIFSEL_0_DIFSEL  DIFSEL               // 19 bits @ 0
#define ADC_DR_1
#define ADC_IER_0_JEOCIE     JEOCIE               // 1 bits @ 5
#define ADC_IER_0_JEOSIE     JEOSIE               // 1 bits @ 6
#define ADC_IER_0_AWD2IE     AWD2IE               // 1 bits @ 8
#define ADC_IER_0_AWD3IE     AWD3IE               // 1 bits @ 9
#define ADC_IER_0_JQOVFIE    JQOVFIE              // 1 bits @ 10
#define ADC_JSQR_1_JEXTSEL   JEXTSEL              // 4 bits @ 2
#define ADC_JSQR_1_JEXTEN    JEXTEN               // 2 bits @ 6
#define ADC_JSQR_1_JSQ1      JSQ1                 // 5 bits @ 8
#define ADC_JSQR_1_JSQ2      JSQ2                 // 5 bits @ 14
#define ADC_JSQR_1_JSQ3      JSQ3                 // 5 bits @ 20
#define ADC_JSQR_1_JSQ4      JSQ4                 // 5 bits @ 26
#define ADC_OFR1_0_OFFSET1   OFFSET1              // 12 bits @ 0
#define ADC_OFR2_0_OFFSET2   OFFSET2              // 12 bits @ 0
#define ADC_OFR3_0_OFFSET3   OFFSET3              // 12 bits @ 0
#define ADC_OFR4_0_OFFSET4   OFFSET4              // 12 bits @ 0
#define ADC_TR1
#define ADC_TR2
#define ADC_TR3
#define ADC_MAP2_TR1         TR1_TypeDef TR1
#define ADC_MAP1_TR2         TR2_TypeDef TR2
#define ADC_MAP2_TR3         TR3_TypeDef TR3
#define ADC_MAP0_DIFSEL      DIFSEL_TypeDef DIFSEL
#else
#define ADC_CFGR_0_DMAEN
#define ADC_CFGR_0_DMACFG
#define ADC_CFGR_0_RES
#define ADC_CFGR_0_ALIGN
#define ADC_CFGR_0_EXTSEL
#define ADC_DIFSEL_0_DIFSEL
#define ADC_IER_0_JEOCIE
#define ADC_IER_0_JEOSIE
#define ADC_IER_0_AWD2IE
#define ADC_IER_0_AWD3IE
#define ADC_IER_0_JQOVFIE
#define ADC_JSQR_1_JEXTSEL
#define ADC_JSQR_1_JEXTEN
#define ADC_JSQR_1_JSQ1
#define ADC_JSQR_1_JSQ2
#define ADC_JSQR_1_JSQ3
#define ADC_JSQR_1_JSQ4
#define ADC_OFR1_0_OFFSET1
#define ADC_OFR2_0_OFFSET2
#define ADC_OFR3_0_OFFSET3
#define ADC_OFR4_0_OFFSET4
#define ADC_MAP2_TR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_TR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_TR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_DIFSEL __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32H7     ) 
#define ADC_AWD2CR_1
#define ADC_AWD3CR_1
#define ADC_CALFACT_1
#define ADC_CALFACT2
#define ADC_CFGR_1
#define ADC_CFGR2_0_RSHIFT1  RSHIFT1              // 1 bits @ 11
#define ADC_CFGR2_0_RSHIFT2  RSHIFT2              // 1 bits @ 12
#define ADC_CFGR2_0_RSHIFT3  RSHIFT3              // 1 bits @ 13
#define ADC_CFGR2_0_RSHIFT4  RSHIFT4              // 1 bits @ 14
#define ADC_CFGR2_0_OSR      OSR                  // 10 bits @ 16
#define ADC_CFGR2_1_LSHIFT   LSHIFT               // 4 bits @ 28
#define ADC_CR_0_BOOST       BOOST                // 1 bits @ 8
#define ADC_CR_0_ADCALLIN    ADCALLIN             // 1 bits @ 16
#define ADC_CR_0_LINCALRDYW1 LINCALRDYW1          // 1 bits @ 22
#define ADC_CR_0_LINCALRDYW2 LINCALRDYW2          // 1 bits @ 23
#define ADC_CR_0_LINCALRDYW3 LINCALRDYW3          // 1 bits @ 24
#define ADC_CR_0_LINCALRDYW4 LINCALRDYW4          // 1 bits @ 25
#define ADC_CR_0_LINCALRDYW5 LINCALRDYW5          // 1 bits @ 26
#define ADC_CR_0_LINCALRDYW6 LINCALRDYW6          // 1 bits @ 27
#define ADC_DIFSEL_0_DIFSEL19 DIFSEL19             // 1 bits @ 19
#define ADC_DIFSEL_2
#define ADC_DR_2
#define ADC_HTR1
#define ADC_HTR2
#define ADC_HTR3
#define ADC_JDR1_1
#define ADC_JDR2_1
#define ADC_JDR3_1
#define ADC_JDR4_1
#define ADC_JSQR_2
#define ADC_LTR1
#define ADC_LTR2
#define ADC_LTR3
#define ADC_OFR1_0_SSATE     SSATE                // 1 bits @ 31
#define ADC_OFR1_1
#define ADC_OFR2_0_SSATE     SSATE                // 1 bits @ 31
#define ADC_OFR2_1
#define ADC_OFR3_0_SSATE     SSATE                // 1 bits @ 31
#define ADC_OFR3_1
#define ADC_OFR4_0_SSATE     SSATE                // 1 bits @ 31
#define ADC_OFR4_1
#define ADC_PCSEL
#define ADC_Common_CCR_2
#define ADC_Common_CDR2
#define ADC_Common_MAP0_CDR2 typename plugin::CDR2_TypeDef CDR2
#define ADC1_CCR_2
#define ADC12_CCR_2
#define ADC34_CCR_2
#define ADC123_CSR_0_AWD1_MST AWD1_MST             // 1 bits @ 7
#define ADC123_CSR_0_AWD2_MST AWD2_MST             // 1 bits @ 8
#define ADC123_CSR_0_AWD3_MST AWD3_MST             // 1 bits @ 9
#define ADC123_CSR_0_AWD1_SLV AWD1_SLV             // 1 bits @ 23
#define ADC123_CSR_0_AWD2_SLV AWD2_SLV             // 1 bits @ 24
#define ADC123_CSR_0_AWD3_SLV AWD3_SLV             // 1 bits @ 25
#define ADC_MAP1_PCSEL       PCSEL_TypeDef PCSEL
#define ADC_MAP3_LTR1        LTR1_TypeDef LTR1
#define ADC_MAP2_HTR1        HTR1_TypeDef HTR1
#define ADC_MAP1_LTR2        LTR2_TypeDef LTR2
#define ADC_MAP1_HTR2        HTR2_TypeDef HTR2
#define ADC_MAP0_LTR3        LTR3_TypeDef LTR3
#define ADC_MAP0_HTR3        HTR3_TypeDef HTR3
#define ADC_MAP1_DIFSEL      DIFSEL_TypeDef DIFSEL
#define ADC_MAP1_CALFACT     CALFACT_TypeDef CALFACT
#define ADC_MAP0_CALFACT2    CALFACT2_TypeDef CALFACT2
#else
#define ADC_CFGR2_0_RSHIFT1
#define ADC_CFGR2_0_RSHIFT2
#define ADC_CFGR2_0_RSHIFT3
#define ADC_CFGR2_0_RSHIFT4
#define ADC_CFGR2_0_OSR
#define ADC_CFGR2_1_LSHIFT
#define ADC_CR_0_BOOST
#define ADC_CR_0_ADCALLIN
#define ADC_CR_0_LINCALRDYW1
#define ADC_CR_0_LINCALRDYW2
#define ADC_CR_0_LINCALRDYW3
#define ADC_CR_0_LINCALRDYW4
#define ADC_CR_0_LINCALRDYW5
#define ADC_CR_0_LINCALRDYW6
#define ADC_DIFSEL_0_DIFSEL19
#define ADC_OFR1_0_SSATE
#define ADC_OFR2_0_SSATE
#define ADC_OFR3_0_SSATE
#define ADC_OFR4_0_SSATE
#define ADC_Common_MAP0_CDR2 __SOOL_PERIPH_PADDING_4
#define ADC123_CSR_0_AWD1_MST
#define ADC123_CSR_0_AWD2_MST
#define ADC123_CSR_0_AWD3_MST
#define ADC123_CSR_0_AWD1_SLV
#define ADC123_CSR_0_AWD2_SLV
#define ADC123_CSR_0_AWD3_SLV
#define ADC_MAP1_PCSEL __SOOL_PERIPH_PADDING_4
#define ADC_MAP3_LTR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_HTR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_LTR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_HTR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_LTR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_HTR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_DIFSEL __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_CALFACT __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_CALFACT2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_CALFACT
#endif

#if defined(STM32L0     ) 
#define ADC_CALFACT_2
#define ADC_CFGR2_1_OVSE     OVSE                 // 1 bits @ 0
#define ADC_CFGR2_1_TOVS     TOVS                 // 1 bits @ 9
#define ADC_IER_0_EOCALIE    EOCALIE              // 1 bits @ 11
#define ADC_ISR_0_EOCAL      EOCAL                // 1 bits @ 11
#define ADC_SMPR_1
#define ADC_Common_CCR_0_LFMEN LFMEN                // 1 bits @ 25
#define ADC1_CCR_0_LFMEN     LFMEN                // 1 bits @ 25
#define ADC12_CCR_0_LFMEN    LFMEN                // 1 bits @ 25
#define ADC34_CCR_0_LFMEN    LFMEN                // 1 bits @ 25
#else
#define ADC_CFGR2_1_OVSE
#define ADC_CFGR2_1_TOVS
#define ADC_IER_0_EOCALIE
#define ADC_ISR_0_EOCAL
#define ADC_Common_CCR_0_LFMEN
#define ADC1_CCR_0_LFMEN
#define ADC12_CCR_0_LFMEN
#define ADC34_CCR_0_LFMEN
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define ADC_CFGR_0_DFSDMCFG  DFSDMCFG             // 1 bits @ 2
#define ADC_SMPR1_0_SMPPLUS  SMPPLUS              // 1 bits @ 31
#else
#define ADC_CFGR_0_DFSDMCFG
#define ADC_SMPR1_0_SMPPLUS
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) 
#define ADC_CFGR_0_AUTOFF    AUTOFF               // 1 bits @ 15
#define ADC_CR_0_ADVREGEN    ADVREGEN             // 2 bits @ 28
#else
#define ADC_CFGR_0_AUTOFF
#define ADC_CR_0_ADVREGEN
#endif

#if defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_CFGR_0_JQDIS     JQDIS                // 1 bits @ 31
#define ADC_CFGR2_0_ROVSE    ROVSE                // 1 bits @ 0
#define ADC_CFGR2_0_JOVSE    JOVSE                // 1 bits @ 1
#define ADC_CFGR2_0_TROVS    TROVS                // 1 bits @ 9
#define ADC_CFGR2_0_ROVSM    ROVSM                // 1 bits @ 10
#define ADC_CR_1_DEEPPWD     DEEPPWD              // 1 bits @ 29
#else
#define ADC_CFGR_0_JQDIS
#define ADC_CFGR2_0_ROVSE
#define ADC_CFGR2_0_JOVSE
#define ADC_CFGR2_0_TROVS
#define ADC_CFGR2_0_ROVSM
#define ADC_CR_1_DEEPPWD
#endif

#if defined(STM32F0     ) || defined(STM32L0     ) 
#define ADC_CFGR1
#define ADC_CFGR2_0_CKMODE   CKMODE               // 2 bits @ 30
#define ADC_CHSELR
#define ADC_IER_1_EOSEQIE    EOSEQIE              // 1 bits @ 3
#define ADC_IER_1_AWDIE      AWDIE                // 1 bits @ 7
#define ADC_ISR_1_EOSEQ      EOSEQ                // 1 bits @ 3
#define ADC_ISR_1_AWD        AWD                  // 1 bits @ 7
#define ADC_SMPR
#define ADC_TR
#define ADC_Common_MAP0_CCR  typename plugin::CCR_TypeDef CCR
#define ADC_MAP0_CFGR1       CFGR1_TypeDef CFGR1
#define ADC_MAP0_SMPR        SMPR_TypeDef SMPR
#define ADC_MAP0_TR          TR_TypeDef TR
#define ADC_MAP0_CHSELR      CHSELR_TypeDef CHSELR
#else
#define ADC_CFGR2_0_CKMODE
#define ADC_IER_1_EOSEQIE
#define ADC_IER_1_AWDIE
#define ADC_ISR_1_EOSEQ
#define ADC_ISR_1_AWD
#define ADC_Common_MAP0_CCR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_CFGR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SMPR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_TR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_CHSELR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) 
#define ADC_CFGR1_0_AWD1SGL  AWD1SGL              // 1 bits @ 22
#define ADC_CFGR1_0_AWD1EN   AWD1EN               // 1 bits @ 23
#define ADC_CFGR1_0_AWD1CH   AWD1CH               // 5 bits @ 26
#define ADC_CFGR1_1_AUTDLY   AUTDLY               // 1 bits @ 14
#define ADC_HTR_0
#define ADC_SMPR1_0_SMPR     SMPR                 // 3 bits @ 0
#else
#define ADC_CFGR1_0_AWD1SGL
#define ADC_CFGR1_0_AWD1EN
#define ADC_CFGR1_0_AWD1CH
#define ADC_CFGR1_1_AUTDLY
#define ADC_SMPR1_0_SMPR
#endif

#if defined(STM32F0     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define ADC_CFGR2
#define ADC_MAP0_CFGR2       CFGR2_TypeDef CFGR2
#else
#define ADC_MAP0_CFGR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_CFGR2_0_OVSR     OVSR                 // 3 bits @ 2
#else
#define ADC_CFGR2_0_OVSR
#endif

#if defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_CFGR2_0_OVSS     OVSS                 // 4 bits @ 5
#define ADC_CR_1
#define ADC_Common_CCR_0_PRESC PRESC                // 4 bits @ 18
#define ADC1_CCR_0_PRESC     PRESC                // 4 bits @ 18
#define ADC12_CCR_0_PRESC    PRESC                // 4 bits @ 18
#define ADC34_CCR_0_PRESC    PRESC                // 4 bits @ 18
#else
#define ADC_CFGR2_0_OVSS
#define ADC_Common_CCR_0_PRESC
#define ADC1_CCR_0_PRESC
#define ADC12_CCR_0_PRESC
#define ADC34_CCR_0_PRESC
#endif

#if defined(STM32H7     ) || defined(STM32L0     ) 
#define ADC_CFGR2_1
#endif

#if defined(STM32F0     ) || defined(STM32L053xx ) || defined(STM32L063xx ) || defined(STM32L073xx ) ||\
    defined(STM32L083xx ) 
#define ADC_CHSELR_1_CHSEL16 CHSEL16              // 1 bits @ 16
#else
#define ADC_CHSELR_1_CHSEL16
#endif

#if defined(STM32F0     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define ADC_CR
#define ADC_IER
#define ADC_ISR
#define ADC_Common_CCR_0_VREFEN VREFEN               // 1 bits @ 22
#define ADC_Common_CCR_0_TSEN TSEN                 // 1 bits @ 23
#define ADC1_CCR_0_VREFEN    VREFEN               // 1 bits @ 22
#define ADC1_CCR_0_TSEN      TSEN                 // 1 bits @ 23
#define ADC12_CCR_0_VREFEN   VREFEN               // 1 bits @ 22
#define ADC12_CCR_0_TSEN     TSEN                 // 1 bits @ 23
#define ADC34_CCR_0_VREFEN   VREFEN               // 1 bits @ 22
#define ADC34_CCR_0_TSEN     TSEN                 // 1 bits @ 23
#define ADC_MAP0_ISR         ISR_TypeDef ISR
#define ADC_MAP0_IER         IER_TypeDef IER
#define ADC_MAP0_CR          CR_TypeDef CR
#define ADC_MAP0_DR          DR_TypeDef DR
#else
#define ADC_Common_CCR_0_VREFEN
#define ADC_Common_CCR_0_TSEN
#define ADC1_CCR_0_VREFEN
#define ADC1_CCR_0_TSEN
#define ADC12_CCR_0_VREFEN
#define ADC12_CCR_0_TSEN
#define ADC34_CCR_0_VREFEN
#define ADC34_CCR_0_TSEN
#define ADC_MAP0_ISR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_IER __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_CR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_DR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     ) 
#define ADC_CR1
#define ADC_CR2
#define ADC_HTR
#define ADC_JOFR1
#define ADC_JOFR2
#define ADC_JOFR3
#define ADC_JOFR4
#define ADC_JSQR_0
#define ADC_LTR
#define ADC_SR
#define ADC_MAP1_SR          SR_TypeDef SR
#define ADC_MAP1_CR1         CR1_TypeDef CR1
#define ADC_MAP1_CR2         CR2_TypeDef CR2
#define ADC_MAP1_SMPR1       SMPR1_TypeDef SMPR1
#define ADC_MAP1_SMPR2       SMPR2_TypeDef SMPR2
#else
#define ADC_MAP1_SR __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_CR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_CR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_SMPR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_SMPR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F1     ) 
#define ADC_CR1_0_EOSIE      EOSIE                // 1 bits @ 5
#define ADC_SR_0_EOS         EOS                  // 1 bits @ 1
#else
#define ADC_CR1_0_EOSIE
#define ADC_SR_0_EOS
#endif

#if defined(STM32F1     ) || defined(STM32L1     ) 
#define ADC_CR1_0_JEOSIE     JEOSIE               // 1 bits @ 7
#define ADC_SR_0_JEOS        JEOS                 // 1 bits @ 2
#else
#define ADC_CR1_0_JEOSIE
#define ADC_SR_0_JEOS
#endif

#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC ) 
#define ADC_CR1_0_DUALMOD    DUALMOD              // 4 bits @ 16
#else
#define ADC_CR1_0_DUALMOD
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     ) 
#define ADC_CR1_0_RES        RES                  // 2 bits @ 24
#define ADC_CR1_0_OVRIE      OVRIE                // 1 bits @ 26
#define ADC_CR2_0_DDS        DDS                  // 1 bits @ 9
#define ADC_CR2_0_EOCS       EOCS                 // 1 bits @ 10
#define ADC_CR2_0_EXTEN      EXTEN                // 2 bits @ 28
#define ADC_CR2_1
#define ADC_SR_0_OVR         OVR                  // 1 bits @ 5
#define ADC_Common_CCR_0_ADCPRE ADCPRE               // 2 bits @ 16
#define ADC_Common_CCR_1_TSVREFE TSVREFE              // 1 bits @ 23
#define ADC_Common_CSR_0_AWD1 AWD1                 // 1 bits @ 0
#define ADC_Common_CSR_0_EOC1 EOC1                 // 1 bits @ 1
#define ADC_Common_CSR_0_JEOC1 JEOC1                // 1 bits @ 2
#define ADC_Common_CSR_0_JSTRT1 JSTRT1               // 1 bits @ 3
#define ADC_Common_CSR_0_STRT1 STRT1                // 1 bits @ 4
#define ADC_Common_CSR_0_OVR1 OVR1                 // 1 bits @ 5
#define ADC_Common_MAP1_CCR  typename plugin::CCR_TypeDef CCR
#define ADC1_CSR_1_AWD1      AWD1                 // 1 bits @ 0
#define ADC1_CSR_1_EOC1      EOC1                 // 1 bits @ 1
#define ADC1_CSR_1_JEOC1     JEOC1                // 1 bits @ 2
#define ADC1_CSR_1_JSTRT1    JSTRT1               // 1 bits @ 3
#define ADC1_CSR_1_STRT1     STRT1                // 1 bits @ 4
#define ADC1_CSR_1_OVR1      OVR1                 // 1 bits @ 5
#define ADC1_CCR_1_ADCPRE    ADCPRE               // 2 bits @ 16
#define ADC1_CCR_1_TSVREFE   TSVREFE              // 1 bits @ 23
#define ADC12_CSR_1_AWD1     AWD1                 // 1 bits @ 0
#define ADC12_CSR_1_EOC1     EOC1                 // 1 bits @ 1
#define ADC12_CSR_1_JEOC1    JEOC1                // 1 bits @ 2
#define ADC12_CSR_1_JSTRT1   JSTRT1               // 1 bits @ 3
#define ADC12_CSR_1_STRT1    STRT1                // 1 bits @ 4
#define ADC12_CSR_1_OVR1     OVR1                 // 1 bits @ 5
#define ADC12_CCR_1_ADCPRE   ADCPRE               // 2 bits @ 16
#define ADC12_CCR_1_TSVREFE  TSVREFE              // 1 bits @ 23
#define ADC34_CSR_1_AWD1     AWD1                 // 1 bits @ 0
#define ADC34_CSR_1_EOC1     EOC1                 // 1 bits @ 1
#define ADC34_CSR_1_JEOC1    JEOC1                // 1 bits @ 2
#define ADC34_CSR_1_JSTRT1   JSTRT1               // 1 bits @ 3
#define ADC34_CSR_1_STRT1    STRT1                // 1 bits @ 4
#define ADC34_CSR_1_OVR1     OVR1                 // 1 bits @ 5
#define ADC34_CCR_1_ADCPRE   ADCPRE               // 2 bits @ 16
#define ADC34_CCR_1_TSVREFE  TSVREFE              // 1 bits @ 23
#define ADC123_CSR_1
#define ADC123_CSR_2
#else
#define ADC_CR1_0_RES
#define ADC_CR1_0_OVRIE
#define ADC_CR2_0_DDS
#define ADC_CR2_0_EOCS
#define ADC_CR2_0_EXTEN
#define ADC_SR_0_OVR
#define ADC_Common_CCR_0_ADCPRE
#define ADC_Common_CCR_1_TSVREFE
#define ADC_Common_CSR_0_AWD1
#define ADC_Common_CSR_0_EOC1
#define ADC_Common_CSR_0_JEOC1
#define ADC_Common_CSR_0_JSTRT1
#define ADC_Common_CSR_0_STRT1
#define ADC_Common_CSR_0_OVR1
#define ADC_Common_MAP1_CCR __SOOL_PERIPH_PADDING_4
#define ADC1_CSR_1_AWD1
#define ADC1_CSR_1_EOC1
#define ADC1_CSR_1_JEOC1
#define ADC1_CSR_1_JSTRT1
#define ADC1_CSR_1_STRT1
#define ADC1_CSR_1_OVR1
#define ADC1_CCR_1_ADCPRE
#define ADC1_CCR_1_TSVREFE
#define ADC12_CSR_1_AWD1
#define ADC12_CSR_1_EOC1
#define ADC12_CSR_1_JEOC1
#define ADC12_CSR_1_JSTRT1
#define ADC12_CSR_1_STRT1
#define ADC12_CSR_1_OVR1
#define ADC12_CCR_1_ADCPRE
#define ADC12_CCR_1_TSVREFE
#define ADC34_CSR_1_AWD1
#define ADC34_CSR_1_EOC1
#define ADC34_CSR_1_JEOC1
#define ADC34_CSR_1_JSTRT1
#define ADC34_CSR_1_STRT1
#define ADC34_CSR_1_OVR1
#define ADC34_CCR_1_ADCPRE
#define ADC34_CCR_1_TSVREFE
#endif

#if defined(STM32L1     ) 
#define ADC_CR1_1_PDD        PDD                  // 1 bits @ 16
#define ADC_CR1_1_PDI        PDI                  // 1 bits @ 17
#define ADC_CR1_2
#define ADC_CR2_0_DELS       DELS                 // 3 bits @ 4
#define ADC_SMPR1_2_SMP21    SMP21                // 3 bits @ 3
#define ADC_SMPR1_2_SMP22    SMP22                // 3 bits @ 6
#define ADC_SMPR1_2_SMP23    SMP23                // 3 bits @ 9
#define ADC_SMPR1_2_SMP24    SMP24                // 3 bits @ 12
#define ADC_SMPR1_2_SMP25    SMP25                // 3 bits @ 15
#define ADC_SMPR1_2_SMP26    SMP26                // 3 bits @ 18
#define ADC_SMPR1_3
#define ADC_SMPR3
#define ADC_SQR1_2
#define ADC_SQR2_2
#define ADC_SQR3_2
#define ADC_SQR4_0_SQ10      SQ10                 // 5 bits @ 15
#define ADC_SQR4_0_SQ11      SQ11                 // 5 bits @ 20
#define ADC_SQR4_0_SQ12      SQ12                 // 5 bits @ 25
#define ADC_SQR4_1
#define ADC_SQR5
#define ADC_SR_0_ADONS       ADONS                // 1 bits @ 6
#define ADC_SR_0_RCNR        RCNR                 // 1 bits @ 8
#define ADC_SR_0_JCNR        JCNR                 // 1 bits @ 9
#define ADC_SR_2
#define ADC_Common_CSR_1_ADONS1 ADONS1               // 1 bits @ 6
#define ADC_Common_CSR_2_EOCS1 EOCS1                // 1 bits @ 1
#define ADC_Common_CSR_2_JEOS1 JEOS1                // 1 bits @ 2
#define ADC1_CSR_2_ADONS1    ADONS1               // 1 bits @ 6
#define ADC1_CSR_3_EOCS1     EOCS1                // 1 bits @ 1
#define ADC1_CSR_3_JEOS1     JEOS1                // 1 bits @ 2
#define ADC12_CSR_2_ADONS1   ADONS1               // 1 bits @ 6
#define ADC12_CSR_3_EOCS1    EOCS1                // 1 bits @ 1
#define ADC12_CSR_3_JEOS1    JEOS1                // 1 bits @ 2
#define ADC34_CSR_2_ADONS1   ADONS1               // 1 bits @ 6
#define ADC34_CSR_3_EOCS1    EOCS1                // 1 bits @ 1
#define ADC34_CSR_3_JEOS1    JEOS1                // 1 bits @ 2
#define ADC123_CSR_1_ADONS1  ADONS1               // 1 bits @ 6
#define ADC123_CSR_2_EOCS1   EOCS1                // 1 bits @ 1
#define ADC123_CSR_2_JEOS1   JEOS1                // 1 bits @ 2
#define ADC_MAP3_SMPR3       SMPR3_TypeDef SMPR3
#define ADC_MAP3_JOFR1       JOFR1_TypeDef JOFR1
#define ADC_MAP2_JOFR2       JOFR2_TypeDef JOFR2
#define ADC_MAP4_JOFR3       JOFR3_TypeDef JOFR3
#define ADC_MAP3_JOFR4       JOFR4_TypeDef JOFR4
#define ADC_MAP3_HTR         HTR_TypeDef HTR
#define ADC_MAP2_LTR         LTR_TypeDef LTR
#define ADC_MAP2_SQR5        SQR5_TypeDef SQR5
#define ADC_MAP1_JSQR        JSQR_TypeDef JSQR
#define ADC_MAP1_JDR1        JDR1_TypeDef JDR1
#define ADC_MAP0_JDR2        JDR2_TypeDef JDR2
#define ADC_MAP1_JDR3        JDR3_TypeDef JDR3
#define ADC_MAP1_JDR4        JDR4_TypeDef JDR4
#define ADC_MAP2_DR          DR_TypeDef DR
#else
#define ADC_CR1_1_PDD
#define ADC_CR1_1_PDI
#define ADC_CR2_0_DELS
#define ADC_SMPR1_2_SMP21
#define ADC_SMPR1_2_SMP22
#define ADC_SMPR1_2_SMP23
#define ADC_SMPR1_2_SMP24
#define ADC_SMPR1_2_SMP25
#define ADC_SMPR1_2_SMP26
#define ADC_SQR4_0_SQ10
#define ADC_SQR4_0_SQ11
#define ADC_SQR4_0_SQ12
#define ADC_SR_0_ADONS
#define ADC_SR_0_RCNR
#define ADC_SR_0_JCNR
#define ADC_Common_CSR_1_ADONS1
#define ADC_Common_CSR_2_EOCS1
#define ADC_Common_CSR_2_JEOS1
#define ADC1_CSR_2_ADONS1
#define ADC1_CSR_3_EOCS1
#define ADC1_CSR_3_JEOS1
#define ADC12_CSR_2_ADONS1
#define ADC12_CSR_3_EOCS1
#define ADC12_CSR_3_JEOS1
#define ADC34_CSR_2_ADONS1
#define ADC34_CSR_3_EOCS1
#define ADC34_CSR_3_JEOS1
#define ADC123_CSR_1_ADONS1
#define ADC123_CSR_2_EOCS1
#define ADC123_CSR_2_JEOS1
#define ADC_MAP3_SMPR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP3_JOFR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JOFR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_JOFR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP3_JOFR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP3_HTR __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_LTR __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_SQR5 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_JSQR __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_JDR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JDR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_JDR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_JDR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_DR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F1     ) || defined(STM32F373xC ) || defined(STM32F378xx ) 
#define ADC_CR2_0_CAL        CAL                  // 1 bits @ 2
#define ADC_CR2_0_RSTCAL     RSTCAL               // 1 bits @ 3
#define ADC_CR2_0_JEXTSEL    JEXTSEL              // 3 bits @ 12
#define ADC_CR2_0_JEXTTRIG   JEXTTRIG             // 1 bits @ 15
#define ADC_CR2_0_EXTSEL     EXTSEL               // 3 bits @ 17
#define ADC_CR2_0_EXTTRIG    EXTTRIG              // 1 bits @ 20
#define ADC_CR2_0_JSWSTART   JSWSTART             // 1 bits @ 21
#define ADC_CR2_0_SWSTART    SWSTART              // 1 bits @ 22
#define ADC_CR2_0_TSVREFE    TSVREFE              // 1 bits @ 23
#define ADC_Common_CR1
#define ADC_Common_CR2
#define ADC_Common_DR
#define ADC_Common_SR
#define ADC_Common_MAP1_SR   uint32_t SR
#define ADC_Common_MAP0_CR1  uint32_t CR1
#define ADC_Common_MAP0_CR2  uint32_t CR2
#define ADC_Common_MAP0_DR   uint32_t DR
#else
#define ADC_CR2_0_CAL
#define ADC_CR2_0_RSTCAL
#define ADC_CR2_0_JEXTSEL
#define ADC_CR2_0_JEXTTRIG
#define ADC_CR2_0_EXTSEL
#define ADC_CR2_0_EXTTRIG
#define ADC_CR2_0_JSWSTART
#define ADC_CR2_0_SWSTART
#define ADC_CR2_0_TSVREFE
#define ADC_Common_MAP1_SR __SOOL_PERIPH_PADDING_4
#define ADC_Common_MAP0_CR1 __SOOL_PERIPH_PADDING_4
#define ADC_Common_MAP0_CR2 __SOOL_PERIPH_PADDING_4
#define ADC_Common_MAP0_DR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) ||\
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) ||\
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) ||\
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) 
#define ADC_CR2_1_CFG        CFG                  // 1 bits @ 2
#define ADC_SQR1_2_SQ28      SQ28                 // 5 bits @ 15
#else
#define ADC_CR2_1_CFG
#define ADC_SQR1_2_SQ28
#endif

#define ADC_DR

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) ||\
    defined(STM32L1     ) 
#define ADC_DR_0
#endif

#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) 
#define ADC_DR_0_ADC2DATA    ADC2DATA             // 16 bits @ 16
#else
#define ADC_DR_0_ADC2DATA
#endif

#if defined(STM32F0     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_IER_0
#define ADC_ISR_0_ADRDY      ADRDY                // 1 bits @ 0
#else
#define ADC_ISR_0_ADRDY
#endif

#if defined(STM32F0     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_IER_0_EOSIE      EOSIE                // 1 bits @ 3
#define ADC_IER_0_AWD1IE     AWD1IE               // 1 bits @ 7
#else
#define ADC_IER_0_EOSIE
#define ADC_IER_0_AWD1IE
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32H7     ) 
#define ADC_IER_1_RDY        RDY                  // 1 bits @ 0
#define ADC_ISR_1_ADRD       ADRD                 // 1 bits @ 0
#else
#define ADC_IER_1_RDY
#define ADC_ISR_1_ADRD
#endif

#if defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_IER_2_ADRDY      ADRDY                // 1 bits @ 0
#else
#define ADC_IER_2_ADRDY
#endif

#if defined(STM32F0     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_ISR_0_EOS        EOS                  // 1 bits @ 3
#define ADC_ISR_0_AWD1       AWD1                 // 1 bits @ 7
#else
#define ADC_ISR_0_EOS
#define ADC_ISR_0_AWD1
#endif

#if defined(STM32F0     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32H7     ) || defined(STM32L0     ) 
#define ADC_ISR_1
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define ADC_JDR1
#define ADC_JDR2
#define ADC_JDR3
#define ADC_JDR4
#define ADC_JSQR
#define ADC_SMPR1
#define ADC_SMPR2
#define ADC_SQR1
#define ADC_SQR2
#define ADC_SQR3
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_JDR1_0
#define ADC_JDR2_0
#define ADC_JDR3_0
#define ADC_JDR4_0
#endif

#if defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) ||\
    defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) ||\
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) 
#define ADC_SMPR0
#define ADC_SMPR1_1_SMP29    SMP29                // 3 bits @ 27
#define ADC_SMPR1_2_SMP27    SMP27                // 3 bits @ 21
#define ADC_SMPR1_2_SMP28    SMP28                // 3 bits @ 24
#define ADC_MAP0_SMPR0       SMPR0_TypeDef SMPR0
#else
#define ADC_SMPR1_1_SMP29
#define ADC_SMPR1_2_SMP27
#define ADC_SMPR1_2_SMP28
#define ADC_MAP0_SMPR0 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define ADC_SMPR1_0
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) 
#define ADC_SMPR1_0_SMP11    SMP11                // 3 bits @ 3
#define ADC_SMPR1_0_SMP12    SMP12                // 3 bits @ 6
#define ADC_SMPR1_0_SMP13    SMP13                // 3 bits @ 9
#define ADC_SMPR1_0_SMP14    SMP14                // 3 bits @ 12
#define ADC_SMPR1_0_SMP15    SMP15                // 3 bits @ 15
#define ADC_SMPR1_0_SMP16    SMP16                // 3 bits @ 18
#define ADC_SMPR1_0_SMP17    SMP17                // 3 bits @ 21
#define ADC_SMPR1_1_SMP10    SMP10                // 3 bits @ 0
#define ADC_SMPR2_0
#define ADC_SQR1_0_SQ13      SQ13                 // 5 bits @ 0
#define ADC_SQR1_0_SQ14      SQ14                 // 5 bits @ 5
#define ADC_SQR1_0_SQ15      SQ15                 // 5 bits @ 10
#define ADC_SQR1_0_SQ16      SQ16                 // 5 bits @ 15
#define ADC_SQR1_0_L         L                    // 4 bits @ 20
#define ADC_SQR2_0
#define ADC_SQR3_0
#define ADC_MAP1_JOFR1       JOFR1_TypeDef JOFR1
#define ADC_MAP0_JOFR2       JOFR2_TypeDef JOFR2
#define ADC_MAP0_JOFR3       JOFR3_TypeDef JOFR3
#define ADC_MAP1_JOFR4       JOFR4_TypeDef JOFR4
#define ADC_MAP0_HTR         HTR_TypeDef HTR
#define ADC_MAP1_LTR         LTR_TypeDef LTR
#define ADC_MAP0_SQR1        SQR1_TypeDef SQR1
#define ADC_MAP0_SQR2        SQR2_TypeDef SQR2
#define ADC_MAP0_SQR3        SQR3_TypeDef SQR3
#define ADC_MAP0_JSQR        JSQR_TypeDef JSQR
#define ADC_MAP0_JDR1        JDR1_TypeDef JDR1
#define ADC_MAP1_JDR2        JDR2_TypeDef JDR2
#define ADC_MAP0_JDR3        JDR3_TypeDef JDR3
#define ADC_MAP0_JDR4        JDR4_TypeDef JDR4
#define ADC_MAP1_DR          DR_TypeDef DR
#else
#define ADC_SMPR1_0_SMP11
#define ADC_SMPR1_0_SMP12
#define ADC_SMPR1_0_SMP13
#define ADC_SMPR1_0_SMP14
#define ADC_SMPR1_0_SMP15
#define ADC_SMPR1_0_SMP16
#define ADC_SMPR1_0_SMP17
#define ADC_SMPR1_1_SMP10
#define ADC_SQR1_0_SQ13
#define ADC_SQR1_0_SQ14
#define ADC_SQR1_0_SQ15
#define ADC_SQR1_0_SQ16
#define ADC_SQR1_0_L
#define ADC_MAP1_JOFR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JOFR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JOFR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_JOFR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_HTR __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_LTR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SQR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SQR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SQR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JSQR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JDR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_JDR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JDR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JDR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_DR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) 
#define ADC_SMPR1_0_SMP18    SMP18                // 3 bits @ 24
#else
#define ADC_SMPR1_0_SMP18
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L151xCA) || defined(STM32L151xD ) ||\
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xCA) || defined(STM32L152xD ) ||\
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xCA) || defined(STM32L162xD ) ||\
    defined(STM32L162xDx) || defined(STM32L162xE ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_SMPR1_1
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_SMPR1_2
#define ADC_SMPR2_1
#define ADC_SQR4
#define ADC_MAP1_SQR1        SQR1_TypeDef SQR1
#define ADC_MAP1_SQR2        SQR2_TypeDef SQR2
#define ADC_MAP1_SQR3        SQR3_TypeDef SQR3
#define ADC_MAP1_SQR4        SQR4_TypeDef SQR4
#else
#define ADC_MAP1_SQR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_SQR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_SQR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_SQR4 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32H7     ) || defined(STM32L1     ) 
#define ADC_SMPR2_1_SMP19    SMP19                // 3 bits @ 27
#else
#define ADC_SMPR2_1_SMP19
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_SQR1_0
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) ||\
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) ||\
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define ADC_Common_CCR
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define ADC_Common_CCR_0_MULTI MULTI                // 5 bits @ 0
#define ADC1_CCR_0_MULTI     MULTI                // 5 bits @ 0
#define ADC12_CCR_0_MULTI    MULTI                // 5 bits @ 0
#define ADC34_CCR_0_MULTI    MULTI                // 5 bits @ 0
#else
#define ADC_Common_CCR_0_MULTI
#define ADC1_CCR_0_MULTI
#define ADC12_CCR_0_MULTI
#define ADC34_CCR_0_MULTI
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC_Common_CCR_0_DELAY DELAY                // 4 bits @ 8
#define ADC_Common_CDR
#define ADC1_CCR_0_DELAY     DELAY                // 4 bits @ 8
#define ADC12_CCR_0_DELAY    DELAY                // 4 bits @ 8
#define ADC34_CCR_0_DELAY    DELAY                // 4 bits @ 8
#else
#define ADC_Common_CCR_0_DELAY
#define ADC1_CCR_0_DELAY
#define ADC12_CCR_0_DELAY
#define ADC34_CCR_0_DELAY
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define ADC_Common_CCR_0_DDS DDS                  // 1 bits @ 13
#define ADC_Common_CCR_0_DMA DMA                  // 2 bits @ 14
#define ADC_Common_CCR_1_VBATE VBATE                // 1 bits @ 22
#define ADC_Common_CDR_0
#define ADC_Common_CSR_1_DOVR1 DOVR1                // 1 bits @ 5
#define ADC_Common_MAP1_CDR  typename plugin::CDR_TypeDef CDR
#define ADC1_CSR_2_DOVR1     DOVR1                // 1 bits @ 5
#define ADC1_CCR_1_DDS       DDS                  // 1 bits @ 13
#define ADC1_CCR_1_DMA       DMA                  // 2 bits @ 14
#define ADC1_CCR_1_VBATE     VBATE                // 1 bits @ 22
#define ADC1_CDR_1
#define ADC12_CSR_2_DOVR1    DOVR1                // 1 bits @ 5
#define ADC12_CCR_1_DDS      DDS                  // 1 bits @ 13
#define ADC12_CCR_1_DMA      DMA                  // 2 bits @ 14
#define ADC12_CCR_1_VBATE    VBATE                // 1 bits @ 22
#define ADC12_CDR_1
#define ADC34_CSR_2_DOVR1    DOVR1                // 1 bits @ 5
#define ADC34_CCR_1_DDS      DDS                  // 1 bits @ 13
#define ADC34_CCR_1_DMA      DMA                  // 2 bits @ 14
#define ADC34_CCR_1_VBATE    VBATE                // 1 bits @ 22
#define ADC34_CDR_1
#define ADC123_CSR_2_DOVR1   DOVR1                // 1 bits @ 5
#define ADC123_CDR_1
#else
#define ADC_Common_CCR_0_DDS
#define ADC_Common_CCR_0_DMA
#define ADC_Common_CCR_1_VBATE
#define ADC_Common_CSR_1_DOVR1
#define ADC_Common_MAP1_CDR __SOOL_PERIPH_PADDING_4
#define ADC1_CSR_2_DOVR1
#define ADC1_CCR_1_DDS
#define ADC1_CCR_1_DMA
#define ADC1_CCR_1_VBATE
#define ADC12_CSR_2_DOVR1
#define ADC12_CCR_1_DDS
#define ADC12_CCR_1_DMA
#define ADC12_CCR_1_VBATE
#define ADC34_CSR_2_DOVR1
#define ADC34_CCR_1_DDS
#define ADC34_CCR_1_DMA
#define ADC34_CCR_1_VBATE
#define ADC123_CSR_2_DOVR1
#endif

#if defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) ||\
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F301x8 ) ||\
    defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) ||\
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F328xx ) ||\
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32H7     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_Common_CCR_0_VBATEN VBATEN               // 1 bits @ 24
#define ADC1_CCR_0_VBATEN    VBATEN               // 1 bits @ 24
#define ADC12_CCR_0_VBATEN   VBATEN               // 1 bits @ 24
#define ADC34_CCR_0_VBATEN   VBATEN               // 1 bits @ 24
#else
#define ADC_Common_CCR_0_VBATEN
#define ADC1_CCR_0_VBATEN
#define ADC12_CCR_0_VBATEN
#define ADC34_CCR_0_VBATEN
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L053xx ) || defined(STM32L063xx ) || defined(STM32L073xx ) || defined(STM32L083xx ) ||\
    defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_Common_CCR_1
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32H7     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC_Common_CCR_1_DUAL DUAL                 // 5 bits @ 0
#define ADC_Common_MAP0_CDR  typename plugin::CDR_TypeDef CDR
#define ADC1_CCR_1_DUAL      DUAL                 // 5 bits @ 0
#define ADC12_CCR_1_DUAL     DUAL                 // 5 bits @ 0
#define ADC34_CCR_1_DUAL     DUAL                 // 5 bits @ 0
#define ADC123_CSR_0_ADRDY_MST ADRDY_MST            // 1 bits @ 0
#define ADC123_CSR_0_EOSMP_MST EOSMP_MST            // 1 bits @ 1
#define ADC123_CSR_0_EOC_MST EOC_MST              // 1 bits @ 2
#define ADC123_CSR_0_EOS_MST EOS_MST              // 1 bits @ 3
#define ADC123_CSR_0_OVR_MST OVR_MST              // 1 bits @ 4
#define ADC123_CSR_0_JEOC_MST JEOC_MST             // 1 bits @ 5
#define ADC123_CSR_0_JEOS_MST JEOS_MST             // 1 bits @ 6
#define ADC123_CSR_0_JQOVF_MST JQOVF_MST            // 1 bits @ 10
#define ADC123_CSR_0_ADRDY_SLV ADRDY_SLV            // 1 bits @ 16
#define ADC123_CSR_0_EOSMP_SLV EOSMP_SLV            // 1 bits @ 17
#define ADC123_CSR_0_EOC_SLV EOC_SLV              // 1 bits @ 18
#define ADC123_CSR_0_EOS_SLV EOS_SLV              // 1 bits @ 19
#define ADC123_CSR_0_OVR_SLV OVR_SLV              // 1 bits @ 20
#define ADC123_CSR_0_JEOC_SLV JEOC_SLV             // 1 bits @ 21
#define ADC123_CSR_0_JEOS_SLV JEOS_SLV             // 1 bits @ 22
#define ADC123_CSR_0_JQOVF_SLV JQOVF_SLV            // 1 bits @ 26
#else
#define ADC_Common_CCR_1_DUAL
#define ADC_Common_MAP0_CDR __SOOL_PERIPH_PADDING_4
#define ADC1_CCR_1_DUAL
#define ADC12_CCR_1_DUAL
#define ADC34_CCR_1_DUAL
#define ADC123_CSR_0_ADRDY_MST
#define ADC123_CSR_0_EOSMP_MST
#define ADC123_CSR_0_EOC_MST
#define ADC123_CSR_0_EOS_MST
#define ADC123_CSR_0_OVR_MST
#define ADC123_CSR_0_JEOC_MST
#define ADC123_CSR_0_JEOS_MST
#define ADC123_CSR_0_JQOVF_MST
#define ADC123_CSR_0_ADRDY_SLV
#define ADC123_CSR_0_EOSMP_SLV
#define ADC123_CSR_0_EOC_SLV
#define ADC123_CSR_0_EOS_SLV
#define ADC123_CSR_0_OVR_SLV
#define ADC123_CSR_0_JEOC_SLV
#define ADC123_CSR_0_JEOS_SLV
#define ADC123_CSR_0_JQOVF_SLV
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC_Common_CCR_1_DMACFG DMACFG               // 1 bits @ 13
#define ADC_Common_CCR_1_MDMA MDMA                 // 2 bits @ 14
#define ADC_Common_CSR_0_JEOS_MST JEOS_MST             // 1 bits @ 6
#define ADC_Common_CSR_0_JEOS_SLV JEOS_SLV             // 1 bits @ 22
#define ADC_Common_CSR_0_JQOVF_SLV JQOVF_SLV            // 1 bits @ 26
#define ADC_Common_CSR_1_ADRDY_MST ADRDY_MST            // 1 bits @ 0
#define ADC_Common_CSR_1_EOSMP_MST EOSMP_MST            // 1 bits @ 1
#define ADC_Common_CSR_1_EOC_MST EOC_MST              // 1 bits @ 2
#define ADC_Common_CSR_1_EOS_MST EOS_MST              // 1 bits @ 3
#define ADC_Common_CSR_1_OVR_MST OVR_MST              // 1 bits @ 4
#define ADC_Common_CSR_1_JQOVF_MST JQOVF_MST            // 1 bits @ 10
#define ADC_Common_CSR_1_ADRDY_SLV ADRDY_SLV            // 1 bits @ 16
#define ADC_Common_CSR_1_EOSMP_SLV EOSMP_SLV            // 1 bits @ 17
#define ADC_Common_CSR_1_EOC_SLV EOC_SLV              // 1 bits @ 18
#define ADC_Common_CSR_1_EOS_SLV EOS_SLV              // 1 bits @ 19
#define ADC_Common_CSR_1_OVR_SLV OVR_SLV              // 1 bits @ 20
#define ADC_Common_CSR_2_JEOC_MST JEOC_MST             // 1 bits @ 5
#define ADC_Common_CSR_2_JEOC_SLV JEOC_SLV             // 1 bits @ 21
#define ADC1_CSR_0_ADRDY_MST ADRDY_MST            // 1 bits @ 0
#define ADC1_CSR_0_JQOVF_MST JQOVF_MST            // 1 bits @ 10
#define ADC1_CSR_0_ADRDY_SLV ADRDY_SLV            // 1 bits @ 16
#define ADC1_CSR_0_JQOVF_SLV JQOVF_SLV            // 1 bits @ 26
#define ADC1_CSR_1_JEOS_MST  JEOS_MST             // 1 bits @ 6
#define ADC1_CSR_1_JEOS_SLV  JEOS_SLV             // 1 bits @ 22
#define ADC1_CSR_2_EOSMP_MST EOSMP_MST            // 1 bits @ 1
#define ADC1_CSR_2_EOC_MST   EOC_MST              // 1 bits @ 2
#define ADC1_CSR_2_EOS_MST   EOS_MST              // 1 bits @ 3
#define ADC1_CSR_2_OVR_MST   OVR_MST              // 1 bits @ 4
#define ADC1_CSR_2_EOSMP_SLV EOSMP_SLV            // 1 bits @ 17
#define ADC1_CSR_2_EOC_SLV   EOC_SLV              // 1 bits @ 18
#define ADC1_CSR_2_EOS_SLV   EOS_SLV              // 1 bits @ 19
#define ADC1_CSR_2_OVR_SLV   OVR_SLV              // 1 bits @ 20
#define ADC1_CSR_3_JEOC_MST  JEOC_MST             // 1 bits @ 5
#define ADC1_CSR_3_JEOC_SLV  JEOC_SLV             // 1 bits @ 21
#define ADC1_CCR_0_DMACFG    DMACFG               // 1 bits @ 13
#define ADC1_CCR_0_MDMA      MDMA                 // 2 bits @ 14
#define ADC12_CSR_0_ADRDY_MST ADRDY_MST            // 1 bits @ 0
#define ADC12_CSR_0_JQOVF_MST JQOVF_MST            // 1 bits @ 10
#define ADC12_CSR_0_ADRDY_SLV ADRDY_SLV            // 1 bits @ 16
#define ADC12_CSR_0_JQOVF_SLV JQOVF_SLV            // 1 bits @ 26
#define ADC12_CSR_1_JEOS_MST JEOS_MST             // 1 bits @ 6
#define ADC12_CSR_1_JEOS_SLV JEOS_SLV             // 1 bits @ 22
#define ADC12_CSR_2_EOSMP_MST EOSMP_MST            // 1 bits @ 1
#define ADC12_CSR_2_EOC_MST  EOC_MST              // 1 bits @ 2
#define ADC12_CSR_2_EOS_MST  EOS_MST              // 1 bits @ 3
#define ADC12_CSR_2_OVR_MST  OVR_MST              // 1 bits @ 4
#define ADC12_CSR_2_EOSMP_SLV EOSMP_SLV            // 1 bits @ 17
#define ADC12_CSR_2_EOC_SLV  EOC_SLV              // 1 bits @ 18
#define ADC12_CSR_2_EOS_SLV  EOS_SLV              // 1 bits @ 19
#define ADC12_CSR_2_OVR_SLV  OVR_SLV              // 1 bits @ 20
#define ADC12_CSR_3_JEOC_MST JEOC_MST             // 1 bits @ 5
#define ADC12_CSR_3_JEOC_SLV JEOC_SLV             // 1 bits @ 21
#define ADC12_CCR_0_DMACFG   DMACFG               // 1 bits @ 13
#define ADC12_CCR_0_MDMA     MDMA                 // 2 bits @ 14
#define ADC34_CSR_0_ADRDY_MST ADRDY_MST            // 1 bits @ 0
#define ADC34_CSR_0_JQOVF_MST JQOVF_MST            // 1 bits @ 10
#define ADC34_CSR_0_ADRDY_SLV ADRDY_SLV            // 1 bits @ 16
#define ADC34_CSR_0_JQOVF_SLV JQOVF_SLV            // 1 bits @ 26
#define ADC34_CSR_1_JEOS_MST JEOS_MST             // 1 bits @ 6
#define ADC34_CSR_1_OVR_SLV  OVR_SLV              // 1 bits @ 20
#define ADC34_CSR_1_JEOS_SLV JEOS_SLV             // 1 bits @ 22
#define ADC34_CSR_2_EOSMP_MST EOSMP_MST            // 1 bits @ 1
#define ADC34_CSR_2_EOC_MST  EOC_MST              // 1 bits @ 2
#define ADC34_CSR_2_EOS_MST  EOS_MST              // 1 bits @ 3
#define ADC34_CSR_2_OVR_MST  OVR_MST              // 1 bits @ 4
#define ADC34_CSR_2_EOSMP_SLV EOSMP_SLV            // 1 bits @ 17
#define ADC34_CSR_2_EOC_SLV  EOC_SLV              // 1 bits @ 18
#define ADC34_CSR_2_EOS_SLV  EOS_SLV              // 1 bits @ 19
#define ADC34_CSR_3_JEOC_MST JEOC_MST             // 1 bits @ 5
#define ADC34_CSR_3_JEOC_SLV JEOC_SLV             // 1 bits @ 21
#define ADC34_CCR_0_DMACFG   DMACFG               // 1 bits @ 13
#define ADC34_CCR_0_MDMA     MDMA                 // 2 bits @ 14
#else
#define ADC_Common_CCR_1_DMACFG
#define ADC_Common_CCR_1_MDMA
#define ADC_Common_CSR_0_JEOS_MST
#define ADC_Common_CSR_0_JEOS_SLV
#define ADC_Common_CSR_0_JQOVF_SLV
#define ADC_Common_CSR_1_ADRDY_MST
#define ADC_Common_CSR_1_EOSMP_MST
#define ADC_Common_CSR_1_EOC_MST
#define ADC_Common_CSR_1_EOS_MST
#define ADC_Common_CSR_1_OVR_MST
#define ADC_Common_CSR_1_JQOVF_MST
#define ADC_Common_CSR_1_ADRDY_SLV
#define ADC_Common_CSR_1_EOSMP_SLV
#define ADC_Common_CSR_1_EOC_SLV
#define ADC_Common_CSR_1_EOS_SLV
#define ADC_Common_CSR_1_OVR_SLV
#define ADC_Common_CSR_2_JEOC_MST
#define ADC_Common_CSR_2_JEOC_SLV
#define ADC1_CSR_0_ADRDY_MST
#define ADC1_CSR_0_JQOVF_MST
#define ADC1_CSR_0_ADRDY_SLV
#define ADC1_CSR_0_JQOVF_SLV
#define ADC1_CSR_1_JEOS_MST
#define ADC1_CSR_1_JEOS_SLV
#define ADC1_CSR_2_EOSMP_MST
#define ADC1_CSR_2_EOC_MST
#define ADC1_CSR_2_EOS_MST
#define ADC1_CSR_2_OVR_MST
#define ADC1_CSR_2_EOSMP_SLV
#define ADC1_CSR_2_EOC_SLV
#define ADC1_CSR_2_EOS_SLV
#define ADC1_CSR_2_OVR_SLV
#define ADC1_CSR_3_JEOC_MST
#define ADC1_CSR_3_JEOC_SLV
#define ADC1_CCR_0_DMACFG
#define ADC1_CCR_0_MDMA
#define ADC12_CSR_0_ADRDY_MST
#define ADC12_CSR_0_JQOVF_MST
#define ADC12_CSR_0_ADRDY_SLV
#define ADC12_CSR_0_JQOVF_SLV
#define ADC12_CSR_1_JEOS_MST
#define ADC12_CSR_1_JEOS_SLV
#define ADC12_CSR_2_EOSMP_MST
#define ADC12_CSR_2_EOC_MST
#define ADC12_CSR_2_EOS_MST
#define ADC12_CSR_2_OVR_MST
#define ADC12_CSR_2_EOSMP_SLV
#define ADC12_CSR_2_EOC_SLV
#define ADC12_CSR_2_EOS_SLV
#define ADC12_CSR_2_OVR_SLV
#define ADC12_CSR_3_JEOC_MST
#define ADC12_CSR_3_JEOC_SLV
#define ADC12_CCR_0_DMACFG
#define ADC12_CCR_0_MDMA
#define ADC34_CSR_0_ADRDY_MST
#define ADC34_CSR_0_JQOVF_MST
#define ADC34_CSR_0_ADRDY_SLV
#define ADC34_CSR_0_JQOVF_SLV
#define ADC34_CSR_1_JEOS_MST
#define ADC34_CSR_1_OVR_SLV
#define ADC34_CSR_1_JEOS_SLV
#define ADC34_CSR_2_EOSMP_MST
#define ADC34_CSR_2_EOC_MST
#define ADC34_CSR_2_EOS_MST
#define ADC34_CSR_2_OVR_MST
#define ADC34_CSR_2_EOSMP_SLV
#define ADC34_CSR_2_EOC_SLV
#define ADC34_CSR_2_EOS_SLV
#define ADC34_CSR_3_JEOC_MST
#define ADC34_CSR_3_JEOC_SLV
#define ADC34_CCR_0_DMACFG
#define ADC34_CCR_0_MDMA
#endif

#if defined(STM32L053xx ) || defined(STM32L063xx ) || defined(STM32L073xx ) || defined(STM32L083xx ) 
#define ADC_Common_CCR_1_VLCDEN VLCDEN               // 1 bits @ 24
#define ADC1_CCR_1_VLCDEN    VLCDEN               // 1 bits @ 24
#define ADC12_CCR_1_VLCDEN   VLCDEN               // 1 bits @ 24
#define ADC34_CCR_1_VLCDEN   VLCDEN               // 1 bits @ 24
#else
#define ADC_Common_CCR_1_VLCDEN
#define ADC1_CCR_1_VLCDEN
#define ADC12_CCR_1_VLCDEN
#define ADC34_CCR_1_VLCDEN
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC_Common_CDR_1
#define ADC1_CDR_0
#define ADC12_CDR_0
#define ADC34_CDR_0
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L1     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC_Common_CSR
#define ADC_Common_MAP2_CSR  typename plugin::CSR_TypeDef CSR
#else
#define ADC_Common_MAP2_CSR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     ) ||\
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC_Common_CSR_0
#define ADC_Common_CSR_1
#define ADC1_CSR_1
#define ADC1_CSR_2
#define ADC12_CSR_1
#define ADC12_CSR_2
#define ADC34_CSR_1
#define ADC34_CSR_2
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) 
#define ADC_Common_CSR_0_AWD2 AWD2                 // 1 bits @ 8
#define ADC_Common_CSR_0_EOC2 EOC2                 // 1 bits @ 9
#define ADC_Common_CSR_0_JEOC2 JEOC2                // 1 bits @ 10
#define ADC_Common_CSR_0_JSTRT2 JSTRT2               // 1 bits @ 11
#define ADC_Common_CSR_0_STRT2 STRT2                // 1 bits @ 12
#define ADC_Common_CSR_0_OVR2 OVR2                 // 1 bits @ 13
#define ADC_Common_CSR_0_AWD3 AWD3                 // 1 bits @ 16
#define ADC_Common_CSR_0_EOC3 EOC3                 // 1 bits @ 17
#define ADC_Common_CSR_0_JEOC3 JEOC3                // 1 bits @ 18
#define ADC_Common_CSR_0_JSTRT3 JSTRT3               // 1 bits @ 19
#define ADC_Common_CSR_0_STRT3 STRT3                // 1 bits @ 20
#define ADC_Common_CSR_0_OVR3 OVR3                 // 1 bits @ 21
#define ADC_Common_CSR_1_DOVR2 DOVR2                // 1 bits @ 13
#define ADC_Common_CSR_1_DOVR3 DOVR3                // 1 bits @ 21
#define ADC1_CSR_0_JSTRT2    JSTRT2               // 1 bits @ 11
#define ADC1_CSR_0_STRT2     STRT2                // 1 bits @ 12
#define ADC1_CSR_0_OVR2      OVR2                 // 1 bits @ 13
#define ADC1_CSR_1_AWD2      AWD2                 // 1 bits @ 8
#define ADC1_CSR_1_EOC2      EOC2                 // 1 bits @ 9
#define ADC1_CSR_1_JEOC2     JEOC2                // 1 bits @ 10
#define ADC1_CSR_1_DOVR2     DOVR2                // 1 bits @ 13
#define ADC1_CSR_1_AWD3      AWD3                 // 1 bits @ 16
#define ADC1_CSR_1_EOC3      EOC3                 // 1 bits @ 17
#define ADC1_CSR_1_JEOC3     JEOC3                // 1 bits @ 18
#define ADC1_CSR_1_JSTRT3    JSTRT3               // 1 bits @ 19
#define ADC1_CSR_1_STRT3     STRT3                // 1 bits @ 20
#define ADC1_CSR_1_OVR3      OVR3                 // 1 bits @ 21
#define ADC1_CSR_2_DOVR3     DOVR3                // 1 bits @ 21
#define ADC12_CSR_0_JSTRT2   JSTRT2               // 1 bits @ 11
#define ADC12_CSR_0_STRT2    STRT2                // 1 bits @ 12
#define ADC12_CSR_0_OVR2     OVR2                 // 1 bits @ 13
#define ADC12_CSR_1_AWD2     AWD2                 // 1 bits @ 8
#define ADC12_CSR_1_EOC2     EOC2                 // 1 bits @ 9
#define ADC12_CSR_1_JEOC2    JEOC2                // 1 bits @ 10
#define ADC12_CSR_1_DOVR2    DOVR2                // 1 bits @ 13
#define ADC12_CSR_1_AWD3     AWD3                 // 1 bits @ 16
#define ADC12_CSR_1_EOC3     EOC3                 // 1 bits @ 17
#define ADC12_CSR_1_JEOC3    JEOC3                // 1 bits @ 18
#define ADC12_CSR_1_JSTRT3   JSTRT3               // 1 bits @ 19
#define ADC12_CSR_1_STRT3    STRT3                // 1 bits @ 20
#define ADC12_CSR_1_OVR3     OVR3                 // 1 bits @ 21
#define ADC12_CSR_2_DOVR3    DOVR3                // 1 bits @ 21
#define ADC34_CSR_0_JSTRT2   JSTRT2               // 1 bits @ 11
#define ADC34_CSR_0_STRT2    STRT2                // 1 bits @ 12
#define ADC34_CSR_0_OVR2     OVR2                 // 1 bits @ 13
#define ADC34_CSR_0_STRT3    STRT3                // 1 bits @ 20
#define ADC34_CSR_1_AWD2     AWD2                 // 1 bits @ 8
#define ADC34_CSR_1_EOC2     EOC2                 // 1 bits @ 9
#define ADC34_CSR_1_JEOC2    JEOC2                // 1 bits @ 10
#define ADC34_CSR_1_DOVR2    DOVR2                // 1 bits @ 13
#define ADC34_CSR_1_AWD3     AWD3                 // 1 bits @ 16
#define ADC34_CSR_1_EOC3     EOC3                 // 1 bits @ 17
#define ADC34_CSR_1_JEOC3    JEOC3                // 1 bits @ 18
#define ADC34_CSR_1_JSTRT3   JSTRT3               // 1 bits @ 19
#define ADC34_CSR_1_OVR3     OVR3                 // 1 bits @ 21
#define ADC34_CSR_2_DOVR3    DOVR3                // 1 bits @ 21
#define ADC123_CSR_0_JSTRT2  JSTRT2               // 1 bits @ 11
#define ADC123_CSR_0_STRT2   STRT2                // 1 bits @ 12
#define ADC123_CSR_0_OVR2    OVR2                 // 1 bits @ 13
#define ADC123_CSR_1_AWD2    AWD2                 // 1 bits @ 8
#define ADC123_CSR_1_EOC2    EOC2                 // 1 bits @ 9
#define ADC123_CSR_1_JEOC2   JEOC2                // 1 bits @ 10
#define ADC123_CSR_1_DOVR2   DOVR2                // 1 bits @ 13
#define ADC123_CSR_1_AWD3    AWD3                 // 1 bits @ 16
#define ADC123_CSR_1_EOC3    EOC3                 // 1 bits @ 17
#define ADC123_CSR_1_JEOC3   JEOC3                // 1 bits @ 18
#define ADC123_CSR_1_JSTRT3  JSTRT3               // 1 bits @ 19
#define ADC123_CSR_1_STRT3   STRT3                // 1 bits @ 20
#define ADC123_CSR_1_OVR3    OVR3                 // 1 bits @ 21
#define ADC123_CSR_2_DOVR3   DOVR3                // 1 bits @ 21
#else
#define ADC_Common_CSR_0_AWD2
#define ADC_Common_CSR_0_EOC2
#define ADC_Common_CSR_0_JEOC2
#define ADC_Common_CSR_0_JSTRT2
#define ADC_Common_CSR_0_STRT2
#define ADC_Common_CSR_0_OVR2
#define ADC_Common_CSR_0_AWD3
#define ADC_Common_CSR_0_EOC3
#define ADC_Common_CSR_0_JEOC3
#define ADC_Common_CSR_0_JSTRT3
#define ADC_Common_CSR_0_STRT3
#define ADC_Common_CSR_0_OVR3
#define ADC_Common_CSR_1_DOVR2
#define ADC_Common_CSR_1_DOVR3
#define ADC1_CSR_0_JSTRT2
#define ADC1_CSR_0_STRT2
#define ADC1_CSR_0_OVR2
#define ADC1_CSR_1_AWD2
#define ADC1_CSR_1_EOC2
#define ADC1_CSR_1_JEOC2
#define ADC1_CSR_1_DOVR2
#define ADC1_CSR_1_AWD3
#define ADC1_CSR_1_EOC3
#define ADC1_CSR_1_JEOC3
#define ADC1_CSR_1_JSTRT3
#define ADC1_CSR_1_STRT3
#define ADC1_CSR_1_OVR3
#define ADC1_CSR_2_DOVR3
#define ADC12_CSR_0_JSTRT2
#define ADC12_CSR_0_STRT2
#define ADC12_CSR_0_OVR2
#define ADC12_CSR_1_AWD2
#define ADC12_CSR_1_EOC2
#define ADC12_CSR_1_JEOC2
#define ADC12_CSR_1_DOVR2
#define ADC12_CSR_1_AWD3
#define ADC12_CSR_1_EOC3
#define ADC12_CSR_1_JEOC3
#define ADC12_CSR_1_JSTRT3
#define ADC12_CSR_1_STRT3
#define ADC12_CSR_1_OVR3
#define ADC12_CSR_2_DOVR3
#define ADC34_CSR_0_JSTRT2
#define ADC34_CSR_0_STRT2
#define ADC34_CSR_0_OVR2
#define ADC34_CSR_0_STRT3
#define ADC34_CSR_1_AWD2
#define ADC34_CSR_1_EOC2
#define ADC34_CSR_1_JEOC2
#define ADC34_CSR_1_DOVR2
#define ADC34_CSR_1_AWD3
#define ADC34_CSR_1_EOC3
#define ADC34_CSR_1_JEOC3
#define ADC34_CSR_1_JSTRT3
#define ADC34_CSR_1_OVR3
#define ADC34_CSR_2_DOVR3
#define ADC123_CSR_0_JSTRT2
#define ADC123_CSR_0_STRT2
#define ADC123_CSR_0_OVR2
#define ADC123_CSR_1_AWD2
#define ADC123_CSR_1_EOC2
#define ADC123_CSR_1_JEOC2
#define ADC123_CSR_1_DOVR2
#define ADC123_CSR_1_AWD3
#define ADC123_CSR_1_EOC3
#define ADC123_CSR_1_JEOC3
#define ADC123_CSR_1_JSTRT3
#define ADC123_CSR_1_STRT3
#define ADC123_CSR_1_OVR3
#define ADC123_CSR_2_DOVR3
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32L1     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC_Common_CSR_2
#define ADC1_CSR_3
#define ADC12_CSR_3
#define ADC34_CSR_3
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC1_CSR_0
#define ADC12_CSR_0
#define ADC34_CSR_0
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F318xx ) 
#define ADC1_CSR_0_ADRDY_EOSMP_MST ADRDY_EOSMP_MST      // 1 bits @ 1
#define ADC1_CSR_0_ADRDY_EOC_MST ADRDY_EOC_MST        // 1 bits @ 2
#define ADC1_CSR_0_ADRDY_EOS_MST ADRDY_EOS_MST        // 1 bits @ 3
#define ADC1_CSR_0_ADRDY_OVR_MST ADRDY_OVR_MST        // 1 bits @ 4
#define ADC1_CSR_0_ADRDY_JEOC_MST ADRDY_JEOC_MST       // 1 bits @ 5
#define ADC1_CSR_0_ADRDY_JEOS_MST ADRDY_JEOS_MST       // 1 bits @ 6
#define ADC1_CSR_0_AWD1_MST  AWD1_MST             // 1 bits @ 7
#define ADC1_CSR_0_AWD2_MST  AWD2_MST             // 1 bits @ 8
#define ADC1_CSR_0_AWD3_MST  AWD3_MST             // 1 bits @ 9
#define ADC1_CSR_0_ADRDY_EOSMP_SLV ADRDY_EOSMP_SLV      // 1 bits @ 17
#define ADC1_CSR_0_ADRDY_EOC_SLV ADRDY_EOC_SLV        // 1 bits @ 18
#define ADC1_CSR_0_ADRDY_EOS_SLV ADRDY_EOS_SLV        // 1 bits @ 19
#define ADC1_CSR_0_ADRDY_OVR_SLV ADRDY_OVR_SLV        // 1 bits @ 20
#define ADC1_CSR_0_ADRDY_JEOC_SLV ADRDY_JEOC_SLV       // 1 bits @ 21
#define ADC1_CSR_0_ADRDY_JEOS_SLV ADRDY_JEOS_SLV       // 1 bits @ 22
#define ADC1_CSR_0_AWD1_SLV  AWD1_SLV             // 1 bits @ 23
#define ADC1_CSR_0_AWD2_SLV  AWD2_SLV             // 1 bits @ 24
#define ADC1_CSR_0_AWD3_SLV  AWD3_SLV             // 1 bits @ 25
#else
#define ADC1_CSR_0_ADRDY_EOSMP_MST
#define ADC1_CSR_0_ADRDY_EOC_MST
#define ADC1_CSR_0_ADRDY_EOS_MST
#define ADC1_CSR_0_ADRDY_OVR_MST
#define ADC1_CSR_0_ADRDY_JEOC_MST
#define ADC1_CSR_0_ADRDY_JEOS_MST
#define ADC1_CSR_0_AWD1_MST
#define ADC1_CSR_0_AWD2_MST
#define ADC1_CSR_0_AWD3_MST
#define ADC1_CSR_0_ADRDY_EOSMP_SLV
#define ADC1_CSR_0_ADRDY_EOC_SLV
#define ADC1_CSR_0_ADRDY_EOS_SLV
#define ADC1_CSR_0_ADRDY_OVR_SLV
#define ADC1_CSR_0_ADRDY_JEOC_SLV
#define ADC1_CSR_0_ADRDY_JEOS_SLV
#define ADC1_CSR_0_AWD1_SLV
#define ADC1_CSR_0_AWD2_SLV
#define ADC1_CSR_0_AWD3_SLV
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) ||\
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) ||\
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC1_CCR_0
#define ADC12_CCR_0
#define ADC34_CCR_0
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L053xx ) || defined(STM32L063xx ) || defined(STM32L073xx ) || defined(STM32L083xx ) ||\
    defined(STM32L1     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC1_CCR_1
#define ADC12_CCR_1
#define ADC34_CCR_1
#endif

#if defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) 
#define ADC12_CSR_0_ADRDY_EOSMP_MST ADRDY_EOSMP_MST      // 1 bits @ 1
#define ADC12_CSR_0_ADRDY_EOC_MST ADRDY_EOC_MST        // 1 bits @ 2
#define ADC12_CSR_0_ADRDY_EOS_MST ADRDY_EOS_MST        // 1 bits @ 3
#define ADC12_CSR_0_ADRDY_OVR_MST ADRDY_OVR_MST        // 1 bits @ 4
#define ADC12_CSR_0_ADRDY_JEOC_MST ADRDY_JEOC_MST       // 1 bits @ 5
#define ADC12_CSR_0_ADRDY_JEOS_MST ADRDY_JEOS_MST       // 1 bits @ 6
#define ADC12_CSR_0_AWD1_MST AWD1_MST             // 1 bits @ 7
#define ADC12_CSR_0_AWD2_MST AWD2_MST             // 1 bits @ 8
#define ADC12_CSR_0_AWD3_MST AWD3_MST             // 1 bits @ 9
#define ADC12_CSR_0_ADRDY_EOSMP_SLV ADRDY_EOSMP_SLV      // 1 bits @ 17
#define ADC12_CSR_0_ADRDY_EOC_SLV ADRDY_EOC_SLV        // 1 bits @ 18
#define ADC12_CSR_0_ADRDY_EOS_SLV ADRDY_EOS_SLV        // 1 bits @ 19
#define ADC12_CSR_0_ADRDY_OVR_SLV ADRDY_OVR_SLV        // 1 bits @ 20
#define ADC12_CSR_0_ADRDY_JEOC_SLV ADRDY_JEOC_SLV       // 1 bits @ 21
#define ADC12_CSR_0_ADRDY_JEOS_SLV ADRDY_JEOS_SLV       // 1 bits @ 22
#define ADC12_CSR_0_AWD1_SLV AWD1_SLV             // 1 bits @ 23
#define ADC12_CSR_0_AWD2_SLV AWD2_SLV             // 1 bits @ 24
#define ADC12_CSR_0_AWD3_SLV AWD3_SLV             // 1 bits @ 25
#else
#define ADC12_CSR_0_ADRDY_EOSMP_MST
#define ADC12_CSR_0_ADRDY_EOC_MST
#define ADC12_CSR_0_ADRDY_EOS_MST
#define ADC12_CSR_0_ADRDY_OVR_MST
#define ADC12_CSR_0_ADRDY_JEOC_MST
#define ADC12_CSR_0_ADRDY_JEOS_MST
#define ADC12_CSR_0_AWD1_MST
#define ADC12_CSR_0_AWD2_MST
#define ADC12_CSR_0_AWD3_MST
#define ADC12_CSR_0_ADRDY_EOSMP_SLV
#define ADC12_CSR_0_ADRDY_EOC_SLV
#define ADC12_CSR_0_ADRDY_EOS_SLV
#define ADC12_CSR_0_ADRDY_OVR_SLV
#define ADC12_CSR_0_ADRDY_JEOC_SLV
#define ADC12_CSR_0_ADRDY_JEOS_SLV
#define ADC12_CSR_0_AWD1_SLV
#define ADC12_CSR_0_AWD2_SLV
#define ADC12_CSR_0_AWD3_SLV
#endif

#if defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) 
#define ADC34_CSR_0_ADRDY_EOSMP_MST ADRDY_EOSMP_MST      // 1 bits @ 1
#define ADC34_CSR_0_ADRDY_EOC_MST ADRDY_EOC_MST        // 1 bits @ 2
#define ADC34_CSR_0_ADRDY_EOS_MST ADRDY_EOS_MST        // 1 bits @ 3
#define ADC34_CSR_0_ADRDY_OVR_MST ADRDY_OVR_MST        // 1 bits @ 4
#define ADC34_CSR_0_ADRDY_JEOC_MST ADRDY_JEOC_MST       // 1 bits @ 5
#define ADC34_CSR_0_ADRDY_JEOS_MST ADRDY_JEOS_MST       // 1 bits @ 6
#define ADC34_CSR_0_AWD1_MST AWD1_MST             // 1 bits @ 7
#define ADC34_CSR_0_AWD2_MST AWD2_MST             // 1 bits @ 8
#define ADC34_CSR_0_AWD3_MST AWD3_MST             // 1 bits @ 9
#define ADC34_CSR_0_ADRDY_EOSMP_SLV ADRDY_EOSMP_SLV      // 1 bits @ 17
#define ADC34_CSR_0_ADRDY_EOC_SLV ADRDY_EOC_SLV        // 1 bits @ 18
#define ADC34_CSR_0_ADRDY_EOS_SLV ADRDY_EOS_SLV        // 1 bits @ 19
#define ADC34_CSR_0_ADRDY_JEOC_SLV ADRDY_JEOC_SLV       // 1 bits @ 21
#define ADC34_CSR_0_ADRDY_JEOS_SLV ADRDY_JEOS_SLV       // 1 bits @ 22
#define ADC34_CSR_0_AWD1_SLV AWD1_SLV             // 1 bits @ 23
#define ADC34_CSR_0_AWD2_SLV AWD2_SLV             // 1 bits @ 24
#define ADC34_CSR_0_AWD3_SLV AWD3_SLV             // 1 bits @ 25
#else
#define ADC34_CSR_0_ADRDY_EOSMP_MST
#define ADC34_CSR_0_ADRDY_EOC_MST
#define ADC34_CSR_0_ADRDY_EOS_MST
#define ADC34_CSR_0_ADRDY_OVR_MST
#define ADC34_CSR_0_ADRDY_JEOC_MST
#define ADC34_CSR_0_ADRDY_JEOS_MST
#define ADC34_CSR_0_AWD1_MST
#define ADC34_CSR_0_AWD2_MST
#define ADC34_CSR_0_AWD3_MST
#define ADC34_CSR_0_ADRDY_EOSMP_SLV
#define ADC34_CSR_0_ADRDY_EOC_SLV
#define ADC34_CSR_0_ADRDY_EOS_SLV
#define ADC34_CSR_0_ADRDY_JEOC_SLV
#define ADC34_CSR_0_ADRDY_JEOS_SLV
#define ADC34_CSR_0_AWD1_SLV
#define ADC34_CSR_0_AWD2_SLV
#define ADC34_CSR_0_AWD3_SLV
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L471xx ) || defined(STM32L475xx ) ||\
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) 
#define ADC123_CSR_0
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC_MAP0_CALFACT     CALFACT_TypeDef CALFACT
#else
#define ADC_MAP0_CALFACT __SOOL_PERIPH_PADDING_4
#endif

//endregion

namespace sool
{
	namespace core
	{
		class ADC
		{
			
			
			public :
			
			#ifdef ADC_AWD2CR
			struct AWD2CR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_AWD2CR_0
					struct
					{
						uint32_t AWD2CH               :19;
						uint32_t                      :13;
					};
					#endif
					#ifdef ADC_AWD2CR_1
					struct
					{
						uint32_t AWD2CH               :20;
						uint32_t                      :12;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_AWD3CR
			struct AWD3CR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_AWD3CR_0
					struct
					{
						uint32_t AWD3CH               :19;
						uint32_t                      :13;
					};
					#endif
					#ifdef ADC_AWD3CR_1
					struct
					{
						uint32_t AWD3CH               :20;
						uint32_t                      :12;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_CALFACT
			struct CALFACT_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_CALFACT_0
					struct
					{
						uint32_t S                    :7;
						uint32_t                      :9;
						uint32_t D                    :7;
						uint32_t                      :9;
					};
					#endif
					#ifdef ADC_CALFACT_1
					struct
					{
						uint32_t S                    :11;
						uint32_t                      :5;
						uint32_t D                    :11;
						uint32_t                      :5;
					};
					#endif
					#ifdef ADC_CALFACT_2
					struct
					{
						uint32_t CALFACT              :7;
						uint32_t                      :25;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_CALFACT2
			struct CALFACT2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LINCALFACT           :30;
					uint32_t                      :2;
			
				
			};
			#endif
			
			#ifdef ADC_CFGR
			struct CFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_CFGR_0_DMAEN     :1;
						uint32_t ADC_CFGR_0_DMACFG    :1;
						uint32_t ADC_CFGR_0_DFSDMCFG  :1;
						uint32_t ADC_CFGR_0_RES       :2;
						uint32_t ADC_CFGR_0_ALIGN     :1;
						uint32_t ADC_CFGR_0_EXTSEL    :4;
						uint32_t EXTEN                :2;
						uint32_t OVRMOD               :1;
						uint32_t CONT                 :1;
						uint32_t AUTDLY               :1;
						uint32_t ADC_CFGR_0_AUTOFF    :1;
						uint32_t DISCEN               :1;
						uint32_t DISCNUM              :3;
						uint32_t JDISCEN              :1;
						uint32_t JQM                  :1;
						uint32_t AWD1SGL              :1;
						uint32_t AWD1EN               :1;
						uint32_t JAWD1EN              :1;
						uint32_t JAUTO                :1;
						uint32_t AWD1CH               :5;
						uint32_t ADC_CFGR_0_JQDIS     :1;
					};
					#ifdef ADC_CFGR_1
					struct
					{
						uint32_t DMNGT                :2;
						uint32_t RES                  :3;
						uint32_t EXTSEL               :5;
						uint32_t                      :22;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_CFGR1
			struct CFGR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t DMAEN                :1;
						uint32_t DMACFG               :1;
						uint32_t SCANDIR              :1;
						uint32_t RES                  :2;
						uint32_t ALIGN                :1;
						uint32_t EXTSEL               :3;
						uint32_t                      :1;
						uint32_t EXTEN                :2;
						uint32_t OVRMOD               :1;
						uint32_t CONT                 :1;
						uint32_t WAIT                 :1;
						uint32_t AUTOFF               :1;
						uint32_t DISCEN               :1;
						uint32_t                      :5;
						uint32_t ADC_CFGR1_0_AWD1SGL  :1;
						uint32_t ADC_CFGR1_0_AWD1EN   :1;
						uint32_t                      :2;
						uint32_t ADC_CFGR1_0_AWD1CH   :5;
						uint32_t                      :1;
					};
					struct
					{
						uint32_t                      :14;
						uint32_t ADC_CFGR1_1_AUTDLY   :1;
						uint32_t                      :7;
						uint32_t AWDSGL               :1;
						uint32_t AWDEN                :1;
						uint32_t                      :2;
						uint32_t AWDCH                :5;
						uint32_t                      :1;
					};
				};
				
			};
			#endif
			
			#ifdef ADC_CFGR2
			struct CFGR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_CFGR2_0_ROVSE    :1;
						uint32_t ADC_CFGR2_0_JOVSE    :1;
						uint32_t ADC_CFGR2_0_OVSR     :3;
						uint32_t ADC_CFGR2_0_OVSS     :4;
						uint32_t ADC_CFGR2_0_TROVS    :1;
						uint32_t ADC_CFGR2_0_ROVSM    :1;
						uint32_t ADC_CFGR2_0_RSHIFT1  :1;
						uint32_t ADC_CFGR2_0_RSHIFT2  :1;
						uint32_t ADC_CFGR2_0_RSHIFT3  :1;
						uint32_t ADC_CFGR2_0_RSHIFT4  :1;
						uint32_t                      :1;
						uint32_t ADC_CFGR2_0_OSR      :10;
						uint32_t                      :4;
						uint32_t ADC_CFGR2_0_CKMODE   :2;
					};
					#ifdef ADC_CFGR2_1
					struct
					{
						uint32_t ADC_CFGR2_1_OVSE     :1;
						uint32_t                      :8;
						uint32_t ADC_CFGR2_1_TOVS     :1;
						uint32_t                      :18;
						uint32_t ADC_CFGR2_1_LSHIFT   :4;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_CHSELR
			struct CHSELR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t CHSEL                :19;
						uint32_t                      :13;
					};
					struct
					{
						uint32_t CHSEL0               :1;
						uint32_t CHSEL1               :1;
						uint32_t CHSEL2               :1;
						uint32_t CHSEL3               :1;
						uint32_t CHSEL4               :1;
						uint32_t CHSEL5               :1;
						uint32_t CHSEL6               :1;
						uint32_t CHSEL7               :1;
						uint32_t CHSEL8               :1;
						uint32_t CHSEL9               :1;
						uint32_t CHSEL10              :1;
						uint32_t CHSEL11              :1;
						uint32_t CHSEL12              :1;
						uint32_t CHSEL13              :1;
						uint32_t CHSEL14              :1;
						uint32_t CHSEL15              :1;
						uint32_t ADC_CHSELR_1_CHSEL16 :1;
						uint32_t CHSEL17              :1;
						uint32_t CHSEL18              :1;
						uint32_t                      :13;
					};
				};
				
			};
			#endif
			
			#ifdef ADC_CR
			struct CR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADEN                 :1;
						uint32_t ADDIS                :1;
						uint32_t ADSTART              :1;
						uint32_t ADC_CR_0_JADSTART    :1;
						uint32_t ADSTP                :1;
						uint32_t ADC_CR_0_JADSTP      :1;
						uint32_t                      :2;
						uint32_t ADC_CR_0_BOOST       :1;
						uint32_t                      :7;
						uint32_t ADC_CR_0_ADCALLIN    :1;
						uint32_t                      :5;
						uint32_t ADC_CR_0_LINCALRDYW1 :1;
						uint32_t ADC_CR_0_LINCALRDYW2 :1;
						uint32_t ADC_CR_0_LINCALRDYW3 :1;
						uint32_t ADC_CR_0_LINCALRDYW4 :1;
						uint32_t ADC_CR_0_LINCALRDYW5 :1;
						uint32_t ADC_CR_0_LINCALRDYW6 :1;
						uint32_t ADC_CR_0_ADVREGEN    :2;
						uint32_t ADC_CR_0_ADCALDIF    :1;
						uint32_t ADCAL                :1;
					};
					#ifdef ADC_CR_1
					struct
					{
						uint32_t                      :28;
						uint32_t ADVREGEN             :1;
						uint32_t ADC_CR_1_DEEPPWD     :1;
						uint32_t                      :2;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_CR1
			struct CR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t AWDCH                :5;
						uint32_t ADC_CR1_0_EOSIE      :1;
						uint32_t AWDIE                :1;
						uint32_t ADC_CR1_0_JEOSIE     :1;
						uint32_t SCAN                 :1;
						uint32_t AWDSGL               :1;
						uint32_t JAUTO                :1;
						uint32_t DISCEN               :1;
						uint32_t JDISCEN              :1;
						uint32_t DISCNUM              :3;
						uint32_t ADC_CR1_0_DUALMOD    :4;
						uint32_t                      :2;
						uint32_t JAWDEN               :1;
						uint32_t AWDEN                :1;
						uint32_t ADC_CR1_0_RES        :2;
						uint32_t ADC_CR1_0_OVRIE      :1;
						uint32_t                      :5;
					};
					struct
					{
						uint32_t                      :5;
						uint32_t EOCIE                :1;
						uint32_t                      :1;
						uint32_t JEOCIE               :1;
						uint32_t                      :8;
						uint32_t ADC_CR1_1_PDD        :1;
						uint32_t ADC_CR1_1_PDI        :1;
						uint32_t                      :14;
					};
					#ifdef ADC_CR1_2
					struct
					{
						uint32_t                      :5;
						uint32_t EOCSIE               :1;
						uint32_t                      :26;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_CR2
			struct CR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADON                 :1;
						uint32_t CONT                 :1;
						uint32_t ADC_CR2_0_CAL        :1;
						uint32_t ADC_CR2_0_RSTCAL     :1;
						uint32_t ADC_CR2_0_DELS       :3;
						uint32_t                      :1;
						uint32_t DMA                  :1;
						uint32_t ADC_CR2_0_DDS        :1;
						uint32_t ADC_CR2_0_EOCS       :1;
						uint32_t ALIGN                :1;
						uint32_t ADC_CR2_0_JEXTSEL    :3;
						uint32_t ADC_CR2_0_JEXTTRIG   :1;
						uint32_t                      :1;
						uint32_t ADC_CR2_0_EXTSEL     :3;
						uint32_t ADC_CR2_0_EXTTRIG    :1;
						uint32_t ADC_CR2_0_JSWSTART   :1;
						uint32_t ADC_CR2_0_SWSTART    :1;
						uint32_t ADC_CR2_0_TSVREFE    :1;
						uint32_t                      :4;
						uint32_t ADC_CR2_0_EXTEN      :2;
						uint32_t                      :2;
					};
					#ifdef ADC_CR2_1
					struct
					{
						uint32_t                      :2;
						uint32_t ADC_CR2_1_CFG        :1;
						uint32_t                      :13;
						uint32_t JEXTSEL              :4;
						uint32_t JEXTEN               :2;
						uint32_t JSWSTART             :1;
						uint32_t                      :1;
						uint32_t EXTSEL               :4;
						uint32_t                      :2;
						uint32_t SWSTART              :1;
						uint32_t                      :1;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_DIFSEL
			struct DIFSEL_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_DIFSEL_0_DIFSEL  :19;
						uint32_t ADC_DIFSEL_0_DIFSEL19 :1;
						uint32_t                      :12;
					};
					struct
					{
						uint32_t DIFSEL0              :1;
						uint32_t DIFSEL1              :1;
						uint32_t DIFSEL2              :1;
						uint32_t DIFSEL3              :1;
						uint32_t DIFSEL4              :1;
						uint32_t DIFSEL5              :1;
						uint32_t DIFSEL6              :1;
						uint32_t DIFSEL7              :1;
						uint32_t DIFSEL8              :1;
						uint32_t DIFSEL9              :1;
						uint32_t DIFSEL10             :1;
						uint32_t DIFSEL11             :1;
						uint32_t DIFSEL12             :1;
						uint32_t DIFSEL13             :1;
						uint32_t DIFSEL14             :1;
						uint32_t DIFSEL15             :1;
						uint32_t DIFSEL16             :1;
						uint32_t DIFSEL17             :1;
						uint32_t DIFSEL18             :1;
						uint32_t                      :13;
					};
					#ifdef ADC_DIFSEL_2
					struct
					{
						uint32_t DIFSEL               :20;
						uint32_t                      :12;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_DR
			struct DR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_DR_0
					struct
					{
						uint32_t DATA                 :16;
						uint32_t ADC_DR_0_ADC2DATA    :16;
					};
					#endif
					#ifdef ADC_DR_1
					struct
					{
						uint32_t RDATA                :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef ADC_DR_2
					struct
					{
						uint32_t RDATA                :32;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_HTR
			struct HTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_HTR_0
					struct
					{
						uint32_t                      :16;
						uint32_t HT                   :12;
						uint32_t                      :4;
					};
					#endif
					struct
					{
						uint32_t HT                   :12;
						uint32_t                      :20;
					};
				};
				
			};
			#endif
			
			#ifdef ADC_HTR1
			struct HTR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t HT1                  :26;
					uint32_t                      :6;
			
				
			};
			#endif
			
			#ifdef ADC_HTR2
			struct HTR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t HT2                  :26;
					uint32_t                      :6;
			
				
			};
			#endif
			
			#ifdef ADC_HTR3
			struct HTR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t HT3                  :26;
					uint32_t                      :6;
			
				
			};
			#endif
			
			#ifdef ADC_IER
			struct IER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_IER_0
					struct
					{
						uint32_t ADRDYIE              :1;
						uint32_t EOSMPIE              :1;
						uint32_t EOCIE                :1;
						uint32_t ADC_IER_0_EOSIE      :1;
						uint32_t OVRIE                :1;
						uint32_t ADC_IER_0_JEOCIE     :1;
						uint32_t ADC_IER_0_JEOSIE     :1;
						uint32_t ADC_IER_0_AWD1IE     :1;
						uint32_t ADC_IER_0_AWD2IE     :1;
						uint32_t ADC_IER_0_AWD3IE     :1;
						uint32_t ADC_IER_0_JQOVFIE    :1;
						uint32_t ADC_IER_0_EOCALIE    :1;
						uint32_t                      :20;
					};
					#endif
					struct
					{
						uint32_t ADC_IER_1_RDY        :1;
						uint32_t ADC_IER_1_EOSMP      :1;
						uint32_t ADC_IER_1_EOC        :1;
						uint32_t ADC_IER_1_EOSEQIE    :1;
						uint32_t ADC_IER_1_OVR        :1;
						uint32_t ADC_IER_1_JEOC       :1;
						uint32_t ADC_IER_1_JEOS       :1;
						uint32_t ADC_IER_1_AWDIE      :1;
						uint32_t ADC_IER_1_AWD2       :1;
						uint32_t ADC_IER_1_AWD3       :1;
						uint32_t ADC_IER_1_JQOVF      :1;
						uint32_t                      :21;
					};
					#ifdef ADC_IER_2
					struct
					{
						uint32_t ADC_IER_2_ADRDY      :1;
						uint32_t                      :2;
						uint32_t EOS                  :1;
						uint32_t                      :3;
						uint32_t AWD1                 :1;
						uint32_t                      :24;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_ISR
			struct ISR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_ISR_0_ADRDY      :1;
						uint32_t EOSMP                :1;
						uint32_t EOC                  :1;
						uint32_t ADC_ISR_0_EOS        :1;
						uint32_t OVR                  :1;
						uint32_t ADC_ISR_0_JEOC       :1;
						uint32_t ADC_ISR_0_JEOS       :1;
						uint32_t ADC_ISR_0_AWD1       :1;
						uint32_t ADC_ISR_0_AWD2       :1;
						uint32_t ADC_ISR_0_AWD3       :1;
						uint32_t ADC_ISR_0_JQOVF      :1;
						uint32_t ADC_ISR_0_EOCAL      :1;
						uint32_t                      :20;
					};
					#ifdef ADC_ISR_1
					struct
					{
						uint32_t ADC_ISR_1_ADRD       :1;
						uint32_t                      :2;
						uint32_t ADC_ISR_1_EOSEQ      :1;
						uint32_t                      :3;
						uint32_t ADC_ISR_1_AWD        :1;
						uint32_t                      :24;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_JDR1
			struct JDR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_JDR1_0
					struct
					{
						uint32_t JDATA                :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef ADC_JDR1_1
					struct
					{
						uint32_t JDATA                :32;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_JDR2
			struct JDR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_JDR2_0
					struct
					{
						uint32_t JDATA                :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef ADC_JDR2_1
					struct
					{
						uint32_t JDATA                :32;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_JDR3
			struct JDR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_JDR3_0
					struct
					{
						uint32_t JDATA                :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef ADC_JDR3_1
					struct
					{
						uint32_t JDATA                :32;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_JDR4
			struct JDR4_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_JDR4_0
					struct
					{
						uint32_t JDATA                :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef ADC_JDR4_1
					struct
					{
						uint32_t JDATA                :32;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_JOFR1
			struct JOFR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t JOFFSET1             :12;
					uint32_t                      :20;
			
				
			};
			#endif
			
			#ifdef ADC_JOFR2
			struct JOFR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t JOFFSET2             :12;
					uint32_t                      :20;
			
				
			};
			#endif
			
			#ifdef ADC_JOFR3
			struct JOFR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t JOFFSET3             :12;
					uint32_t                      :20;
			
				
			};
			#endif
			
			#ifdef ADC_JOFR4
			struct JOFR4_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t JOFFSET4             :12;
					uint32_t                      :20;
			
				
			};
			#endif
			
			#ifdef ADC_JSQR
			struct JSQR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_JSQR_0
					struct
					{
						uint32_t JSQ1                 :5;
						uint32_t JSQ2                 :5;
						uint32_t JSQ3                 :5;
						uint32_t JSQ4                 :5;
						uint32_t JL                   :2;
						uint32_t                      :10;
					};
					#endif
					#ifdef ADC_JSQR_1
					struct
					{
						uint32_t JL                   :2;
						uint32_t ADC_JSQR_1_JEXTSEL   :4;
						uint32_t ADC_JSQR_1_JEXTEN    :2;
						uint32_t ADC_JSQR_1_JSQ1      :5;
						uint32_t                      :1;
						uint32_t ADC_JSQR_1_JSQ2      :5;
						uint32_t                      :1;
						uint32_t ADC_JSQR_1_JSQ3      :5;
						uint32_t                      :1;
						uint32_t ADC_JSQR_1_JSQ4      :5;
						uint32_t                      :1;
					};
					#endif
					#ifdef ADC_JSQR_2
					struct
					{
						uint32_t                      :2;
						uint32_t JEXTSEL              :5;
						uint32_t JEXTEN               :2;
						uint32_t JSQ1                 :5;
						uint32_t                      :1;
						uint32_t JSQ2                 :5;
						uint32_t                      :1;
						uint32_t JSQ3                 :5;
						uint32_t                      :1;
						uint32_t JSQ4                 :5;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_LTR
			struct LTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LT                   :12;
					uint32_t                      :20;
			
				
			};
			#endif
			
			#ifdef ADC_LTR1
			struct LTR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LT1                  :26;
					uint32_t                      :6;
			
				
			};
			#endif
			
			#ifdef ADC_LTR2
			struct LTR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LT2                  :26;
					uint32_t                      :6;
			
				
			};
			#endif
			
			#ifdef ADC_LTR3
			struct LTR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LT3                  :26;
					uint32_t                      :6;
			
				
			};
			#endif
			
			#ifdef ADC_OFR1
			struct OFR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_OFR1_0_OFFSET1   :12;
						uint32_t                      :19;
						uint32_t ADC_OFR1_0_SSATE     :1;
					};
					#ifdef ADC_OFR1_1
					struct
					{
						uint32_t OFFSET1              :26;
						uint32_t                      :6;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_OFR2
			struct OFR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_OFR2_0_OFFSET2   :12;
						uint32_t                      :19;
						uint32_t ADC_OFR2_0_SSATE     :1;
					};
					#ifdef ADC_OFR2_1
					struct
					{
						uint32_t OFFSET2              :26;
						uint32_t                      :6;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_OFR3
			struct OFR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_OFR3_0_OFFSET3   :12;
						uint32_t                      :19;
						uint32_t ADC_OFR3_0_SSATE     :1;
					};
					#ifdef ADC_OFR3_1
					struct
					{
						uint32_t OFFSET3              :26;
						uint32_t                      :6;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_OFR4
			struct OFR4_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_OFR4_0_OFFSET4   :12;
						uint32_t                      :19;
						uint32_t ADC_OFR4_0_SSATE     :1;
					};
					#ifdef ADC_OFR4_1
					struct
					{
						uint32_t OFFSET4              :26;
						uint32_t                      :6;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_PCSEL
			struct PCSEL_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t PCSEL                :20;
						uint32_t                      :12;
					};
					struct
					{
						uint32_t PCSEL0               :1;
						uint32_t PCSEL1               :1;
						uint32_t PCSEL2               :1;
						uint32_t PCSEL3               :1;
						uint32_t PCSEL4               :1;
						uint32_t PCSEL5               :1;
						uint32_t PCSEL6               :1;
						uint32_t PCSEL7               :1;
						uint32_t PCSEL8               :1;
						uint32_t PCSEL9               :1;
						uint32_t PCSEL10              :1;
						uint32_t PCSEL11              :1;
						uint32_t PCSEL12              :1;
						uint32_t PCSEL13              :1;
						uint32_t PCSEL14              :1;
						uint32_t PCSEL15              :1;
						uint32_t PCSEL16              :1;
						uint32_t PCSEL17              :1;
						uint32_t PCSEL18              :1;
						uint32_t PCSEL19              :1;
						uint32_t                      :12;
					};
				};
				
			};
			#endif
			
			#ifdef ADC_SMPR
			struct SMPR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t SMP                  :3;
						uint32_t                      :29;
					};
					#ifdef ADC_SMPR_1
					struct
					{
						uint32_t SMPR                 :3;
						uint32_t                      :29;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_SMPR0
			struct SMPR0_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t SMP30                :3;
					uint32_t SMP31                :3;
					uint32_t                      :26;
			
				
			};
			#endif
			
			#ifdef ADC_SMPR1
			struct SMPR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_SMPR1_0
					struct
					{
						uint32_t ADC_SMPR1_0_SMPR     :3;
						uint32_t ADC_SMPR1_0_SMP11    :3;
						uint32_t ADC_SMPR1_0_SMP12    :3;
						uint32_t ADC_SMPR1_0_SMP13    :3;
						uint32_t ADC_SMPR1_0_SMP14    :3;
						uint32_t ADC_SMPR1_0_SMP15    :3;
						uint32_t ADC_SMPR1_0_SMP16    :3;
						uint32_t ADC_SMPR1_0_SMP17    :3;
						uint32_t ADC_SMPR1_0_SMP18    :3;
						uint32_t ADC_SMPR1_0_SMP9     :3;
						uint32_t                      :1;
						uint32_t ADC_SMPR1_0_SMPPLUS  :1;
					};
					#endif
					#ifdef ADC_SMPR1_1
					struct
					{
						uint32_t ADC_SMPR1_1_SMP10    :3;
						uint32_t ADC_SMPR1_1_SMP1     :3;
						uint32_t ADC_SMPR1_1_SMP2     :3;
						uint32_t ADC_SMPR1_1_SMP3     :3;
						uint32_t ADC_SMPR1_1_SMP4     :3;
						uint32_t ADC_SMPR1_1_SMP5     :3;
						uint32_t ADC_SMPR1_1_SMP6     :3;
						uint32_t ADC_SMPR1_1_SMP7     :3;
						uint32_t ADC_SMPR1_1_SMP8     :3;
						uint32_t ADC_SMPR1_1_SMP29    :3;
						uint32_t                      :2;
					};
					#endif
					#ifdef ADC_SMPR1_2
					struct
					{
						uint32_t ADC_SMPR1_2_SMP0     :3;
						uint32_t ADC_SMPR1_2_SMP21    :3;
						uint32_t ADC_SMPR1_2_SMP22    :3;
						uint32_t ADC_SMPR1_2_SMP23    :3;
						uint32_t ADC_SMPR1_2_SMP24    :3;
						uint32_t ADC_SMPR1_2_SMP25    :3;
						uint32_t ADC_SMPR1_2_SMP26    :3;
						uint32_t ADC_SMPR1_2_SMP27    :3;
						uint32_t ADC_SMPR1_2_SMP28    :3;
						uint32_t                      :5;
					};
					#endif
					#ifdef ADC_SMPR1_3
					struct
					{
						uint32_t SMP20                :3;
						uint32_t                      :29;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_SMPR2
			struct SMPR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_SMPR2_0
					struct
					{
						uint32_t SMP0                 :3;
						uint32_t SMP1                 :3;
						uint32_t SMP2                 :3;
						uint32_t SMP3                 :3;
						uint32_t SMP4                 :3;
						uint32_t SMP5                 :3;
						uint32_t SMP6                 :3;
						uint32_t SMP7                 :3;
						uint32_t SMP8                 :3;
						uint32_t SMP9                 :3;
						uint32_t                      :2;
					};
					#endif
					#ifdef ADC_SMPR2_1
					struct
					{
						uint32_t SMP10                :3;
						uint32_t SMP11                :3;
						uint32_t SMP12                :3;
						uint32_t SMP13                :3;
						uint32_t SMP14                :3;
						uint32_t SMP15                :3;
						uint32_t SMP16                :3;
						uint32_t SMP17                :3;
						uint32_t SMP18                :3;
						uint32_t ADC_SMPR2_1_SMP19    :3;
						uint32_t                      :2;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_SMPR3
			struct SMPR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t SMP0                 :3;
					uint32_t SMP1                 :3;
					uint32_t SMP2                 :3;
					uint32_t SMP3                 :3;
					uint32_t SMP4                 :3;
					uint32_t SMP5                 :3;
					uint32_t SMP6                 :3;
					uint32_t SMP7                 :3;
					uint32_t SMP8                 :3;
					uint32_t SMP9                 :3;
					uint32_t                      :2;
			
				
			};
			#endif
			
			#ifdef ADC_SQR1
			struct SQR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_SQR1_0
					struct
					{
						uint32_t ADC_SQR1_0_SQ13      :5;
						uint32_t ADC_SQR1_0_SQ14      :5;
						uint32_t ADC_SQR1_0_SQ15      :5;
						uint32_t ADC_SQR1_0_SQ16      :5;
						uint32_t ADC_SQR1_0_L         :4;
						uint32_t ADC_SQR1_0_SQ4       :5;
						uint32_t                      :3;
					};
					#endif
					#ifdef ADC_SQR1_1
					struct
					{
						uint32_t L                    :4;
						uint32_t                      :2;
						uint32_t SQ1                  :5;
						uint32_t                      :1;
						uint32_t SQ2                  :5;
						uint32_t                      :1;
						uint32_t SQ3                  :5;
						uint32_t                      :9;
					};
					#endif
					#ifdef ADC_SQR1_2
					struct
					{
						uint32_t SQ25                 :5;
						uint32_t SQ26                 :5;
						uint32_t SQ27                 :5;
						uint32_t ADC_SQR1_2_SQ28      :5;
						uint32_t L                    :5;
						uint32_t                      :7;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_SQR2
			struct SQR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_SQR2_0
					struct
					{
						uint32_t SQ7                  :5;
						uint32_t SQ8                  :5;
						uint32_t SQ9                  :5;
						uint32_t SQ10                 :5;
						uint32_t SQ11                 :5;
						uint32_t SQ12                 :5;
						uint32_t                      :2;
					};
					#endif
					#ifdef ADC_SQR2_1
					struct
					{
						uint32_t SQ5                  :5;
						uint32_t                      :1;
						uint32_t SQ6                  :5;
						uint32_t                      :1;
						uint32_t SQ7                  :5;
						uint32_t                      :1;
						uint32_t SQ8                  :5;
						uint32_t                      :1;
						uint32_t SQ9                  :5;
						uint32_t                      :3;
					};
					#endif
					#ifdef ADC_SQR2_2
					struct
					{
						uint32_t SQ19                 :5;
						uint32_t SQ20                 :5;
						uint32_t SQ21                 :5;
						uint32_t SQ22                 :5;
						uint32_t SQ23                 :5;
						uint32_t SQ24                 :5;
						uint32_t                      :2;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_SQR3
			struct SQR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_SQR3_0
					struct
					{
						uint32_t SQ1                  :5;
						uint32_t SQ2                  :5;
						uint32_t SQ3                  :5;
						uint32_t SQ4                  :5;
						uint32_t SQ5                  :5;
						uint32_t SQ6                  :5;
						uint32_t                      :2;
					};
					#endif
					#ifdef ADC_SQR3_1
					struct
					{
						uint32_t SQ10                 :5;
						uint32_t                      :1;
						uint32_t SQ11                 :5;
						uint32_t                      :1;
						uint32_t SQ12                 :5;
						uint32_t                      :1;
						uint32_t SQ13                 :5;
						uint32_t                      :1;
						uint32_t SQ14                 :5;
						uint32_t                      :3;
					};
					#endif
					#ifdef ADC_SQR3_2
					struct
					{
						uint32_t SQ13                 :5;
						uint32_t SQ14                 :5;
						uint32_t SQ15                 :5;
						uint32_t SQ16                 :5;
						uint32_t SQ17                 :5;
						uint32_t SQ18                 :5;
						uint32_t                      :2;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_SQR4
			struct SQR4_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_SQR4_0_SQ15      :5;
						uint32_t                      :1;
						uint32_t ADC_SQR4_0_SQ16      :5;
						uint32_t                      :4;
						uint32_t ADC_SQR4_0_SQ10      :5;
						uint32_t ADC_SQR4_0_SQ11      :5;
						uint32_t ADC_SQR4_0_SQ12      :5;
						uint32_t                      :2;
					};
					#ifdef ADC_SQR4_1
					struct
					{
						uint32_t SQ7                  :5;
						uint32_t SQ8                  :5;
						uint32_t SQ9                  :5;
						uint32_t                      :17;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_SQR5
			struct SQR5_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t SQ1                  :5;
					uint32_t SQ2                  :5;
					uint32_t SQ3                  :5;
					uint32_t SQ4                  :5;
					uint32_t SQ5                  :5;
					uint32_t SQ6                  :5;
					uint32_t                      :2;
			
				
			};
			#endif
			
			#ifdef ADC_SR
			struct SR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t AWD                  :1;
						uint32_t ADC_SR_0_EOS         :1;
						uint32_t ADC_SR_0_JEOS        :1;
						uint32_t JSTRT                :1;
						uint32_t STRT                 :1;
						uint32_t ADC_SR_0_OVR         :1;
						uint32_t ADC_SR_0_ADONS       :1;
						uint32_t                      :1;
						uint32_t ADC_SR_0_RCNR        :1;
						uint32_t ADC_SR_0_JCNR        :1;
						uint32_t                      :22;
					};
					struct
					{
						uint32_t                      :1;
						uint32_t EOC                  :1;
						uint32_t JEOC                 :1;
						uint32_t                      :29;
					};
					#ifdef ADC_SR_2
					struct
					{
						uint32_t                      :1;
						uint32_t EOCS                 :1;
						uint32_t                      :30;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_TR
			struct TR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LT                   :12;
					uint32_t                      :4;
					uint32_t HT                   :12;
					uint32_t                      :4;
			
				
			};
			#endif
			
			#ifdef ADC_TR1
			struct TR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LT1                  :12;
					uint32_t                      :4;
					uint32_t HT1                  :12;
					uint32_t                      :4;
			
				
			};
			#endif
			
			#ifdef ADC_TR2
			struct TR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LT2                  :8;
					uint32_t                      :8;
					uint32_t HT2                  :8;
					uint32_t                      :8;
			
				
			};
			#endif
			
			#ifdef ADC_TR3
			struct TR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LT3                  :8;
					uint32_t                      :8;
					uint32_t HT3                  :8;
					uint32_t                      :8;
			
				
			};
			#endif
			
			union
			{
				
				struct
				{
					ADC_MAP0_ISR;        // @0x000
					ADC_MAP0_IER;        // @0x004
					ADC_MAP0_CR;         // @0x008
					ADC_MAP0_CFGR1;      // @0x00c
					ADC_MAP0_CFGR2;      // @0x010
					ADC_MAP0_SMPR;       // @0x014
					ADC_MAP0_JOFR2;      // @0x018
					ADC_MAP0_JOFR3;      // @0x01c
					ADC_MAP0_TR;         // @0x020
					ADC_MAP0_HTR;        // @0x024
					ADC_MAP0_CHSELR;     // @0x028
					ADC_MAP0_SQR1;       // @0x02c
					ADC_MAP0_SQR2;       // @0x030
					ADC_MAP0_SQR3;       // @0x034
					ADC_MAP0_JSQR;       // @0x038
					ADC_MAP0_JDR1;       // @0x03c
					ADC_MAP0_DR;         // @0x040
					ADC_MAP0_JDR3;       // @0x044
					ADC_MAP0_JDR4;       // @0x048
					ADC_MAP0_JDR2;       // @0x04c
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					ADC_MAP0_SMPR0;      // @0x05c
					ADC_MAP0_OFR1;       // @0x060
					ADC_MAP0_OFR2;       // @0x064
					ADC_MAP0_OFR3;       // @0x068
					ADC_MAP0_OFR4;       // @0x06c
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
					ADC_MAP0_AWD2CR;     // @0x0a0
					ADC_MAP0_AWD3CR;     // @0x0a4
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP0_DIFSEL;     // @0x0b0
					ADC_MAP0_CALFACT;    // @0x0b4
					ADC_MAP0_LTR3;       // @0x0b8
					ADC_MAP0_HTR3;       // @0x0bc
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP0_CALFACT2;   // @0x0c8
				};
				struct
				{
					ADC_MAP1_SR;         // @0x000
					ADC_MAP1_CR1;        // @0x004
					ADC_MAP1_CR2;        // @0x008
					ADC_MAP1_SMPR1;      // @0x00c
					ADC_MAP1_SMPR2;      // @0x010
					ADC_MAP1_JOFR1;      // @0x014
					__SOOL_PERIPH_PADDING_4;
					ADC_MAP1_PCSEL;      // @0x01c
					ADC_MAP1_JOFR4;      // @0x020
					ADC_MAP1_TR2;        // @0x024
					ADC_MAP1_LTR;        // @0x028
					__SOOL_PERIPH_PADDING_4;
					ADC_MAP1_SQR1;       // @0x030
					ADC_MAP1_SQR2;       // @0x034
					ADC_MAP1_SQR3;       // @0x038
					ADC_MAP1_SQR4;       // @0x03c
					ADC_MAP1_JDR2;       // @0x040
					ADC_MAP1_JSQR;       // @0x044
					ADC_MAP1_JDR1;       // @0x048
					ADC_MAP1_DR;         // @0x04c
					ADC_MAP1_JDR3;       // @0x050
					ADC_MAP1_JDR4;       // @0x054
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP1_LTR2;       // @0x0b0
					ADC_MAP1_HTR2;       // @0x0b4
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP1_DIFSEL;     // @0x0c0
					ADC_MAP1_CALFACT;    // @0x0c4
					__SOOL_PERIPH_PADDING_4;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					ADC_MAP2_CFGR;       // @0x00c
					__SOOL_PERIPH_PADDING_4;
					ADC_MAP2_SMPR1;      // @0x014
					ADC_MAP2_SMPR2;      // @0x018
					ADC_MAP2_JOFR2;      // @0x01c
					ADC_MAP2_TR1;        // @0x020
					ADC_MAP2_HTR1;       // @0x024
					ADC_MAP2_TR3;        // @0x028
					ADC_MAP2_LTR;        // @0x02c
					__SOOL_PERIPH_PADDING_16;
					ADC_MAP2_SQR5;       // @0x040
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP2_JSQR;       // @0x04c
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP2_DR;         // @0x058
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_4;
					ADC_MAP2_JDR1;       // @0x080
					ADC_MAP2_JDR2;       // @0x084
					ADC_MAP2_JDR3;       // @0x088
					ADC_MAP2_JDR4;       // @0x08c
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_4;
					ADC_MAP3_SMPR3;      // @0x014
					ADC_MAP3_JOFR1;      // @0x018
					__SOOL_PERIPH_PADDING_4;
					ADC_MAP3_LTR1;       // @0x020
					ADC_MAP3_JOFR4;      // @0x024
					ADC_MAP3_HTR;        // @0x028
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_32;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_32;
					ADC_MAP4_JOFR3;      // @0x020
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_8;
				};
			};
			private:
			ADC() = delete;
			private:
			static constexpr uint32_t get_clock_enable_bit(const uint32_t addr);
			
			static constexpr volatile Reg32_t& get_clock_enable_reg(const uint32_t addr);
			
			public:
			void enable_clock() volatile;
			
			void disable_clock() volatile;
			
			bool is_clock_enabled() const volatile;
			
			#ifdef ADC_SQR1
			void set_acquisition_sequence_length(const unsigned int length) volatile;
			#endif
			
			void set_sequence_value(const unsigned int position, const unsigned int channel) volatile;
			
		};
		
		struct ADC_Common_base_plugin
		{
		
			#ifdef ADC_Common_CCR
			struct CCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ADC_Common_CCR_0_MULTI :5;
						uint32_t                      :3;
						uint32_t ADC_Common_CCR_0_DELAY :4;
						uint32_t                      :1;
						uint32_t ADC_Common_CCR_0_DDS :1;
						uint32_t ADC_Common_CCR_0_DMA :2;
						uint32_t ADC_Common_CCR_0_ADCPRE :2;
						uint32_t ADC_Common_CCR_0_PRESC :4;
						uint32_t ADC_Common_CCR_0_VREFEN :1;
						uint32_t ADC_Common_CCR_0_TSEN :1;
						uint32_t ADC_Common_CCR_0_VBATEN :1;
						uint32_t ADC_Common_CCR_0_LFMEN :1;
						uint32_t                      :6;
					};
					#ifdef ADC_Common_CCR_1
					struct
					{
						uint32_t ADC_Common_CCR_1_DUAL :5;
						uint32_t                      :8;
						uint32_t ADC_Common_CCR_1_DMACFG :1;
						uint32_t ADC_Common_CCR_1_MDMA :2;
						uint32_t ADC_Common_CCR_1_CKMODE :2;
						uint32_t                      :4;
						uint32_t ADC_Common_CCR_1_VBATE :1;
						uint32_t ADC_Common_CCR_1_TSVREFE :1;
						uint32_t ADC_Common_CCR_1_VLCDEN :1;
						uint32_t                      :7;
					};
					#endif
					#ifdef ADC_Common_CCR_2
					struct
					{
						uint32_t                      :14;
						uint32_t DAMDF                :2;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_Common_CDR
			struct CDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_Common_CDR_0
					struct
					{
						uint32_t DATA1                :16;
						uint32_t DATA2                :16;
					};
					#endif
					#ifdef ADC_Common_CDR_1
					struct
					{
						uint32_t RDATA_MST            :16;
						uint32_t RDATA_SLV            :16;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef ADC_Common_CDR2
			struct CDR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
			
				
			};
			#endif
			
			#ifdef ADC_Common_CSR
			struct CSR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef ADC_Common_CSR_0
					struct
					{
						uint32_t ADC_Common_CSR_0_AWD1 :1;
						uint32_t ADC_Common_CSR_0_EOC1 :1;
						uint32_t ADC_Common_CSR_0_JEOC1 :1;
						uint32_t ADC_Common_CSR_0_JSTRT1 :1;
						uint32_t ADC_Common_CSR_0_STRT1 :1;
						uint32_t ADC_Common_CSR_0_OVR1 :1;
						uint32_t ADC_Common_CSR_0_JEOS_MST :1;
						uint32_t                      :1;
						uint32_t ADC_Common_CSR_0_AWD2 :1;
						uint32_t ADC_Common_CSR_0_EOC2 :1;
						uint32_t ADC_Common_CSR_0_JEOC2 :1;
						uint32_t ADC_Common_CSR_0_JSTRT2 :1;
						uint32_t ADC_Common_CSR_0_STRT2 :1;
						uint32_t ADC_Common_CSR_0_OVR2 :1;
						uint32_t                      :2;
						uint32_t ADC_Common_CSR_0_AWD3 :1;
						uint32_t ADC_Common_CSR_0_EOC3 :1;
						uint32_t ADC_Common_CSR_0_JEOC3 :1;
						uint32_t ADC_Common_CSR_0_JSTRT3 :1;
						uint32_t ADC_Common_CSR_0_STRT3 :1;
						uint32_t ADC_Common_CSR_0_OVR3 :1;
						uint32_t ADC_Common_CSR_0_JEOS_SLV :1;
						uint32_t                      :3;
						uint32_t ADC_Common_CSR_0_JQOVF_SLV :1;
						uint32_t                      :5;
					};
					#endif
					#ifdef ADC_Common_CSR_1
					struct
					{
						uint32_t ADC_Common_CSR_1_ADRDY_MST :1;
						uint32_t ADC_Common_CSR_1_EOSMP_MST :1;
						uint32_t ADC_Common_CSR_1_EOC_MST :1;
						uint32_t ADC_Common_CSR_1_EOS_MST :1;
						uint32_t ADC_Common_CSR_1_OVR_MST :1;
						uint32_t ADC_Common_CSR_1_DOVR1 :1;
						uint32_t ADC_Common_CSR_1_ADONS1 :1;
						uint32_t                      :3;
						uint32_t ADC_Common_CSR_1_JQOVF_MST :1;
						uint32_t                      :2;
						uint32_t ADC_Common_CSR_1_DOVR2 :1;
						uint32_t                      :2;
						uint32_t ADC_Common_CSR_1_ADRDY_SLV :1;
						uint32_t ADC_Common_CSR_1_EOSMP_SLV :1;
						uint32_t ADC_Common_CSR_1_EOC_SLV :1;
						uint32_t ADC_Common_CSR_1_EOS_SLV :1;
						uint32_t ADC_Common_CSR_1_OVR_SLV :1;
						uint32_t ADC_Common_CSR_1_DOVR3 :1;
						uint32_t                      :10;
					};
					#endif
					#ifdef ADC_Common_CSR_2
					struct
					{
						uint32_t                      :1;
						uint32_t ADC_Common_CSR_2_EOCS1 :1;
						uint32_t ADC_Common_CSR_2_JEOS1 :1;
						uint32_t                      :2;
						uint32_t ADC_Common_CSR_2_JEOC_MST :1;
						uint32_t                      :15;
						uint32_t ADC_Common_CSR_2_JEOC_SLV :1;
						uint32_t                      :10;
					};
					#endif
				};
				
			};
			#endif
			};
		template<typename plugin=ADC_Common_base_plugin>
		class ADC_Common
		{
			
			
			public :
			
			union
			{
				
				struct
				{
					ADC_Common_MAP0_CCR; // @0x000
					ADC_Common_MAP0_CR1; // @0x004
					ADC_Common_MAP0_CR2; // @0x008
					ADC_Common_MAP0_CDR; // @0x00c
					ADC_Common_MAP0_CDR2; // @0x010
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					ADC_Common_MAP0_DR;  // @0x04c
				};
				struct
				{
					ADC_Common_MAP1_SR;  // @0x000
					ADC_Common_MAP1_CCR; // @0x004
					ADC_Common_MAP1_CDR; // @0x008
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_4;
				};
				struct
				{
					ADC_Common_MAP2_CSR; // @0x000
					__SOOL_PERIPH_PADDING_4;
					ADC_Common_MAP2_CCR; // @0x008
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_4;
				};
			};
			private:
			ADC_Common() = delete;
			
		};
		
		//region instances
#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32L0     ) || defined(STM32L1     ) 
#define ADC1_BASE_ADDR ((uint32_t)0x40012400U)
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define ADC1_BASE_ADDR ((uint32_t)0x40012000U)
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) 
#define ADC1_BASE_ADDR ((uint32_t)0x50000000U)
#endif

#if defined(STM32H7     ) 
#define ADC1_BASE_ADDR ((uint32_t)0x40022000U)
#define ADC2_BASE_ADDR ((uint32_t)0x40022100U)
#define ADC3_BASE_ADDR ((uint32_t)0x58026000U)
#define ADC12_COMMON_BASE_ADDR ((uint32_t)0x40022300U)
#define ADC3_COMMON_BASE_ADDR ((uint32_t)0x58026300U)
#endif

#if defined(STM32L4     ) || defined(STM32L4P    ) 
#define ADC1_BASE_ADDR ((uint32_t)0x50040000U)
#endif

#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC ) 
#define ADC2_BASE_ADDR ((uint32_t)0x40012800U)
#define ADC12_COMMON_BASE_ADDR ((uint32_t)0x40012400U)
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) 
#define ADC2_BASE_ADDR ((uint32_t)0x40012100U)
#define ADC3_BASE_ADDR ((uint32_t)0x40012200U)
#define ADC123_COMMON_BASE_ADDR ((uint32_t)0x40012300U)
#endif

#if defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) 
#define ADC2_BASE_ADDR ((uint32_t)0x50000100U)
#define ADC12_COMMON_BASE_ADDR ((uint32_t)0x50000300U)
#endif

#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define ADC2_BASE_ADDR ((uint32_t)0x50040100U)
#define ADC3_BASE_ADDR ((uint32_t)0x50040200U)
#define ADC123_COMMON_BASE_ADDR ((uint32_t)0x50040300U)
#endif

#if defined(STM32F103xE ) || defined(STM32F103xG ) 
#define ADC3_BASE_ADDR ((uint32_t)0x40013C00U)
#endif

#if defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F398xx ) 
#define ADC3_BASE_ADDR ((uint32_t)0x50000400U)
#define ADC4_BASE_ADDR ((uint32_t)0x50000500U)
#define ADC34_COMMON_BASE_ADDR ((uint32_t)0x50000700U)
#endif

#if defined(STM32F0     ) || defined(STM32L0     ) 
#define ADC1_COMMON_BASE_ADDR ((uint32_t)0x40012708U)
#endif

#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101x6 ) || defined(STM32F101xB ) ||\
    defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F102x6 ) || defined(STM32F102xB ) ||\
    defined(STM32F373xC ) || defined(STM32F378xx ) 
#define ADC1_COMMON_BASE_ADDR ((uint32_t)0x40012400U)
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F318xx ) 
#define ADC1_COMMON_BASE_ADDR ((uint32_t)0x50000300U)
#endif

#if defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) 
#define ADC1_COMMON_BASE_ADDR ((uint32_t)0x40012300U)
#endif

#if defined(STM32L1     ) 
#define ADC1_COMMON_BASE_ADDR ((uint32_t)0x40012700U)
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) ||\
    defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) ||\
    defined(STM32L4P    ) 
#define ADC1_COMMON_BASE_ADDR ((uint32_t)0x50040300U)
#endif

#if defined(STM32F0     ) 
#define ADC_BASE_ADDR ((uint32_t)0x40012708U)
#endif

#if defined(STM32F7     ) 
#define ADC_BASE_ADDR ((uint32_t)0x40012300U)
#endif

#ifdef ADC1_BASE_ADDR
volatile class ADC * const ADC1 = reinterpret_cast<class ADC* const>(ADC1_BASE_ADDR);
#endif
#ifdef ADC2_BASE_ADDR
volatile class ADC * const ADC2 = reinterpret_cast<class ADC* const>(ADC2_BASE_ADDR);
#endif
#ifdef ADC3_BASE_ADDR
volatile class ADC * const ADC3 = reinterpret_cast<class ADC* const>(ADC3_BASE_ADDR);
#endif
#ifdef ADC12_COMMON_BASE_ADDR
struct ADC12_COMMON_plugin: ADC_Common_base_plugin {
	
	#ifdef ADC_Common_CSR
	struct CSR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC12_COMMON_CSR_0
			struct
			{
				uint32_t ADC12_COMMON_CSR_0_ADRDY_MST :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_EOSMP_MST :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_EOC_MST :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_EOS_MST :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_OVR_MST :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_JEOC_MST :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_JEOS_MST :1;
				uint32_t ADC12_COMMON_CSR_0_AWD1_MST :1;
				uint32_t ADC12_COMMON_CSR_0_AWD2_MST :1;
				uint32_t ADC12_COMMON_CSR_0_AWD3_MST :1;
				uint32_t ADC12_COMMON_CSR_0_JQOVF_MST :1;
				uint32_t ADC12_COMMON_CSR_0_JSTRT2 :1;
				uint32_t ADC12_COMMON_CSR_0_STRT2 :1;
				uint32_t ADC12_COMMON_CSR_0_OVR2 :1;
				uint32_t                      :2;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_EOSMP_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_EOC_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_EOS_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_OVR_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_JEOC_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_ADRDY_JEOS_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_AWD1_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_AWD2_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_AWD3_SLV :1;
				uint32_t ADC12_COMMON_CSR_0_JQOVF_SLV :1;
				uint32_t                      :5;
			};
			#endif
			#ifdef ADC12_COMMON_CSR_1
			struct
			{
				uint32_t ADC12_COMMON_CSR_1_AWD1 :1;
				uint32_t ADC12_COMMON_CSR_1_EOC1 :1;
				uint32_t ADC12_COMMON_CSR_1_JEOC1 :1;
				uint32_t ADC12_COMMON_CSR_1_JSTRT1 :1;
				uint32_t ADC12_COMMON_CSR_1_STRT1 :1;
				uint32_t ADC12_COMMON_CSR_1_OVR1 :1;
				uint32_t ADC12_COMMON_CSR_1_JEOS_MST :1;
				uint32_t                      :1;
				uint32_t ADC12_COMMON_CSR_1_AWD2 :1;
				uint32_t ADC12_COMMON_CSR_1_EOC2 :1;
				uint32_t ADC12_COMMON_CSR_1_JEOC2 :1;
				uint32_t                      :2;
				uint32_t ADC12_COMMON_CSR_1_DOVR2 :1;
				uint32_t                      :2;
				uint32_t ADC12_COMMON_CSR_1_AWD3 :1;
				uint32_t ADC12_COMMON_CSR_1_EOC3 :1;
				uint32_t ADC12_COMMON_CSR_1_JEOC3 :1;
				uint32_t ADC12_COMMON_CSR_1_JSTRT3 :1;
				uint32_t ADC12_COMMON_CSR_1_STRT3 :1;
				uint32_t ADC12_COMMON_CSR_1_OVR3 :1;
				uint32_t ADC12_COMMON_CSR_1_JEOS_SLV :1;
				uint32_t                      :9;
			};
			#endif
			#ifdef ADC12_COMMON_CSR_2
			struct
			{
				uint32_t                      :1;
				uint32_t ADC12_COMMON_CSR_2_EOSMP_MST :1;
				uint32_t ADC12_COMMON_CSR_2_EOC_MST :1;
				uint32_t ADC12_COMMON_CSR_2_EOS_MST :1;
				uint32_t ADC12_COMMON_CSR_2_OVR_MST :1;
				uint32_t ADC12_COMMON_CSR_2_DOVR1 :1;
				uint32_t ADC12_COMMON_CSR_2_ADONS1 :1;
				uint32_t                      :10;
				uint32_t ADC12_COMMON_CSR_2_EOSMP_SLV :1;
				uint32_t ADC12_COMMON_CSR_2_EOC_SLV :1;
				uint32_t ADC12_COMMON_CSR_2_EOS_SLV :1;
				uint32_t ADC12_COMMON_CSR_2_OVR_SLV :1;
				uint32_t ADC12_COMMON_CSR_2_DOVR3 :1;
				uint32_t                      :10;
			};
			#endif
			#ifdef ADC12_COMMON_CSR_3
			struct
			{
				uint32_t                      :1;
				uint32_t ADC12_COMMON_CSR_3_EOCS1 :1;
				uint32_t ADC12_COMMON_CSR_3_JEOS1 :1;
				uint32_t                      :2;
				uint32_t ADC12_COMMON_CSR_3_JEOC_MST :1;
				uint32_t                      :15;
				uint32_t ADC12_COMMON_CSR_3_JEOC_SLV :1;
				uint32_t                      :10;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef ADC_Common_CCR
	struct CCR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC12_COMMON_CCR_0
			struct
			{
				uint32_t ADC12_COMMON_CCR_0_MULTI :5;
				uint32_t                      :3;
				uint32_t ADC12_COMMON_CCR_0_DELAY :4;
				uint32_t                      :1;
				uint32_t ADC12_COMMON_CCR_0_DMACFG :1;
				uint32_t ADC12_COMMON_CCR_0_MDMA :2;
				uint32_t ADC12_COMMON_CCR_0_CKMODE :2;
				uint32_t ADC12_COMMON_CCR_0_PRESC :4;
				uint32_t ADC12_COMMON_CCR_0_VREFEN :1;
				uint32_t ADC12_COMMON_CCR_0_TSEN :1;
				uint32_t ADC12_COMMON_CCR_0_VBATEN :1;
				uint32_t ADC12_COMMON_CCR_0_LFMEN :1;
				uint32_t                      :6;
			};
			#endif
			#ifdef ADC12_COMMON_CCR_1
			struct
			{
				uint32_t ADC12_COMMON_CCR_1_DUAL :5;
				uint32_t                      :8;
				uint32_t ADC12_COMMON_CCR_1_DDS :1;
				uint32_t ADC12_COMMON_CCR_1_DMA :2;
				uint32_t ADC12_COMMON_CCR_1_ADCPRE :2;
				uint32_t                      :4;
				uint32_t ADC12_COMMON_CCR_1_VBATE :1;
				uint32_t ADC12_COMMON_CCR_1_TSVREFE :1;
				uint32_t ADC12_COMMON_CCR_1_VLCDEN :1;
				uint32_t                      :7;
			};
			#endif
			#ifdef ADC12_COMMON_CCR_2
			struct
			{
				uint32_t                      :14;
				uint32_t DAMDF                :2;
				uint32_t                      :16;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef ADC_Common_CDR
	struct CDR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC12_COMMON_CDR_0
			struct
			{
				uint32_t RDATA_MST            :16;
				uint32_t RDATA_SLV            :16;
			};
			#endif
			#ifdef ADC12_COMMON_CDR_1
			struct
			{
				uint32_t DATA1                :16;
				uint32_t DATA2                :16;
			};
			#endif
		};
		
	};
	#endif
	
};
volatile class ADC_Common<ADC12_COMMON_plugin>* const ADC12_COMMON =reinterpret_cast<class ADC_Common<ADC12_COMMON_plugin>* const>(ADC12_COMMON_BASE_ADDR);
#endif
#ifdef ADC3_COMMON_BASE_ADDR
volatile class ADC_Common<>* const ADC3_COMMON =reinterpret_cast<class ADC_Common<>* const>(ADC3_COMMON_BASE_ADDR);
#endif
#ifdef ADC123_COMMON_BASE_ADDR
struct ADC123_COMMON_plugin: ADC_Common_base_plugin {
	
	#ifdef ADC_Common_CSR
	struct CSR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC123_COMMON_CSR_0
			struct
			{
				uint32_t ADC123_COMMON_CSR_0_ADRDY_MST :1;
				uint32_t ADC123_COMMON_CSR_0_EOSMP_MST :1;
				uint32_t ADC123_COMMON_CSR_0_EOC_MST :1;
				uint32_t ADC123_COMMON_CSR_0_EOS_MST :1;
				uint32_t ADC123_COMMON_CSR_0_OVR_MST :1;
				uint32_t ADC123_COMMON_CSR_0_JEOC_MST :1;
				uint32_t ADC123_COMMON_CSR_0_JEOS_MST :1;
				uint32_t ADC123_COMMON_CSR_0_AWD1_MST :1;
				uint32_t ADC123_COMMON_CSR_0_AWD2_MST :1;
				uint32_t ADC123_COMMON_CSR_0_AWD3_MST :1;
				uint32_t ADC123_COMMON_CSR_0_JQOVF_MST :1;
				uint32_t ADC123_COMMON_CSR_0_JSTRT2 :1;
				uint32_t ADC123_COMMON_CSR_0_STRT2 :1;
				uint32_t ADC123_COMMON_CSR_0_OVR2 :1;
				uint32_t                      :2;
				uint32_t ADC123_COMMON_CSR_0_ADRDY_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_EOSMP_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_EOC_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_EOS_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_OVR_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_JEOC_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_JEOS_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_AWD1_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_AWD2_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_AWD3_SLV :1;
				uint32_t ADC123_COMMON_CSR_0_JQOVF_SLV :1;
				uint32_t                      :5;
			};
			#endif
			#ifdef ADC123_COMMON_CSR_1
			struct
			{
				uint32_t AWD1                 :1;
				uint32_t EOC1                 :1;
				uint32_t JEOC1                :1;
				uint32_t JSTRT1               :1;
				uint32_t STRT1                :1;
				uint32_t OVR1                 :1;
				uint32_t ADC123_COMMON_CSR_1_ADONS1 :1;
				uint32_t                      :1;
				uint32_t ADC123_COMMON_CSR_1_AWD2 :1;
				uint32_t ADC123_COMMON_CSR_1_EOC2 :1;
				uint32_t ADC123_COMMON_CSR_1_JEOC2 :1;
				uint32_t                      :2;
				uint32_t ADC123_COMMON_CSR_1_DOVR2 :1;
				uint32_t                      :2;
				uint32_t ADC123_COMMON_CSR_1_AWD3 :1;
				uint32_t ADC123_COMMON_CSR_1_EOC3 :1;
				uint32_t ADC123_COMMON_CSR_1_JEOC3 :1;
				uint32_t ADC123_COMMON_CSR_1_JSTRT3 :1;
				uint32_t ADC123_COMMON_CSR_1_STRT3 :1;
				uint32_t ADC123_COMMON_CSR_1_OVR3 :1;
				uint32_t                      :10;
			};
			#endif
			#ifdef ADC123_COMMON_CSR_2
			struct
			{
				uint32_t                      :1;
				uint32_t ADC123_COMMON_CSR_2_EOCS1 :1;
				uint32_t ADC123_COMMON_CSR_2_JEOS1 :1;
				uint32_t                      :2;
				uint32_t ADC123_COMMON_CSR_2_DOVR1 :1;
				uint32_t                      :15;
				uint32_t ADC123_COMMON_CSR_2_DOVR3 :1;
				uint32_t                      :10;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef ADC_Common_CDR
	struct CDR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			struct
			{
				uint32_t RDATA_MST            :16;
				uint32_t RDATA_SLV            :16;
			};
			#ifdef ADC123_COMMON_CDR_1
			struct
			{
				uint32_t DATA1                :16;
				uint32_t DATA2                :16;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef ADC_Common_CDR2
	struct CDR2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t RDATA_ALT            :32;
	
		
	};
	#endif
	
};
volatile class ADC_Common<ADC123_COMMON_plugin>* const ADC123_COMMON =reinterpret_cast<class ADC_Common<ADC123_COMMON_plugin>* const>(ADC123_COMMON_BASE_ADDR);
#endif
#ifdef ADC4_BASE_ADDR
volatile class ADC * const ADC4 = reinterpret_cast<class ADC* const>(ADC4_BASE_ADDR);
#endif
#ifdef ADC34_COMMON_BASE_ADDR
struct ADC34_COMMON_plugin: ADC_Common_base_plugin {
	
	#ifdef ADC_Common_CSR
	struct CSR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC34_COMMON_CSR_0
			struct
			{
				uint32_t ADC34_COMMON_CSR_0_ADRDY_MST :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_EOSMP_MST :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_EOC_MST :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_EOS_MST :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_OVR_MST :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_JEOC_MST :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_JEOS_MST :1;
				uint32_t ADC34_COMMON_CSR_0_AWD1_MST :1;
				uint32_t ADC34_COMMON_CSR_0_AWD2_MST :1;
				uint32_t ADC34_COMMON_CSR_0_AWD3_MST :1;
				uint32_t ADC34_COMMON_CSR_0_JQOVF_MST :1;
				uint32_t ADC34_COMMON_CSR_0_JSTRT2 :1;
				uint32_t ADC34_COMMON_CSR_0_STRT2 :1;
				uint32_t ADC34_COMMON_CSR_0_OVR2 :1;
				uint32_t                      :2;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_SLV :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_EOSMP_SLV :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_EOC_SLV :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_EOS_SLV :1;
				uint32_t ADC34_COMMON_CSR_0_STRT3 :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_JEOC_SLV :1;
				uint32_t ADC34_COMMON_CSR_0_ADRDY_JEOS_SLV :1;
				uint32_t ADC34_COMMON_CSR_0_AWD1_SLV :1;
				uint32_t ADC34_COMMON_CSR_0_AWD2_SLV :1;
				uint32_t ADC34_COMMON_CSR_0_AWD3_SLV :1;
				uint32_t ADC34_COMMON_CSR_0_JQOVF_SLV :1;
				uint32_t                      :5;
			};
			#endif
			#ifdef ADC34_COMMON_CSR_1
			struct
			{
				uint32_t ADC34_COMMON_CSR_1_AWD1 :1;
				uint32_t ADC34_COMMON_CSR_1_EOC1 :1;
				uint32_t ADC34_COMMON_CSR_1_JEOC1 :1;
				uint32_t ADC34_COMMON_CSR_1_JSTRT1 :1;
				uint32_t ADC34_COMMON_CSR_1_STRT1 :1;
				uint32_t ADC34_COMMON_CSR_1_OVR1 :1;
				uint32_t ADC34_COMMON_CSR_1_JEOS_MST :1;
				uint32_t                      :1;
				uint32_t ADC34_COMMON_CSR_1_AWD2 :1;
				uint32_t ADC34_COMMON_CSR_1_EOC2 :1;
				uint32_t ADC34_COMMON_CSR_1_JEOC2 :1;
				uint32_t                      :2;
				uint32_t ADC34_COMMON_CSR_1_DOVR2 :1;
				uint32_t                      :2;
				uint32_t ADC34_COMMON_CSR_1_AWD3 :1;
				uint32_t ADC34_COMMON_CSR_1_EOC3 :1;
				uint32_t ADC34_COMMON_CSR_1_JEOC3 :1;
				uint32_t ADC34_COMMON_CSR_1_JSTRT3 :1;
				uint32_t ADC34_COMMON_CSR_1_OVR_SLV :1;
				uint32_t ADC34_COMMON_CSR_1_OVR3 :1;
				uint32_t ADC34_COMMON_CSR_1_JEOS_SLV :1;
				uint32_t                      :9;
			};
			#endif
			#ifdef ADC34_COMMON_CSR_2
			struct
			{
				uint32_t                      :1;
				uint32_t ADC34_COMMON_CSR_2_EOSMP_MST :1;
				uint32_t ADC34_COMMON_CSR_2_EOC_MST :1;
				uint32_t ADC34_COMMON_CSR_2_EOS_MST :1;
				uint32_t ADC34_COMMON_CSR_2_OVR_MST :1;
				uint32_t ADC34_COMMON_CSR_2_DOVR1 :1;
				uint32_t ADC34_COMMON_CSR_2_ADONS1 :1;
				uint32_t                      :10;
				uint32_t ADC34_COMMON_CSR_2_EOSMP_SLV :1;
				uint32_t ADC34_COMMON_CSR_2_EOC_SLV :1;
				uint32_t ADC34_COMMON_CSR_2_EOS_SLV :1;
				uint32_t                      :1;
				uint32_t ADC34_COMMON_CSR_2_DOVR3 :1;
				uint32_t                      :10;
			};
			#endif
			#ifdef ADC34_COMMON_CSR_3
			struct
			{
				uint32_t                      :1;
				uint32_t ADC34_COMMON_CSR_3_EOCS1 :1;
				uint32_t ADC34_COMMON_CSR_3_JEOS1 :1;
				uint32_t                      :2;
				uint32_t ADC34_COMMON_CSR_3_JEOC_MST :1;
				uint32_t                      :15;
				uint32_t ADC34_COMMON_CSR_3_JEOC_SLV :1;
				uint32_t                      :10;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef ADC_Common_CCR
	struct CCR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC34_COMMON_CCR_0
			struct
			{
				uint32_t ADC34_COMMON_CCR_0_MULTI :5;
				uint32_t                      :3;
				uint32_t ADC34_COMMON_CCR_0_DELAY :4;
				uint32_t                      :1;
				uint32_t ADC34_COMMON_CCR_0_DMACFG :1;
				uint32_t ADC34_COMMON_CCR_0_MDMA :2;
				uint32_t ADC34_COMMON_CCR_0_CKMODE :2;
				uint32_t ADC34_COMMON_CCR_0_PRESC :4;
				uint32_t ADC34_COMMON_CCR_0_VREFEN :1;
				uint32_t ADC34_COMMON_CCR_0_TSEN :1;
				uint32_t ADC34_COMMON_CCR_0_VBATEN :1;
				uint32_t ADC34_COMMON_CCR_0_LFMEN :1;
				uint32_t                      :6;
			};
			#endif
			#ifdef ADC34_COMMON_CCR_1
			struct
			{
				uint32_t ADC34_COMMON_CCR_1_DUAL :5;
				uint32_t                      :8;
				uint32_t ADC34_COMMON_CCR_1_DDS :1;
				uint32_t ADC34_COMMON_CCR_1_DMA :2;
				uint32_t ADC34_COMMON_CCR_1_ADCPRE :2;
				uint32_t                      :4;
				uint32_t ADC34_COMMON_CCR_1_VBATE :1;
				uint32_t ADC34_COMMON_CCR_1_TSVREFE :1;
				uint32_t ADC34_COMMON_CCR_1_VLCDEN :1;
				uint32_t                      :7;
			};
			#endif
			#ifdef ADC34_COMMON_CCR_2
			struct
			{
				uint32_t                      :14;
				uint32_t DAMDF                :2;
				uint32_t                      :16;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef ADC_Common_CDR
	struct CDR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC34_COMMON_CDR_0
			struct
			{
				uint32_t RDATA_MST            :16;
				uint32_t RDATA_SLV            :16;
			};
			#endif
			#ifdef ADC34_COMMON_CDR_1
			struct
			{
				uint32_t DATA1                :16;
				uint32_t DATA2                :16;
			};
			#endif
		};
		
	};
	#endif
	
};
volatile class ADC_Common<ADC34_COMMON_plugin>* const ADC34_COMMON =reinterpret_cast<class ADC_Common<ADC34_COMMON_plugin>* const>(ADC34_COMMON_BASE_ADDR);
#endif
#ifdef ADC1_COMMON_BASE_ADDR
struct ADC1_COMMON_plugin: ADC_Common_base_plugin {
	
	#ifdef ADC_Common_CSR
	struct CSR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC1_COMMON_CSR_0
			struct
			{
				uint32_t ADC1_COMMON_CSR_0_ADRDY_MST :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_EOSMP_MST :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_EOC_MST :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_EOS_MST :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_OVR_MST :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_JEOC_MST :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_JEOS_MST :1;
				uint32_t ADC1_COMMON_CSR_0_AWD1_MST :1;
				uint32_t ADC1_COMMON_CSR_0_AWD2_MST :1;
				uint32_t ADC1_COMMON_CSR_0_AWD3_MST :1;
				uint32_t ADC1_COMMON_CSR_0_JQOVF_MST :1;
				uint32_t ADC1_COMMON_CSR_0_JSTRT2 :1;
				uint32_t ADC1_COMMON_CSR_0_STRT2 :1;
				uint32_t ADC1_COMMON_CSR_0_OVR2 :1;
				uint32_t                      :2;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_EOSMP_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_EOC_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_EOS_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_OVR_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_JEOC_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_ADRDY_JEOS_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_AWD1_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_AWD2_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_AWD3_SLV :1;
				uint32_t ADC1_COMMON_CSR_0_JQOVF_SLV :1;
				uint32_t                      :5;
			};
			#endif
			#ifdef ADC1_COMMON_CSR_1
			struct
			{
				uint32_t ADC1_COMMON_CSR_1_AWD1 :1;
				uint32_t ADC1_COMMON_CSR_1_EOC1 :1;
				uint32_t ADC1_COMMON_CSR_1_JEOC1 :1;
				uint32_t ADC1_COMMON_CSR_1_JSTRT1 :1;
				uint32_t ADC1_COMMON_CSR_1_STRT1 :1;
				uint32_t ADC1_COMMON_CSR_1_OVR1 :1;
				uint32_t ADC1_COMMON_CSR_1_JEOS_MST :1;
				uint32_t                      :1;
				uint32_t ADC1_COMMON_CSR_1_AWD2 :1;
				uint32_t ADC1_COMMON_CSR_1_EOC2 :1;
				uint32_t ADC1_COMMON_CSR_1_JEOC2 :1;
				uint32_t                      :2;
				uint32_t ADC1_COMMON_CSR_1_DOVR2 :1;
				uint32_t                      :2;
				uint32_t ADC1_COMMON_CSR_1_AWD3 :1;
				uint32_t ADC1_COMMON_CSR_1_EOC3 :1;
				uint32_t ADC1_COMMON_CSR_1_JEOC3 :1;
				uint32_t ADC1_COMMON_CSR_1_JSTRT3 :1;
				uint32_t ADC1_COMMON_CSR_1_STRT3 :1;
				uint32_t ADC1_COMMON_CSR_1_OVR3 :1;
				uint32_t ADC1_COMMON_CSR_1_JEOS_SLV :1;
				uint32_t                      :9;
			};
			#endif
			#ifdef ADC1_COMMON_CSR_2
			struct
			{
				uint32_t                      :1;
				uint32_t ADC1_COMMON_CSR_2_EOSMP_MST :1;
				uint32_t ADC1_COMMON_CSR_2_EOC_MST :1;
				uint32_t ADC1_COMMON_CSR_2_EOS_MST :1;
				uint32_t ADC1_COMMON_CSR_2_OVR_MST :1;
				uint32_t ADC1_COMMON_CSR_2_DOVR1 :1;
				uint32_t ADC1_COMMON_CSR_2_ADONS1 :1;
				uint32_t                      :10;
				uint32_t ADC1_COMMON_CSR_2_EOSMP_SLV :1;
				uint32_t ADC1_COMMON_CSR_2_EOC_SLV :1;
				uint32_t ADC1_COMMON_CSR_2_EOS_SLV :1;
				uint32_t ADC1_COMMON_CSR_2_OVR_SLV :1;
				uint32_t ADC1_COMMON_CSR_2_DOVR3 :1;
				uint32_t                      :10;
			};
			#endif
			#ifdef ADC1_COMMON_CSR_3
			struct
			{
				uint32_t                      :1;
				uint32_t ADC1_COMMON_CSR_3_EOCS1 :1;
				uint32_t ADC1_COMMON_CSR_3_JEOS1 :1;
				uint32_t                      :2;
				uint32_t ADC1_COMMON_CSR_3_JEOC_MST :1;
				uint32_t                      :15;
				uint32_t ADC1_COMMON_CSR_3_JEOC_SLV :1;
				uint32_t                      :10;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef ADC_Common_CCR
	struct CCR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC1_COMMON_CCR_0
			struct
			{
				uint32_t ADC1_COMMON_CCR_0_MULTI :5;
				uint32_t                      :3;
				uint32_t ADC1_COMMON_CCR_0_DELAY :4;
				uint32_t                      :1;
				uint32_t ADC1_COMMON_CCR_0_DMACFG :1;
				uint32_t ADC1_COMMON_CCR_0_MDMA :2;
				uint32_t ADC1_COMMON_CCR_0_CKMODE :2;
				uint32_t ADC1_COMMON_CCR_0_PRESC :4;
				uint32_t ADC1_COMMON_CCR_0_VREFEN :1;
				uint32_t ADC1_COMMON_CCR_0_TSEN :1;
				uint32_t ADC1_COMMON_CCR_0_VBATEN :1;
				uint32_t ADC1_COMMON_CCR_0_LFMEN :1;
				uint32_t                      :6;
			};
			#endif
			#ifdef ADC1_COMMON_CCR_1
			struct
			{
				uint32_t ADC1_COMMON_CCR_1_DUAL :5;
				uint32_t                      :8;
				uint32_t ADC1_COMMON_CCR_1_DDS :1;
				uint32_t ADC1_COMMON_CCR_1_DMA :2;
				uint32_t ADC1_COMMON_CCR_1_ADCPRE :2;
				uint32_t                      :4;
				uint32_t ADC1_COMMON_CCR_1_VBATE :1;
				uint32_t ADC1_COMMON_CCR_1_TSVREFE :1;
				uint32_t ADC1_COMMON_CCR_1_VLCDEN :1;
				uint32_t                      :7;
			};
			#endif
			#ifdef ADC1_COMMON_CCR_2
			struct
			{
				uint32_t                      :14;
				uint32_t DAMDF                :2;
				uint32_t                      :16;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef ADC_Common_CDR
	struct CDR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef ADC1_COMMON_CDR_0
			struct
			{
				uint32_t RDATA_MST            :16;
				uint32_t RDATA_SLV            :16;
			};
			#endif
			#ifdef ADC1_COMMON_CDR_1
			struct
			{
				uint32_t DATA1                :16;
				uint32_t DATA2                :16;
			};
			#endif
		};
		
	};
	#endif
	
};
volatile class ADC_Common<ADC1_COMMON_plugin>* const ADC1_COMMON =reinterpret_cast<class ADC_Common<ADC1_COMMON_plugin>* const>(ADC1_COMMON_BASE_ADDR);
#endif
#ifdef ADC_BASE_ADDR
volatile class ADC_Common<>* const ADC =reinterpret_cast<class ADC_Common<>* const>(ADC_BASE_ADDR);
#endif
//endregion




inline constexpr uint32_t ADC::get_clock_enable_bit(const uint32_t addr)
{
	switch (addr) {
#ifdef ADC1_BASE_ADDR
		case ADC1_BASE_ADDR :
#if defined(STM32F1) || defined(STM32L1) || defined(STM32F0) || defined(STM32L0) || defined(STM32F373xC) || defined(STM32F378xx)
					return 1 << 9;
#elif defined(STM32F2) || defined(STM32F4) || defined(STM32F7)
					return 1 << 8;
#elif defined(STM32L4) || defined(STM32L4P)
					return 1 << 13;
#elif defined(STM32H7)
					return 1 << 5;
#else //F3
					return 1 << 28;
#endif
#endif
#ifdef ADC2_BASE_ADDR
		case ADC2_BASE_ADDR :
#if defined(STM32F1)
					return 1 << 10;
#elif defined(STM32F2) || defined(STM32F4) || defined(STM32F7)
					return 1 << 9;
#elif defined(STM32L4) || defined(STM32L4P)
					return 1 << 13;
#elif defined(STM32H7)
					return 1 << 5;
#else //F3
					return 1 << 28;
#endif
#endif
#ifdef ADC3_BASE_ADDR
		case ADC3_BASE_ADDR :
#if defined(STM32F1)
					return 1 << 15;
#elif defined(STM32F2) || defined(STM32F4) || defined(STM32F7)
					return 1 << 10;
#elif defined(STM32L4) || defined(STM32L4P)
					return 1 << 13;
#elif defined(STM32H7)
					return 1 << 24;
#else //F3
					return 1 << 29;
#endif
#endif
#ifdef ADC4_BASE_ADDR
		case ADC4_BASE_ADDR :
				return 1 << 29;
#endif
		default :
			return 0;


	}
}

inline constexpr volatile Reg32_t &ADC::get_clock_enable_reg(const uint32_t addr)
{
	switch (addr) {
#ifdef ADC1_BASE_ADDR
		case ADC1_BASE_ADDR :
#if defined(STM32L4) || defined(STM32L4P)
					return RCC->AHB2ENR;
#elif 	defined(STM32F3) && !(defined(STM32F373xC) || defined(STM32F378xx))
					return RCC->AHBENR;
#elif defined(STM32H7)
					return RCC->AHB1ENR
#else
					return RCC->APB2ENR;
#endif
#endif
#ifdef ADC2_BASE_ADDR
		case ADC2_BASE_ADDR :
#if defined(STM32L4) || defined(STM32L4P)
					return RCC->AHB2ENR;
#elif 	defined(STM32F3)
					return RCC->AHBENR;
#elif defined(STM32H7)
					return RCC->AHB1ENR
#else
					return RCC->APB2ENR;
#endif
#endif
#ifdef ADC3_BASE_ADDR
		case ADC3_BASE_ADDR :
#if defined(STM32L4) || defined(STM32L4P)
					return RCC->AHB2ENR;
#elif 	defined(STM32F3)
					return RCC->AHBENR;
#elif defined(STM32H7)
					return RCC->AHB4ENR
#else
					return RCC->APB2ENR;
#endif
#endif
#ifdef ADC4_BASE_ADDR
		case ADC4_BASE_ADDR :
				return RCC->AHBENR;
#endif
		default :
			return *reinterpret_cast<volatile Reg32_t *>(0);
	}
}

inline void ADC::enable_clock() volatile
{
	get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
			|= get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
}

inline void ADC::disable_clock() volatile
{
	get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
			&= ~get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
}

inline bool ADC::is_clock_enabled() const volatile
{
	return (get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
			& get_clock_enable_bit(reinterpret_cast<const uint32_t>(this)))
		   == get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
}

#ifdef ADC_SQR1
inline void ADC::set_acquisition_sequence_length(const unsigned int length) volatile
{
	SQR1.L = length;
};
#endif





	};
};
//region undef
#undef ADC_CR_0_JADSTART
#undef ADC_CR_0_JADSTP
#undef ADC_CR_0_ADCALDIF
#undef ADC_IER_1_EOSMP
#undef ADC_IER_1_EOC
#undef ADC_IER_1_OVR
#undef ADC_IER_1_JEOC
#undef ADC_IER_1_JEOS
#undef ADC_IER_1_AWD2
#undef ADC_IER_1_AWD3
#undef ADC_IER_1_JQOVF
#undef ADC_ISR_0_JEOC
#undef ADC_ISR_0_JEOS
#undef ADC_ISR_0_AWD2
#undef ADC_ISR_0_AWD3
#undef ADC_ISR_0_JQOVF
#undef ADC_SMPR1_0_SMP9
#undef ADC_SMPR1_1_SMP1
#undef ADC_SMPR1_1_SMP2
#undef ADC_SMPR1_1_SMP3
#undef ADC_SMPR1_1_SMP4
#undef ADC_SMPR1_1_SMP5
#undef ADC_SMPR1_1_SMP6
#undef ADC_SMPR1_1_SMP7
#undef ADC_SMPR1_1_SMP8
#undef ADC_SMPR1_2_SMP0
#undef ADC_SQR1_0_SQ4
#undef ADC_SQR4_0_SQ15
#undef ADC_SQR4_0_SQ16
#undef ADC_Common_CCR_1_CKMODE
#undef ADC_Common_MAP2_CCR
#undef ADC1_CCR_0_CKMODE
#undef ADC12_CCR_0_CKMODE
#undef ADC34_CCR_0_CKMODE
#undef ADC_MAP2_CFGR
#undef ADC_MAP2_SMPR1
#undef ADC_MAP2_SMPR2
#undef ADC_MAP2_JSQR
#undef ADC_MAP0_OFR1
#undef ADC_MAP0_OFR2
#undef ADC_MAP0_OFR3
#undef ADC_MAP0_OFR4
#undef ADC_MAP2_JDR1
#undef ADC_MAP2_JDR2
#undef ADC_MAP2_JDR3
#undef ADC_MAP2_JDR4
#undef ADC_MAP0_AWD2CR
#undef ADC_MAP0_AWD3CR
#undef ADC_CFGR_0_DMAEN
#undef ADC_CFGR_0_DMACFG
#undef ADC_CFGR_0_RES
#undef ADC_CFGR_0_ALIGN
#undef ADC_CFGR_0_EXTSEL
#undef ADC_DIFSEL_0_DIFSEL
#undef ADC_IER_0_JEOCIE
#undef ADC_IER_0_JEOSIE
#undef ADC_IER_0_AWD2IE
#undef ADC_IER_0_AWD3IE
#undef ADC_IER_0_JQOVFIE
#undef ADC_JSQR_1_JEXTSEL
#undef ADC_JSQR_1_JEXTEN
#undef ADC_JSQR_1_JSQ1
#undef ADC_JSQR_1_JSQ2
#undef ADC_JSQR_1_JSQ3
#undef ADC_JSQR_1_JSQ4
#undef ADC_OFR1_0_OFFSET1
#undef ADC_OFR2_0_OFFSET2
#undef ADC_OFR3_0_OFFSET3
#undef ADC_OFR4_0_OFFSET4
#undef ADC_MAP2_TR1
#undef ADC_MAP1_TR2
#undef ADC_MAP2_TR3
#undef ADC_MAP0_DIFSEL
#undef ADC_CFGR2_0_RSHIFT1
#undef ADC_CFGR2_0_RSHIFT2
#undef ADC_CFGR2_0_RSHIFT3
#undef ADC_CFGR2_0_RSHIFT4
#undef ADC_CFGR2_0_OSR
#undef ADC_CFGR2_1_LSHIFT
#undef ADC_CR_0_BOOST
#undef ADC_CR_0_ADCALLIN
#undef ADC_CR_0_LINCALRDYW1
#undef ADC_CR_0_LINCALRDYW2
#undef ADC_CR_0_LINCALRDYW3
#undef ADC_CR_0_LINCALRDYW4
#undef ADC_CR_0_LINCALRDYW5
#undef ADC_CR_0_LINCALRDYW6
#undef ADC_DIFSEL_0_DIFSEL19
#undef ADC_OFR1_0_SSATE
#undef ADC_OFR2_0_SSATE
#undef ADC_OFR3_0_SSATE
#undef ADC_OFR4_0_SSATE
#undef ADC_Common_MAP0_CDR2
#undef ADC123_CSR_0_AWD1_MST
#undef ADC123_CSR_0_AWD2_MST
#undef ADC123_CSR_0_AWD3_MST
#undef ADC123_CSR_0_AWD1_SLV
#undef ADC123_CSR_0_AWD2_SLV
#undef ADC123_CSR_0_AWD3_SLV
#undef ADC_MAP1_PCSEL
#undef ADC_MAP3_LTR1
#undef ADC_MAP2_HTR1
#undef ADC_MAP1_LTR2
#undef ADC_MAP1_HTR2
#undef ADC_MAP0_LTR3
#undef ADC_MAP0_HTR3
#undef ADC_MAP1_DIFSEL
#undef ADC_MAP1_CALFACT
#undef ADC_MAP0_CALFACT2
#undef ADC_CFGR2_1_OVSE
#undef ADC_CFGR2_1_TOVS
#undef ADC_IER_0_EOCALIE
#undef ADC_ISR_0_EOCAL
#undef ADC_Common_CCR_0_LFMEN
#undef ADC1_CCR_0_LFMEN
#undef ADC12_CCR_0_LFMEN
#undef ADC34_CCR_0_LFMEN
#undef ADC_CFGR_0_DFSDMCFG
#undef ADC_SMPR1_0_SMPPLUS
#undef ADC_CFGR_0_AUTOFF
#undef ADC_CR_0_ADVREGEN
#undef ADC_CFGR_0_JQDIS
#undef ADC_CFGR2_0_ROVSE
#undef ADC_CFGR2_0_JOVSE
#undef ADC_CFGR2_0_TROVS
#undef ADC_CFGR2_0_ROVSM
#undef ADC_CR_1_DEEPPWD
#undef ADC_CFGR2_0_CKMODE
#undef ADC_IER_1_EOSEQIE
#undef ADC_IER_1_AWDIE
#undef ADC_ISR_1_EOSEQ
#undef ADC_ISR_1_AWD
#undef ADC_Common_MAP0_CCR
#undef ADC_MAP0_CFGR1
#undef ADC_MAP0_SMPR
#undef ADC_MAP0_TR
#undef ADC_MAP0_CHSELR
#undef ADC_CFGR1_0_AWD1SGL
#undef ADC_CFGR1_0_AWD1EN
#undef ADC_CFGR1_0_AWD1CH
#undef ADC_CFGR1_1_AUTDLY
#undef ADC_SMPR1_0_SMPR
#undef ADC_MAP0_CFGR2
#undef ADC_CFGR2_0_OVSR
#undef ADC_CFGR2_0_OVSS
#undef ADC_Common_CCR_0_PRESC
#undef ADC1_CCR_0_PRESC
#undef ADC12_CCR_0_PRESC
#undef ADC34_CCR_0_PRESC
#undef ADC_CHSELR_1_CHSEL16
#undef ADC_Common_CCR_0_VREFEN
#undef ADC_Common_CCR_0_TSEN
#undef ADC1_CCR_0_VREFEN
#undef ADC1_CCR_0_TSEN
#undef ADC12_CCR_0_VREFEN
#undef ADC12_CCR_0_TSEN
#undef ADC34_CCR_0_VREFEN
#undef ADC34_CCR_0_TSEN
#undef ADC_MAP0_ISR
#undef ADC_MAP0_IER
#undef ADC_MAP0_CR
#undef ADC_MAP0_DR
#undef ADC_MAP1_SR
#undef ADC_MAP1_CR1
#undef ADC_MAP1_CR2
#undef ADC_MAP1_SMPR1
#undef ADC_MAP1_SMPR2
#undef ADC_CR1_0_EOSIE
#undef ADC_SR_0_EOS
#undef ADC_CR1_0_JEOSIE
#undef ADC_SR_0_JEOS
#undef ADC_CR1_0_DUALMOD
#undef ADC_CR1_0_RES
#undef ADC_CR1_0_OVRIE
#undef ADC_CR2_0_DDS
#undef ADC_CR2_0_EOCS
#undef ADC_CR2_0_EXTEN
#undef ADC_SR_0_OVR
#undef ADC_Common_CCR_0_ADCPRE
#undef ADC_Common_CCR_1_TSVREFE
#undef ADC_Common_CSR_0_AWD1
#undef ADC_Common_CSR_0_EOC1
#undef ADC_Common_CSR_0_JEOC1
#undef ADC_Common_CSR_0_JSTRT1
#undef ADC_Common_CSR_0_STRT1
#undef ADC_Common_CSR_0_OVR1
#undef ADC_Common_MAP1_CCR
#undef ADC1_CSR_1_AWD1
#undef ADC1_CSR_1_EOC1
#undef ADC1_CSR_1_JEOC1
#undef ADC1_CSR_1_JSTRT1
#undef ADC1_CSR_1_STRT1
#undef ADC1_CSR_1_OVR1
#undef ADC1_CCR_1_ADCPRE
#undef ADC1_CCR_1_TSVREFE
#undef ADC12_CSR_1_AWD1
#undef ADC12_CSR_1_EOC1
#undef ADC12_CSR_1_JEOC1
#undef ADC12_CSR_1_JSTRT1
#undef ADC12_CSR_1_STRT1
#undef ADC12_CSR_1_OVR1
#undef ADC12_CCR_1_ADCPRE
#undef ADC12_CCR_1_TSVREFE
#undef ADC34_CSR_1_AWD1
#undef ADC34_CSR_1_EOC1
#undef ADC34_CSR_1_JEOC1
#undef ADC34_CSR_1_JSTRT1
#undef ADC34_CSR_1_STRT1
#undef ADC34_CSR_1_OVR1
#undef ADC34_CCR_1_ADCPRE
#undef ADC34_CCR_1_TSVREFE
#undef ADC_CR1_1_PDD
#undef ADC_CR1_1_PDI
#undef ADC_CR2_0_DELS
#undef ADC_SMPR1_2_SMP21
#undef ADC_SMPR1_2_SMP22
#undef ADC_SMPR1_2_SMP23
#undef ADC_SMPR1_2_SMP24
#undef ADC_SMPR1_2_SMP25
#undef ADC_SMPR1_2_SMP26
#undef ADC_SQR4_0_SQ10
#undef ADC_SQR4_0_SQ11
#undef ADC_SQR4_0_SQ12
#undef ADC_SR_0_ADONS
#undef ADC_SR_0_RCNR
#undef ADC_SR_0_JCNR
#undef ADC_Common_CSR_1_ADONS1
#undef ADC_Common_CSR_2_EOCS1
#undef ADC_Common_CSR_2_JEOS1
#undef ADC1_CSR_2_ADONS1
#undef ADC1_CSR_3_EOCS1
#undef ADC1_CSR_3_JEOS1
#undef ADC12_CSR_2_ADONS1
#undef ADC12_CSR_3_EOCS1
#undef ADC12_CSR_3_JEOS1
#undef ADC34_CSR_2_ADONS1
#undef ADC34_CSR_3_EOCS1
#undef ADC34_CSR_3_JEOS1
#undef ADC123_CSR_1_ADONS1
#undef ADC123_CSR_2_EOCS1
#undef ADC123_CSR_2_JEOS1
#undef ADC_MAP3_SMPR3
#undef ADC_MAP3_JOFR1
#undef ADC_MAP2_JOFR2
#undef ADC_MAP4_JOFR3
#undef ADC_MAP3_JOFR4
#undef ADC_MAP3_HTR
#undef ADC_MAP2_LTR
#undef ADC_MAP2_SQR5
#undef ADC_MAP1_JSQR
#undef ADC_MAP1_JDR1
#undef ADC_MAP0_JDR2
#undef ADC_MAP1_JDR3
#undef ADC_MAP1_JDR4
#undef ADC_MAP2_DR
#undef ADC_CR2_0_CAL
#undef ADC_CR2_0_RSTCAL
#undef ADC_CR2_0_JEXTSEL
#undef ADC_CR2_0_JEXTTRIG
#undef ADC_CR2_0_EXTSEL
#undef ADC_CR2_0_EXTTRIG
#undef ADC_CR2_0_JSWSTART
#undef ADC_CR2_0_SWSTART
#undef ADC_CR2_0_TSVREFE
#undef ADC_Common_MAP1_SR
#undef ADC_Common_MAP0_CR1
#undef ADC_Common_MAP0_CR2
#undef ADC_Common_MAP0_DR
#undef ADC_CR2_1_CFG
#undef ADC_SQR1_2_SQ28
#undef ADC_DR_0_ADC2DATA
#undef ADC_ISR_0_ADRDY
#undef ADC_IER_0_EOSIE
#undef ADC_IER_0_AWD1IE
#undef ADC_IER_1_RDY
#undef ADC_ISR_1_ADRD
#undef ADC_IER_2_ADRDY
#undef ADC_ISR_0_EOS
#undef ADC_ISR_0_AWD1
#undef ADC_SMPR1_1_SMP29
#undef ADC_SMPR1_2_SMP27
#undef ADC_SMPR1_2_SMP28
#undef ADC_MAP0_SMPR0
#undef ADC_SMPR1_0_SMP11
#undef ADC_SMPR1_0_SMP12
#undef ADC_SMPR1_0_SMP13
#undef ADC_SMPR1_0_SMP14
#undef ADC_SMPR1_0_SMP15
#undef ADC_SMPR1_0_SMP16
#undef ADC_SMPR1_0_SMP17
#undef ADC_SMPR1_1_SMP10
#undef ADC_SQR1_0_SQ13
#undef ADC_SQR1_0_SQ14
#undef ADC_SQR1_0_SQ15
#undef ADC_SQR1_0_SQ16
#undef ADC_SQR1_0_L
#undef ADC_MAP1_JOFR1
#undef ADC_MAP0_JOFR2
#undef ADC_MAP0_JOFR3
#undef ADC_MAP1_JOFR4
#undef ADC_MAP0_HTR
#undef ADC_MAP1_LTR
#undef ADC_MAP0_SQR1
#undef ADC_MAP0_SQR2
#undef ADC_MAP0_SQR3
#undef ADC_MAP0_JSQR
#undef ADC_MAP0_JDR1
#undef ADC_MAP1_JDR2
#undef ADC_MAP0_JDR3
#undef ADC_MAP0_JDR4
#undef ADC_MAP1_DR
#undef ADC_SMPR1_0_SMP18
#undef ADC_MAP1_SQR1
#undef ADC_MAP1_SQR2
#undef ADC_MAP1_SQR3
#undef ADC_MAP1_SQR4
#undef ADC_SMPR2_1_SMP19
#undef ADC_Common_CCR_0_MULTI
#undef ADC1_CCR_0_MULTI
#undef ADC12_CCR_0_MULTI
#undef ADC34_CCR_0_MULTI
#undef ADC_Common_CCR_0_DELAY
#undef ADC1_CCR_0_DELAY
#undef ADC12_CCR_0_DELAY
#undef ADC34_CCR_0_DELAY
#undef ADC_Common_CCR_0_DDS
#undef ADC_Common_CCR_0_DMA
#undef ADC_Common_CCR_1_VBATE
#undef ADC_Common_CSR_1_DOVR1
#undef ADC_Common_MAP1_CDR
#undef ADC1_CSR_2_DOVR1
#undef ADC1_CCR_1_DDS
#undef ADC1_CCR_1_DMA
#undef ADC1_CCR_1_VBATE
#undef ADC12_CSR_2_DOVR1
#undef ADC12_CCR_1_DDS
#undef ADC12_CCR_1_DMA
#undef ADC12_CCR_1_VBATE
#undef ADC34_CSR_2_DOVR1
#undef ADC34_CCR_1_DDS
#undef ADC34_CCR_1_DMA
#undef ADC34_CCR_1_VBATE
#undef ADC123_CSR_2_DOVR1
#undef ADC_Common_CCR_0_VBATEN
#undef ADC1_CCR_0_VBATEN
#undef ADC12_CCR_0_VBATEN
#undef ADC34_CCR_0_VBATEN
#undef ADC_Common_CCR_1_DUAL
#undef ADC_Common_MAP0_CDR
#undef ADC1_CCR_1_DUAL
#undef ADC12_CCR_1_DUAL
#undef ADC34_CCR_1_DUAL
#undef ADC123_CSR_0_ADRDY_MST
#undef ADC123_CSR_0_EOSMP_MST
#undef ADC123_CSR_0_EOC_MST
#undef ADC123_CSR_0_EOS_MST
#undef ADC123_CSR_0_OVR_MST
#undef ADC123_CSR_0_JEOC_MST
#undef ADC123_CSR_0_JEOS_MST
#undef ADC123_CSR_0_JQOVF_MST
#undef ADC123_CSR_0_ADRDY_SLV
#undef ADC123_CSR_0_EOSMP_SLV
#undef ADC123_CSR_0_EOC_SLV
#undef ADC123_CSR_0_EOS_SLV
#undef ADC123_CSR_0_OVR_SLV
#undef ADC123_CSR_0_JEOC_SLV
#undef ADC123_CSR_0_JEOS_SLV
#undef ADC123_CSR_0_JQOVF_SLV
#undef ADC_Common_CCR_1_DMACFG
#undef ADC_Common_CCR_1_MDMA
#undef ADC_Common_CSR_0_JEOS_MST
#undef ADC_Common_CSR_0_JEOS_SLV
#undef ADC_Common_CSR_0_JQOVF_SLV
#undef ADC_Common_CSR_1_ADRDY_MST
#undef ADC_Common_CSR_1_EOSMP_MST
#undef ADC_Common_CSR_1_EOC_MST
#undef ADC_Common_CSR_1_EOS_MST
#undef ADC_Common_CSR_1_OVR_MST
#undef ADC_Common_CSR_1_JQOVF_MST
#undef ADC_Common_CSR_1_ADRDY_SLV
#undef ADC_Common_CSR_1_EOSMP_SLV
#undef ADC_Common_CSR_1_EOC_SLV
#undef ADC_Common_CSR_1_EOS_SLV
#undef ADC_Common_CSR_1_OVR_SLV
#undef ADC_Common_CSR_2_JEOC_MST
#undef ADC_Common_CSR_2_JEOC_SLV
#undef ADC1_CSR_0_ADRDY_MST
#undef ADC1_CSR_0_JQOVF_MST
#undef ADC1_CSR_0_ADRDY_SLV
#undef ADC1_CSR_0_JQOVF_SLV
#undef ADC1_CSR_1_JEOS_MST
#undef ADC1_CSR_1_JEOS_SLV
#undef ADC1_CSR_2_EOSMP_MST
#undef ADC1_CSR_2_EOC_MST
#undef ADC1_CSR_2_EOS_MST
#undef ADC1_CSR_2_OVR_MST
#undef ADC1_CSR_2_EOSMP_SLV
#undef ADC1_CSR_2_EOC_SLV
#undef ADC1_CSR_2_EOS_SLV
#undef ADC1_CSR_2_OVR_SLV
#undef ADC1_CSR_3_JEOC_MST
#undef ADC1_CSR_3_JEOC_SLV
#undef ADC1_CCR_0_DMACFG
#undef ADC1_CCR_0_MDMA
#undef ADC12_CSR_0_ADRDY_MST
#undef ADC12_CSR_0_JQOVF_MST
#undef ADC12_CSR_0_ADRDY_SLV
#undef ADC12_CSR_0_JQOVF_SLV
#undef ADC12_CSR_1_JEOS_MST
#undef ADC12_CSR_1_JEOS_SLV
#undef ADC12_CSR_2_EOSMP_MST
#undef ADC12_CSR_2_EOC_MST
#undef ADC12_CSR_2_EOS_MST
#undef ADC12_CSR_2_OVR_MST
#undef ADC12_CSR_2_EOSMP_SLV
#undef ADC12_CSR_2_EOC_SLV
#undef ADC12_CSR_2_EOS_SLV
#undef ADC12_CSR_2_OVR_SLV
#undef ADC12_CSR_3_JEOC_MST
#undef ADC12_CSR_3_JEOC_SLV
#undef ADC12_CCR_0_DMACFG
#undef ADC12_CCR_0_MDMA
#undef ADC34_CSR_0_ADRDY_MST
#undef ADC34_CSR_0_JQOVF_MST
#undef ADC34_CSR_0_ADRDY_SLV
#undef ADC34_CSR_0_JQOVF_SLV
#undef ADC34_CSR_1_JEOS_MST
#undef ADC34_CSR_1_OVR_SLV
#undef ADC34_CSR_1_JEOS_SLV
#undef ADC34_CSR_2_EOSMP_MST
#undef ADC34_CSR_2_EOC_MST
#undef ADC34_CSR_2_EOS_MST
#undef ADC34_CSR_2_OVR_MST
#undef ADC34_CSR_2_EOSMP_SLV
#undef ADC34_CSR_2_EOC_SLV
#undef ADC34_CSR_2_EOS_SLV
#undef ADC34_CSR_3_JEOC_MST
#undef ADC34_CSR_3_JEOC_SLV
#undef ADC34_CCR_0_DMACFG
#undef ADC34_CCR_0_MDMA
#undef ADC_Common_CCR_1_VLCDEN
#undef ADC1_CCR_1_VLCDEN
#undef ADC12_CCR_1_VLCDEN
#undef ADC34_CCR_1_VLCDEN
#undef ADC_Common_MAP2_CSR
#undef ADC_Common_CSR_0_AWD2
#undef ADC_Common_CSR_0_EOC2
#undef ADC_Common_CSR_0_JEOC2
#undef ADC_Common_CSR_0_JSTRT2
#undef ADC_Common_CSR_0_STRT2
#undef ADC_Common_CSR_0_OVR2
#undef ADC_Common_CSR_0_AWD3
#undef ADC_Common_CSR_0_EOC3
#undef ADC_Common_CSR_0_JEOC3
#undef ADC_Common_CSR_0_JSTRT3
#undef ADC_Common_CSR_0_STRT3
#undef ADC_Common_CSR_0_OVR3
#undef ADC_Common_CSR_1_DOVR2
#undef ADC_Common_CSR_1_DOVR3
#undef ADC1_CSR_0_JSTRT2
#undef ADC1_CSR_0_STRT2
#undef ADC1_CSR_0_OVR2
#undef ADC1_CSR_1_AWD2
#undef ADC1_CSR_1_EOC2
#undef ADC1_CSR_1_JEOC2
#undef ADC1_CSR_1_DOVR2
#undef ADC1_CSR_1_AWD3
#undef ADC1_CSR_1_EOC3
#undef ADC1_CSR_1_JEOC3
#undef ADC1_CSR_1_JSTRT3
#undef ADC1_CSR_1_STRT3
#undef ADC1_CSR_1_OVR3
#undef ADC1_CSR_2_DOVR3
#undef ADC12_CSR_0_JSTRT2
#undef ADC12_CSR_0_STRT2
#undef ADC12_CSR_0_OVR2
#undef ADC12_CSR_1_AWD2
#undef ADC12_CSR_1_EOC2
#undef ADC12_CSR_1_JEOC2
#undef ADC12_CSR_1_DOVR2
#undef ADC12_CSR_1_AWD3
#undef ADC12_CSR_1_EOC3
#undef ADC12_CSR_1_JEOC3
#undef ADC12_CSR_1_JSTRT3
#undef ADC12_CSR_1_STRT3
#undef ADC12_CSR_1_OVR3
#undef ADC12_CSR_2_DOVR3
#undef ADC34_CSR_0_JSTRT2
#undef ADC34_CSR_0_STRT2
#undef ADC34_CSR_0_OVR2
#undef ADC34_CSR_0_STRT3
#undef ADC34_CSR_1_AWD2
#undef ADC34_CSR_1_EOC2
#undef ADC34_CSR_1_JEOC2
#undef ADC34_CSR_1_DOVR2
#undef ADC34_CSR_1_AWD3
#undef ADC34_CSR_1_EOC3
#undef ADC34_CSR_1_JEOC3
#undef ADC34_CSR_1_JSTRT3
#undef ADC34_CSR_1_OVR3
#undef ADC34_CSR_2_DOVR3
#undef ADC123_CSR_0_JSTRT2
#undef ADC123_CSR_0_STRT2
#undef ADC123_CSR_0_OVR2
#undef ADC123_CSR_1_AWD2
#undef ADC123_CSR_1_EOC2
#undef ADC123_CSR_1_JEOC2
#undef ADC123_CSR_1_DOVR2
#undef ADC123_CSR_1_AWD3
#undef ADC123_CSR_1_EOC3
#undef ADC123_CSR_1_JEOC3
#undef ADC123_CSR_1_JSTRT3
#undef ADC123_CSR_1_STRT3
#undef ADC123_CSR_1_OVR3
#undef ADC123_CSR_2_DOVR3
#undef ADC1_CSR_0_ADRDY_EOSMP_MST
#undef ADC1_CSR_0_ADRDY_EOC_MST
#undef ADC1_CSR_0_ADRDY_EOS_MST
#undef ADC1_CSR_0_ADRDY_OVR_MST
#undef ADC1_CSR_0_ADRDY_JEOC_MST
#undef ADC1_CSR_0_ADRDY_JEOS_MST
#undef ADC1_CSR_0_AWD1_MST
#undef ADC1_CSR_0_AWD2_MST
#undef ADC1_CSR_0_AWD3_MST
#undef ADC1_CSR_0_ADRDY_EOSMP_SLV
#undef ADC1_CSR_0_ADRDY_EOC_SLV
#undef ADC1_CSR_0_ADRDY_EOS_SLV
#undef ADC1_CSR_0_ADRDY_OVR_SLV
#undef ADC1_CSR_0_ADRDY_JEOC_SLV
#undef ADC1_CSR_0_ADRDY_JEOS_SLV
#undef ADC1_CSR_0_AWD1_SLV
#undef ADC1_CSR_0_AWD2_SLV
#undef ADC1_CSR_0_AWD3_SLV
#undef ADC12_CSR_0_ADRDY_EOSMP_MST
#undef ADC12_CSR_0_ADRDY_EOC_MST
#undef ADC12_CSR_0_ADRDY_EOS_MST
#undef ADC12_CSR_0_ADRDY_OVR_MST
#undef ADC12_CSR_0_ADRDY_JEOC_MST
#undef ADC12_CSR_0_ADRDY_JEOS_MST
#undef ADC12_CSR_0_AWD1_MST
#undef ADC12_CSR_0_AWD2_MST
#undef ADC12_CSR_0_AWD3_MST
#undef ADC12_CSR_0_ADRDY_EOSMP_SLV
#undef ADC12_CSR_0_ADRDY_EOC_SLV
#undef ADC12_CSR_0_ADRDY_EOS_SLV
#undef ADC12_CSR_0_ADRDY_OVR_SLV
#undef ADC12_CSR_0_ADRDY_JEOC_SLV
#undef ADC12_CSR_0_ADRDY_JEOS_SLV
#undef ADC12_CSR_0_AWD1_SLV
#undef ADC12_CSR_0_AWD2_SLV
#undef ADC12_CSR_0_AWD3_SLV
#undef ADC34_CSR_0_ADRDY_EOSMP_MST
#undef ADC34_CSR_0_ADRDY_EOC_MST
#undef ADC34_CSR_0_ADRDY_EOS_MST
#undef ADC34_CSR_0_ADRDY_OVR_MST
#undef ADC34_CSR_0_ADRDY_JEOC_MST
#undef ADC34_CSR_0_ADRDY_JEOS_MST
#undef ADC34_CSR_0_AWD1_MST
#undef ADC34_CSR_0_AWD2_MST
#undef ADC34_CSR_0_AWD3_MST
#undef ADC34_CSR_0_ADRDY_EOSMP_SLV
#undef ADC34_CSR_0_ADRDY_EOC_SLV
#undef ADC34_CSR_0_ADRDY_EOS_SLV
#undef ADC34_CSR_0_ADRDY_JEOC_SLV
#undef ADC34_CSR_0_ADRDY_JEOS_SLV
#undef ADC34_CSR_0_AWD1_SLV
#undef ADC34_CSR_0_AWD2_SLV
#undef ADC34_CSR_0_AWD3_SLV
#undef ADC_MAP0_CALFACT
//endregion
#endif
