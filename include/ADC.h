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


//Generated 2020-05-08T21:45:07.733283

#ifndef __SOOL_CORE_ADC_H
#define __SOOL_CORE_ADC_H
#include "lib_utils/peripheral_include.h"
#include "RCC.h"


#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || \
    defined(STM32L0      ) || defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32W1      ) || defined(STM32WB      ) || \
    defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || \
    defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || \
    defined(STM32F358xx  )
#define ADC_ISR
#define ADC_IER
#define ADC_CR
#define ADC_MAP0_ISR ISR_t ISR
#else
#define ADC_MAP0_ISR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || \
    defined(STM32L0      ) || defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32F301x8  ) || \
    defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || \
    defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC_ISR_0
#define ADC_IER_0
#define ADC_CR_0_ADEN ADEN
#define ADC_CR_0_ADDIS ADDIS
#define ADC_CR_0_ADSTART ADSTART
#define ADC_CR_0_ADSTP ADSTP
#define ADC_CR_0_ADCAL ADCAL
#define ADC_MAP0_IER IER_t IER
#define ADC_MAP0_CR CR_t CR
#define ADC_MAP0_DR DR_t DR
#else
#define ADC_CR_0_ADEN
#define ADC_CR_0_ADDIS
#define ADC_CR_0_ADSTART
#define ADC_CR_0_ADSTP
#define ADC_CR_0_ADCAL
#define ADC_MAP0_IER __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_CR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_DR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L4      ) || defined(STM32MP1     ) || \
    defined(STM32WB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || \
    defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || \
    defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC_ISR_0_JEOC JEOC
#define ADC_ISR_0_JEOS JEOS
#define ADC_ISR_0_JQOVF JQOVF
#define ADC_IER_0_JEOCIE JEOCIE
#define ADC_IER_0_JEOSIE JEOSIE
#define ADC_IER_0_JQOVFIE JQOVFIE
#define ADC_CR_0_JADSTART JADSTART
#define ADC_CR_0_JADSTP JADSTP
#define ADC_CR_0_DEEPPWD DEEPPWD
#define ADC_CR_0_ADCALDIF ADCALDIF
#define ADC_CFGR
#define ADC_SMPR1_0
#define ADC_SMPR2_0
#define ADC_SQR1_0
#define ADC_SQR2_0
#define ADC_SQR3_0
#define ADC_SQR4_0_SQ15 SQ15
#define ADC_SQR4_0_SQ16 SQ16
#define ADC_JSQR_0
#define ADC_JDR1
#define ADC_JDR2
#define ADC_JDR3
#define ADC_JDR4
#define ADC_DIFSEL
#define ADC_MAP0_CFGR CFGR_t CFGR
#define ADC_MAP0_SMPR1 SMPR1_t SMPR1
#define ADC_MAP0_SMPR2 SMPR2_t SMPR2
#define ADC_MAP0_JSQR JSQR_t JSQR
#define ADC_MAP0_JDR1 JDR1_t JDR1
#define ADC_MAP0_JDR2 JDR2_t JDR2
#define ADC_MAP0_JDR3 JDR3_t JDR3
#define ADC_MAP0_JDR4 JDR4_t JDR4
#else
#define ADC_ISR_0_JEOC
#define ADC_ISR_0_JEOS
#define ADC_ISR_0_JQOVF
#define ADC_IER_0_JEOCIE
#define ADC_IER_0_JEOSIE
#define ADC_IER_0_JQOVFIE
#define ADC_CR_0_JADSTART
#define ADC_CR_0_JADSTP
#define ADC_CR_0_DEEPPWD
#define ADC_CR_0_ADCALDIF
#define ADC_SQR4_0_SQ15
#define ADC_SQR4_0_SQ16
#define ADC_MAP0_CFGR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SMPR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SMPR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JSQR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JDR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JDR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JDR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_JDR4 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L4      ) || \
    defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || \
    defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || \
    defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC_ISR_0_AWD1 AWD1
#define ADC_ISR_0_AWD2 AWD2
#define ADC_ISR_0_AWD3 AWD3
#define ADC_IER_0_AWD1IE AWD1IE
#define ADC_IER_0_AWD2IE AWD2IE
#define ADC_IER_0_AWD3IE AWD3IE
#define ADC_AWD2CR
#define ADC_AWD3CR
#define ADC_MAP0_AWD2CR AWD2CR_t AWD2CR
#define ADC_MAP0_AWD3CR AWD3CR_t AWD3CR
#else
#define ADC_ISR_0_AWD1
#define ADC_ISR_0_AWD2
#define ADC_ISR_0_AWD3
#define ADC_IER_0_AWD1IE
#define ADC_IER_0_AWD2IE
#define ADC_IER_0_AWD3IE
#define ADC_MAP0_AWD2CR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_AWD3CR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32L0      )
#define ADC_ISR_0_EOCAL EOCAL
#define ADC_IER_0_EOCALIE EOCALIE
#define ADC_CFGR2_1_OVSE OVSE
#define ADC_CFGR2_2
#define ADC_CALFACT_2
#else
#define ADC_ISR_0_EOCAL
#define ADC_IER_0_EOCALIE
#define ADC_CFGR2_1_OVSE
#endif

#if	defined(STM32G0      )
#define ADC_ISR_0_CCRDY CCRDY
#define ADC_IER_0_CCRDYIE CCRDYIE
#define ADC_CFGR2_1_LFTRIG LFTRIG
#define ADC_CFGR1_0_CHSELRMOD CHSELRMOD
#define ADC_CFGR1_1
#define ADC_SMPR_0_SMP2 SMP2
#define ADC_SMPR_0_SMPSEL SMPSEL
#define ADC_SMPR_1
#define ADC_CHSELR_1
#define ADC_AWD1TR
#define ADC_AWD2TR
#define ADC_CHSELR_1
#define ADC_AWD3TR
#define ADC_MAP4_AWD1TR AWD1TR_t AWD1TR
#define ADC_MAP4_AWD2TR AWD2TR_t AWD2TR
#define ADC_MAP4_CHSELR_1 CHSELR_1_t CHSELR_1
#define ADC_MAP4_AWD3TR AWD3TR_t AWD3TR
#else
#define ADC_ISR_0_CCRDY
#define ADC_IER_0_CCRDYIE
#define ADC_CFGR2_1_LFTRIG
#define ADC_CFGR1_0_CHSELRMOD
#define ADC_SMPR_0_SMP2
#define ADC_SMPR_0_SMPSEL
#define ADC_MAP4_AWD1TR __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_AWD2TR __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_CHSELR_1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_AWD3TR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32L0      ) || defined(STM32W1      )
#define ADC_ISR_1
#define ADC_IER_1
#endif

#if	defined(STM32W1      )
#define ADC_ISR_1_DMABHF DMABHF
#define ADC_ISR_1_DMABF DMABF
#define ADC_ISR_1_SAT SAT
#define ADC_ISR_1_DMAOVF DMAOVF
#define ADC_IER_1_DMABHFIE DMABHFIE
#define ADC_IER_1_DMABFIE DMABFIE
#define ADC_IER_1_SATIE SATIE
#define ADC_IER_1_DMAOVFIE DMAOVFIE
#define ADC_CR_0_HVSELN HVSELN
#define ADC_CR_0_HVSELP HVSELP
#define ADC_CR_0_SMP SMP
#define ADC_CR_1_ADON ADON
#define ADC_CR_1_CLK CLK
#define ADC_CR_1_CHSELN CHSELN
#define ADC_CR_2
#define ADC_OFFSETR
#define ADC_GAINR
#define ADC_DMACR
#define ADC_DMASR
#define ADC_DMAMSAR
#define ADC_DMANDTR
#define ADC_DMAMNAR
#define ADC_DMACNDTR
#define ADC_MAP4_IER IER_t IER
#define ADC_MAP5_CR CR_t CR
#define ADC_MAP5_OFFSETR OFFSETR_t OFFSETR
#define ADC_MAP5_GAINR GAINR_t GAINR
#define ADC_MAP5_DMACR DMACR_t DMACR
#define ADC_MAP5_DMASR DMASR_t DMASR
#define ADC_MAP5_DMAMSAR DMAMSAR_t DMAMSAR
#define ADC_MAP5_DMANDTR DMANDTR_t DMANDTR
#define ADC_MAP5_DMAMNAR DMAMNAR_t DMAMNAR
#define ADC_MAP5_DMACNDTR DMACNDTR_t DMACNDTR
#else
#define ADC_ISR_1_DMABHF
#define ADC_ISR_1_DMABF
#define ADC_ISR_1_SAT
#define ADC_ISR_1_DMAOVF
#define ADC_IER_1_DMABHFIE
#define ADC_IER_1_DMABFIE
#define ADC_IER_1_SATIE
#define ADC_IER_1_DMAOVFIE
#define ADC_CR_0_HVSELN
#define ADC_CR_0_HVSELP
#define ADC_CR_0_SMP
#define ADC_CR_1_ADON
#define ADC_CR_1_CLK
#define ADC_CR_1_CHSELN
#define ADC_MAP4_IER __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_CR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_OFFSETR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_GAINR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_DMACR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_DMASR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_DMAMSAR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_DMANDTR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_DMAMNAR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_DMACNDTR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32L0      )
#define ADC_ISR_1_AWD AWD
#define ADC_IER_1_AWDIE AWDIE
#define ADC_CFGR1_0_AUTDLY AUTDLY
#define ADC_CFGR1_0_AWDSGL AWDSGL
#define ADC_CFGR1_0_AWDEN AWDEN
#define ADC_CFGR1_0_AWDCH AWDCH
#define ADC_SMPR_0_SMPR SMPR
#define ADC_TR
#define ADC_CHSELR_0
#define ADC_MAP3_TR TR_t TR
#else
#define ADC_ISR_1_AWD
#define ADC_IER_1_AWDIE
#define ADC_CFGR1_0_AUTDLY
#define ADC_CFGR1_0_AWDSGL
#define ADC_CFGR1_0_AWDEN
#define ADC_CFGR1_0_AWDCH
#define ADC_SMPR_0_SMPR
#define ADC_MAP3_TR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32MP1     ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H750xx  ) || defined(STM32H753xx  )
#define ADC_CR_0_BOOST BOOST
#else
#define ADC_CR_0_BOOST
#endif

#if	defined(STM32H7      ) || defined(STM32MP1     )
#define ADC_CR_0_ADCALLIN ADCALLIN
#define ADC_CR_0_LINCALRDYW1 LINCALRDYW1
#define ADC_CR_0_LINCALRDYW2 LINCALRDYW2
#define ADC_CR_0_LINCALRDYW3 LINCALRDYW3
#define ADC_CR_0_LINCALRDYW4 LINCALRDYW4
#define ADC_CR_0_LINCALRDYW5 LINCALRDYW5
#define ADC_CR_0_LINCALRDYW6 LINCALRDYW6
#define ADC_CFGR_0_DMNGT DMNGT
#define ADC_CFGR_0_EXTSEL EXTSEL
#define ADC_CFGR2_0_RSHIFT1 RSHIFT1
#define ADC_CFGR2_0_RSHIFT2 RSHIFT2
#define ADC_CFGR2_0_RSHIFT3 RSHIFT3
#define ADC_CFGR2_0_RSHIFT4 RSHIFT4
#define ADC_CFGR2_0_OSR OSR
#define ADC_CFGR2_0_LSHIFT LSHIFT
#define ADC_SMPR2_0_SMP19 SMP19
#define ADC_PCSEL
#define ADC_LTR1
#define ADC_LHTR1
#define ADC_OFRx_0_OFFSET1 OFFSET1
#define ADC_OFRx_0_SSATE SSATE
#define ADC_JDR1_0
#define ADC_JDR2_0
#define ADC_JDR3_0
#define ADC_JDR4_0
#define ADC_AWD2CR_0
#define ADC_LTR2
#define ADC_HTR2
#define ADC_LTR3
#define ADC_HTR3
#define ADC_DIFSEL_0
#define ADC_CALFACT_0
#define ADC_CALFACT2
#define ADC_MAP0_PCSEL PCSEL_t PCSEL
#define ADC_MAP0_LTR1 LTR1_t LTR1
#define ADC_MAP0_LHTR1 LHTR1_t LHTR1
#define ADC_MAP0_LTR2 LTR2_t LTR2
#define ADC_MAP0_HTR2 HTR2_t HTR2
#define ADC_MAP0_LTR3 LTR3_t LTR3
#define ADC_MAP0_HTR3 HTR3_t HTR3
#define ADC_MAP0_DIFSEL DIFSEL_t DIFSEL
#define ADC_MAP0_CALFACT CALFACT_t CALFACT
#define ADC_MAP0_CALFACT2 CALFACT2_t CALFACT2
#else
#define ADC_CR_0_ADCALLIN
#define ADC_CR_0_LINCALRDYW1
#define ADC_CR_0_LINCALRDYW2
#define ADC_CR_0_LINCALRDYW3
#define ADC_CR_0_LINCALRDYW4
#define ADC_CR_0_LINCALRDYW5
#define ADC_CR_0_LINCALRDYW6
#define ADC_CFGR_0_DMNGT
#define ADC_CFGR_0_EXTSEL
#define ADC_CFGR2_0_RSHIFT1
#define ADC_CFGR2_0_RSHIFT2
#define ADC_CFGR2_0_RSHIFT3
#define ADC_CFGR2_0_RSHIFT4
#define ADC_CFGR2_0_OSR
#define ADC_CFGR2_0_LSHIFT
#define ADC_SMPR2_0_SMP19
#define ADC_OFRx_0_OFFSET1
#define ADC_OFRx_0_SSATE
#define ADC_MAP0_PCSEL __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_LTR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_LHTR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_LTR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_HTR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_LTR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_HTR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_DIFSEL __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_CALFACT __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_CALFACT2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || \
    defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || \
    defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || \
    defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC_CR_0_ADVREGEN ADVREGEN
#define ADC_CALFACT
#else
#define ADC_CR_0_ADVREGEN
#endif

#if	defined(STM32W1      ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || \
    defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define ADC_CR_1
#endif

#if	defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H755xx_CORE_CM4) || \
    defined(STM32H755xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define ADC_CR_1_BOOST BOOST
#else
#define ADC_CR_1_BOOST
#endif

#if	defined(STM32MP1     ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define ADC_CFGR_0_RES RES
#define ADC_Common_CDR2
#define ADC_Common_MAP0_CDR2 CDR2_t CDR2
#else
#define ADC_CFGR_0_RES
#define ADC_Common_MAP0_CDR2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G4      ) || defined(STM32GB      )
#define ADC_CFGR_0_ALIGN ALIGN
#define ADC_CFGR_2_ALIGN_5 ALIGN_5
#define ADC_CFGR2_0_BULB BULB
#define ADC_CFGR2_0_SMPTRIG SMPTRIG
#define ADC_CFGR2_1_GCOMP GCOMP
#define ADC_CFGR2_1_SWTRIG SWTRIG
#define ADC_OFRx_1
#define ADC_DIFSEL_2
#define ADC_TR1_AWDFILT AWDFILT
#define ADC_GCOMP
#define ADC_MAP2_GCOMP GCOMP_t GCOMP
#else
#define ADC_CFGR_0_ALIGN
#define ADC_CFGR_2_ALIGN_5
#define ADC_CFGR2_0_BULB
#define ADC_CFGR2_0_SMPTRIG
#define ADC_CFGR2_1_GCOMP
#define ADC_CFGR2_1_SWTRIG
#define ADC_TR1_AWDFILT
#define ADC_MAP2_GCOMP __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32WB      ) || \
    defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_CFGR_0_JQDIS JQDIS
#else
#define ADC_CFGR_0_JQDIS
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F301x8  ) || \
    defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || \
    defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || \
    defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define ADC_CFGR_1
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F301x8  ) || \
    defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || \
    defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC_CFGR_1_DMAEN DMAEN
#define ADC_CFGR_1_DMACFG DMACFG
#define ADC_CFGR_1_EXTSEL EXTSEL
#define ADC_CFGR_2
#define ADC_JDR1_1
#define ADC_JDR2_1
#define ADC_JDR3_1
#define ADC_JDR4_1
#define ADC_DIFSEL_1
#define ADC_CALFACT_1
#define ADC_TR1
#define ADC_TR2
#define ADC_TR3
#define ADC_MAP1_TR1 TR1_t TR1
#define ADC_MAP1_TR2 TR2_t TR2
#define ADC_MAP1_TR3 TR3_t TR3
#define ADC_MAP1_DIFSEL DIFSEL_t DIFSEL
#else
#define ADC_CFGR_1_DMAEN
#define ADC_CFGR_1_DMACFG
#define ADC_CFGR_1_EXTSEL
#define ADC_MAP1_TR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_TR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_TR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_DIFSEL __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define ADC_CFGR_1_RES RES
#define ADC_MAP1_CCR CCR_t CCR
#else
#define ADC_CFGR_1_RES
#define ADC_MAP1_CCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || \
    defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || \
    defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC_CFGR_1_ALIGN ALIGN
#define ADC_JSQR_1
#define ADC_DIFSEL_1_DIFSEL_1_15 DIFSEL_1_15
#define ADC_DIFSEL_1_DIFSEL_16_18 DIFSEL_16_18
#define ADC_OFR1
#define ADC_OFR2
#define ADC_OFR3
#define ADC_OFR4
#define ADC_MAP1_OFR1 OFR1_t OFR1
#define ADC_MAP1_OFR2 OFR2_t OFR2
#define ADC_MAP1_OFR3 OFR3_t OFR3
#define ADC_MAP1_OFR4 OFR4_t OFR4
#else
#define ADC_CFGR_1_ALIGN
#define ADC_DIFSEL_1_DIFSEL_1_15
#define ADC_DIFSEL_1_DIFSEL_16_18
#define ADC_MAP1_OFR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_OFR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_OFR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_OFR4 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || \
    defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || \
    defined(STM32F358xx  ) || defined(STM32L475xx  ) || defined(STM32L485xx  )
#define ADC_CFGR_1_AUTOFF AUTOFF
#define ADC_AWD2CR_3
#define ADC_AWD3CR_4
#else
#define ADC_CFGR_1_AUTOFF
#endif

#if	defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  )
#define ADC_CFGR_2_DFSDMCFG DFSDMCFG
#else
#define ADC_CFGR_2_DFSDMCFG
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || \
    defined(STM32L0      ) || defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32WB      )
#define ADC_CFGR2
#define ADC_MAP0_CFGR2 CFGR2_t CFGR2
#else
#define ADC_MAP0_CFGR2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || \
    defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32WB      )
#define ADC_CFGR2_0
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L4      ) || defined(STM32MP1     ) || \
    defined(STM32WB      )
#define ADC_CFGR2_0_ROVSE ROVSE
#define ADC_CFGR2_0_JOVSE JOVSE
#define ADC_CFGR2_0_ROVSM ROVSM
#else
#define ADC_CFGR2_0_ROVSE
#define ADC_CFGR2_0_JOVSE
#define ADC_CFGR2_0_ROVSM
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || defined(STM32L4      ) || \
    defined(STM32WB      )
#define ADC_CFGR2_0_OVSR OVSR
#else
#define ADC_CFGR2_0_OVSR
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32L476xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define ADC_CFGR2_0_TROVS TROVS
#else
#define ADC_CFGR2_0_TROVS
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || \
    defined(STM32WB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || \
    defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || \
    defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L485xx  )
#define ADC_CFGR2_1
#endif

#if	defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32WB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L485xx  )
#define ADC_CFGR2_1_TOVS TOVS
#else
#define ADC_CFGR2_1_TOVS
#endif

#if	defined(STM32F0      )
#define ADC_CFGR2_1_JITOFF_D2 JITOFF_D2
#define ADC_CFGR2_1_JITOFF_D4 JITOFF_D4
#else
#define ADC_CFGR2_1_JITOFF_D2
#define ADC_CFGR2_1_JITOFF_D4
#endif

#if	defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || \
    defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32WB      )
#define ADC_SMPR1
#define ADC_SMPR2
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32MP1     ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || \
    defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_SMPR1_0_SMP0 SMP0
#else
#define ADC_SMPR1_0_SMP0
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_SMPR1_0_SMPPLUS SMPPLUS
#else
#define ADC_SMPR1_0_SMPPLUS
#endif

#if	defined(STM32F2      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define ADC_SMPR1_1
#define ADC_SMPR2_1
#define ADC_MAP1_SMPR1 SMPR1_t SMPR1
#define ADC_MAP1_SMPR2 SMPR2_t SMPR2
#else
#define ADC_MAP1_SMPR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_SMPR2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F2      )
#define ADC_SMPR1_1_SMP18 SMP18
#else
#define ADC_SMPR1_1_SMP18
#endif

#if	defined(STM32MP1     )
#define ADC_PCSEL_0
#define ADC_IPIDR_0
#define ADC_OR
#define ADC_MAP0_OR typename tmpl::OR_t OR
#define ADC_ADC_tmpl_0
#define ADC_Common_VERR
#define ADC_Common_IPIDR
#define ADC_Common_SIDR
#define ADC_Common_MAP0_VERR VERR_t VERR
#define ADC_Common_MAP0_IPIDR IPIDR_t IPIDR
#define ADC_Common_MAP0_SIDR SIDR_t SIDR
#else
#define ADC_MAP0_OR __SOOL_PERIPH_PADDING_4
#define ADC_Common_MAP0_VERR __SOOL_PERIPH_PADDING_4
#define ADC_Common_MAP0_IPIDR __SOOL_PERIPH_PADDING_4
#define ADC_Common_MAP0_SIDR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32H7      )
#define ADC_PCSEL_1
#endif

#if	defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G4      ) || \
    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32MP1     ) || \
    defined(STM32WB      )
#define ADC_SQR1
#define ADC_SQR2
#define ADC_SQR3
#define ADC_JSQR
#endif

#if	defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || \
    defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || \
    defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L485xx  )
#define ADC_SQR1_0_L3 L3
#else
#define ADC_SQR1_0_L3
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define ADC_SQR1_1
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_SQR1_1_L L
#else
#define ADC_SQR1_1_L
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || \
    defined(STM32F398xx  )
#define ADC_SQR1_1_SQ14 SQ14
#define ADC_SQR1_1_SQ15 SQ15
#define ADC_SQR1_1_SQ16 SQ16
#define ADC_SQR1_2_SQ13 SQ13
#define ADC_SQR2_1
#define ADC_SQR3_1
#define ADC_MAP2_JOFR1 JOFR1_t JOFR1
#define ADC_MAP2_JOFR2 JOFR2_t JOFR2
#define ADC_MAP2_JOFR3 JOFR3_t JOFR3
#define ADC_MAP2_JOFR4 JOFR4_t JOFR4
#define ADC_MAP2_HTR HTR_t HTR
#define ADC_MAP2_LTR LTR_t LTR
#define ADC_MAP2_SQR1 SQR1_t SQR1
#define ADC_MAP2_SQR2 SQR2_t SQR2
#define ADC_MAP2_SQR3 SQR3_t SQR3
#define ADC_MAP2_JSQR JSQR_t JSQR
#define ADC_MAP2_JDR1 JDRx_t JDR1
#define ADC_MAP2_JDR2 JDRx_t JDR2
#define ADC_MAP2_JDR3 JDRx_t JDR3
#define ADC_MAP2_JDR4 JDRx_t JDR4
#define ADC_MAP2_DR DR_t DR
#else
#define ADC_SQR1_1_SQ14
#define ADC_SQR1_1_SQ15
#define ADC_SQR1_1_SQ16
#define ADC_SQR1_2_SQ13
#define ADC_MAP2_JOFR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JOFR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JOFR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JOFR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_HTR __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_LTR __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_SQR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_SQR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_SQR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JSQR __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JDR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JDR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JDR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_JDR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_DR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32L1      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  )
#define ADC_SQR1_2
#define ADC_JSQR_2
#define ADC_SR
#define ADC_CR1
#define ADC_CR2
#define ADC_JOFR1
#define ADC_JOFR2
#define ADC_JOFR3
#define ADC_JOFR4
#define ADC_HTR
#define ADC_LTR
#define ADC_JDRx
#define ADC_MAP1_SR SR_t SR
#define ADC_MAP1_CR1 CR1_t CR1
#define ADC_MAP2_CR2 CR2_t CR2
#else
#define ADC_MAP1_SR __SOOL_PERIPH_PADDING_4
#define ADC_MAP1_CR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_CR2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L1      )
#define ADC_SQR1_2_SQ26 SQ26
#define ADC_SQR1_2_SQ27 SQ27
#define ADC_SQR1_2_SQ28 SQ28
#define ADC_SQR1_3
#define ADC_SQR2_2
#define ADC_SQR3_2
#define ADC_SQR4_0_SQ10 SQ10
#define ADC_SQR4_0_SQ11 SQ11
#define ADC_SQR4_0_SQ12 SQ12
#define ADC_SQR4_1
#define ADC_DR_5
#define ADC_SR_ADONS ADONS
#define ADC_SR_RCNR RCNR
#define ADC_SR_JCNR JCNR
#define ADC_CR1_PDD PDD
#define ADC_CR1_PDI PDI
#define ADC_CR2_0_DELS DELS
#define ADC_CR2_1_CFG CFG
#define ADC_SMPRx_1
#define ADC_SQR5
#define ADC_MAP4_SMPR3 SMPRx_t SMPR3
#define ADC_MAP4_JOFR1 JOFR1_t JOFR1
#define ADC_MAP4_JOFR2 JOFR2_t JOFR2
#define ADC_MAP5_JOFR3 JOFR3_t JOFR3
#define ADC_MAP5_JOFR4 JOFR4_t JOFR4
#define ADC_MAP5_HTR HTR_t HTR
#define ADC_MAP5_LTR LTR_t LTR
#define ADC_MAP5_SQR5 SQR5_t SQR5
#define ADC_MAP5_JSQR JSQR_t JSQR
#define ADC_MAP5_JDR1 JDRx_t JDR1
#define ADC_MAP5_JDR2 JDRx_t JDR2
#define ADC_MAP5_JDR3 JDRx_t JDR3
#define ADC_MAP5_JDR4 JDRx_t JDR4
#define ADC_MAP5_DR DR_t DR
#define ADC_MAP5_SMPR0 SMPRx_t SMPR0
#define ADC_Common_CSR_1_ADONS1 ADONS1
#else
#define ADC_SQR1_2_SQ26
#define ADC_SQR1_2_SQ27
#define ADC_SQR1_2_SQ28
#define ADC_SQR4_0_SQ10
#define ADC_SQR4_0_SQ11
#define ADC_SQR4_0_SQ12
#define ADC_SR_ADONS
#define ADC_SR_RCNR
#define ADC_SR_JCNR
#define ADC_CR1_PDD
#define ADC_CR1_PDI
#define ADC_CR2_0_DELS
#define ADC_CR2_1_CFG
#define ADC_MAP4_SMPR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_JOFR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_JOFR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_JOFR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_JOFR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_HTR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_LTR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_SQR5 __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_JSQR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_JDR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_JDR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_JDR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_JDR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_DR __SOOL_PERIPH_PADDING_4
#define ADC_MAP5_SMPR0 __SOOL_PERIPH_PADDING_4
#define ADC_Common_CSR_1_ADONS1
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32L4      ) || \
    defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || \
    defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || \
    defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC_SQR4
#define ADC_MAP0_SQR1 SQR1_t SQR1
#define ADC_MAP0_SQR2 SQR2_t SQR2
#define ADC_MAP0_SQR3 SQR3_t SQR3
#define ADC_MAP0_SQR4 SQR4_t SQR4
#else
#define ADC_MAP0_SQR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SQR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SQR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SQR4 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || \
    defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32WB      )
#define ADC_DR
#endif

#if	defined(STM32MP1     ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define ADC_DR_0
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || \
    defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || \
    defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_DR_1
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32L0      ) || \
    defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define ADC_DR_2
#endif

#if	defined(STM32G0      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || \
    defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || \
    defined(STM32F334x8  ) || defined(STM32F358xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L485xx  )
#define ADC_DR_3
#endif

#if	defined(STM32WB      )
#define ADC_DR_4
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32MP1     )
#define ADC_JSQR_0_JEXTSEL JEXTSEL
#define ADC_JSQR_0_JEXTEN JEXTEN
#define ADC_JSQR_0_JSQ1 JSQ1
#define ADC_JSQR_0_JSQ2 JSQ2
#define ADC_JSQR_0_JSQ3 JSQ3
#define ADC_JSQR_0_JSQ4 JSQ4
#define ADC_OFRx
#define ADC_MAP0_OFR1 OFRx_t OFR1
#define ADC_MAP0_OFR2 OFRx_t OFR2
#define ADC_MAP0_OFR3 OFRx_t OFR3
#define ADC_MAP0_OFR4 OFRx_t OFR4
#else
#define ADC_JSQR_0_JEXTSEL
#define ADC_JSQR_0_JEXTEN
#define ADC_JSQR_0_JSQ1
#define ADC_JSQR_0_JSQ2
#define ADC_JSQR_0_JSQ3
#define ADC_JSQR_0_JSQ4
#define ADC_MAP0_OFR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_OFR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_OFR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_OFR4 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_AWD2CR_1
#define ADC_AWD3CR_2
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  )
#define ADC_AWD2CR_2
#define ADC_AWD3CR_3
#endif

#if	defined(STM32MP1     ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || \
    defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define ADC_AWD3CR_0
#define ADC_Common_CSR_0_ADRDY_MST ADRDY_MST
#define ADC_Common_CCR_0_DAMDF DAMDF
#else
#define ADC_Common_CSR_0_ADRDY_MST
#define ADC_Common_CCR_0_DAMDF
#endif

#if	defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define ADC_AWD3CR_1
#define ADC_Common_ISR
#define ADC_Common_IER
#define ADC_Common_CR
#define ADC_Common_CFGR
#define ADC_Common_CFGR2
#define ADC_Common_SMPR1
#define ADC_Common_SMPR2
#define ADC_Common_LTR1
#define ADC_Common_LHTR1
#define ADC_Common_SQR1
#define ADC_Common_SQR2
#define ADC_Common_SQR4
#define ADC_Common_DR
#define ADC_Common_JSQR
#define ADC_Common_OFRx
#define ADC_Common_JDR1
#define ADC_Common_JDR2
#define ADC_Common_JDR3
#define ADC_Common_JDR4
#define ADC_Common_AWD2CR
#define ADC_Common_AWD3CR
#define ADC_Common_DIFSEL
#define ADC_Common_CALFACT
#define ADC_Common_PCSEL
#define ADC_Common_LTR2
#define ADC_Common_HTR2
#define ADC_Common_LTR3
#define ADC_Common_HTR3
#define ADC_Common_CALFACT2
#define ADC_Common_MAP1
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  )
#define ADC_DIFSEL_1_DIFSEL_0 DIFSEL_0
#else
#define ADC_DIFSEL_1_DIFSEL_0
#endif

#if	defined(STM32MP1     ) || defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  )
#define ADC_VERR
#define ADC_IPIDR
#define ADC_SIDR
#define ADC_MAP0_VERR VERR_t VERR
#define ADC_MAP0_IPIDR IPIDR_t IPIDR
#define ADC_MAP0_SIDR SIDR_t SIDR
#else
#define ADC_MAP0_VERR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_IPIDR __SOOL_PERIPH_PADDING_4
#define ADC_MAP0_SIDR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  )
#define ADC_IPIDR_1
#define ADC_HWCFGR6
#define ADC_HWCFGR5
#define ADC_HWCFGR4
#define ADC_HWCFGR3
#define ADC_HWCFGR2
#define ADC_HWCFGR1
#define ADC_HWCFGR0
#define ADC_MAP4_HWCFGR6 HWCFGR6_t HWCFGR6
#define ADC_MAP4_HWCFGR5 HWCFGR5_t HWCFGR5
#define ADC_MAP4_HWCFGR4 HWCFGR4_t HWCFGR4
#define ADC_MAP4_HWCFGR3 HWCFGR3_t HWCFGR3
#define ADC_MAP4_HWCFGR2 HWCFGR2_t HWCFGR2
#define ADC_MAP4_HWCFGR1 HWCFGR1_t HWCFGR1
#define ADC_MAP4_HWCFGR0 HWCFGR0_t HWCFGR0
#else
#define ADC_MAP4_HWCFGR6 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_HWCFGR5 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_HWCFGR4 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_HWCFGR3 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_HWCFGR2 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_HWCFGR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP4_HWCFGR0 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32WB      ) || defined(STM32F413xx  ) || \
    defined(STM32F423xx  ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H757xx_CORE_CM4) || \
    defined(STM32H757xx_CORE_CM7) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define ADC_CCR
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32WB      ) || defined(STM32H747xx_CORE_CM4) || \
    defined(STM32H747xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  )
#define ADC_CCR_0
#endif

#if	defined(STM32WB      ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H757xx_CORE_CM4) || \
    defined(STM32H757xx_CORE_CM7) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define ADC_CCR_0_CKMODE CKMODE
#else
#define ADC_CCR_0_CKMODE
#endif

#if	defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32WB      ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || \
    defined(STM32H750xx  ) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define ADC_CCR_0_PRESC PRESC
#else
#define ADC_CCR_0_PRESC
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32WB      ) || defined(STM32H747xx_CORE_CM4) || \
    defined(STM32H747xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define ADC_CCR_0_TSEN TSEN
#else
#define ADC_CCR_0_TSEN
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32WB      ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || \
    defined(STM32H750xx  ) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define ADC_CCR_0_VBATEN VBATEN
#else
#define ADC_CCR_0_VBATEN
#endif

#if	defined(STM32L0      )
#define ADC_CCR_0_LFMEN LFMEN
#define ADC_CCR_2_VLCDEN VLCDEN
#else
#define ADC_CCR_0_LFMEN
#define ADC_CCR_2_VLCDEN
#endif

#if	defined(STM32F413xx  ) || defined(STM32F423xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define ADC_CCR_1
#define ADC_CSR
#define ADC_MAP2_CSR CSR_t CSR
#else
#define ADC_MAP2_CSR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F413xx  ) || defined(STM32F423xx  )
#define ADC_CCR_1_ADCPRE ADCPRE
#define ADC_CCR_1_VBATE VBATE
#define ADC_CCR_1_TSVREFE TSVREFE
#define ADC_CSR_0_AWD1 AWD1
#define ADC_CSR_0_EOC1 EOC1
#define ADC_CSR_0_JEOC1 JEOC1
#define ADC_CSR_0_JSTRT1 JSTRT1
#define ADC_CSR_0_STRT1 STRT1
#define ADC_CSR_0_OVR1 OVR1
#define ADC_MAP2_CCR CCR_t CCR
#else
#define ADC_CCR_1_ADCPRE
#define ADC_CCR_1_VBATE
#define ADC_CCR_1_TSVREFE
#define ADC_CSR_0_AWD1
#define ADC_CSR_0_EOC1
#define ADC_CSR_0_JEOC1
#define ADC_CSR_0_JSTRT1
#define ADC_CSR_0_STRT1
#define ADC_CSR_0_OVR1
#define ADC_MAP2_CCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L412xx  ) || defined(STM32L422xx  )
#define ADC_CCR_1_CH18SEL CH18SEL
#define ADC_CCR_2_CH17SEL CH17SEL
#define ADC_CSR_0_JEOS_MST JEOS_MST
#define ADC_CSR_0_AWD1_MST AWD1_MST
#define ADC_CSR_0_AWD2_MST AWD2_MST
#define ADC_CSR_0_AWD3_MST AWD3_MST
#define ADC_CSR_0_JQOVF_MST JQOVF_MST
#define ADC_CSR_1
#else
#define ADC_CCR_1_CH18SEL
#define ADC_CCR_2_CH17SEL
#define ADC_CSR_0_JEOS_MST
#define ADC_CSR_0_AWD1_MST
#define ADC_CSR_0_AWD2_MST
#define ADC_CSR_0_AWD3_MST
#define ADC_CSR_0_JQOVF_MST
#endif

#if	defined(STM32L0      ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define ADC_CCR_2
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32L1      )
#define ADC_SR_OVR OVR
#define ADC_CR1_RES RES
#define ADC_CR1_OVRIE OVRIE
#define ADC_CR2_0_DDS DDS
#define ADC_CR2_0_EOCS EOCS
#define ADC_CR2_0_JEXTSEL JEXTSEL
#define ADC_CR2_0_JEXTEN JEXTEN
#define ADC_CR2_0_JSWSTART JSWSTART
#define ADC_CR2_0_EXTSEL EXTSEL
#define ADC_CR2_0_EXTEN EXTEN
#define ADC_CR2_0_SWSTART SWSTART
#else
#define ADC_SR_OVR
#define ADC_CR1_RES
#define ADC_CR1_OVRIE
#define ADC_CR2_0_DDS
#define ADC_CR2_0_EOCS
#define ADC_CR2_0_JEXTSEL
#define ADC_CR2_0_JEXTEN
#define ADC_CR2_0_JSWSTART
#define ADC_CR2_0_EXTSEL
#define ADC_CR2_0_EXTEN
#define ADC_CR2_0_SWSTART
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define ADC_CR2_0_CAL CAL
#define ADC_CR2_0_RSTCAL RSTCAL
#define ADC_CR2_0_JEXTTRIG JEXTTRIG
#define ADC_CR2_0_TSVREFE TSVREFE
#define ADC_CR2_1_JEXTSEL JEXTSEL
#define ADC_CR2_1_EXTSEL EXTSEL
#define ADC_CR2_1_EXTTRIG EXTTRIG
#define ADC_CR2_1_JSWSTART JSWSTART
#define ADC_CR2_1_SWSTART SWSTART
#else
#define ADC_CR2_0_CAL
#define ADC_CR2_0_RSTCAL
#define ADC_CR2_0_JEXTTRIG
#define ADC_CR2_0_TSVREFE
#define ADC_CR2_1_JEXTSEL
#define ADC_CR2_1_EXTSEL
#define ADC_CR2_1_EXTTRIG
#define ADC_CR2_1_JSWSTART
#define ADC_CR2_1_SWSTART
#endif

#if	defined(STM32L1      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define ADC_CR2_1
#endif

#if	defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32L1      )
#define ADC_SMPRx
#define ADC_MAP2_SMPR1 SMPRx_t SMPR1
#define ADC_MAP2_SMPR2 SMPRx_t SMPR2
#else
#define ADC_MAP2_SMPR1 __SOOL_PERIPH_PADDING_4
#define ADC_MAP2_SMPR2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F4      ) || defined(STM32F7      )
#define ADC_SMPRx_0
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32L0      )
#define ADC_CFGR1
#define ADC_SMPR
#define ADC_CHSELR
#define ADC_MAP3
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || \
    defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32W1      ) || \
    defined(STM32WB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || \
    defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || \
    defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC_MAP0
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32WB      ) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  )
#define ADC_MAP0_CCR CCR_t CCR
#else
#define ADC_MAP0_CCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || \
    defined(STM32WB      ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H757xx_CORE_CM4) || \
    defined(STM32H757xx_CORE_CM7)
#define ADC_MAP1
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || defined(STM32L4      ) || \
    defined(STM32WB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || \
    defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || \
    defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC_MAP1_CALFACT CALFACT_t CALFACT
#else
#define ADC_MAP1_CALFACT __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32L1      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  )
#define ADC_MAP2
#endif

#if	defined(STM32G0      ) || defined(STM32L1      ) || defined(STM32W1      )
#define ADC_MAP4
#endif

#if	defined(STM32L1      ) || defined(STM32W1      )
#define ADC_MAP5
#endif

#if	defined(STM32F2      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L1      ) || \
    defined(STM32MP1     ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || \
    defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || \
    defined(STM32F334x8  ) || defined(STM32F358xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || \
    defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || \
    defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || \
    defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || \
    defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define PERIPH_ADC_Common
#endif

#if	defined(STM32F2      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L1      ) || defined(STM32MP1     ) || \
    defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || \
    defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || \
    defined(STM32F358xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || \
    defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || \
    defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || \
    defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_CSR
#define ADC_Common_MAP0_CSR CSR_t CSR
#else
#define ADC_Common_MAP0_CSR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F2      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32MP1     ) || defined(STM32F301x8  ) || \
    defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || \
    defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || \
    defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F410Cx  ) || \
    defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || \
    defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F765xx  ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || \
    defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_CSR_0
#define ADC_Common_CCR_0_DELAY DELAY
#else
#define ADC_Common_CCR_0_DELAY
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32MP1     ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || \
    defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || \
    defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || defined(STM32H742xx  ) || \
    defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || \
    defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_CSR_0_EOSMP_MST EOSMP_MST
#define ADC_Common_CSR_0_EOC_MST EOC_MST
#define ADC_Common_CSR_0_EOS_MST EOS_MST
#define ADC_Common_CSR_0_OVR_MST OVR_MST
#define ADC_Common_CSR_0_JEOC_MST JEOC_MST
#define ADC_Common_CSR_0_JEOS_MST JEOS_MST
#define ADC_Common_CSR_0_AWD1_MST AWD1_MST
#define ADC_Common_CSR_0_AWD2_MST AWD2_MST
#define ADC_Common_CSR_0_AWD3_MST AWD3_MST
#define ADC_Common_CSR_0_JQOVF_MST JQOVF_MST
#define ADC_Common_CSR_0_ADRDY_SLV ADRDY_SLV
#define ADC_Common_CSR_0_EOSMP_SLV EOSMP_SLV
#define ADC_Common_CSR_0_EOC_SLV EOC_SLV
#define ADC_Common_CSR_0_EOS_SLV EOS_SLV
#define ADC_Common_CSR_0_OVR_SLV OVR_SLV
#define ADC_Common_CSR_0_JEOC_SLV JEOC_SLV
#define ADC_Common_CSR_0_JEOS_SLV JEOS_SLV
#define ADC_Common_CSR_0_AWD1_SLV AWD1_SLV
#define ADC_Common_CSR_0_AWD2_SLV AWD2_SLV
#define ADC_Common_CSR_0_AWD3_SLV AWD3_SLV
#define ADC_Common_CSR_0_JQOVF_SLV JQOVF_SLV
#define ADC_Common_CDR_0
#define ADC_Common_MAP0_CDR CDR_t CDR
#else
#define ADC_Common_CSR_0_EOSMP_MST
#define ADC_Common_CSR_0_EOC_MST
#define ADC_Common_CSR_0_EOS_MST
#define ADC_Common_CSR_0_OVR_MST
#define ADC_Common_CSR_0_JEOC_MST
#define ADC_Common_CSR_0_JEOS_MST
#define ADC_Common_CSR_0_AWD1_MST
#define ADC_Common_CSR_0_AWD2_MST
#define ADC_Common_CSR_0_AWD3_MST
#define ADC_Common_CSR_0_JQOVF_MST
#define ADC_Common_CSR_0_ADRDY_SLV
#define ADC_Common_CSR_0_EOSMP_SLV
#define ADC_Common_CSR_0_EOC_SLV
#define ADC_Common_CSR_0_EOS_SLV
#define ADC_Common_CSR_0_OVR_SLV
#define ADC_Common_CSR_0_JEOC_SLV
#define ADC_Common_CSR_0_JEOS_SLV
#define ADC_Common_CSR_0_AWD1_SLV
#define ADC_Common_CSR_0_AWD2_SLV
#define ADC_Common_CSR_0_AWD3_SLV
#define ADC_Common_CSR_0_JQOVF_SLV
#define ADC_Common_MAP0_CDR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F2      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || \
    defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || \
    defined(STM32F756xx  ) || defined(STM32F765xx  )
#define ADC_Common_CSR_0_JSTRT2 JSTRT2
#define ADC_Common_CSR_0_STRT2 STRT2
#define ADC_Common_CSR_0_OVR2 OVR2
#define ADC_Common_CSR_1_AWD2 AWD2
#define ADC_Common_CSR_1_EOC2 EOC2
#define ADC_Common_CSR_1_JEOC2 JEOC2
#define ADC_Common_CSR_1_AWD3 AWD3
#define ADC_Common_CSR_1_EOC3 EOC3
#define ADC_Common_CSR_1_JEOC3 JEOC3
#define ADC_Common_CSR_1_JSTRT3 JSTRT3
#define ADC_Common_CSR_1_STRT3 STRT3
#define ADC_Common_CSR_1_OVR3 OVR3
#define ADC_Common_CCR_1_DDS DDS
#define ADC_Common_CCR_1_VBATE VBATE
#define ADC_Common_CCR_2_DMA DMA
#else
#define ADC_Common_CSR_0_JSTRT2
#define ADC_Common_CSR_0_STRT2
#define ADC_Common_CSR_0_OVR2
#define ADC_Common_CSR_1_AWD2
#define ADC_Common_CSR_1_EOC2
#define ADC_Common_CSR_1_JEOC2
#define ADC_Common_CSR_1_AWD3
#define ADC_Common_CSR_1_EOC3
#define ADC_Common_CSR_1_JEOC3
#define ADC_Common_CSR_1_JSTRT3
#define ADC_Common_CSR_1_STRT3
#define ADC_Common_CSR_1_OVR3
#define ADC_Common_CCR_1_DDS
#define ADC_Common_CCR_1_VBATE
#define ADC_Common_CCR_2_DMA
#endif

#if	defined(STM32F2      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L1      ) || defined(STM32F301x8  ) || \
    defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || \
    defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || \
    defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F410Cx  ) || \
    defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || \
    defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F765xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || \
    defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_CSR_1
#define ADC_Common_CCR_1
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || \
    defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || \
    defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || \
    defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || \
    defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define ADC_Common_CSR_1_ADDRDY_MST ADDRDY_MST
#define ADC_Common_CCR_0_DMACFG DMACFG
#define ADC_Common_CCR_1_MDMA MDMA
#else
#define ADC_Common_CSR_1_ADDRDY_MST
#define ADC_Common_CCR_0_DMACFG
#define ADC_Common_CCR_1_MDMA
#endif

#if	defined(STM32F2      ) || defined(STM32L1      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || \
    defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || \
    defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  )
#define ADC_Common_CSR_1_EOC1 EOC1
#define ADC_Common_CSR_1_JEOC1 JEOC1
#define ADC_Common_CSR_1_JSTRT1 JSTRT1
#define ADC_Common_CSR_1_STRT1 STRT1
#define ADC_Common_CSR_1_OVR1 OVR1
#define ADC_Common_CSR_2
#define ADC_Common_CCR_1_ADCPRE ADCPRE
#define ADC_Common_CCR_2
#define ADC_Common_MAP2
#else
#define ADC_Common_CSR_1_EOC1
#define ADC_Common_CSR_1_JEOC1
#define ADC_Common_CSR_1_JSTRT1
#define ADC_Common_CSR_1_STRT1
#define ADC_Common_CSR_1_OVR1
#define ADC_Common_CCR_1_ADCPRE
#endif

#if	defined(STM32F2      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32MP1     ) || \
    defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || \
    defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || \
    defined(STM32F358xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || \
    defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || \
    defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_CCR_0
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32MP1     ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || \
    defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || \
    defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define ADC_Common_CCR_0_DUAL DUAL
#else
#define ADC_Common_CCR_0_DUAL
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32F301x8  ) || \
    defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || \
    defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_CCR_0_CKMODE CKMODE
#define ADC_Common_CCR_0_VREFEN VREFEN
#define ADC_Common_MAP0_CCR CCR_t CCR
#else
#define ADC_Common_CCR_0_CKMODE
#define ADC_Common_CCR_0_VREFEN
#define ADC_Common_MAP0_CCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_CCR_0_PRESC PRESC
#else
#define ADC_Common_CCR_0_PRESC
#endif

#if	defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || \
    defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || \
    defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || defined(STM32L475xx  ) || defined(STM32L485xx  )
#define ADC_Common_CCR_0_TSEN TSEN
#define ADC_Common_CCR_0_VBATEN VBATEN
#else
#define ADC_Common_CCR_0_TSEN
#define ADC_Common_CCR_0_VBATEN
#endif

#if	defined(STM32F2      ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || \
    defined(STM32F303xE  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || \
    defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32F745xx  ) || \
    defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L485xx  )
#define ADC_Common_CCR_1_MULT MULT
#else
#define ADC_Common_CCR_1_MULT
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  ) || defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_CCR_1_CH17SEL CH17SEL
#define ADC_Common_CCR_1_CH18SEL CH18SEL
#else
#define ADC_Common_CCR_1_CH17SEL
#define ADC_Common_CCR_1_CH18SEL
#endif

#if	defined(STM32F2      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32MP1     ) || defined(STM32F301x8  ) || \
    defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || \
    defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || \
    defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F765xx  ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || \
    defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_CDR
#endif

#if	defined(STM32F2      ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || \
    defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || \
    defined(STM32F756xx  ) || defined(STM32F765xx  )
#define ADC_Common_CDR_1
#define ADC_Common_MAP2_CDR CDR_t CDR
#else
#define ADC_Common_MAP2_CDR __SOOL_PERIPH_PADDING_4
#endif

namespace sool {
	namespace core {
		#ifdef ADC_ADC_tmpl_0
		struct ADC_tmpl_0 /// fields used by ADC2 
		{
			#ifdef ADC_OR
			struct OR_t: public Reg32_t /// ADC2 option register
			{
				using Reg32_t::operator=;
				uint32_t VDDCOREEN        : 1;
				uint32_t                  : 31;
				
			};
			#endif
		};
		#endif
		struct ADC_tmpl_default /// default template for ADC 
		{
		};
		template<typename tmpl=ADC_tmpl_default>
		class ADC /// analog to digital converter
		{
		public:
			
			#ifdef ADC_ISR
			struct ISR_t: public Reg32_t /// ADC interrupt and status register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_ISR_0
					struct
					{
						uint32_t ADRDY            : 1; /// ADC ready flag
						uint32_t EOSMP            : 1; /// ADC group regular end of sampling flag
						uint32_t EOC              : 1; /// ADC group regular end of unitary conversion flag
						uint32_t EOS              : 1; /// ADC group regular end of sequence conversions flag
						uint32_t OVR              : 1; /// ADC group regular overrun flag
						uint32_t ADC_ISR_0_JEOC   : 1; /// ADC group injected end of unitary conversion flag
						uint32_t ADC_ISR_0_JEOS   : 1; /// ADC group injected end of sequence conversions flag
						uint32_t ADC_ISR_0_AWD1   : 1; /// ADC analog watchdog 1 flag
						uint32_t ADC_ISR_0_AWD2   : 1; /// ADC analog watchdog 2 flag
						uint32_t ADC_ISR_0_AWD3   : 1; /// ADC analog watchdog 3 flag
						uint32_t ADC_ISR_0_JQOVF  : 1; /// ADC group injected contexts queue overflow flag
						uint32_t ADC_ISR_0_EOCAL  : 1; /// End Of Calibration flag
						uint32_t                  : 1;
						uint32_t ADC_ISR_0_CCRDY  : 1; /// Channel Configuration Ready flag
						uint32_t                  : 18;
					};
					#endif
					#ifdef ADC_ISR_1
					struct
					{
						uint32_t                  : 1;
						uint32_t ADC_ISR_1_DMABHF : 1;
						uint32_t ADC_ISR_1_DMABF  : 1;
						uint32_t ADC_ISR_1_SAT    : 1;
						uint32_t ADC_ISR_1_DMAOVF : 1;
						uint32_t                  : 2;
						uint32_t ADC_ISR_1_AWD    : 1; /// Analog watchdog flag
						uint32_t                  : 24;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_IER
			struct IER_t: public Reg32_t /// ADC interrupt enable register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_IER_0
					struct
					{
						uint32_t ADRDYIE          : 1; /// ADC ready interrupt
						uint32_t EOSMPIE          : 1; /// ADC group regular end of sampling interrupt
						uint32_t EOCIE            : 1; /// ADC group regular end of unitary conversion interrupt
						uint32_t EOSIE            : 1; /// ADC group regular end of sequence conversions interrupt
						uint32_t OVRIE            : 1; /// ADC group regular overrun interrupt
						uint32_t ADC_IER_0_JEOCIE : 1; /// ADC group injected end of unitary conversion interrupt
						uint32_t ADC_IER_0_JEOSIE : 1; /// ADC group injected end of sequence conversions interrupt
						uint32_t ADC_IER_0_AWD1IE : 1; /// ADC analog watchdog 1 interrupt
						uint32_t ADC_IER_0_AWD2IE : 1; /// ADC analog watchdog 2 interrupt
						uint32_t ADC_IER_0_AWD3IE : 1; /// ADC analog watchdog 3 interrupt
						uint32_t ADC_IER_0_JQOVFIE : 1; /// ADC group injected contexts queue overflow interrupt
						uint32_t ADC_IER_0_EOCALIE : 1; /// End of calibration interrupt enable
						uint32_t                  : 1;
						uint32_t ADC_IER_0_CCRDYIE : 1; /// Channel Configuration Ready Interrupt enable
						uint32_t                  : 18;
					};
					#endif
					#ifdef ADC_IER_1
					struct
					{
						uint32_t                  : 1;
						uint32_t ADC_IER_1_DMABHFIE : 1;
						uint32_t ADC_IER_1_DMABFIE : 1;
						uint32_t ADC_IER_1_SATIE  : 1;
						uint32_t ADC_IER_1_DMAOVFIE : 1;
						uint32_t                  : 2;
						uint32_t ADC_IER_1_AWDIE  : 1; /// Analog watchdog interrupt enable
						uint32_t                  : 24;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_CR
			struct CR_t: public Reg32_t /// ADC control register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t ADC_CR_0_ADEN    : 1; /// ADC enable
						uint32_t ADC_CR_0_ADDIS   : 1; /// ADC disable
						uint32_t ADC_CR_0_ADSTART : 1; /// ADC group regular conversion start
						uint32_t ADC_CR_0_JADSTART : 1; /// ADC group injected conversion start
						uint32_t ADC_CR_0_ADSTP   : 1; /// ADC group regular conversion stop
						uint32_t ADC_CR_0_JADSTP  : 1; /// ADC group injected conversion stop
						uint32_t                  : 2;
						uint32_t ADC_CR_0_BOOST   : 1; /// Boost mode control
						uint32_t                  : 2;
						uint32_t ADC_CR_0_HVSELN  : 1;
						uint32_t ADC_CR_0_HVSELP  : 1;
						uint32_t ADC_CR_0_SMP     : 3;
						uint32_t ADC_CR_0_ADCALLIN : 1; /// Linearity calibration
						uint32_t                  : 5;
						uint32_t ADC_CR_0_LINCALRDYW1 : 1; /// Linearity calibration ready Word 1
						uint32_t ADC_CR_0_LINCALRDYW2 : 1; /// Linearity calibration ready Word 2
						uint32_t ADC_CR_0_LINCALRDYW3 : 1; /// Linearity calibration ready Word 3
						uint32_t ADC_CR_0_LINCALRDYW4 : 1; /// Linearity calibration ready Word 4
						uint32_t ADC_CR_0_LINCALRDYW5 : 1; /// Linearity calibration ready Word 5
						uint32_t ADC_CR_0_LINCALRDYW6 : 1; /// Linearity calibration ready Word 6
						uint32_t ADC_CR_0_ADVREGEN : 1; /// ADC voltage regulator enable
						uint32_t ADC_CR_0_DEEPPWD : 1; /// ADC deep power down enable
						uint32_t ADC_CR_0_ADCALDIF : 1; /// ADC differential mode for calibration
						uint32_t ADC_CR_0_ADCAL   : 1; /// ADC calibration
					};
					#ifdef ADC_CR_1
					struct
					{
						uint32_t ADC_CR_1_ADON    : 1;
						uint32_t                  : 1;
						uint32_t ADC_CR_1_CLK     : 1;
						uint32_t ADC_CR_1_CHSELN  : 4;
						uint32_t                  : 1;
						uint32_t ADC_CR_1_BOOST   : 2; /// Boost mode control
						uint32_t                  : 22;
					};
					#endif
					#ifdef ADC_CR_2
					struct
					{
						uint32_t                  : 7;
						uint32_t CHSELP           : 4;
						uint32_t                  : 21;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_CFGR
			struct CFGR_t: public Reg32_t /// ADC configuration register 1
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t ADC_CFGR_0_DMNGT : 2; /// ADC DMA transfer enable
						uint32_t ADC_CFGR_0_RES   : 3; /// ADC data resolution
						uint32_t ADC_CFGR_0_EXTSEL : 5; /// ADC group regular external trigger source
						uint32_t EXTEN            : 2; /// ADC group regular external trigger polarity
						uint32_t OVRMOD           : 1; /// ADC group regular overrun configuration
						uint32_t CONT             : 1; /// ADC group regular continuous conversion mode
						uint32_t AUTDLY           : 1; /// ADC low power auto wait
						uint32_t ADC_CFGR_0_ALIGN : 1;
						uint32_t DISCEN           : 1; /// ADC group regular sequencer discontinuous mode
						uint32_t DISCNUM          : 3; /// ADC group regular sequencer discontinuous number of ranks
						uint32_t JDISCEN          : 1; /// ADC group injected sequencer discontinuous mode
						uint32_t JQM              : 1; /// ADC group injected contexts queue mode
						uint32_t AWD1SGL          : 1; /// ADC analog watchdog 1 monitoring a single channel or all channels
						uint32_t AWD1EN           : 1; /// ADC analog watchdog 1 enable on scope ADC group regular
						uint32_t JAWD1EN          : 1; /// ADC analog watchdog 1 enable on scope ADC group injected
						uint32_t JAUTO            : 1; /// ADC group injected automatic trigger mode
						uint32_t AWDCH1CH         : 5; /// ADC analog watchdog 1 monitored channel selection
						uint32_t ADC_CFGR_0_JQDIS : 1; /// ADC group injected contexts queue disable
					};
					#ifdef ADC_CFGR_1
					struct
					{
						uint32_t ADC_CFGR_1_DMAEN : 1; /// ADC DMA transfer enable
						uint32_t ADC_CFGR_1_DMACFG : 1; /// ADC DMA transfer configuration
						uint32_t ADC_CFGR_1_RES   : 2; /// ADC data resolution
						uint32_t                  : 1;
						uint32_t ADC_CFGR_1_ALIGN : 1; /// ADC data alignement
						uint32_t ADC_CFGR_1_EXTSEL : 4; /// ADC group regular external trigger source
						uint32_t                  : 5;
						uint32_t ADC_CFGR_1_AUTOFF : 1;
						uint32_t                  : 16;
					};
					#endif
					#ifdef ADC_CFGR_2
					struct
					{
						uint32_t                  : 2;
						uint32_t ADC_CFGR_2_DFSDMCFG : 1;
						uint32_t RES              : 2; /// ADC data resolution
						uint32_t ADC_CFGR_2_ALIGN_5 : 1;
						uint32_t                  : 26;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_CFGR2
			struct CFGR2_t: public Reg32_t /// ADC configuration register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_CFGR2_0
					struct
					{
						uint32_t ADC_CFGR2_0_ROVSE : 1; /// ADC oversampler enable on scope ADC group regular
						uint32_t ADC_CFGR2_0_JOVSE : 1; /// ADC oversampler enable on scope ADC group injected
						uint32_t ADC_CFGR2_0_OVSR : 3; /// RES
						uint32_t OVSS             : 4; /// ADC oversampling shift
						uint32_t ADC_CFGR2_0_TROVS : 1; /// ADC oversampling discontinuous mode (triggered mode) for ADC group regular
						uint32_t ADC_CFGR2_0_ROVSM : 1; /// Regular Oversampling mode
						uint32_t ADC_CFGR2_0_RSHIFT1 : 1; /// Right-shift data after Offset 1 correction
						uint32_t ADC_CFGR2_0_RSHIFT2 : 1; /// Right-shift data after Offset 2 correction
						uint32_t ADC_CFGR2_0_RSHIFT3 : 1; /// Right-shift data after Offset 3 correction
						uint32_t ADC_CFGR2_0_RSHIFT4 : 1; /// Right-shift data after Offset 4 correction
						uint32_t                  : 1;
						uint32_t ADC_CFGR2_0_OSR  : 10; /// Oversampling ratio
						uint32_t ADC_CFGR2_0_BULB : 1;
						uint32_t ADC_CFGR2_0_SMPTRIG : 1;
						uint32_t ADC_CFGR2_0_LSHIFT : 4; /// Left shift factor
					};
					#endif
					#ifdef ADC_CFGR2_1
					struct
					{
						uint32_t ADC_CFGR2_1_OVSE : 1; /// ADC oversampler enable on scope ADC group regular
						uint32_t                  : 8;
						uint32_t ADC_CFGR2_1_TOVS : 1; /// EXTSEL
						uint32_t                  : 6;
						uint32_t ADC_CFGR2_1_GCOMP : 1;
						uint32_t                  : 8;
						uint32_t ADC_CFGR2_1_SWTRIG : 1;
						uint32_t                  : 3;
						uint32_t ADC_CFGR2_1_LFTRIG : 1; /// Low frequency trigger mode enable
						uint32_t ADC_CFGR2_1_JITOFF_D2 : 1;
						uint32_t ADC_CFGR2_1_JITOFF_D4 : 1;
					};
					#endif
					#ifdef ADC_CFGR2_2
					struct
					{
						uint32_t                  : 30;
						uint32_t CKMODE           : 2; /// ADC clock mode
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_SMPR1
			struct SMPR1_t: public Reg32_t /// ADC sampling time register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_SMPR1_0
					struct
					{
						uint32_t ADC_SMPR1_0_SMP0 : 3; /// ADC channel 0 sampling time selection
						uint32_t SMP1             : 3; /// ADC channel 1 sampling time selection
						uint32_t SMP2             : 3; /// ADC channel 2 sampling time selection
						uint32_t SMP3             : 3; /// ADC channel 3 sampling time selection
						uint32_t SMP4             : 3; /// ADC channel 4 sampling time selection
						uint32_t SMP5             : 3; /// ADC channel 5 sampling time selection
						uint32_t SMP6             : 3; /// ADC channel 6 sampling time selection
						uint32_t SMP7             : 3; /// ADC channel 7 sampling time selection
						uint32_t SMP8             : 3; /// ADC channel 8 sampling time selection
						uint32_t SMP9             : 3; /// ADC channel 9 sampling time selection
						uint32_t                  : 1;
						uint32_t ADC_SMPR1_0_SMPPLUS : 1; /// Addition of one clock cycle to the sampling time
					};
					#endif
					#ifdef ADC_SMPR1_1
					struct
					{
						uint32_t SMP10            : 3; /// Channel 10 sampling time selection
						uint32_t SMP11            : 3; /// Channel 11 sampling time selection
						uint32_t SMP12            : 3; /// Channel 12 sampling time selection
						uint32_t SMP13            : 3; /// Channel 13 sampling time selection
						uint32_t SMP14            : 3; /// Channel 14 sampling time selection
						uint32_t SMP15            : 3; /// Channel 15 sampling time selection
						uint32_t SMP16            : 3; /// Channel 16 sampling time selection
						uint32_t SMP17            : 3; /// Channel 17 sampling time selection
						uint32_t ADC_SMPR1_1_SMP18 : 3; /// Channel 18 sampling time selection
						uint32_t                  : 5;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_SMPR2
			struct SMPR2_t: public Reg32_t /// ADC sampling time register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_SMPR2_0
					struct
					{
						uint32_t SMP10            : 3; /// ADC channel 10 sampling time selection
						uint32_t SMP11            : 3; /// ADC channel 11 sampling time selection
						uint32_t SMP12            : 3; /// ADC channel 12 sampling time selection
						uint32_t SMP13            : 3; /// ADC channel 13 sampling time selection
						uint32_t SMP14            : 3; /// ADC channel 14 sampling time selection
						uint32_t SMP15            : 3; /// ADC channel 15 sampling time selection
						uint32_t SMP16            : 3; /// ADC channel 16 sampling time selection
						uint32_t SMP17            : 3; /// ADC channel 17 sampling time selection
						uint32_t SMP18            : 3; /// ADC channel 18 sampling time selection
						uint32_t ADC_SMPR2_0_SMP19 : 3; /// ADC channel 18 sampling time selection
						uint32_t                  : 2;
					};
					#endif
					#ifdef ADC_SMPR2_1
					struct
					{
						uint32_t SMP0             : 3; /// Channel 0 sampling time selection
						uint32_t SMP1             : 3; /// Channel 1 sampling time selection
						uint32_t SMP2             : 3; /// Channel 2 sampling time selection
						uint32_t SMP3             : 3; /// Channel 3 sampling time selection
						uint32_t SMP4             : 3; /// Channel 4 sampling time selection
						uint32_t SMP5             : 3; /// Channel 5 sampling time selection
						uint32_t SMP6             : 3; /// Channel 6 sampling time selection
						uint32_t SMP7             : 3; /// Channel 7 sampling time selection
						uint32_t SMP8             : 3; /// Channel 8 sampling time selection
						uint32_t SMP9             : 3; /// Channel 9 sampling time selection
						uint32_t                  : 2;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_PCSEL
			struct PCSEL_t: public Reg32_t /// ADC channel preselection register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_PCSEL_0
					struct
					{
						uint32_t PCSEL0           : 1;
						uint32_t PCSEL1           : 1;
						uint32_t PCSEL2           : 1;
						uint32_t PCSEL3           : 1;
						uint32_t PCSEL4           : 1;
						uint32_t PCSEL5           : 1;
						uint32_t PCSEL6           : 1;
						uint32_t PCSEL7           : 1;
						uint32_t PCSEL8           : 1;
						uint32_t PCSEL9           : 1;
						uint32_t PCSEL10          : 1;
						uint32_t PCSEL11          : 1;
						uint32_t PCSEL12          : 1;
						uint32_t PCSEL13          : 1;
						uint32_t PCSEL14          : 1;
						uint32_t PCSEL15          : 1;
						uint32_t PCSEL16          : 1;
						uint32_t PCSEL17          : 1;
						uint32_t PCSEL18          : 1;
						uint32_t PCSEL19          : 1;
						uint32_t                  : 12;
					};
					#endif
					#ifdef ADC_PCSEL_1
					struct
					{
						uint32_t PCSEL            : 20; /// Channel x (VINP[i]) pre selection
						uint32_t                  : 12;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_LTR1
			struct LTR1_t: public Reg32_t /// ADC analog watchdog 1 threshold register
			{
				using Reg32_t::operator=;
				uint32_t LTR1             : 26; /// ADC analog watchdog 1 threshold low
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_LHTR1
			struct LHTR1_t: public Reg32_t /// ADC analog watchdog 2 threshold register
			{
				using Reg32_t::operator=;
				uint32_t LHTR1            : 26; /// ADC analog watchdog 2 threshold low
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_SQR1
			struct SQR1_t: public Reg32_t /// ADC group regular sequencer ranks register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_SQR1_0
					struct
					{
						uint32_t ADC_SQR1_0_L3    : 4;
						uint32_t                  : 2;
						uint32_t SQ1              : 5; /// ADC group regular sequencer rank 1
						uint32_t                  : 1;
						uint32_t SQ2              : 5; /// ADC group regular sequencer rank 2
						uint32_t                  : 1;
						uint32_t SQ3              : 5; /// ADC group regular sequencer rank 3
						uint32_t                  : 1;
						uint32_t SQ4              : 5; /// ADC group regular sequencer rank 4
						uint32_t                  : 3;
					};
					#endif
					#ifdef ADC_SQR1_1
					struct
					{
						uint32_t ADC_SQR1_1_L     : 4; /// Regular channel sequence length
						uint32_t                  : 1;
						uint32_t ADC_SQR1_1_SQ14  : 5; /// 14th conversion in regular sequence
						uint32_t ADC_SQR1_1_SQ15  : 5; /// 15th conversion in regular sequence
						uint32_t ADC_SQR1_1_SQ16  : 5; /// 16th conversion in regular sequence
						uint32_t                  : 12;
					};
					#endif
					#ifdef ADC_SQR1_2
					struct
					{
						uint32_t ADC_SQR1_2_SQ13  : 5; /// 13th conversion in regular sequence
						uint32_t ADC_SQR1_2_SQ26  : 5; /// 26th conversion in regular sequence
						uint32_t ADC_SQR1_2_SQ27  : 5; /// 27th conversion in regular sequence
						uint32_t ADC_SQR1_2_SQ28  : 5; /// 28th conversion in regular sequence
						uint32_t L                : 4; /// Regular channel sequence length
						uint32_t                  : 8;
					};
					#endif
					#ifdef ADC_SQR1_3
					struct
					{
						uint32_t SQ25             : 5; /// 25th conversion in regular sequence
						uint32_t                  : 27;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_SQR2
			struct SQR2_t: public Reg32_t /// ADC group regular sequencer ranks register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_SQR2_0
					struct
					{
						uint32_t SQ5              : 5; /// ADC group regular sequencer rank 5
						uint32_t                  : 1;
						uint32_t SQ6              : 5; /// ADC group regular sequencer rank 6
						uint32_t                  : 1;
						uint32_t SQ7              : 5; /// ADC group regular sequencer rank 7
						uint32_t                  : 1;
						uint32_t SQ8              : 5; /// ADC group regular sequencer rank 8
						uint32_t                  : 1;
						uint32_t SQ9              : 5; /// ADC group regular sequencer rank 9
						uint32_t                  : 3;
					};
					#endif
					#ifdef ADC_SQR2_1
					struct
					{
						uint32_t SQ7              : 5; /// 7th conversion in regular sequence
						uint32_t SQ8              : 5; /// 8th conversion in regular sequence
						uint32_t SQ9              : 5; /// 9th conversion in regular sequence
						uint32_t SQ10             : 5; /// 10th conversion in regular sequence
						uint32_t SQ11             : 5; /// 11th conversion in regular sequence
						uint32_t SQ12             : 5; /// 12th conversion in regular sequence
						uint32_t                  : 2;
					};
					#endif
					#ifdef ADC_SQR2_2
					struct
					{
						uint32_t SQ19             : 5; /// 19th conversion in regular sequence
						uint32_t SQ20             : 5; /// 20th conversion in regular sequence
						uint32_t SQ21             : 5; /// 21st conversion in regular sequence
						uint32_t SQ22             : 5; /// 22nd conversion in regular sequence
						uint32_t SQ23             : 5; /// 23rd conversion in regular sequence
						uint32_t SQ24             : 5; /// 24th conversion in regular sequence
						uint32_t                  : 2;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_SQR3
			struct SQR3_t: public Reg32_t /// ADC group regular sequencer ranks register 3
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_SQR3_0
					struct
					{
						uint32_t SQ10             : 5; /// ADC group regular sequencer rank 10
						uint32_t                  : 1;
						uint32_t SQ11             : 5; /// ADC group regular sequencer rank 11
						uint32_t                  : 1;
						uint32_t SQ12             : 5; /// ADC group regular sequencer rank 12
						uint32_t                  : 1;
						uint32_t SQ13             : 5; /// ADC group regular sequencer rank 13
						uint32_t                  : 1;
						uint32_t SQ14             : 5; /// ADC group regular sequencer rank 14
						uint32_t                  : 3;
					};
					#endif
					#ifdef ADC_SQR3_1
					struct
					{
						uint32_t SQ1              : 5; /// 1st conversion in regular sequence
						uint32_t SQ2              : 5; /// 2nd conversion in regular sequence
						uint32_t SQ3              : 5; /// 3rd conversion in regular sequence
						uint32_t SQ4              : 5; /// 4th conversion in regular sequence
						uint32_t SQ5              : 5; /// 5th conversion in regular sequence
						uint32_t SQ6              : 5; /// 6th conversion in regular sequence
						uint32_t                  : 2;
					};
					#endif
					#ifdef ADC_SQR3_2
					struct
					{
						uint32_t SQ13             : 5; /// 13th conversion in regular sequence
						uint32_t SQ14             : 5; /// 14th conversion in regular sequence
						uint32_t SQ15             : 5; /// 15th conversion in regular sequence
						uint32_t SQ16             : 5; /// 16th conversion in regular sequence
						uint32_t SQ17             : 5; /// 17th conversion in regular sequence
						uint32_t SQ18             : 5; /// 18th conversion in regular sequence
						uint32_t                  : 2;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_SQR4
			struct SQR4_t: public Reg32_t /// ADC group regular sequencer ranks register 4
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t ADC_SQR4_0_SQ15  : 5; /// ADC group regular sequencer rank 15
						uint32_t                  : 1;
						uint32_t ADC_SQR4_0_SQ16  : 5; /// ADC group regular sequencer rank 16
						uint32_t                  : 4;
						uint32_t ADC_SQR4_0_SQ10  : 5; /// 10th conversion in regular sequence
						uint32_t ADC_SQR4_0_SQ11  : 5; /// 11th conversion in regular sequence
						uint32_t ADC_SQR4_0_SQ12  : 5; /// 12th conversion in regular sequence
						uint32_t                  : 2;
					};
					#ifdef ADC_SQR4_1
					struct
					{
						uint32_t SQ7              : 5; /// 7th conversion in regular sequence
						uint32_t SQ8              : 5; /// 8th conversion in regular sequence
						uint32_t SQ9              : 5; /// 9th conversion in regular sequence
						uint32_t                  : 17;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_DR
			struct DR_t: public Reg32_t /// ADC group regular conversion data register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_DR_0
					struct
					{
						uint32_t RDATA            : 32; /// ADC group regular conversion data
					};
					#endif
					#ifdef ADC_DR_1
					struct
					{
						uint32_t RDATA            : 16; /// ADC group regular conversion data
						uint32_t                  : 16;
					};
					#endif
					#ifdef ADC_DR_2
					struct
					{
						uint32_t DATA             : 16; /// Regular data
						uint32_t                  : 16;
					};
					#endif
					#ifdef ADC_DR_3
					struct
					{
						uint32_t regularDATA      : 16; /// ADC group regular conversion data
						uint32_t                  : 16;
					};
					#endif
					#ifdef ADC_DR_4
					struct
					{
						uint32_t RDATA_0_6        : 6; /// Regular Data converted 0_6
						uint32_t                  : 1;
						uint32_t RDATA_7_15       : 9; /// 15
						uint32_t                  : 16;
					};
					#endif
					#ifdef ADC_DR_5
					struct
					{
						uint32_t RegularDATA      : 16; /// Regular data
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_JSQR
			struct JSQR_t: public Reg32_t /// ADC group injected sequencer register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_JSQR_0
					struct
					{
						uint32_t JL               : 2; /// ADC group injected sequencer scan length
						uint32_t ADC_JSQR_0_JEXTSEL : 5; /// ADC group injected external trigger source
						uint32_t ADC_JSQR_0_JEXTEN : 2; /// ADC group injected external trigger polarity
						uint32_t ADC_JSQR_0_JSQ1  : 5; /// ADC group injected sequencer rank 1
						uint32_t                  : 1;
						uint32_t ADC_JSQR_0_JSQ2  : 5; /// ADC group injected sequencer rank 2
						uint32_t                  : 1;
						uint32_t ADC_JSQR_0_JSQ3  : 5; /// ADC group injected sequencer rank 3
						uint32_t                  : 1;
						uint32_t ADC_JSQR_0_JSQ4  : 5; /// ADC group injected sequencer rank 4
					};
					#endif
					#ifdef ADC_JSQR_1
					struct
					{
						uint32_t                  : 2;
						uint32_t JEXTSEL          : 4; /// ADC group injected external trigger source
						uint32_t JEXTEN           : 2; /// ADC group injected external trigger polarity
						uint32_t JSQ1             : 5; /// ADC group injected sequencer rank 1
						uint32_t                  : 1;
						uint32_t JSQ2             : 5; /// ADC group injected sequencer rank 2
						uint32_t                  : 1;
						uint32_t JSQ3             : 5; /// ADC group injected sequencer rank 3
						uint32_t                  : 1;
						uint32_t JSQ4             : 5; /// ADC group injected sequencer rank 4
						uint32_t                  : 1;
					};
					#endif
					#ifdef ADC_JSQR_2
					struct
					{
						uint32_t JSQ1             : 5; /// 1st conversion in injected sequence
						uint32_t JSQ2             : 5; /// 2nd conversion in injected sequence
						uint32_t JSQ3             : 5; /// 3rd conversion in injected sequence
						uint32_t JSQ4             : 5; /// 4th conversion in injected sequence
						uint32_t JL               : 2; /// Injected sequence length
						uint32_t                  : 10;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_OFRx
			struct OFRx_t: public Reg32_t /// ADC offset number 1 register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t ADC_OFRx_0_OFFSET1 : 26; /// ADC offset number 1 offset level
						uint32_t OFFSET1_CH       : 5; /// ADC offset number 1 channel selection
						uint32_t ADC_OFRx_0_SSATE : 1; /// ADC offset number 1 enable
					};
					#ifdef ADC_OFRx_1
					struct
					{
						uint32_t OFFSET1          : 12;
						uint32_t                  : 12;
						uint32_t OFFSETPOS        : 1;
						uint32_t SATEN            : 1;
						uint32_t                  : 5;
						uint32_t OFFSET1_EN       : 1;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_JDR1
			struct JDR1_t: public Reg32_t /// ADC group injected sequencer rank 1 register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_JDR1_0
					struct
					{
						uint32_t JDATA1           : 32; /// ADC group injected sequencer rank 1 conversion data
					};
					#endif
					#ifdef ADC_JDR1_1
					struct
					{
						uint32_t JDATA1           : 16; /// ADC group injected sequencer rank 1 conversion data
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_JDR2
			struct JDR2_t: public Reg32_t /// ADC group injected sequencer rank 2 register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_JDR2_0
					struct
					{
						uint32_t JDATA2           : 32; /// ADC group injected sequencer rank 2 conversion data
					};
					#endif
					#ifdef ADC_JDR2_1
					struct
					{
						uint32_t JDATA2           : 16; /// ADC group injected sequencer rank 2 conversion data
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_JDR3
			struct JDR3_t: public Reg32_t /// ADC group injected sequencer rank 3 register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_JDR3_0
					struct
					{
						uint32_t JDATA3           : 32; /// ADC group injected sequencer rank 3 conversion data
					};
					#endif
					#ifdef ADC_JDR3_1
					struct
					{
						uint32_t JDATA3           : 16; /// ADC group injected sequencer rank 3 conversion data
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_JDR4
			struct JDR4_t: public Reg32_t /// ADC group injected sequencer rank 4 register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_JDR4_0
					struct
					{
						uint32_t JDATA4           : 32; /// ADC group injected sequencer rank 4 conversion data
					};
					#endif
					#ifdef ADC_JDR4_1
					struct
					{
						uint32_t JDATA4           : 16; /// ADC group injected sequencer rank 4 conversion data
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_AWD2CR
			struct AWD2CR_t: public Reg32_t /// ADC analog watchdog 2 configuration register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_AWD2CR_0
					struct
					{
						uint32_t AWD2CH           : 20; /// ADC analog watchdog 2 monitored channel selection
						uint32_t                  : 12;
					};
					#endif
					#ifdef ADC_AWD2CR_1
					struct
					{
						uint32_t AWD2CH           : 18;
						uint32_t                  : 14;
					};
					#endif
					#ifdef ADC_AWD2CR_2
					struct
					{
						uint32_t AWD2CH           : 19; /// ADC analog watchdog 2 monitored channel selection
						uint32_t                  : 13;
					};
					#endif
					#ifdef ADC_AWD2CR_3
					struct
					{
						uint32_t                  : 1;
						uint32_t AWD2CH           : 18;
						uint32_t                  : 13;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_AWD3CR
			struct AWD3CR_t: public Reg32_t /// ADC analog watchdog 3 configuration register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_AWD3CR_0
					struct
					{
						uint32_t                  : 1;
						uint32_t AWD3CH           : 20; /// ADC analog watchdog 3 monitored channel selection
						uint32_t                  : 11;
					};
					#endif
					#ifdef ADC_AWD3CR_1
					struct
					{
						uint32_t AWD3CH           : 20; /// ADC analog watchdog 3 monitored channel selection
						uint32_t                  : 12;
					};
					#endif
					#ifdef ADC_AWD3CR_2
					struct
					{
						uint32_t AWD3CH           : 18;
						uint32_t                  : 14;
					};
					#endif
					#ifdef ADC_AWD3CR_3
					struct
					{
						uint32_t AWD3CH           : 19; /// ADC analog watchdog 3 monitored channel selection
						uint32_t                  : 13;
					};
					#endif
					#ifdef ADC_AWD3CR_4
					struct
					{
						uint32_t                  : 1;
						uint32_t AWD3CH           : 18;
						uint32_t                  : 13;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_LTR2
			struct LTR2_t: public Reg32_t /// ADC watchdog lower threshold register 2
			{
				using Reg32_t::operator=;
				uint32_t LTR2             : 26; /// Analog watchdog 2 lower threshold
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_HTR2
			struct HTR2_t: public Reg32_t /// ADC watchdog higher threshold register 2
			{
				using Reg32_t::operator=;
				uint32_t HTR2             : 26; /// Analog watchdog 2 higher threshold
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_LTR3
			struct LTR3_t: public Reg32_t /// ADC watchdog lower threshold register 3
			{
				using Reg32_t::operator=;
				uint32_t LTR3             : 26; /// Analog watchdog 3 lower threshold
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_HTR3
			struct HTR3_t: public Reg32_t /// ADC watchdog higher threshold register 3
			{
				using Reg32_t::operator=;
				uint32_t HTR3             : 26; /// Analog watchdog 3 higher threshold
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_DIFSEL
			struct DIFSEL_t: public Reg32_t /// ADC channel differential or single-ended mode selection register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_DIFSEL_0
					struct
					{
						uint32_t DIFSEL           : 20; /// ADC channel differential or single-ended mode for channel
						uint32_t                  : 12;
					};
					#endif
					#ifdef ADC_DIFSEL_1
					struct
					{
						uint32_t ADC_DIFSEL_1_DIFSEL_0 : 1; /// Differential mode for channels 0
						uint32_t ADC_DIFSEL_1_DIFSEL_1_15 : 15; /// Differential mode for channels 15 to 1
						uint32_t ADC_DIFSEL_1_DIFSEL_16_18 : 3; /// Differential mode for channels 18 to 16
						uint32_t                  : 13;
					};
					#endif
					#ifdef ADC_DIFSEL_2
					struct
					{
						uint32_t                  : 1;
						uint32_t DIFSEL_1_18      : 18; /// Differential mode for channels 15 to 1
						uint32_t                  : 13;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_CALFACT
			struct CALFACT_t: public Reg32_t /// ADC calibration factors register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_CALFACT_0
					struct
					{
						uint32_t CALFACT_S        : 11; /// ADC calibration factor in single-ended mode
						uint32_t                  : 5;
						uint32_t CALFACT_D        : 11; /// ADC calibration factor in differential mode
						uint32_t                  : 5;
					};
					#endif
					#ifdef ADC_CALFACT_1
					struct
					{
						uint32_t CALFACT_S        : 7; /// ADC calibration factor in single-ended mode
						uint32_t                  : 9;
						uint32_t CALFACT_D        : 7; /// ADC calibration factor in differential mode
						uint32_t                  : 9;
					};
					#endif
					#ifdef ADC_CALFACT_2
					struct
					{
						uint32_t CALFACT          : 7; /// ADC calibration factor in single-ended mode
						uint32_t                  : 25;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_CALFACT2
			struct CALFACT2_t: public Reg32_t /// ADC Calibration Factor register 2
			{
				using Reg32_t::operator=;
				uint32_t LINCALFACT       : 30; /// Linearity Calibration Factor
				uint32_t                  : 2;
				
			};
			#endif
			#ifdef ADC_VERR
			struct VERR_t: public Reg32_t /// ADC version register
			{
				using Reg32_t::operator=;
				uint32_t MINREV           : 4; /// Minor Revision number
				uint32_t MAJREV           : 4; /// Major Revision number
				uint32_t                  : 24;
				
			};
			#endif
			#ifdef ADC_IPIDR
			struct IPIDR_t: public Reg32_t /// ADC identification register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_IPIDR_0
					struct
					{
						uint32_t ID               : 32;
					};
					#endif
					#ifdef ADC_IPIDR_1
					struct
					{
						uint32_t IPID             : 32; /// IP Identification
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_SIDR
			struct SIDR_t: public Reg32_t /// ADC size identification register
			{
				using Reg32_t::operator=;
				uint32_t SID              : 32; /// Size Identification
				
			};
			#endif
			#ifdef ADC_CCR
			struct CCR_t: public Reg32_t /// ADC common control register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_CCR_0
					struct
					{
						uint32_t                  : 16;
						uint32_t ADC_CCR_0_CKMODE : 2; /// ADC clock mode
						uint32_t ADC_CCR_0_PRESC  : 4; /// ADC prescaler
						uint32_t VREFEN           : 1; /// VREFINT enable
						uint32_t ADC_CCR_0_TSEN   : 1; /// Temperature sensor enable
						uint32_t ADC_CCR_0_VBATEN : 1; /// VBAT enable
						uint32_t ADC_CCR_0_LFMEN  : 1; /// Low Frequency Mode enable
						uint32_t                  : 6;
					};
					#endif
					#ifdef ADC_CCR_1
					struct
					{
						uint32_t                  : 16;
						uint32_t ADC_CCR_1_ADCPRE : 2; /// ADC prescaler
						uint32_t                  : 4;
						uint32_t ADC_CCR_1_VBATE  : 1; /// VBAT enable
						uint32_t ADC_CCR_1_TSVREFE : 1; /// Temperature sensor and VREFINT enable
						uint32_t ADC_CCR_1_CH18SEL : 1;
						uint32_t                  : 7;
					};
					#endif
					#ifdef ADC_CCR_2
					struct
					{
						uint32_t                  : 23;
						uint32_t ADC_CCR_2_CH17SEL : 1;
						uint32_t ADC_CCR_2_VLCDEN : 1; /// VLCD enable
						uint32_t                  : 7;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_TR1
			struct TR1_t: public Reg32_t /// watchdog threshold register 1
			{
				using Reg32_t::operator=;
				uint32_t LT1              : 12; /// ADC analog watchdog 1 threshold low
				uint32_t ADC_TR1_AWDFILT  : 3;
				uint32_t                  : 1;
				uint32_t HT1              : 12; /// ADC analog watchdog 1 threshold high
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef ADC_TR2
			struct TR2_t: public Reg32_t /// watchdog threshold register
			{
				using Reg32_t::operator=;
				uint32_t LT2              : 8; /// ADC analog watchdog 2 threshold low
				uint32_t                  : 8;
				uint32_t HT2              : 8; /// ADC analog watchdog 2 threshold high
				uint32_t                  : 8;
				
			};
			#endif
			#ifdef ADC_TR3
			struct TR3_t: public Reg32_t /// watchdog threshold register 3
			{
				using Reg32_t::operator=;
				uint32_t LT3              : 8; /// ADC analog watchdog 3 threshold low
				uint32_t                  : 8;
				uint32_t HT3              : 8; /// ADC analog watchdog 3 threshold high
				uint32_t                  : 8;
				
			};
			#endif
			#ifdef ADC_OFR1
			struct OFR1_t: public Reg32_t /// offset register 1
			{
				using Reg32_t::operator=;
				uint32_t OFFSET1          : 12; /// ADC offset number 1 offset level
				uint32_t                  : 14;
				uint32_t OFFSET1_CH       : 5; /// ADC offset number 1 channel selection
				uint32_t OFFSET1_EN       : 1; /// ADC offset number 1 enable
				
			};
			#endif
			#ifdef ADC_OFR2
			struct OFR2_t: public Reg32_t /// offset register 2
			{
				using Reg32_t::operator=;
				uint32_t OFFSET2          : 12; /// ADC offset number 2 offset level
				uint32_t                  : 14;
				uint32_t OFFSET2_CH       : 5; /// ADC offset number 2 channel selection
				uint32_t OFFSET2_EN       : 1; /// ADC offset number 2 enable
				
			};
			#endif
			#ifdef ADC_OFR3
			struct OFR3_t: public Reg32_t /// offset register 3
			{
				using Reg32_t::operator=;
				uint32_t OFFSET3          : 12; /// ADC offset number 3 offset level
				uint32_t                  : 14;
				uint32_t OFFSET3_CH       : 5; /// ADC offset number 3 channel selection
				uint32_t OFFSET3_EN       : 1; /// ADC offset number 3 enable
				
			};
			#endif
			#ifdef ADC_OFR4
			struct OFR4_t: public Reg32_t /// offset register 4
			{
				using Reg32_t::operator=;
				uint32_t OFFSET4          : 12; /// ADC offset number 4 offset level
				uint32_t                  : 14;
				uint32_t OFFSET4_CH       : 5; /// ADC offset number 4 channel selection
				uint32_t OFFSET4_EN       : 1; /// ADC offset number 4 enable
				
			};
			#endif
			#ifdef ADC_SR
			struct SR_t: public Reg32_t /// status register
			{
				using Reg32_t::operator=;
				uint32_t AWD              : 1; /// Analog watchdog flag
				uint32_t EOC              : 1; /// Regular channel end of conversion
				uint32_t JEOC             : 1; /// Injected channel end of conversion
				uint32_t JSTRT            : 1; /// Injected channel start flag
				uint32_t STRT             : 1; /// Regular channel start flag
				uint32_t ADC_SR_OVR       : 1; /// Overrun
				uint32_t ADC_SR_ADONS     : 1; /// ADC ON status
				uint32_t                  : 1;
				uint32_t ADC_SR_RCNR      : 1; /// Regular channel not ready
				uint32_t ADC_SR_JCNR      : 1; /// Injected channel not ready
				uint32_t                  : 22;
				
			};
			#endif
			#ifdef ADC_CR1
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				uint32_t AWDCH            : 5; /// Analog watchdog channel select bits
				uint32_t EOCIE            : 1; /// Interrupt enable for EOC
				uint32_t AWDIE            : 1; /// Analog watchdog interrupt enable
				uint32_t JEOCIE           : 1; /// Interrupt enable for injected channels
				uint32_t SCAN             : 1; /// Scan mode
				uint32_t AWDSGL           : 1; /// Enable the watchdog on a single channel in scan mode
				uint32_t JAUTO            : 1; /// Automatic injected group conversion
				uint32_t DISCEN           : 1; /// Discontinuous mode on regular channels
				uint32_t JDISCEN          : 1; /// Discontinuous mode on injected channels
				uint32_t DISCNUM          : 3; /// Discontinuous mode channel count
				uint32_t ADC_CR1_PDD      : 1; /// Power down during the delay phase
				uint32_t ADC_CR1_PDI      : 1; /// Power down during the idle phase
				uint32_t                  : 4;
				uint32_t JAWDEN           : 1; /// Analog watchdog enable on injected channels
				uint32_t AWDEN            : 1; /// Analog watchdog enable on regular channels
				uint32_t ADC_CR1_RES      : 2; /// Resolution
				uint32_t ADC_CR1_OVRIE    : 1; /// Overrun interrupt enable
				uint32_t                  : 5;
				
			};
			#endif
			#ifdef ADC_CR2
			struct CR2_t: public Reg32_t /// control register 2
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t ADON             : 1; /// A/D Converter ON / OFF
						uint32_t CONT             : 1; /// Continuous conversion
						uint32_t ADC_CR2_0_CAL    : 1; /// A/D calibration
						uint32_t ADC_CR2_0_RSTCAL : 1; /// Reset calibration
						uint32_t ADC_CR2_0_DELS   : 3; /// Delay selection
						uint32_t                  : 1;
						uint32_t DMA              : 1; /// Direct memory access mode (for single ADC mode)
						uint32_t ADC_CR2_0_DDS    : 1; /// DMA disable selection (for single ADC mode)
						uint32_t ADC_CR2_0_EOCS   : 1; /// End of conversion selection
						uint32_t ALIGN            : 1; /// Data alignment
						uint32_t                  : 3;
						uint32_t ADC_CR2_0_JEXTTRIG : 1; /// External trigger conversion mode for injected channels
						uint32_t ADC_CR2_0_JEXTSEL : 4; /// External event select for injected group
						uint32_t ADC_CR2_0_JEXTEN : 2; /// External trigger enable for injected channels
						uint32_t ADC_CR2_0_JSWSTART : 1; /// Start conversion of injected channels
						uint32_t ADC_CR2_0_TSVREFE : 1; /// Temperature sensor and VREFINT enable
						uint32_t ADC_CR2_0_EXTSEL : 4; /// External event select for regular group
						uint32_t ADC_CR2_0_EXTEN  : 2; /// External trigger enable for regular channels
						uint32_t ADC_CR2_0_SWSTART : 1; /// Start conversion of regular channels
						uint32_t                  : 1;
					};
					#ifdef ADC_CR2_1
					struct
					{
						uint32_t                  : 2;
						uint32_t ADC_CR2_1_CFG    : 1; /// ADC configuration
						uint32_t                  : 9;
						uint32_t ADC_CR2_1_JEXTSEL : 3; /// External event select for injected group
						uint32_t                  : 2;
						uint32_t ADC_CR2_1_EXTSEL : 3; /// External event select for regular group
						uint32_t ADC_CR2_1_EXTTRIG : 1; /// External trigger conversion mode for regular channels
						uint32_t ADC_CR2_1_JSWSTART : 1; /// Start conversion of injected channels
						uint32_t ADC_CR2_1_SWSTART : 1; /// Start conversion of regular channels
						uint32_t                  : 9;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_SMPRx
			struct SMPRx_t: public Reg32_t /// sample time register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_SMPRx_0
					struct
					{
						uint32_t SMPx_x           : 32; /// Sample time bits
					};
					#endif
					#ifdef ADC_SMPRx_1
					struct
					{
						uint32_t SampletimebitsSMPx_x : 32; /// Reserved
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_JOFR1
			struct JOFR1_t: public Reg32_t /// injected channel data offset register x
			{
				using Reg32_t::operator=;
				uint32_t JOFFSET1         : 12; /// Data offset for injected channel x
				uint32_t                  : 20;
				
			};
			#endif
			#ifdef ADC_JOFR2
			struct JOFR2_t: public Reg32_t /// injected channel data offset register x
			{
				using Reg32_t::operator=;
				uint32_t JOFFSET2         : 12; /// Data offset for injected channel x
				uint32_t                  : 20;
				
			};
			#endif
			#ifdef ADC_JOFR3
			struct JOFR3_t: public Reg32_t /// injected channel data offset register x
			{
				using Reg32_t::operator=;
				uint32_t JOFFSET3         : 12; /// Data offset for injected channel x
				uint32_t                  : 20;
				
			};
			#endif
			#ifdef ADC_JOFR4
			struct JOFR4_t: public Reg32_t /// injected channel data offset register x
			{
				using Reg32_t::operator=;
				uint32_t JOFFSET4         : 12; /// Data offset for injected channel x
				uint32_t                  : 20;
				
			};
			#endif
			#ifdef ADC_HTR
			struct HTR_t: public Reg32_t /// watchdog higher threshold register
			{
				using Reg32_t::operator=;
				uint32_t HT               : 12; /// Analog watchdog higher threshold
				uint32_t                  : 20;
				
			};
			#endif
			#ifdef ADC_LTR
			struct LTR_t: public Reg32_t /// watchdog lower threshold register
			{
				using Reg32_t::operator=;
				uint32_t LT               : 12; /// Analog watchdog lower threshold
				uint32_t                  : 20;
				
			};
			#endif
			#ifdef ADC_JDRx
			struct JDRx_t: public Reg32_t /// injected data register x
			{
				using Reg32_t::operator=;
				uint32_t JDATA            : 16; /// Injected data
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef ADC_GCOMP
			struct GCOMP_t: public Reg32_t /// Gain compensation Register
			{
				using Reg32_t::operator=;
				uint32_t GCOMPCOEFF       : 14;
				uint32_t                  : 18;
				
			};
			#endif
			#ifdef ADC_CSR
			struct CSR_t: public Reg32_t /// Common status register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t ADC_CSR_0_AWD1   : 1; /// Analog watchdog flag of ADC1
						uint32_t ADC_CSR_0_EOC1   : 1; /// End of conversion of ADC1
						uint32_t ADC_CSR_0_JEOC1  : 1; /// Injected channel end of conversion of ADC1
						uint32_t ADC_CSR_0_JSTRT1 : 1; /// Injected channel Start flag of ADC1
						uint32_t ADC_CSR_0_STRT1  : 1; /// Regular channel Start flag of ADC1
						uint32_t ADC_CSR_0_OVR1   : 1; /// Overrun flag of ADC1
						uint32_t ADC_CSR_0_JEOS_MST : 1;
						uint32_t ADC_CSR_0_AWD1_MST : 1;
						uint32_t ADC_CSR_0_AWD2_MST : 1;
						uint32_t ADC_CSR_0_AWD3_MST : 1;
						uint32_t ADC_CSR_0_JQOVF_MST : 1;
						uint32_t                  : 21;
					};
					#ifdef ADC_CSR_1
					struct
					{
						uint32_t ADDRDY_MST       : 1;
						uint32_t EOSMP_MST        : 1;
						uint32_t EOC_MST          : 1;
						uint32_t EOS_MST          : 1;
						uint32_t OVR_MST          : 1;
						uint32_t JEOC_MST         : 1;
						uint32_t                  : 26;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_CFGR1
			struct CFGR1_t: public Reg32_t /// configuration register 1
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t DMAEN            : 1; /// Direct memory access enable
						uint32_t DMACFG           : 1; /// Direct memery access configuration
						uint32_t SCANDIR          : 1; /// Scan sequence direction
						uint32_t RES              : 2; /// Data resolution
						uint32_t ALIGN            : 1; /// Data alignment
						uint32_t EXTSEL           : 3; /// External trigger selection
						uint32_t                  : 1;
						uint32_t EXTEN            : 2; /// External trigger enable and polarity selection
						uint32_t OVRMOD           : 1; /// Overrun management mode
						uint32_t CONT             : 1; /// Single / continuous conversion mode
						uint32_t ADC_CFGR1_0_AUTDLY : 1; /// Auto-delayed conversion mode
						uint32_t AUTOFF           : 1; /// Auto-off mode
						uint32_t DISCEN           : 1; /// Discontinuous mode
						uint32_t                  : 4;
						uint32_t ADC_CFGR1_0_CHSELRMOD : 1; /// Mode selection of the ADC_CHSELR register
						uint32_t ADC_CFGR1_0_AWDSGL : 1; /// Enable the watchdog on a single channel or on all channels
						uint32_t ADC_CFGR1_0_AWDEN : 1; /// Analog watchdog enable
						uint32_t                  : 2;
						uint32_t ADC_CFGR1_0_AWDCH : 5; /// Analog watchdog channel selection
						uint32_t                  : 1;
					};
					#ifdef ADC_CFGR1_1
					struct
					{
						uint32_t                  : 14;
						uint32_t WAIT             : 1; /// Wait conversion mode
						uint32_t                  : 7;
						uint32_t AWD1SGL          : 1; /// ADC analog watchdog 1 monitoring a single channel or all channels
						uint32_t AWD1EN           : 1; /// ADC analog watchdog 1 enable on scope ADC group regular
						uint32_t                  : 2;
						uint32_t AWDCH1CH         : 5; /// ADC analog watchdog 1 monitored channel selection
						uint32_t                  : 1;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_SMPR
			struct SMPR_t: public Reg32_t /// sampling time register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t ADC_SMPR_0_SMPR  : 3; /// Sampling time selection
						uint32_t                  : 1;
						uint32_t ADC_SMPR_0_SMP2  : 3; /// Sampling time selection
						uint32_t                  : 1;
						uint32_t ADC_SMPR_0_SMPSEL : 19; /// Channel sampling time selection
						uint32_t                  : 5;
					};
					#ifdef ADC_SMPR_1
					struct
					{
						uint32_t SMP1             : 3; /// Sampling time selection
						uint32_t                  : 29;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_TR
			struct TR_t: public Reg32_t /// watchdog threshold register
			{
				using Reg32_t::operator=;
				uint32_t LT               : 12; /// Analog watchdog lower threshold
				uint32_t                  : 4;
				uint32_t HT               : 12; /// Analog watchdog higher threshold
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef ADC_CHSELR
			struct CHSELR_t: public Reg32_t /// channel selection register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_CHSELR_0
					struct
					{
						uint32_t CHSEL0           : 1; /// Channel-x selection
						uint32_t CHSEL1           : 1; /// Channel-x selection
						uint32_t CHSEL2           : 1; /// Channel-x selection
						uint32_t CHSEL3           : 1; /// Channel-x selection
						uint32_t CHSEL4           : 1; /// Channel-x selection
						uint32_t CHSEL5           : 1; /// Channel-x selection
						uint32_t CHSEL6           : 1; /// Channel-x selection
						uint32_t CHSEL7           : 1; /// Channel-x selection
						uint32_t CHSEL8           : 1; /// Channel-x selection
						uint32_t CHSEL9           : 1; /// Channel-x selection
						uint32_t CHSEL10          : 1; /// Channel-x selection
						uint32_t CHSEL11          : 1; /// Channel-x selection
						uint32_t CHSEL12          : 1; /// Channel-x selection
						uint32_t CHSEL13          : 1; /// Channel-x selection
						uint32_t CHSEL14          : 1; /// Channel-x selection
						uint32_t CHSEL15          : 1; /// Channel-x selection
						uint32_t CHSEL16          : 1; /// Channel-x selection
						uint32_t CHSEL17          : 1; /// Channel-x selection
						uint32_t CHSEL18          : 1; /// Channel-x selection
						uint32_t                  : 13;
					};
					#endif
					#ifdef ADC_CHSELR_1
					struct
					{
						uint32_t CHSEL            : 19; /// Channel-x selection
						uint32_t                  : 13;
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_AWD1TR
			struct AWD1TR_t: public Reg32_t /// watchdog threshold register
			{
				using Reg32_t::operator=;
				uint32_t LT1              : 12; /// ADC analog watchdog 1 threshold low
				uint32_t                  : 4;
				uint32_t HT1              : 12; /// ADC analog watchdog 1 threshold high
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef ADC_AWD2TR
			struct AWD2TR_t: public Reg32_t /// watchdog threshold register
			{
				using Reg32_t::operator=;
				uint32_t LT2              : 12; /// ADC analog watchdog 2 threshold low
				uint32_t                  : 4;
				uint32_t HT2              : 12; /// ADC analog watchdog 2 threshold high
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef ADC_CHSELR_1
			struct CHSELR_1_t: public Reg32_t /// channel selection register CHSELRMOD = 1 in ADC_CFGR1
			{
				using Reg32_t::operator=;
				uint32_t SQ1              : 4; /// conversion of the sequence
				uint32_t SQ2              : 4; /// conversion of the sequence
				uint32_t SQ3              : 4; /// conversion of the sequence
				uint32_t SQ4              : 4; /// conversion of the sequence
				uint32_t SQ5              : 4; /// conversion of the sequence
				uint32_t SQ6              : 4; /// conversion of the sequence
				uint32_t SQ7              : 4; /// conversion of the sequence
				uint32_t SQ8              : 4; /// conversion of the sequence
				
			};
			#endif
			#ifdef ADC_AWD3TR
			struct AWD3TR_t: public Reg32_t /// watchdog threshold register
			{
				using Reg32_t::operator=;
				uint32_t LT3              : 12; /// ADC analog watchdog 3 threshold high
				uint32_t                  : 4;
				uint32_t HT3              : 12; /// ADC analog watchdog 3 threshold high
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef ADC_HWCFGR6
			struct HWCFGR6_t: public Reg32_t /// Hardware Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t CHMAP20          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP21          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP22          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP23          : 5; /// Input channel mapping
				uint32_t                  : 3;
				
			};
			#endif
			#ifdef ADC_HWCFGR5
			struct HWCFGR5_t: public Reg32_t /// Hardware Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t CHMAP19          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP18          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP17          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP16          : 5; /// Input channel mapping
				uint32_t                  : 3;
				
			};
			#endif
			#ifdef ADC_HWCFGR4
			struct HWCFGR4_t: public Reg32_t /// Hardware Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t CHMAP15          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP14          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP13          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP12          : 5; /// Input channel mapping
				uint32_t                  : 3;
				
			};
			#endif
			#ifdef ADC_HWCFGR3
			struct HWCFGR3_t: public Reg32_t /// Hardware Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t CHMAP11          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP10          : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP9           : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP8           : 5; /// Input channel mapping
				uint32_t                  : 3;
				
			};
			#endif
			#ifdef ADC_HWCFGR2
			struct HWCFGR2_t: public Reg32_t /// Hardware Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t CHMAP7           : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP6           : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP5           : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP4           : 5; /// Input channel mapping
				uint32_t                  : 3;
				
			};
			#endif
			#ifdef ADC_HWCFGR1
			struct HWCFGR1_t: public Reg32_t /// Hardware Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t CHMAP3           : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP2           : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP1           : 5; /// Input channel mapping
				uint32_t                  : 3;
				uint32_t CHMAP0           : 5; /// Input channel mapping
				uint32_t                  : 3;
				
			};
			#endif
			#ifdef ADC_HWCFGR0
			struct HWCFGR0_t: public Reg32_t /// Hardware Configuration Register
			{
				using Reg32_t::operator=;
				uint32_t NUM_CHAN_24      : 4;
				uint32_t EXTRA_AWDS       : 4; /// Extra analog watchdog
				uint32_t OVS              : 4; /// Oversampling
				uint32_t                  : 20;
				
			};
			#endif
			#ifdef ADC_SQR5
			struct SQR5_t: public Reg32_t /// regular sequence register 5
			{
				using Reg32_t::operator=;
				uint32_t SQ1              : 5; /// 1st conversion in regular sequence
				uint32_t SQ2              : 5; /// 2nd conversion in regular sequence
				uint32_t SQ3              : 5; /// 3rd conversion in regular sequence
				uint32_t SQ4              : 5; /// 4th conversion in regular sequence
				uint32_t SQ5              : 5; /// 5th conversion in regular sequence
				uint32_t SQ6              : 5; /// 6th conversion in regular sequence
				uint32_t                  : 2;
				
			};
			#endif
			#ifdef ADC_OFFSETR
			struct OFFSETR_t: public Reg32_t /// ADC offset register
			{
				using Reg32_t::operator=;
				uint32_t OFFSET           : 16;
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef ADC_GAINR
			struct GAINR_t: public Reg32_t /// ADC gain register
			{
				using Reg32_t::operator=;
				uint32_t GAIN             : 16;
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef ADC_DMACR
			struct DMACR_t: public Reg32_t /// ADC DMA control register
			{
				using Reg32_t::operator=;
				uint32_t LOAD             : 1; /// Loads the DMA buffer
				uint32_t AUTOWRAP         : 1; /// Selects DMA mode
				uint32_t                  : 2;
				uint32_t RST              : 1; /// Write 1 to reset the ADC DMA
				uint32_t                  : 27;
				
			};
			#endif
			#ifdef ADC_DMASR
			struct DMASR_t: public Reg32_t /// ADC DMA status register
			{
				using Reg32_t::operator=;
				uint32_t ACT              : 1;
				uint32_t AOVF             : 1;
				uint32_t                  : 30;
				
			};
			#endif
			#ifdef ADC_DMAMSAR
			struct DMAMSAR_t: public Reg32_t /// ADC DMA memory start address register
			{
				using Reg32_t::operator=;
				uint32_t MSA              : 13;
				uint32_t                  : 19;
				
			};
			#endif
			#ifdef ADC_DMANDTR
			struct DMANDTR_t: public Reg32_t /// ADC DMA number of data to transfer register
			{
				using Reg32_t::operator=;
				uint32_t NDT              : 13;
				uint32_t                  : 19;
				
			};
			#endif
			#ifdef ADC_DMAMNAR
			struct DMAMNAR_t: public Reg32_t /// ADC DMA memory next address register
			{
				using Reg32_t::operator=;
				uint32_t                  : 1;
				uint32_t MNA              : 13;
				uint32_t                  : 18;
				
			};
			#endif
			#ifdef ADC_DMACNDTR
			struct DMACNDTR_t: public Reg32_t /// ADC DMA count number of data transferred register
			{
				using Reg32_t::operator=;
				uint32_t CNDT             : 13;
				uint32_t                  : 19;
				
			};
			#endif
			union
			{
				#ifdef ADC_MAP0
				struct
				{
					ADC_MAP0_ISR; /// ADC interrupt and status register
					ADC_MAP0_IER; /// ADC interrupt enable register
					ADC_MAP0_CR; /// ADC control register
					ADC_MAP0_CFGR; /// ADC configuration register 1
					ADC_MAP0_CFGR2; /// ADC configuration register 2
					ADC_MAP0_SMPR1; /// ADC sampling time register 1
					ADC_MAP0_SMPR2; /// ADC sampling time register 2
					ADC_MAP0_PCSEL; /// ADC channel preselection register
					ADC_MAP0_LTR1; /// ADC analog watchdog 1 threshold register
					ADC_MAP0_LHTR1; /// ADC analog watchdog 2 threshold register
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP0_SQR1; /// ADC group regular sequencer ranks register 1
					ADC_MAP0_SQR2; /// ADC group regular sequencer ranks register 2
					ADC_MAP0_SQR3; /// ADC group regular sequencer ranks register 3
					ADC_MAP0_SQR4; /// ADC group regular sequencer ranks register 4
					ADC_MAP0_DR; /// ADC group regular conversion data register
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP0_JSQR; /// ADC group injected sequencer register
					__SOOL_PERIPH_PADDING_16;
					ADC_MAP0_OFR1; /// ADC offset number 1 register
					ADC_MAP0_OFR2; /// ADC offset number 2 register
					ADC_MAP0_OFR3; /// ADC offset number 3 register
					ADC_MAP0_OFR4; /// ADC offset number 4 register
					__SOOL_PERIPH_PADDING_16;
					ADC_MAP0_JDR1; /// ADC group injected sequencer rank 1 register
					ADC_MAP0_JDR2; /// ADC group injected sequencer rank 2 register
					ADC_MAP0_JDR3; /// ADC group injected sequencer rank 3 register
					ADC_MAP0_JDR4; /// ADC group injected sequencer rank 4 register
					__SOOL_PERIPH_PADDING_16;
					ADC_MAP0_AWD2CR; /// ADC analog watchdog 2 configuration register
					ADC_MAP0_AWD3CR; /// ADC analog watchdog 3 configuration register
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP0_LTR2; /// ADC watchdog lower threshold register 2
					ADC_MAP0_HTR2; /// ADC watchdog higher threshold register 2
					ADC_MAP0_LTR3; /// ADC watchdog lower threshold register 3
					ADC_MAP0_HTR3; /// ADC watchdog higher threshold register 3
					ADC_MAP0_DIFSEL; /// ADC channel differential or single-ended mode selection register
					ADC_MAP0_CALFACT; /// ADC calibration factors register
					ADC_MAP0_CALFACT2; /// ADC Calibration Factor register 2
					__SOOL_PERIPH_PADDING_4;
					ADC_MAP0_OR; /// ADC2 option register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_512;
					ADC_MAP0_CCR; /// ADC common control register
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					ADC_MAP0_VERR; /// ADC version register
					ADC_MAP0_IPIDR; /// ADC identification register
					ADC_MAP0_SIDR; /// ADC size identification register
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_8192;
				};
				#endif
				#ifdef ADC_MAP1
				struct
				{
					ADC_MAP1_SR; /// status register
					ADC_MAP1_CR1; /// control register 1
					ADC_MAP1_CCR; /// ADC common control register
					ADC_MAP1_SMPR1; /// sample time register 1
					ADC_MAP1_SMPR2; /// sample time register 2
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP1_TR1; /// watchdog threshold register 1
					ADC_MAP1_TR2; /// watchdog threshold register
					ADC_MAP1_TR3; /// watchdog threshold register 3
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					ADC_MAP1_OFR1; /// offset register 1
					ADC_MAP1_OFR2; /// offset register 2
					ADC_MAP1_OFR3; /// offset register 3
					ADC_MAP1_OFR4; /// offset register 4
					__SOOL_PERIPH_PADDING_64;
					ADC_MAP1_DIFSEL; /// Differential Mode Selection Register 2
					ADC_MAP1_CALFACT; /// Calibration Factors
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_8192;
				};
				#endif
				#ifdef ADC_MAP2
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP2_CR2; /// control register 2
					ADC_MAP2_SMPR1; /// sample time register 1
					ADC_MAP2_SMPR2; /// sample time register 2
					ADC_MAP2_JOFR1; /// injected channel data offset register x
					ADC_MAP2_JOFR2; /// injected channel data offset register x
					ADC_MAP2_JOFR3; /// injected channel data offset register x
					ADC_MAP2_JOFR4; /// injected channel data offset register x
					ADC_MAP2_HTR; /// watchdog higher threshold register
					ADC_MAP2_LTR; /// watchdog lower threshold register
					ADC_MAP2_SQR1; /// regular sequence register 1
					ADC_MAP2_SQR2; /// regular sequence register 2
					ADC_MAP2_SQR3; /// regular sequence register 3
					ADC_MAP2_JSQR; /// injected sequence register
					ADC_MAP2_JDR1; /// injected data register x
					ADC_MAP2_JDR2; /// injected data register x
					ADC_MAP2_JDR3; /// injected data register x
					ADC_MAP2_JDR4; /// injected data register x
					ADC_MAP2_DR; /// regular data register
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					ADC_MAP2_GCOMP; /// Gain compensation Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_512;
					ADC_MAP2_CSR; /// Common status register
					ADC_MAP2_CCR; /// common control register
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_8192;
				};
				#endif
				#ifdef ADC_MAP3
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					CFGR1_t CFGR1; /// configuration register 1
					__SOOL_PERIPH_PADDING_4;
					SMPR_t SMPR; /// sampling time register
					__SOOL_PERIPH_PADDING_8;
					ADC_MAP3_TR; /// watchdog threshold register
					__SOOL_PERIPH_PADDING_4;
					CHSELR_t CHSELR; /// channel selection register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_8192;
				};
				#endif
				#ifdef ADC_MAP4
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					ADC_MAP4_SMPR3; /// sample time register 3
					ADC_MAP4_JOFR1; /// injected channel data offset register x
					ADC_MAP4_JOFR2; /// injected channel data offset register x
					ADC_MAP4_AWD1TR; /// watchdog threshold register
					ADC_MAP4_AWD2TR; /// watchdog threshold register
					ADC_MAP4_CHSELR_1; /// channel selection register CHSELRMOD = 1 in ADC_CFGR1
					ADC_MAP4_AWD3TR; /// watchdog threshold register
					__SOOL_PERIPH_PADDING_16;
					ADC_MAP4_IER; /// ADC interrupt enable register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					ADC_MAP4_HWCFGR6; /// Hardware Configuration Register
					ADC_MAP4_HWCFGR5; /// Hardware Configuration Register
					ADC_MAP4_HWCFGR4; /// Hardware Configuration Register
					ADC_MAP4_HWCFGR3; /// Hardware Configuration Register
					ADC_MAP4_HWCFGR2; /// Hardware Configuration Register
					ADC_MAP4_HWCFGR1; /// Hardware Configuration Register
					ADC_MAP4_HWCFGR0; /// Hardware Configuration Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_8192;
				};
				#endif
				#ifdef ADC_MAP5
				struct
				{
					__SOOL_PERIPH_PADDING_32;
					ADC_MAP5_JOFR3; /// injected channel data offset register x
					ADC_MAP5_JOFR4; /// injected channel data offset register x
					ADC_MAP5_HTR; /// watchdog higher threshold register
					ADC_MAP5_LTR; /// watchdog lower threshold register
					__SOOL_PERIPH_PADDING_16;
					ADC_MAP5_SQR5; /// regular sequence register 5
					ADC_MAP5_JSQR; /// injected sequence register
					ADC_MAP5_JDR1; /// injected data register x
					ADC_MAP5_JDR2; /// injected data register x
					ADC_MAP5_JDR3; /// injected data register x
					ADC_MAP5_JDR4; /// injected data register x
					ADC_MAP5_DR; /// regular data register
					ADC_MAP5_SMPR0; /// sample time register 0
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_8192;
					ADC_MAP5_CR; /// ADC control register
					ADC_MAP5_OFFSETR; /// ADC offset register
					ADC_MAP5_GAINR; /// ADC gain register
					ADC_MAP5_DMACR; /// ADC DMA control register
					ADC_MAP5_DMASR; /// ADC DMA status register
					ADC_MAP5_DMAMSAR; /// ADC DMA memory start address register
					ADC_MAP5_DMANDTR; /// ADC DMA number of data to transfer register
					ADC_MAP5_DMAMNAR; /// ADC DMA memory next address register
					ADC_MAP5_DMACNDTR; /// ADC DMA count number of data transferred register
				};
				#endif
			};

			#if __SOOL_DEBUG_NOPHY
				ADC(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() const volatile {return myaddr;};
			#else
				inline const uintptr_t get_addr() const volatile {return reinterpret_cast<uintptr_t>(this);};
			private:
				ADC() = delete;
			#endif
			private:
			static constexpr uint32_t get_clock_enable_bit(const uintptr_t addr);
			static constexpr volatile Reg32_t& get_clock_enable_reg(const uintptr_t addr);
			
			public:
			void enable_clock() volatile;
			
			void disable_clock() volatile;
			
			bool is_clock_enabled() const volatile;
			
			#ifdef ADC_SQR1
			void set_acquisition_sequence_length(const unsigned int length) volatile;
			#endif
			
			void set_sequence_value(const unsigned int position, const unsigned int channel) volatile;
			
		};
		#ifdef PERIPH_ADC_Common
		class ADC_Common /// analog to digital converter
		{
		public:
			
			#ifdef ADC_Common_CSR
			struct CSR_t: public Reg32_t /// ADC Common status register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_Common_CSR_0
					struct
					{
						uint32_t ADC_Common_CSR_0_ADRDY_MST : 1; /// Master ADC ready
						uint32_t ADC_Common_CSR_0_EOSMP_MST : 1; /// End of Sampling phase flag of the master ADC
						uint32_t ADC_Common_CSR_0_EOC_MST : 1; /// End of regular conversion of the master ADC
						uint32_t ADC_Common_CSR_0_EOS_MST : 1; /// End of regular sequence flag of the master ADC
						uint32_t ADC_Common_CSR_0_OVR_MST : 1; /// Overrun flag of the master ADC
						uint32_t ADC_Common_CSR_0_JEOC_MST : 1; /// End of injected conversion flag of the master ADC
						uint32_t ADC_Common_CSR_0_JEOS_MST : 1; /// End of injected sequence flag of the master ADC
						uint32_t ADC_Common_CSR_0_AWD1_MST : 1; /// Analog watchdog 1 flag of the master ADC
						uint32_t ADC_Common_CSR_0_AWD2_MST : 1; /// Analog watchdog 2 flag of the master ADC
						uint32_t ADC_Common_CSR_0_AWD3_MST : 1; /// Analog watchdog 3 flag of the master ADC
						uint32_t ADC_Common_CSR_0_JQOVF_MST : 1; /// Injected Context Queue Overflow flag of the master ADC
						uint32_t ADC_Common_CSR_0_JSTRT2 : 1; /// Injected channel Start flag of ADC 2
						uint32_t ADC_Common_CSR_0_STRT2 : 1; /// Regular channel Start flag of ADC 2
						uint32_t ADC_Common_CSR_0_OVR2 : 1; /// Overrun flag of ADC 2
						uint32_t                  : 2;
						uint32_t ADC_Common_CSR_0_ADRDY_SLV : 1; /// Slave ADC ready
						uint32_t ADC_Common_CSR_0_EOSMP_SLV : 1; /// End of Sampling phase flag of the slave ADC
						uint32_t ADC_Common_CSR_0_EOC_SLV : 1; /// End of regular conversion of the slave ADC
						uint32_t ADC_Common_CSR_0_EOS_SLV : 1; /// End of regular sequence flag of the slave ADC
						uint32_t ADC_Common_CSR_0_OVR_SLV : 1; /// Overrun flag of the slave ADC
						uint32_t ADC_Common_CSR_0_JEOC_SLV : 1; /// End of injected conversion flag of the slave ADC
						uint32_t ADC_Common_CSR_0_JEOS_SLV : 1; /// End of injected sequence flag of the slave ADC
						uint32_t ADC_Common_CSR_0_AWD1_SLV : 1; /// Analog watchdog 1 flag of the slave ADC
						uint32_t ADC_Common_CSR_0_AWD2_SLV : 1; /// Analog watchdog 2 flag of the slave ADC
						uint32_t ADC_Common_CSR_0_AWD3_SLV : 1; /// Analog watchdog 3 flag of the slave ADC
						uint32_t ADC_Common_CSR_0_JQOVF_SLV : 1; /// Injected Context Queue Overflow flag of the slave ADC
						uint32_t                  : 5;
					};
					#endif
					#ifdef ADC_Common_CSR_1
					struct
					{
						uint32_t ADC_Common_CSR_1_ADDRDY_MST : 1;
						uint32_t ADC_Common_CSR_1_EOC1 : 1; /// End of conversion of ADC 1
						uint32_t ADC_Common_CSR_1_JEOC1 : 1; /// Injected channel end of conversion of ADC 1
						uint32_t ADC_Common_CSR_1_JSTRT1 : 1; /// Injected channel Start flag of ADC 1
						uint32_t ADC_Common_CSR_1_STRT1 : 1; /// Regular channel Start flag of ADC 1
						uint32_t ADC_Common_CSR_1_OVR1 : 1; /// Overrun flag of ADC 1
						uint32_t ADC_Common_CSR_1_ADONS1 : 1; /// ADON Status of ADC
						uint32_t                  : 1;
						uint32_t ADC_Common_CSR_1_AWD2 : 1; /// Analog watchdog flag of ADC 2
						uint32_t ADC_Common_CSR_1_EOC2 : 1; /// End of conversion of ADC 2
						uint32_t ADC_Common_CSR_1_JEOC2 : 1; /// Injected channel end of conversion of ADC 2
						uint32_t                  : 5;
						uint32_t ADC_Common_CSR_1_AWD3 : 1; /// Analog watchdog flag of ADC 3
						uint32_t ADC_Common_CSR_1_EOC3 : 1; /// End of conversion of ADC 3
						uint32_t ADC_Common_CSR_1_JEOC3 : 1; /// Injected channel end of conversion of ADC 3
						uint32_t ADC_Common_CSR_1_JSTRT3 : 1; /// Injected channel Start flag of ADC 3
						uint32_t ADC_Common_CSR_1_STRT3 : 1; /// Regular channel Start flag of ADC 3
						uint32_t ADC_Common_CSR_1_OVR3 : 1; /// Overrun flag of ADC3
						uint32_t                  : 10;
					};
					#endif
					#ifdef ADC_Common_CSR_2
					struct
					{
						uint32_t AWD1             : 1; /// Analog watchdog flag of ADC 1
						uint32_t                  : 31;
					};
					#endif
				};
				
			};
			#endif
			struct CCR_t: public Reg32_t /// ADC common control register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_Common_CCR_0
					struct
					{
						uint32_t ADC_Common_CCR_0_DUAL : 5; /// Dual ADC mode selection
						uint32_t                  : 3;
						uint32_t ADC_Common_CCR_0_DELAY : 4; /// Delay between 2 sampling phases
						uint32_t                  : 1;
						uint32_t ADC_Common_CCR_0_DMACFG : 1; /// DMA configuration (for multi-ADC mode)
						uint32_t ADC_Common_CCR_0_DAMDF : 2; /// Dual ADC Mode Data Format
						uint32_t ADC_Common_CCR_0_CKMODE : 2; /// ADC clock mode
						uint32_t ADC_Common_CCR_0_PRESC : 4; /// ADC prescaler
						uint32_t ADC_Common_CCR_0_VREFEN : 1; /// VREFINT enable
						uint32_t ADC_Common_CCR_0_TSEN : 1; /// Temperature sensor enable
						uint32_t ADC_Common_CCR_0_VBATEN : 1; /// VBAT enable
						uint32_t                  : 7;
					};
					#endif
					#ifdef ADC_Common_CCR_1
					struct
					{
						uint32_t ADC_Common_CCR_1_MULT : 5; /// Multi ADC mode selection
						uint32_t                  : 8;
						uint32_t ADC_Common_CCR_1_DDS : 1; /// DMA disable selection for multi-ADC mode
						uint32_t ADC_Common_CCR_1_MDMA : 2; /// Direct memory access mode for multi ADC mode
						uint32_t ADC_Common_CCR_1_ADCPRE : 2; /// ADC prescaler
						uint32_t                  : 4;
						uint32_t ADC_Common_CCR_1_VBATE : 1; /// VBAT enable
						uint32_t ADC_Common_CCR_1_CH17SEL : 1; /// CH17 selection
						uint32_t ADC_Common_CCR_1_CH18SEL : 1; /// CH18 selection
						uint32_t                  : 7;
					};
					#endif
					#ifdef ADC_Common_CCR_2
					struct
					{
						uint32_t                  : 14;
						uint32_t ADC_Common_CCR_2_DMA : 2; /// Direct memory access mode for multi ADC mode
						uint32_t                  : 7;
						uint32_t TSVREFE          : 1; /// Temperature sensor and VREFINT enable
						uint32_t                  : 8;
					};
					#endif
				};
				
			};
			#ifdef ADC_Common_CDR
			struct CDR_t: public Reg32_t /// ADC common regular data register for dual and triple modes
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef ADC_Common_CDR_0
					struct
					{
						uint32_t RDATA_MST        : 16; /// Regular data of the master ADC
						uint32_t RDATA_SLV        : 16; /// Regular data of the slave ADC
					};
					#endif
					#ifdef ADC_Common_CDR_1
					struct
					{
						uint32_t DATA1            : 16; /// 1st data item of a pair of regular conversions
						uint32_t DATA2            : 16; /// 2nd data item of a pair of regular conversions
					};
					#endif
				};
				
			};
			#endif
			#ifdef ADC_Common_CDR2
			struct CDR2_t: public Reg32_t /// ADC common regular data register for dual and triple modes
			{
				using Reg32_t::operator=;
				uint32_t RDATA_ALT        : 32; /// Regular data of the master/slave alternated ADCs
				
			};
			#endif
			#ifdef ADC_Common_VERR
			struct VERR_t: public Reg32_t /// ADC version register
			{
				using Reg32_t::operator=;
				uint32_t MINREV           : 4;
				uint32_t MAJREV           : 4;
				uint32_t                  : 24;
				
			};
			#endif
			#ifdef ADC_Common_IPIDR
			struct IPIDR_t: public Reg32_t /// ADC identification register
			{
				using Reg32_t::operator=;
				uint32_t ID               : 32;
				
			};
			#endif
			#ifdef ADC_Common_SIDR
			struct SIDR_t: public Reg32_t /// ADC size identification register
			{
				using Reg32_t::operator=;
				uint32_t SID              : 32;
				
			};
			#endif
			#ifdef ADC_Common_ISR
			struct ISR_t: public Reg32_t /// ADC interrupt and status register
			{
				using Reg32_t::operator=;
				uint32_t ADRDY            : 1; /// ADC ready flag
				uint32_t EOSMP            : 1; /// ADC group regular end of sampling flag
				uint32_t EOC              : 1; /// ADC group regular end of unitary conversion flag
				uint32_t EOS              : 1; /// ADC group regular end of sequence conversions flag
				uint32_t OVR              : 1; /// ADC group regular overrun flag
				uint32_t JEOC             : 1; /// ADC group injected end of unitary conversion flag
				uint32_t JEOS             : 1; /// ADC group injected end of sequence conversions flag
				uint32_t AWD1             : 1; /// ADC analog watchdog 1 flag
				uint32_t AWD2             : 1; /// ADC analog watchdog 2 flag
				uint32_t AWD3             : 1; /// ADC analog watchdog 3 flag
				uint32_t JQOVF            : 1; /// ADC group injected contexts queue overflow flag
				uint32_t                  : 21;
				
			};
			#endif
			#ifdef ADC_Common_IER
			struct IER_t: public Reg32_t /// ADC interrupt enable register
			{
				using Reg32_t::operator=;
				uint32_t ADRDYIE          : 1; /// ADC ready interrupt
				uint32_t EOSMPIE          : 1; /// ADC group regular end of sampling interrupt
				uint32_t EOCIE            : 1; /// ADC group regular end of unitary conversion interrupt
				uint32_t EOSIE            : 1; /// ADC group regular end of sequence conversions interrupt
				uint32_t OVRIE            : 1; /// ADC group regular overrun interrupt
				uint32_t JEOCIE           : 1; /// ADC group injected end of unitary conversion interrupt
				uint32_t JEOSIE           : 1; /// ADC group injected end of sequence conversions interrupt
				uint32_t AWD1IE           : 1; /// ADC analog watchdog 1 interrupt
				uint32_t AWD2IE           : 1; /// ADC analog watchdog 2 interrupt
				uint32_t AWD3IE           : 1; /// ADC analog watchdog 3 interrupt
				uint32_t JQOVFIE          : 1; /// ADC group injected contexts queue overflow interrupt
				uint32_t                  : 21;
				
			};
			#endif
			#ifdef ADC_Common_CR
			struct CR_t: public Reg32_t /// ADC control register
			{
				using Reg32_t::operator=;
				uint32_t ADEN             : 1; /// ADC enable
				uint32_t ADDIS            : 1; /// ADC disable
				uint32_t ADSTART          : 1; /// ADC group regular conversion start
				uint32_t JADSTART         : 1; /// ADC group injected conversion start
				uint32_t ADSTP            : 1; /// ADC group regular conversion stop
				uint32_t JADSTP           : 1; /// ADC group injected conversion stop
				uint32_t                  : 2;
				uint32_t BOOST            : 2; /// Boost mode control
				uint32_t                  : 6;
				uint32_t ADCALLIN         : 1; /// Linearity calibration
				uint32_t                  : 5;
				uint32_t LINCALRDYW1      : 1; /// Linearity calibration ready Word 1
				uint32_t LINCALRDYW2      : 1; /// Linearity calibration ready Word 2
				uint32_t LINCALRDYW3      : 1; /// Linearity calibration ready Word 3
				uint32_t LINCALRDYW4      : 1; /// Linearity calibration ready Word 4
				uint32_t LINCALRDYW5      : 1; /// Linearity calibration ready Word 5
				uint32_t LINCALRDYW6      : 1; /// Linearity calibration ready Word 6
				uint32_t ADVREGEN         : 1; /// ADC voltage regulator enable
				uint32_t DEEPPWD          : 1; /// ADC deep power down enable
				uint32_t ADCALDIF         : 1; /// ADC differential mode for calibration
				uint32_t ADCAL            : 1; /// ADC calibration
				
			};
			#endif
			#ifdef ADC_Common_CFGR
			struct CFGR_t: public Reg32_t /// ADC configuration register 1
			{
				using Reg32_t::operator=;
				uint32_t DMNGT            : 2; /// ADC DMA transfer enable
				uint32_t RES              : 2; /// ADC data resolution
				uint32_t                  : 1;
				uint32_t EXTSEL           : 5; /// ADC group regular external trigger source
				uint32_t EXTEN            : 2; /// ADC group regular external trigger polarity
				uint32_t OVRMOD           : 1; /// ADC group regular overrun configuration
				uint32_t CONT             : 1; /// ADC group regular continuous conversion mode
				uint32_t AUTDLY           : 1; /// ADC low power auto wait
				uint32_t                  : 1;
				uint32_t DISCEN           : 1; /// ADC group regular sequencer discontinuous mode
				uint32_t DISCNUM          : 3; /// ADC group regular sequencer discontinuous number of ranks
				uint32_t JDISCEN          : 1; /// ADC group injected sequencer discontinuous mode
				uint32_t JQM              : 1; /// ADC group injected contexts queue mode
				uint32_t AWD1SGL          : 1; /// ADC analog watchdog 1 monitoring a single channel or all channels
				uint32_t AWD1EN           : 1; /// ADC analog watchdog 1 enable on scope ADC group regular
				uint32_t JAWD1EN          : 1; /// ADC analog watchdog 1 enable on scope ADC group injected
				uint32_t JAUTO            : 1; /// ADC group injected automatic trigger mode
				uint32_t AWDCH1CH         : 5; /// ADC analog watchdog 1 monitored channel selection
				uint32_t JQDIS            : 1; /// ADC group injected contexts queue disable
				
			};
			#endif
			#ifdef ADC_Common_CFGR2
			struct CFGR2_t: public Reg32_t /// ADC configuration register 2
			{
				using Reg32_t::operator=;
				uint32_t ROVSE            : 1; /// ADC oversampler enable on scope ADC group regular
				uint32_t JOVSE            : 1; /// ADC oversampler enable on scope ADC group injected
				uint32_t                  : 3;
				uint32_t OVSS             : 4; /// ADC oversampling shift
				uint32_t TROVS            : 1; /// ADC oversampling discontinuous mode (triggered mode) for ADC group regular
				uint32_t ROVSM            : 1; /// Regular Oversampling mode
				uint32_t RSHIFT1          : 1; /// Right-shift data after Offset 1 correction
				uint32_t RSHIFT2          : 1; /// Right-shift data after Offset 2 correction
				uint32_t RSHIFT3          : 1; /// Right-shift data after Offset 3 correction
				uint32_t RSHIFT4          : 1; /// Right-shift data after Offset 4 correction
				uint32_t                  : 1;
				uint32_t OSR              : 10; /// Oversampling ratio
				uint32_t                  : 2;
				uint32_t LSHIFT           : 4; /// Left shift factor
				
			};
			#endif
			#ifdef ADC_Common_SMPR1
			struct SMPR1_t: public Reg32_t /// ADC sampling time register 1
			{
				using Reg32_t::operator=;
				uint32_t SMP0             : 3; /// ADC channel 0 sampling time selection
				uint32_t SMP1             : 3; /// ADC channel 1 sampling time selection
				uint32_t SMP2             : 3; /// ADC channel 2 sampling time selection
				uint32_t SMP3             : 3; /// ADC channel 3 sampling time selection
				uint32_t SMP4             : 3; /// ADC channel 4 sampling time selection
				uint32_t SMP5             : 3; /// ADC channel 5 sampling time selection
				uint32_t SMP6             : 3; /// ADC channel 6 sampling time selection
				uint32_t SMP7             : 3; /// ADC channel 7 sampling time selection
				uint32_t SMP8             : 3; /// ADC channel 8 sampling time selection
				uint32_t SMP9             : 3; /// ADC channel 9 sampling time selection
				uint32_t                  : 2;
				
			};
			#endif
			#ifdef ADC_Common_SMPR2
			struct SMPR2_t: public Reg32_t /// ADC sampling time register 2
			{
				using Reg32_t::operator=;
				uint32_t SMP10            : 3; /// ADC channel 10 sampling time selection
				uint32_t SMP11            : 3; /// ADC channel 11 sampling time selection
				uint32_t SMP12            : 3; /// ADC channel 12 sampling time selection
				uint32_t SMP13            : 3; /// ADC channel 13 sampling time selection
				uint32_t SMP14            : 3; /// ADC channel 14 sampling time selection
				uint32_t SMP15            : 3; /// ADC channel 15 sampling time selection
				uint32_t SMP16            : 3; /// ADC channel 16 sampling time selection
				uint32_t SMP17            : 3; /// ADC channel 17 sampling time selection
				uint32_t SMP18            : 3; /// ADC channel 18 sampling time selection
				uint32_t SMP19            : 3; /// ADC channel 18 sampling time selection
				uint32_t                  : 2;
				
			};
			#endif
			#ifdef ADC_Common_LTR1
			struct LTR1_t: public Reg32_t /// ADC analog watchdog 1 threshold register
			{
				using Reg32_t::operator=;
				uint32_t LTR1             : 26; /// ADC analog watchdog 1 threshold low
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_Common_LHTR1
			struct LHTR1_t: public Reg32_t /// ADC analog watchdog 2 threshold register
			{
				using Reg32_t::operator=;
				uint32_t LHTR1            : 26; /// ADC analog watchdog 2 threshold low
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_Common_SQR1
			struct SQR1_t: public Reg32_t /// ADC group regular sequencer ranks register 1
			{
				using Reg32_t::operator=;
				uint32_t L3               : 4;
				uint32_t                  : 2;
				uint32_t SQ1              : 5; /// ADC group regular sequencer rank 1
				uint32_t                  : 1;
				uint32_t SQ2              : 5; /// ADC group regular sequencer rank 2
				uint32_t                  : 1;
				uint32_t SQ3              : 5; /// ADC group regular sequencer rank 3
				uint32_t                  : 1;
				uint32_t SQ4              : 5; /// ADC group regular sequencer rank 4
				uint32_t                  : 3;
				
			};
			#endif
			#ifdef ADC_Common_SQR2
			struct SQR2_t: public Reg32_t /// ADC group regular sequencer ranks register 2
			{
				using Reg32_t::operator=;
				uint32_t SQ5              : 5; /// ADC group regular sequencer rank 5
				uint32_t                  : 1;
				uint32_t SQ6              : 5; /// ADC group regular sequencer rank 6
				uint32_t                  : 1;
				uint32_t SQ7              : 5; /// ADC group regular sequencer rank 7
				uint32_t                  : 1;
				uint32_t SQ8              : 5; /// ADC group regular sequencer rank 8
				uint32_t                  : 1;
				uint32_t SQ9              : 5; /// ADC group regular sequencer rank 9
				uint32_t                  : 3;
				
			};
			#endif
			#ifdef ADC_Common_SQR4
			struct SQR4_t: public Reg32_t /// ADC group regular sequencer ranks register 4
			{
				using Reg32_t::operator=;
				uint32_t SQ15             : 5; /// ADC group regular sequencer rank 15
				uint32_t                  : 1;
				uint32_t SQ16             : 5; /// ADC group regular sequencer rank 16
				uint32_t                  : 21;
				
			};
			#endif
			#ifdef ADC_Common_DR
			struct DR_t: public Reg32_t /// ADC group regular conversion data register
			{
				using Reg32_t::operator=;
				uint32_t RDATA            : 32; /// ADC group regular conversion data
				
			};
			#endif
			#ifdef ADC_Common_JSQR
			struct JSQR_t: public Reg32_t /// ADC group injected sequencer register
			{
				using Reg32_t::operator=;
				uint32_t JL               : 2; /// ADC group injected sequencer scan length
				uint32_t JEXTSEL          : 5; /// ADC group injected external trigger source
				uint32_t JEXTEN           : 2; /// ADC group injected external trigger polarity
				uint32_t JSQ1             : 5; /// ADC group injected sequencer rank 1
				uint32_t                  : 1;
				uint32_t JSQ2             : 5; /// ADC group injected sequencer rank 2
				uint32_t                  : 1;
				uint32_t JSQ3             : 5; /// ADC group injected sequencer rank 3
				uint32_t                  : 1;
				uint32_t JSQ4             : 5; /// ADC group injected sequencer rank 4
				
			};
			#endif
			#ifdef ADC_Common_OFRx
			struct OFRx_t: public Reg32_t /// ADC offset number 1 register
			{
				using Reg32_t::operator=;
				uint32_t OFFSET1          : 26; /// ADC offset number 1 offset level
				uint32_t OFFSET1_CH       : 5; /// ADC offset number 1 channel selection
				uint32_t SSATE            : 1; /// ADC offset number 1 enable
				
			};
			#endif
			#ifdef ADC_Common_JDR1
			struct JDR1_t: public Reg32_t /// ADC group injected sequencer rank 1 register
			{
				using Reg32_t::operator=;
				uint32_t JDATA1           : 32; /// ADC group injected sequencer rank 1 conversion data
				
			};
			#endif
			#ifdef ADC_Common_JDR2
			struct JDR2_t: public Reg32_t /// ADC group injected sequencer rank 2 register
			{
				using Reg32_t::operator=;
				uint32_t JDATA2           : 32; /// ADC group injected sequencer rank 2 conversion data
				
			};
			#endif
			#ifdef ADC_Common_JDR3
			struct JDR3_t: public Reg32_t /// ADC group injected sequencer rank 3 register
			{
				using Reg32_t::operator=;
				uint32_t JDATA3           : 32; /// ADC group injected sequencer rank 3 conversion data
				
			};
			#endif
			#ifdef ADC_Common_JDR4
			struct JDR4_t: public Reg32_t /// ADC group injected sequencer rank 4 register
			{
				using Reg32_t::operator=;
				uint32_t JDATA4           : 32; /// ADC group injected sequencer rank 4 conversion data
				
			};
			#endif
			#ifdef ADC_Common_AWD2CR
			struct AWD2CR_t: public Reg32_t /// ADC analog watchdog 2 configuration register
			{
				using Reg32_t::operator=;
				uint32_t AWD2CH           : 20; /// ADC analog watchdog 2 monitored channel selection
				uint32_t                  : 12;
				
			};
			#endif
			#ifdef ADC_Common_AWD3CR
			struct AWD3CR_t: public Reg32_t /// ADC analog watchdog 3 configuration register
			{
				using Reg32_t::operator=;
				uint32_t AWD3CH           : 20; /// ADC analog watchdog 3 monitored channel selection
				uint32_t                  : 12;
				
			};
			#endif
			#ifdef ADC_Common_DIFSEL
			struct DIFSEL_t: public Reg32_t /// ADC channel differential or single-ended mode selection register
			{
				using Reg32_t::operator=;
				uint32_t DIFSEL           : 20; /// ADC channel differential or single-ended mode for channel
				uint32_t                  : 12;
				
			};
			#endif
			#ifdef ADC_Common_CALFACT
			struct CALFACT_t: public Reg32_t /// ADC calibration factors register
			{
				using Reg32_t::operator=;
				uint32_t CALFACT_S        : 11; /// ADC calibration factor in single-ended mode
				uint32_t                  : 5;
				uint32_t CALFACT_D        : 11; /// ADC calibration factor in differential mode
				uint32_t                  : 5;
				
			};
			#endif
			#ifdef ADC_Common_PCSEL
			struct PCSEL_t: public Reg32_t /// ADC pre channel selection register
			{
				using Reg32_t::operator=;
				uint32_t PCSEL            : 20; /// Channel x (VINP[i]) pre selection
				uint32_t                  : 12;
				
			};
			#endif
			#ifdef ADC_Common_LTR2
			struct LTR2_t: public Reg32_t /// ADC watchdog lower threshold register 2
			{
				using Reg32_t::operator=;
				uint32_t LTR2             : 26; /// Analog watchdog 2 lower threshold
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_Common_HTR2
			struct HTR2_t: public Reg32_t /// ADC watchdog higher threshold register 2
			{
				using Reg32_t::operator=;
				uint32_t HTR2             : 26; /// Analog watchdog 2 higher threshold
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_Common_LTR3
			struct LTR3_t: public Reg32_t /// ADC watchdog lower threshold register 3
			{
				using Reg32_t::operator=;
				uint32_t LTR3             : 26; /// Analog watchdog 3 lower threshold
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_Common_HTR3
			struct HTR3_t: public Reg32_t /// ADC watchdog higher threshold register 3
			{
				using Reg32_t::operator=;
				uint32_t HTR3             : 26; /// Analog watchdog 3 higher threshold
				uint32_t                  : 6;
				
			};
			#endif
			#ifdef ADC_Common_CALFACT2
			struct CALFACT2_t: public Reg32_t /// ADC Calibration Factor register 2
			{
				using Reg32_t::operator=;
				uint32_t LINCALFACT       : 30; /// Linearity Calibration Factor
				uint32_t                  : 2;
				
			};
			#endif
			union
			{
				struct
				{
					ADC_Common_MAP0_CSR; /// ADC Common status register
					__SOOL_PERIPH_PADDING_4;
					ADC_Common_MAP0_CCR; /// ADC common control register
					ADC_Common_MAP0_CDR; /// ADC common regular data register for dual and triple modes
					ADC_Common_MAP0_CDR2; /// ADC common regular data register for dual and triple modes
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					ADC_Common_MAP0_VERR; /// ADC version register
					ADC_Common_MAP0_IPIDR; /// ADC identification register
					ADC_Common_MAP0_SIDR; /// ADC size identification register
				};
				#ifdef ADC_Common_MAP1
				struct
				{
					ISR_t ISR; /// ADC interrupt and status register
					IER_t IER; /// ADC interrupt enable register
					CR_t CR; /// ADC control register
					CFGR_t CFGR; /// ADC configuration register 1
					CFGR2_t CFGR2; /// ADC configuration register 2
					SMPR1_t SMPR1; /// ADC sampling time register 1
					SMPR2_t SMPR2; /// ADC sampling time register 2
					PCSEL_t PCSEL; /// ADC pre channel selection register
					LTR1_t LTR1; /// ADC analog watchdog 1 threshold register
					LHTR1_t LHTR1; /// ADC analog watchdog 2 threshold register
					__SOOL_PERIPH_PADDING_8;
					SQR1_t SQR1; /// ADC group regular sequencer ranks register 1
					SQR2_t SQR2; /// ADC group regular sequencer ranks register 2
					CR_t SQR3; /// ADC group regular sequencer ranks register 3
					SQR4_t SQR4; /// ADC group regular sequencer ranks register 4
					DR_t DR; /// ADC group regular conversion data register
					__SOOL_PERIPH_PADDING_8;
					JSQR_t JSQR; /// ADC group injected sequencer register
					__SOOL_PERIPH_PADDING_16;
					OFRx_t OFR1; /// ADC offset number 1 register
					OFRx_t OFR2; /// ADC offset number 2 register
					OFRx_t OFR3; /// ADC offset number 3 register
					OFRx_t OFR4; /// ADC offset number 4 register
					__SOOL_PERIPH_PADDING_16;
					JDR1_t JDR1; /// ADC group injected sequencer rank 1 register
					JDR2_t JDR2; /// ADC group injected sequencer rank 2 register
					JDR3_t JDR3; /// ADC group injected sequencer rank 3 register
					JDR4_t JDR4; /// ADC group injected sequencer rank 4 register
					__SOOL_PERIPH_PADDING_16;
					AWD2CR_t AWD2CR; /// ADC analog watchdog 2 configuration register
					AWD3CR_t AWD3CR; /// ADC analog watchdog 3 configuration register
					__SOOL_PERIPH_PADDING_8;
					LTR2_t LTR2; /// ADC watchdog lower threshold register 2
					HTR2_t HTR2; /// ADC watchdog higher threshold register 2
					LTR3_t LTR3; /// ADC watchdog lower threshold register 3
					HTR3_t HTR3; /// ADC watchdog higher threshold register 3
					DIFSEL_t DIFSEL; /// ADC channel differential or single-ended mode selection register
					CALFACT_t CALFACT; /// ADC calibration factors register
					CALFACT2_t CALFACT2; /// ADC Calibration Factor register 2
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				#endif
				#ifdef ADC_Common_MAP2
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					CCR_t CCR; /// ADC common control register
					ADC_Common_MAP2_CDR; /// ADC common regular data register for dual and triple modes
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				#endif
			};

			#if __SOOL_DEBUG_NOPHY
				ADC_Common(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() const volatile {return myaddr;};
			#else
				inline const uintptr_t get_addr() const volatile {return reinterpret_cast<uintptr_t>(this);};
			private:
				ADC_Common() = delete;
			#endif
			
		};
		#endif

#if	defined(STM32MP1     )
#define ADC1_BASE_ADDR ((uint32_t)0x48003000U)
#define ADC1_TMPL
#define ADC2_BASE_ADDR ((uint32_t)0x48003100U)
#define ADC2_TMPL ADC_tmpl_0
#define ADC12_Common_BASE_ADDR ((uint32_t)0x48003300U)
#define ADC_Common_ADC12_Common
#define ADC12_Common_TMPL
#endif

#if	defined(STM32H7      )
#define ADC3_BASE_ADDR ((uint32_t)0x58026000U)
#define ADC3_TMPL
#endif

#if	defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define ADC1_BASE_ADDR ((uint32_t)0x40022000U)
#define ADC1_TMPL
#define ADC2_BASE_ADDR ((uint32_t)0x40022100U)
#define ADC2_TMPL
#define ADC3_Common_BASE_ADDR ((uint32_t)0x58026300U)
#define ADC_Common_ADC3_Common
#define ADC3_Common_TMPL
#define ADC12_Common_BASE_ADDR ((uint32_t)0x40022300U)
#define ADC_Common_ADC12_Common
#define ADC12_Common_TMPL
#endif

#if	defined(STM32WB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define ADC_BASE_ADDR ((uint32_t)0x50040000U)
#define ADC_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
#define ADC1_BASE_ADDR ((uint32_t)0x40012000U)
#define ADC1_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define ADC2_BASE_ADDR ((uint32_t)0x40012100U)
#define ADC2_TMPL
#define ADC3_BASE_ADDR ((uint32_t)0x40012200U)
#define ADC3_TMPL
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || \
    defined(STM32F302xE  ) || defined(STM32F303x8  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || \
    defined(STM32F328xx  ) || defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC1_BASE_ADDR ((uint32_t)0x50000000U)
#define ADC1_TMPL
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || \
    defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F334x8  ) || defined(STM32F358xx  )
#define ADC2_BASE_ADDR ((uint32_t)0x50000100U)
#define ADC2_TMPL
#endif

#if	defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F358xx  ) || \
    defined(STM32G473xx  ) || defined(STM32G474xx  ) || defined(STM32G484xx  )
#define ADC4_BASE_ADDR ((uint32_t)0x50000500U)
#define ADC4_TMPL
#endif

#if	defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F358xx  ) || \
    defined(STM32G471xx  ) || defined(STM32G473xx  ) || defined(STM32G474xx  ) || defined(STM32G484xx  )
#define ADC3_BASE_ADDR ((uint32_t)0x50000400U)
#define ADC3_TMPL
#endif

#if	defined(STM32G473xx  ) || defined(STM32G474xx  ) || defined(STM32G484xx  )
#define ADC5_BASE_ADDR ((uint32_t)0x50000600U)
#define ADC5_TMPL
#endif

#if	defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  )
#define ADC1_BASE_ADDR ((uint32_t)0x50040000U)
#define ADC1_TMPL
#define ADC2_BASE_ADDR ((uint32_t)0x50040100U)
#define ADC2_TMPL
#define ADC3_BASE_ADDR ((uint32_t)0x50040200U)
#define ADC3_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  )
#define ADC_BASE_ADDR ((uint32_t)0x40012400U)
#define ADC_TMPL
#endif

#if	defined(STM32W1      )
#define ADC_BASE_ADDR ((uint32_t)0x4000a810U)
#define ADC_TMPL
#endif

#if	defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define ADC1_2_BASE_ADDR ((uint32_t)0x40022000U)
#define ADC_Common_ADC1_2
#define ADC1_2_TMPL
#endif

#if	defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define ADC_Common_BASE_ADDR ((uint32_t)0x50040300U)
#define ADC_Common_ADC_Common
#define ADC_Common_TMPL
#endif

#if	defined(STM32GB      ) || defined(STM32G431xx  ) || defined(STM32G441xx  ) || defined(STM32G473xx  ) || defined(STM32G474xx  ) || \
    defined(STM32G484xx  )
#define ADC12_Common_BASE_ADDR ((uint32_t)0x50000200U)
#define ADC_Common_ADC12_Common
#define ADC12_Common_TMPL
#endif

#if	defined(STM32G4      ) || defined(STM32GB      )
#define ADC345_Common_BASE_ADDR ((uint32_t)0x50000700U)
#define ADC_Common_ADC345_Common
#define ADC345_Common_TMPL
#endif

#if	defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || \
    defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F765xx  )
#define C_ADC_BASE_ADDR ((uint32_t)0x40012300U)
#define ADC_Common_C_ADC
#define C_ADC_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || \
    defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  )
#define ADC_Common_BASE_ADDR ((uint32_t)0x40012300U)
#define ADC_Common_ADC_Common
#define ADC_Common_TMPL
#endif

#if	defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L485xx  )
#define ADC123_Common_BASE_ADDR ((uint32_t)0x50040300U)
#define ADC_Common_ADC123_Common
#define ADC123_Common_TMPL
#endif

#if	defined(STM32G471xx  )
#define ADC12_Common_BASE_ADDR ((uint32_t)0x50000300U)
#define ADC_Common_ADC12_Common
#define ADC12_Common_TMPL
#endif

#if	defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303x8  ) || \
    defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F334x8  ) || \
    defined(STM32F358xx  )
#define ADC1_2_BASE_ADDR ((uint32_t)0x50000300U)
#define ADC_Common_ADC1_2
#define ADC1_2_TMPL
#endif

#if	defined(STM32F301x8  ) || defined(STM32F302x8  ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || defined(STM32F303xC  ) || \
    defined(STM32F303xE  ) || defined(STM32F318xx  ) || defined(STM32F328xx  ) || defined(STM32F358xx  )
#define ADC3_4_BASE_ADDR ((uint32_t)0x50000700U)
#define ADC_Common_ADC3_4
#define ADC3_4_TMPL
#endif

#if	defined(STM32L1      )
#define C_ADC_BASE_ADDR ((uint32_t)0x40012700U)
#define ADC_Common_C_ADC
#define C_ADC_TMPL
#endif


//Instances for peripheral ADC

		#if defined(ADC_BASE_ADDR) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC<> * const ADC = new class ADC<>(ADC_BASE_ADDR);
			#else
				volatile class ADC<> * const ADC = reinterpret_cast<class ADC<>* const>(ADC_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC1_BASE_ADDR) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC<> * const ADC1 = new class ADC<>(ADC1_BASE_ADDR);
			#else
				volatile class ADC<> * const ADC1 = reinterpret_cast<class ADC<>* const>(ADC1_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC2_BASE_ADDR) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC<> * const ADC2 = new class ADC<>(ADC2_BASE_ADDR);
			#else
				volatile class ADC<> * const ADC2 = reinterpret_cast<class ADC<>* const>(ADC2_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC3_BASE_ADDR) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC<> * const ADC3 = new class ADC<>(ADC3_BASE_ADDR);
			#else
				volatile class ADC<> * const ADC3 = reinterpret_cast<class ADC<>* const>(ADC3_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC4_BASE_ADDR) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC<> * const ADC4 = new class ADC<>(ADC4_BASE_ADDR);
			#else
				volatile class ADC<> * const ADC4 = reinterpret_cast<class ADC<>* const>(ADC4_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC5_BASE_ADDR) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC<> * const ADC5 = new class ADC<>(ADC5_BASE_ADDR);
			#else
				volatile class ADC<> * const ADC5 = reinterpret_cast<class ADC<>* const>(ADC5_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral ADC_Common

		#if defined(ADC123_Common_BASE_ADDR) && defined(ADC_Common_ADC123_Common) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC_Common * const ADC123_Common = new class ADC_Common(ADC123_Common_BASE_ADDR);
			#else
				volatile class ADC_Common * const ADC123_Common = reinterpret_cast<class ADC_Common* const>(ADC123_Common_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC12_Common_BASE_ADDR) && defined(ADC_Common_ADC12_Common) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC_Common * const ADC12_Common = new class ADC_Common(ADC12_Common_BASE_ADDR);
			#else
				volatile class ADC_Common * const ADC12_Common = reinterpret_cast<class ADC_Common* const>(ADC12_Common_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC1_2_BASE_ADDR) && defined(ADC_Common_ADC1_2) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC_Common * const ADC1_2 = new class ADC_Common(ADC1_2_BASE_ADDR);
			#else
				volatile class ADC_Common * const ADC1_2 = reinterpret_cast<class ADC_Common* const>(ADC1_2_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC345_Common_BASE_ADDR) && defined(ADC_Common_ADC345_Common) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC_Common * const ADC345_Common = new class ADC_Common(ADC345_Common_BASE_ADDR);
			#else
				volatile class ADC_Common * const ADC345_Common = reinterpret_cast<class ADC_Common* const>(ADC345_Common_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC3_4_BASE_ADDR) && defined(ADC_Common_ADC3_4) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC_Common * const ADC3_4 = new class ADC_Common(ADC3_4_BASE_ADDR);
			#else
				volatile class ADC_Common * const ADC3_4 = reinterpret_cast<class ADC_Common* const>(ADC3_4_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC3_Common_BASE_ADDR) && defined(ADC_Common_ADC3_Common) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC_Common * const ADC3_Common = new class ADC_Common(ADC3_Common_BASE_ADDR);
			#else
				volatile class ADC_Common * const ADC3_Common = reinterpret_cast<class ADC_Common* const>(ADC3_Common_BASE_ADDR);
			#endif
		#endif

		#if defined(ADC_Common_BASE_ADDR) && defined(ADC_Common_ADC_Common) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC_Common * const ADC_Common = new class ADC_Common(ADC_Common_BASE_ADDR);
			#else
				volatile class ADC_Common * const ADC_Common = reinterpret_cast<class ADC_Common* const>(ADC_Common_BASE_ADDR);
			#endif
		#endif

		#if defined(C_ADC_BASE_ADDR) && defined(ADC_Common_C_ADC) 
			#if __SOOL_DEBUG_NOPHY
				volatile class ADC_Common * const C_ADC = new class ADC_Common(C_ADC_BASE_ADDR);
			#else
				volatile class ADC_Common * const C_ADC = reinterpret_cast<class ADC_Common* const>(C_ADC_BASE_ADDR);
			#endif
		#endif
		
		
		
		template<typename T>
		inline constexpr volatile Reg32_t& ADC<T>::get_clock_enable_reg(const uintptr_t addr)
		{
			switch (addr)
			{
				//Output for ADC3EN
		#ifdef ADC3_BASE_ADDR
				case ADC3_BASE_ADDR :
					#if defined(STM32H7      )
						return RCC->AHB4ENR;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return RCC->APB2ENR;
					#endif
		#endif
				//Output for ADCEN
		#ifdef ADC_BASE_ADDR
				case ADC_BASE_ADDR :
					#if defined(STM32L4      ) || defined(STM32WB      )
						return RCC->AHB2ENR;
					#elif defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L0      )
						return RCC->APB2ENR;
					#elif defined(STM32G0      )
						return RCC->APBENR2;
					#endif
		#endif
				//Output for ADC1EN
		#ifdef ADC1_BASE_ADDR
				case ADC1_BASE_ADDR :
					#if 1
						return RCC->APB2ENR;
					#endif
		#endif
				//Output for ADC2EN
		#ifdef ADC2_BASE_ADDR
				case ADC2_BASE_ADDR :
					#if 1
						return RCC->APB2ENR;
					#endif
		#endif
			}
		}
		template<typename T>
		inline constexpr uint32_t ADC<T>::get_clock_enable_bit(const uintptr_t addr)
		{
			switch (addr)
			{
				//Output for ADC3EN
		#ifdef ADC3_BASE_ADDR
				case ADC3_BASE_ADDR :
					#if defined(STM32H7      )
						return 1 << 24;
					#elif defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
						return 1 << 10;
					#endif
		#endif
				//Output for ADCEN
		#ifdef ADC_BASE_ADDR
				case ADC_BASE_ADDR :
					#if defined(STM32L4      ) || defined(STM32WB      )
						return 1 << 13;
					#elif defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L0      )
						return 1 << 9;
					#elif defined(STM32G0      )
						return 1 << 20;
					#endif
		#endif
				//Output for ADC1EN
		#ifdef ADC1_BASE_ADDR
				case ADC1_BASE_ADDR :
					#if 1
						return 1 << 8;
					#endif
		#endif
				//Output for ADC2EN
		#ifdef ADC2_BASE_ADDR
				case ADC2_BASE_ADDR :
					#if 1
						return 1 << 9;
					#endif
		#endif
			}
		}
		
		template<typename T>
		inline void ADC<T>::enable_clock() volatile
		{
			get_clock_enable_reg(get_addr())
					|= get_clock_enable_bit(get_addr());
		}
		template<typename T>
		inline void ADC<T>::disable_clock() volatile
		{
			get_clock_enable_reg(get_addr())
					&= ~get_clock_enable_bit(get_addr());
		}
		template<typename T>
		inline bool ADC<T>::is_clock_enabled() const volatile
		{
			return (get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
					& get_clock_enable_bit(reinterpret_cast<const uint32_t>(this)))
				   == get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
		}
		
		#ifdef ADC_SQR1
		template<typename T>
		inline void ADC<T>::set_acquisition_sequence_length(const unsigned int length) volatile
		{
			SQR1.L = length;
		};
		#endif
		
		
		
		
		
	};
};
#undef ADC_CR2_1_EXTSEL
#undef ADC_Common_MAP0_CCR
#undef ADC5_TMPL
#undef ADC_JDR3_0
#undef ADC_CR_1_ADON
#undef ADC_AWD3CR_4
#undef ADC_MAP0_DR
#undef ADC_Common_CSR_0_AWD2_MST
#undef ADC_AWD3CR_3
#undef ADC_CFGR2_0_ROVSM
#undef ADC_MAP0_CFGR2
#undef ADC_Common_ADC1_2
#undef ADC_DIFSEL_1
#undef ADC_Common_CSR_0_OVR_SLV
#undef ADC_JSQR_0_JSQ2
#undef ADC_MAP4_JOFR2
#undef ADC_AWD3CR_2
#undef ADC_CR2_0_RSTCAL
#undef ADC_CFGR2_0_RSHIFT2
#undef ADC_SQR1_0_L3
#undef ADC_AWD3CR_0
#undef ADC_Common_CCR_1_ADCPRE
#undef ADC_IER_0_AWD2IE
#undef ADC_MAP2_JOFR2
#undef ADC_MAP5_DMAMSAR
#undef ADC_MAP4_HWCFGR0
#undef ADC_MAP0_SQR4
#undef ADC_IER_0_CCRDYIE
#undef ADC_MAP1_SR
#undef ADC_MAP4
#undef ADC_MAP0_SQR3
#undef ADC_Common_TMPL
#undef ADC_MAP4_HWCFGR6
#undef ADC_MAP0
#undef ADC_OFRx_0_OFFSET1
#undef ADC_IER_1_DMABHFIE
#undef ADC_TR1_AWDFILT
#undef ADC_CR_0_LINCALRDYW5
#undef ADC_MAP0_LHTR1
#undef ADC_CR_0_BOOST
#undef ADC_CFGR2_0_RSHIFT4
#undef ADC_MAP0_DIFSEL
#undef ADC_MAP5_JOFR4
#undef ADC_DR_4
#undef ADC_AWD2CR_1
#undef ADC_Common_CSR_0_EOC_MST
#undef ADC_CCR_1
#undef ADC_Common_CSR_1_EOC3
#undef ADC_IER_0_AWD1IE
#undef ADC_MAP0_LTR1
#undef ADC_MAP1_TR3
#undef ADC_CR_1
#undef ADC_MAP0_LTR3
#undef ADC_MAP0_IER
#undef ADC_AWD3CR_1
#undef ADC_CSR_0_AWD2_MST
#undef ADC_CR_0_ADSTP
#undef ADC_CR_0_LINCALRDYW4
#undef ADC_CFGR2_0_TROVS
#undef ADC_CFGR_0_ALIGN
#undef ADC_MAP5_SMPR0
#undef ADC_MAP0_VERR
#undef ADC_Common_CCR_0_DMACFG
#undef ADC_JDR4_1
#undef ADC_CR_1_CLK
#undef ADC_SQR1_1
#undef ADC_MAP5_DMACNDTR
#undef ADC_MAP1_SMPR2
#undef ADC_AWD2CR_0
#undef ADC_CFGR2_1_JITOFF_D2
#undef ADC_MAP2_LTR
#undef ADC_IPIDR_0
#undef ADC_MAP4_JOFR1
#undef ADC_MAP5_LTR
#undef ADC_MAP4_HWCFGR4
#undef ADC_Common_CSR_1_ADDRDY_MST
#undef ADC_Common_MAP2
#undef ADC_Common_MAP1
#undef ADC_MAP2_SQR2
#undef ADC_Common_CCR_1_CH18SEL
#undef ADC_MAP2_SMPR2
#undef ADC_CR2_0_JEXTEN
#undef ADC_CFGR_1_AUTOFF
#undef ADC_MAP5_SQR5
#undef ADC_MAP1_TR2
#undef ADC_MAP2_SQR1
#undef ADC_Common_CCR_2_DMA
#undef ADC_CR_0_ADVREGEN
#undef ADC_Common_CCR_1_CH17SEL
#undef ADC_CR_0_HVSELP
#undef ADC_Common_CSR_0_JEOS_SLV
#undef ADC_CR2_0_EXTSEL
#undef ADC_MAP5_HTR
#undef ADC_ISR_0_JQOVF
#undef ADC_ISR_1_DMABF
#undef ADC_SQR1_1_L
#undef ADC_CR_0_ADEN
#undef ADC_CR2_0_DELS
#undef ADC_IER_1_AWDIE
#undef ADC_OFRx_0_SSATE
#undef ADC_MAP0_SMPR1
#undef ADC_SQR1_2_SQ26
#undef ADC_SQR4_0_SQ15
#undef ADC_ADC_tmpl_0
#undef ADC_CFGR_1_RES
#undef ADC_MAP4_AWD3TR
#undef ADC_Common_CSR_0_AWD3_MST
#undef ADC_SQR1_1_SQ15
#undef ADC_CFGR_1_DMAEN
#undef ADC_SMPRx_1
#undef ADC_MAP4_HWCFGR5
#undef ADC_ISR_1_DMABHF
#undef ADC_MAP0_JSQR
#undef ADC345_Common_TMPL
#undef ADC_MAP2_JDR2
#undef ADC_CCR_0_PRESC
#undef ADC_DIFSEL_2
#undef ADC_JDR2_1
#undef ADC_MAP5_DMAMNAR
#undef ADC_ISR_0_EOCAL
#undef ADC_MAP4_CHSELR_1
#undef ADC_CFGR2_0_RSHIFT3
#undef ADC_MAP5_JDR2
#undef ADC_CCR_0_VBATEN
#undef ADC_CFGR1_0_AUTDLY
#undef ADC_CCR_1_CH18SEL
#undef ADC_Common_CSR_2
#undef ADC_PCSEL_0
#undef ADC_CR1_PDI
#undef ADC_CR_0_ADCALLIN
#undef ADC_CSR_0_JEOC1
#undef ADC_Common_CCR_0_DAMDF
#undef ADC_JSQR_0_JSQ1
#undef ADC_CR1_PDD
#undef ADC_MAP4_IER
#undef PERIPH_ADC_Common
#undef ADC_CR_0_ADDIS
#undef ADC_DR_0
#undef ADC_SQR1_0
#undef ADC_CSR_0_EOC1
#undef ADC_Common_CSR_0_AWD1_MST
#undef ADC_CR2_1_EXTTRIG
#undef ADC_DIFSEL_1_DIFSEL_1_15
#undef ADC_Common_CSR_0_AWD2_SLV
#undef ADC_Common_CSR_0_EOS_SLV
#undef ADC_MAP5_JSQR
#undef ADC_DIFSEL_1_DIFSEL_0
#undef ADC_CFGR_2_ALIGN_5
#undef ADC_Common_MAP0_SIDR
#undef ADC_MAP4_AWD1TR
#undef ADC_DR_1
#undef ADC_CSR_1
#undef ADC_CFGR_0_EXTSEL
#undef ADC_Common_C_ADC
#undef ADC_CR_0_LINCALRDYW2
#undef ADC_SMPR1_0_SMPPLUS
#undef ADC_Common_CCR_1
#undef ADC_Common_CCR_0_DUAL
#undef ADC_SQR1_2_SQ27
#undef ADC_Common_CSR_0_EOS_MST
#undef ADC_CFGR_0_RES
#undef ADC_MAP0_JDR2
#undef ADC_IER_0_AWD3IE
#undef ADC_MAP0_SMPR2
#undef ADC_CCR_0
#undef ADC1_TMPL
#undef ADC_Common_MAP0_CDR
#undef ADC_CR_0_LINCALRDYW6
#undef ADC_CCR_2_VLCDEN
#undef ADC_AWD2CR_2
#undef ADC_CFGR2_0_SMPTRIG
#undef ADC_SMPR2_1
#undef ADC_CFGR1_0_CHSELRMOD
#undef ADC_JSQR_0_JEXTSEL
#undef ADC_CR2_0_TSVREFE
#undef ADC_CFGR1_1
#undef ADC_CR_0_LINCALRDYW3
#undef ADC_OFRx_1
#undef ADC_Common_CSR_0_OVR2
#undef ADC_MAP5
#undef ADC_SR_RCNR
#undef ADC_MAP0_OFR3
#undef ADC_Common_CSR_0_ADRDY_MST
#undef ADC_SQR4_0_SQ16
#undef ADC_MAP0_CR
#undef ADC_CCR_2
#undef ADC_Common_CSR_0_JEOC_MST
#undef ADC_MAP0_CALFACT
#undef ADC_MAP0_AWD3CR
#undef ADC_MAP2_JSQR
#undef ADC_ISR_0_JEOC
#undef ADC_MAP5_JDR4
#undef ADC_Common_ADC345_Common
#undef ADC_Common_CSR_1_JSTRT3
#undef ADC_CR_0_JADSTART
#undef ADC_MAP1_TR1
#undef ADC_CFGR2_1_JITOFF_D4
#undef ADC_JDR1_1
#undef ADC_SMPR1_1
#undef ADC_MAP2_SQR3
#undef ADC_IER_0_JEOSIE
#undef ADC_MAP4_HWCFGR1
#undef ADC_IER_0_JQOVFIE
#undef ADC_CR_0_ADCAL
#undef ADC_Common_CSR_0_EOC_SLV
#undef ADC_CR_0_ADCALDIF
#undef ADC_MAP0_SIDR
#undef ADC_CFGR_1
#undef ADC_MAP0_LTR2
#undef ADC_CFGR1_0_AWDCH
#undef ADC_DIFSEL_1_DIFSEL_16_18
#undef ADC_Common_CSR_0_JSTRT2
#undef ADC_CR_0_LINCALRDYW1
#undef ADC_CCR_2_CH17SEL
#undef ADC_MAP1
#undef ADC_CR2_1
#undef ADC_SMPR_1
#undef ADC_CHSELR_0
#undef ADC_JSQR_0_JSQ4
#undef ADC_SMPR1_0
#undef ADC_Common_CSR_1_EOC1
#undef ADC_Common_CSR_1_OVR1
#undef ADC_CR1_OVRIE
#undef ADC_Common_CCR_0_VREFEN
#undef ADC_Common_CSR_0_JQOVF_SLV
#undef ADC_MAP4_SMPR3
#undef ADC_CCR_0_CKMODE
#undef ADC_Common_CSR_1_JEOC3
#undef ADC_ISR_1_AWD
#undef ADC_ISR_0_AWD2
#undef ADC_IER_1_DMAOVFIE
#undef ADC_Common_CSR_0_AWD3_SLV
#undef ADC_MAP2_JDR3
#undef ADC_CR2_1_CFG
#undef ADC_SR_JCNR
#undef ADC_MAP1_OFR2
#undef ADC_ISR_0_AWD1
#undef ADC_Common_CSR_1_OVR3
#undef ADC123_Common_TMPL
#undef ADC_CR2_1_JSWSTART
#undef ADC_Common_CCR_0_VBATEN
#undef ADC_MAP2_HTR
#undef ADC_CSR_0_AWD3_MST
#undef ADC_MAP0_HTR3
#undef ADC_CR_0_DEEPPWD
#undef ADC_IER_0_JEOCIE
#undef ADC_CR2_0_CAL
#undef ADC_Common_MAP0_VERR
#undef ADC_SQR4_1
#undef ADC_MAP2_SMPR1
#undef ADC2_TMPL
#undef ADC_IER_0_EOCALIE
#undef ADC_MAP5_JDR3
#undef ADC_MAP0_JDR1
#undef ADC_MAP2_CCR
#undef ADC_MAP0_AWD2CR
#undef ADC_SQR1_1_SQ16
#undef ADC_CFGR2_2
#undef ADC_SQR1_3
#undef ADC_Common_CCR_0_TSEN
#undef C_ADC_TMPL
#undef ADC_TMPL
#undef ADC_SQR3_1
#undef ADC1_2_TMPL
#undef ADC_CSR_0_JSTRT1
#undef ADC_MAP0_ISR
#undef ADC_ISR_0_JEOS
#undef ADC_CFGR2_1
#undef ADC_IER_0
#undef ADC_CFGR2_0_OVSR
#undef ADC_CSR_0_AWD1
#undef ADC_CFGR2_0_LSHIFT
#undef ADC_MAP5_DMANDTR
#undef ADC_SMPR2_0_SMP19
#undef ADC_ISR_1_SAT
#undef ADC_JSQR_0
#undef ADC_JSQR_1
#undef ADC_CFGR2_1_LFTRIG
#undef ADC_MAP5_GAINR
#undef ADC_MAP1_SMPR1
#undef ADC_ISR_1_DMAOVF
#undef ADC_CFGR_1_ALIGN
#undef ADC_CFGR2_1_GCOMP
#undef ADC_AWD2CR_3
#undef ADC_Common_CSR_1_ADONS1
#undef ADC_Common_CSR_0_JEOC_SLV
#undef ADC_MAP2_JOFR1
#undef ADC_MAP4_HWCFGR2
#undef ADC_JDR1_0
#undef ADC_Common_CSR_1_STRT3
#undef ADC_CFGR2_0_JOVSE
#undef ADC_CFGR2_1_TOVS
#undef ADC_MAP0_OFR2
#undef ADC_JSQR_0_JEXTEN
#undef ADC_MAP2_JDR1
#undef ADC_SMPRx_0
#undef ADC_SMPR_0_SMPSEL
#undef ADC_DR_2
#undef ADC12_Common_TMPL
#undef ADC_CSR_0_AWD1_MST
#undef ADC_MAP5_DR
#undef ADC_DR_3
#undef ADC_MAP1_OFR4
#undef ADC_CR2_0_JSWSTART
#undef ADC_MAP2
#undef ADC3_TMPL
#undef ADC_CFGR2_0_ROVSE
#undef ADC_SQR1_1_SQ14
#undef ADC_MAP0_CCR
#undef ADC_PCSEL_1
#undef ADC_ISR_0_CCRDY
#undef ADC_MAP2_JOFR4
#undef ADC_JSQR_0_JSQ3
#undef ADC_MAP5_JDR1
#undef ADC_IPIDR_1
#undef ADC_Common_CCR_0_DELAY
#undef ADC_CALFACT_2
#undef ADC_MAP2_DR
#undef ADC_CALFACT_0
#undef ADC_CFGR_2
#undef ADC_SQR4_0_SQ10
#undef ADC_CSR_0_JQOVF_MST
#undef ADC_Common_CSR_0_OVR_MST
#undef ADC_MAP4_HWCFGR3
#undef ADC_Common_CSR_1_AWD2
#undef ADC_Common_CCR_1_DDS
#undef ADC_Common_CSR_1
#undef ADC_MAP0_CFGR
#undef ADC_Common_CCR_1_MDMA
#undef ADC_JDR4_0
#undef ADC_DR_5
#undef ADC_Common_CCR_1_MULT
#undef ADC_CCR_1_TSVREFE
#undef ADC_Common_CCR_0
#undef ADC_MAP5_DMASR
#undef ADC_Common_CSR_0_EOSMP_MST
#undef ADC_Common_CSR_0_ADRDY_SLV
#undef ADC_CR_2
#undef ADC_IER_1
#undef ADC_SQR1_2_SQ28
#undef ADC_JDR2_0
#undef ADC_Common_CSR_0_EOSMP_SLV
#undef ADC_MAP3
#undef ADC_IER_1_SATIE
#undef ADC_CFGR2_0_OSR
#undef ADC_SMPR1_0_SMP0
#undef ADC_MAP2_JOFR3
#undef ADC_CCR_0_TSEN
#undef ADC_Common_CSR_0_JEOS_MST
#undef ADC_CR_0_HVSELN
#undef ADC_SQR1_2_SQ13
#undef ADC_MAP0_SQR2
#undef ADC_CALFACT_1
#undef ADC_Common_CDR_1
#undef ADC_CFGR2_0
#undef ADC_MAP0_CALFACT2
#undef ADC_SQR4_0_SQ12
#undef ADC_CSR_0_JEOS_MST
#undef ADC_MAP5_JOFR3
#undef ADC_IER_1_DMABFIE
#undef ADC_CFGR_1_EXTSEL
#undef ADC_MAP2_CSR
#undef ADC_SMPR2_0
#undef ADC_Common_CSR_0
#undef ADC_CSR_0_OVR1
#undef ADC_CR1_RES
#undef ADC_CCR_1_VBATE
#undef ADC_CR_1_CHSELN
#undef ADC_Common_CSR_0_AWD1_SLV
#undef ADC_CCR_0_LFMEN
#undef ADC_MAP1_DIFSEL
#undef ADC_MAP0_JDR4
#undef ADC_CFGR1_0_AWDSGL
#undef ADC_MAP2_CR2
#undef ADC_CFGR2_0_BULB
#undef ADC_Common_ADC3_4
#undef ADC_MAP1_CCR
#undef ADC_MAP1_OFR3
#undef ADC_Common_ADC123_Common
#undef ADC3_4_TMPL
#undef ADC_SR_ADONS
#undef ADC_SQR2_1
#undef ADC_ISR_1
#undef ADC_DIFSEL_0
#undef ADC_MAP2_GCOMP
#undef ADC_Common_CSR_1_AWD3
#undef ADC_MAP0_SQR1
#undef ADC_Common_CCR_1_VBATE
#undef ADC_Common_CSR_0_STRT2
#undef ADC_MAP4_AWD2TR
#undef ADC_JSQR_2
#undef ADC_MAP0_PCSEL
#undef ADC_SMPR_0_SMPR
#undef ADC_CR_0_JADSTP
#undef ADC_SQR1_2
#undef ADC_CFGR_0_JQDIS
#undef ADC_Common_CCR_2
#undef ADC_CSR_0_STRT1
#undef ADC_ISR_0_AWD3
#undef ADC_Common_MAP0_CSR
#undef ADC_Common_CCR_0_PRESC
#undef ADC_SMPR1_1_SMP18
#undef ADC_MAP1_CALFACT
#undef ADC_CR_1_BOOST
#undef ADC_Common_CSR_1_JEOC2
#undef ADC_CFGR1_0_AWDEN
#undef ADC_Common_MAP2_CDR
#undef ADC_CR2_1_JEXTSEL
#undef ADC_Common_CSR_0_JQOVF_MST
#undef ADC_SMPR_0_SMP2
#undef ADC_CFGR_2_DFSDMCFG
#undef ADC_SQR2_2
#undef ADC_CR_0_SMP
#undef ADC_CR2_0_SWSTART
#undef ADC_CR_0_ADSTART
#undef ADC_Common_ADC12_Common
#undef ADC_SQR3_0
#undef ADC_MAP1_OFR1
#undef ADC_SQR2_0
#undef ADC_Common_MAP0_IPIDR
#undef ADC_MAP0_JDR3
#undef ADC_CCR_1_ADCPRE
#undef ADC_MAP5_OFFSETR
#undef ADC_SQR3_2
#undef ADC_CR2_0_JEXTSEL
#undef ADC_Common_ADC3_Common
#undef ADC_CHSELR_1
#undef ADC_MAP0_OFR4
#undef ADC_Common_ADC_Common
#undef ADC_MAP0_HTR2
#undef ADC_MAP0_OFR1
#undef ADC_MAP3_TR
#undef ADC_SR_OVR
#undef ADC_Common_CCR_0_CKMODE
#undef ADC_Common_CSR_1_JEOC1
#undef ADC_CFGR_1_DMACFG
#undef ADC_MAP5_CR
#undef ADC_SQR4_0_SQ11
#undef ADC_CR2_0_EXTEN
#undef ADC4_TMPL
#undef ADC_ISR_0
#undef ADC_CR2_0_JEXTTRIG
#undef ADC_Common_MAP0_CDR2
#undef ADC_Common_CDR_0
#undef ADC_MAP1_CR1
#undef ADC_CR2_1_SWSTART
#undef ADC_Common_CSR_1_EOC2
#undef ADC_MAP0_IPIDR
#undef ADC_Common_CSR_1_STRT1
#undef ADC_CR2_0_EOCS
#undef ADC_CFGR2_1_SWTRIG
#undef ADC_CFGR2_1_OVSE
#undef ADC_CFGR_0_DMNGT
#undef ADC_JDR3_1
#undef ADC_CR2_0_DDS
#undef ADC_MAP0_OR
#undef ADC3_Common_TMPL
#undef ADC_CFGR2_0_RSHIFT1
#undef ADC_MAP2_JDR4
#undef ADC_Common_CSR_1_JSTRT1
#undef ADC_MAP5_DMACR


#endif //__SOOL_CORE_ADC_H