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


//Generated 2020-05-25T19:00:24.390808

#ifndef __SOOL_CORE_TIM_H
#define __SOOL_CORE_TIM_H
#include "lib_utils/peripheral_include.h"
#include "RCC.h"



#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L1      ) || \
    defined(STM32L4      ) || defined(STM32W1      ) || defined(STM32WB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || \
    defined(STM32F398xx  )
#if	defined(STM32W1      )
#define PERIPH_MAC_TIM
#define TIM_GENERAL_6_TIMx_ISR
#define TIM_GENERAL_6_TIMx_MISSR
#define TIM_GENERAL_6_TIMx_CR1
#define TIM_GENERAL_6_TIMx_IER
#define TIM_GENERAL_6_TIMx_CR2
#define TIM_GENERAL_6_TIMx_SMCR
#define TIM_GENERAL_6_TIMx_EGR
#define TIM_GENERAL_6_TIMx_CCMR1_Input
#define TIM_GENERAL_6_TIMx_CCMR1_Output
#define TIM_GENERAL_6_TIMx_CCMR2_Input
#define TIM_GENERAL_6_TIMx_CCMR2_Output
#define TIM_GENERAL_6_TIMx_CCER
#define TIM_GENERAL_6_TIMx_CNT
#define TIM_GENERAL_6_TIMx_CCRx
#define TIM_GENERAL_6_TIM1_OR
#define TIM_GENERAL_6_TIM2_OR
#define TIM_GENERAL_6_MAP1_TIM1_ISR TIMx_ISR_t TIM1_ISR
#define TIM_GENERAL_6_MAP1_TIM1_CCMR1_Output TIMx_CCMR1_Output_t TIM1_CCMR1_Output
#define TIM_GENERAL_6_MAP1_TIM1_CCMR2_Input TIMx_CCMR2_Input_t TIM1_CCMR2_Input
#define TIM_GENERAL_6_MAP2
#define TIM_GENERAL_6_MAP3
#else
#define TIM_GENERAL_6_MAP1_TIM1_ISR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_6_MAP1_TIM1_CCMR1_Output __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_6_MAP1_TIM1_CCMR2_Input __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L4      ) || defined(STM32WB      )
#define PERIPH_TIM_ADVANCED
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32WB      ) || \
    defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  )
#define TIM_ADVANCED_CR1_UIFREMAP UIFREMAP
#define TIM_ADVANCED_CR2_OIS5 OIS5
#define TIM_ADVANCED_CR2_OIS6 OIS6
#define TIM_ADVANCED_CR2_MMS2 MMS2
#define TIM_ADVANCED_SR_B2IF B2IF
#else
#define TIM_ADVANCED_CR1_UIFREMAP
#define TIM_ADVANCED_CR2_OIS5
#define TIM_ADVANCED_CR2_OIS6
#define TIM_ADVANCED_CR2_MMS2
#define TIM_ADVANCED_SR_B2IF
#endif

#if	defined(STM32G4      ) || defined(STM32GB      )
#define TIM_ADVANCED_CR1_DITHEN DITHEN
#define TIM_ADVANCED_CR2_OIS4N OIS4N
#define TIM_ADVANCED_CR2_MMS_3 MMS_3
#define TIM_ADVANCED_SMCR_0_SMSPE SMSPE
#define TIM_ADVANCED_SMCR_0_SMSPS SMSPS
#define TIM_ADVANCED_DIER_IDXIE IDXIE
#define TIM_ADVANCED_DIER_DIRIE DIRIE
#define TIM_ADVANCED_DIER_IERRIE IERRIE
#define TIM_ADVANCED_DIER_TERRIE TERRIE
#define TIM_ADVANCED_SR_IDXF IDXF
#define TIM_ADVANCED_SR_DIRF DIRF
#define TIM_ADVANCED_SR_IERRF IERRF
#define TIM_ADVANCED_SR_TERRF TERRF
#define TIM_ADVANCED_CCER_CC4NE CC4NE
#define TIM_ADVANCED_AF1_0_BKCMP3E BKCMP3E
#define TIM_ADVANCED_AF1_0_BKCMP4E BKCMP4E
#define TIM_ADVANCED_AF1_0_BKCMP5E BKCMP5E
#define TIM_ADVANCED_AF1_0_BKCMP6E BKCMP6E
#define TIM_ADVANCED_AF1_0_BKCMP7E BKCMP7E
#define TIM_ADVANCED_AF1_0_BKCMP3P BKCMP3P
#define TIM_ADVANCED_AF1_0_BKCMP4P BKCMP4P
#define TIM_ADVANCED_AF2_0_BK2CMP3E BK2CMP3E
#define TIM_ADVANCED_AF2_0_BK2CMP4E BK2CMP4E
#define TIM_ADVANCED_AF2_0_BK2CMP5E BK2CMP5E
#define TIM_ADVANCED_AF2_0_BK2CMP6E BK2CMP6E
#define TIM_ADVANCED_AF2_0_BK2CMP7E BK2CMP7E
#define TIM_ADVANCED_AF2_0_BK2CMP3P BK2CMP3P
#define TIM_ADVANCED_AF2_0_BK2CMP4P BK2CMP4P
#define TIM_ADVANCED_AF2_0_OCRSEL OCRSEL
#define TIM_ADVANCED_AF2_1_BKINE BKINE
#define TIM_ADVANCED_DTR2
#define TIM_ADVANCED_ECR
#define TIM_ADVANCED_MAP0_CCR5 CCR5_t CCR5
#define TIM_ADVANCED_MAP2
#define TIM_BASIC_CR1_DITHEN DITHEN
#define TIM_GENERAL_2_CR1_DITHEN DITHEN
#define TIM_GENERAL_2_SMCR_0_TS_4_3 TS_4_3
#define TIM_GENERAL_2_CCMR1_Output_0_OC1CE OC1CE
#define TIM_GENERAL_2_BDTR_BKDSRM BKDSRM
#define TIM_GENERAL_2_BDTR_BKBID BKBID
#define TIM_GENERAL_2_DTR2
#define TIM_GENERAL_2_TISEL
#define TIM_GENERAL_2_AF1
#define TIM_GENERAL_2_AF2
#define TIM_GENERAL_2_DMAR_0
#define TIM_GENERAL_2_MAP1_DTR2 DTR2_t DTR2
#define TIM_GENERAL_2_MAP1_TISEL TISEL_t TISEL
#define TIM_GENERAL_2_MAP1_AF1 AF1_t AF1
#define TIM_GENERAL_2_MAP1_AF2 AF2_t AF2
#define TIM_GENERAL_2_MAP1_DCR DCR_t DCR
#define TIM_GENERAL_2_MAP1_DMAR DMAR_t DMAR
#define TIM_GENERAL_3_CR1_0_DITHEN DITHEN
#define TIM_GENERAL_3_DMAR_1
#define TIM_GENERAL_3_DTR2
#define TIM_GENERAL_3_AF1_BKCMP3E BKCMP3E
#define TIM_GENERAL_3_AF1_BKCMP4E BKCMP4E
#define TIM_GENERAL_3_AF1_BKCMP5E BKCMP5E
#define TIM_GENERAL_3_AF1_BKCMP6E BKCMP6E
#define TIM_GENERAL_3_AF1_BKCMP7E BKCMP7E
#define TIM_GENERAL_3_AF1_BKCMP3P BKCMP3P
#define TIM_GENERAL_3_AF1_BKCMP4P BKCMP4P
#define TIM_GENERAL_3_AF2
#define TIM_GENERAL_3_MAP0_DCR DCR_t DCR
#define TIM_GENERAL_3_MAP0_DMAR DMAR_t DMAR
#define TIM_GENERAL_3_MAP1_DTR2 DTR2_t DTR2
#define TIM_GENERAL_3_MAP1_TISEL TISEL_t TISEL
#define TIM_GENERAL_3_MAP1_AF2 AF2_t AF2
#else
#define TIM_ADVANCED_CR1_DITHEN
#define TIM_ADVANCED_CR2_OIS4N
#define TIM_ADVANCED_CR2_MMS_3
#define TIM_ADVANCED_SMCR_0_SMSPE
#define TIM_ADVANCED_SMCR_0_SMSPS
#define TIM_ADVANCED_DIER_IDXIE
#define TIM_ADVANCED_DIER_DIRIE
#define TIM_ADVANCED_DIER_IERRIE
#define TIM_ADVANCED_DIER_TERRIE
#define TIM_ADVANCED_SR_IDXF
#define TIM_ADVANCED_SR_DIRF
#define TIM_ADVANCED_SR_IERRF
#define TIM_ADVANCED_SR_TERRF
#define TIM_ADVANCED_CCER_CC4NE
#define TIM_ADVANCED_AF1_0_BKCMP3E
#define TIM_ADVANCED_AF1_0_BKCMP4E
#define TIM_ADVANCED_AF1_0_BKCMP5E
#define TIM_ADVANCED_AF1_0_BKCMP6E
#define TIM_ADVANCED_AF1_0_BKCMP7E
#define TIM_ADVANCED_AF1_0_BKCMP3P
#define TIM_ADVANCED_AF1_0_BKCMP4P
#define TIM_ADVANCED_AF2_0_BK2CMP3E
#define TIM_ADVANCED_AF2_0_BK2CMP4E
#define TIM_ADVANCED_AF2_0_BK2CMP5E
#define TIM_ADVANCED_AF2_0_BK2CMP6E
#define TIM_ADVANCED_AF2_0_BK2CMP7E
#define TIM_ADVANCED_AF2_0_BK2CMP3P
#define TIM_ADVANCED_AF2_0_BK2CMP4P
#define TIM_ADVANCED_AF2_0_OCRSEL
#define TIM_ADVANCED_AF2_1_BKINE
#define TIM_ADVANCED_MAP0_CCR5 __SOOL_PERIPH_PADDING_4
#define TIM_BASIC_CR1_DITHEN
#define TIM_GENERAL_2_CR1_DITHEN
#define TIM_GENERAL_2_SMCR_0_TS_4_3
#define TIM_GENERAL_2_CCMR1_Output_0_OC1CE
#define TIM_GENERAL_2_BDTR_BKDSRM
#define TIM_GENERAL_2_BDTR_BKBID
#define TIM_GENERAL_2_MAP1_DTR2 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_2_MAP1_TISEL __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_2_MAP1_AF1 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_2_MAP1_AF2 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_2_MAP1_DCR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_2_MAP1_DMAR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_CR1_0_DITHEN
#define TIM_GENERAL_3_AF1_BKCMP3E
#define TIM_GENERAL_3_AF1_BKCMP4E
#define TIM_GENERAL_3_AF1_BKCMP5E
#define TIM_GENERAL_3_AF1_BKCMP6E
#define TIM_GENERAL_3_AF1_BKCMP7E
#define TIM_GENERAL_3_AF1_BKCMP3P
#define TIM_GENERAL_3_AF1_BKCMP4P
#define TIM_GENERAL_3_MAP0_DCR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP0_DMAR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP1_DTR2 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP1_TISEL __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP1_AF2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  )
#define TIM_ADVANCED_SMCR_0_OCCS OCCS
#else
#define TIM_ADVANCED_SMCR_0_OCCS
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G4      ) || \
    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L4      ) || defined(STM32WB      )
#define TIM_ADVANCED_SMCR_0_TS TS
#define TIM_ADVANCED_CCMR1_Input_0_IC2F IC2F
#define TIM_ADVANCED_CCMR2_Input_0_IC3F IC3F
#define TIM_ADVANCED_CCMR2_Input_0_IC4PSC IC4PSC
#define TIM_ADVANCED_CCMR2_Input_0_IC4F IC4F
#else
#define TIM_ADVANCED_SMCR_0_TS
#define TIM_ADVANCED_CCMR1_Input_0_IC2F
#define TIM_ADVANCED_CCMR2_Input_0_IC3F
#define TIM_ADVANCED_CCMR2_Input_0_IC4PSC
#define TIM_ADVANCED_CCMR2_Input_0_IC4F
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32WB      ) || \
    defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || \
    defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  )
#define TIM_ADVANCED_SMCR_0_SMS_3 SMS_3
#else
#define TIM_ADVANCED_SMCR_0_SMS_3
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      )
#define TIM_ADVANCED_SMCR_0_TS_4_3 TS_4_3
#define TIM_ADVANCED_AF1_0_ETRSEL ETRSEL
#define TIM_ADVANCED_TISEL_0
#else
#define TIM_ADVANCED_SMCR_0_TS_4_3
#define TIM_ADVANCED_AF1_0_ETRSEL
#endif

#if	defined(STM32G0      )
#define TIM_ADVANCED_SMCR_1
#define TIM_ADVANCED_CCMR1_Input_1_OC2M OC2M
#define TIM_ADVANCED_CCMR1_Input_1_OC2CE OC2CE
#define TIM_ADVANCED_CCMR1_Input_2_OC1M OC1M
#define TIM_ADVANCED_CCMR1_Input_2_OC1CE OC1CE
#define TIM_ADVANCED_CCMR1_Input_2_OC2FE OC2FE
#define TIM_ADVANCED_CCMR1_Input_2_OC2PE OC2PE
#define TIM_ADVANCED_CCMR1_Input_4
#define TIM_ADVANCED_CCMR2_Input_1_OC3M OC3M
#define TIM_ADVANCED_CCMR2_Input_1_OC3CE OC3CE
#define TIM_ADVANCED_CCMR2_Input_1_OC4FE OC4FE
#define TIM_ADVANCED_CCMR2_Input_1_OC4PE OC4PE
#define TIM_ADVANCED_CCMR2_Input_1_OC4M OC4M
#define TIM_ADVANCED_CCMR2_Input_1_OC4CE OC4CE
#define TIM_ADVANCED_CCMR2_Input_2
#define TIM_ADVANCED_OR1_3
#define TIM_GENERAL_1_OR1_3
#define TIM_GENERAL_3_AF1_BKDFBK1E BKDFBK1E
#define TIM_GENERAL_3_MAP3_TISEL TISEL_t TISEL
#define TIM_GENERAL_6_CR1_UIFREMAP UIFREMAP
#define TIM_GENERAL_6_CCMR1_Output_OC1CE OC1CE
#define TIM_GENERAL_6_CNT_UIFCPY UIFCPY
#define TIM_GENERAL_6_TISEL
#define TIM_GENERAL_6_MAP1_TISEL TISEL_t TISEL
#else
#define TIM_ADVANCED_CCMR1_Input_1_OC2M
#define TIM_ADVANCED_CCMR1_Input_1_OC2CE
#define TIM_ADVANCED_CCMR1_Input_2_OC1M
#define TIM_ADVANCED_CCMR1_Input_2_OC1CE
#define TIM_ADVANCED_CCMR1_Input_2_OC2FE
#define TIM_ADVANCED_CCMR1_Input_2_OC2PE
#define TIM_ADVANCED_CCMR2_Input_1_OC3M
#define TIM_ADVANCED_CCMR2_Input_1_OC3CE
#define TIM_ADVANCED_CCMR2_Input_1_OC4FE
#define TIM_ADVANCED_CCMR2_Input_1_OC4PE
#define TIM_ADVANCED_CCMR2_Input_1_OC4M
#define TIM_ADVANCED_CCMR2_Input_1_OC4CE
#define TIM_GENERAL_3_AF1_BKDFBK1E
#define TIM_GENERAL_3_MAP3_TISEL __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_6_CR1_UIFREMAP
#define TIM_GENERAL_6_CCMR1_Output_OC1CE
#define TIM_GENERAL_6_CNT_UIFCPY
#define TIM_GENERAL_6_MAP1_TISEL __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32WB      ) || \
    defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_ADVANCED_SR_SBIF SBIF
#define TIM_ADVANCED_SR_CC5IF CC5IF
#define TIM_ADVANCED_SR_CC6IF CC6IF
#else
#define TIM_ADVANCED_SR_SBIF
#define TIM_ADVANCED_SR_CC5IF
#define TIM_ADVANCED_SR_CC6IF
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32WB      ) || \
    defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || \
    defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_ADVANCED_EGR_B2G B2G
#define TIM_ADVANCED_CCMR1_Output_OC1M_3 OC1M_3
#define TIM_ADVANCED_CCMR1_Output_OC2M_3 OC2M_3
#define TIM_ADVANCED_CCMR2_Output_0_OC3M_3 OC3M_3
#define TIM_ADVANCED_CCER_CC4NP CC4NP
#define TIM_ADVANCED_CCER_CC5E CC5E
#define TIM_ADVANCED_CCER_CC5P CC5P
#define TIM_ADVANCED_CCER_CC6E CC6E
#define TIM_ADVANCED_CCER_CC6P CC6P
#define TIM_ADVANCED_CNT_UIFCPY UIFCPY
#define TIM_ADVANCED_BDTR_BKF BKF
#define TIM_ADVANCED_BDTR_BK2F BK2F
#define TIM_ADVANCED_BDTR_BK2E BK2E
#define TIM_ADVANCED_BDTR_BK2P BK2P
#else
#define TIM_ADVANCED_EGR_B2G
#define TIM_ADVANCED_CCMR1_Output_OC1M_3
#define TIM_ADVANCED_CCMR1_Output_OC2M_3
#define TIM_ADVANCED_CCMR2_Output_0_OC3M_3
#define TIM_ADVANCED_CCER_CC4NP
#define TIM_ADVANCED_CCER_CC5E
#define TIM_ADVANCED_CCER_CC5P
#define TIM_ADVANCED_CCER_CC6E
#define TIM_ADVANCED_CCER_CC6P
#define TIM_ADVANCED_CNT_UIFCPY
#define TIM_ADVANCED_BDTR_BKF
#define TIM_ADVANCED_BDTR_BK2F
#define TIM_ADVANCED_BDTR_BK2E
#define TIM_ADVANCED_BDTR_BK2P
#endif

#if	defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L4      ) || \
    defined(STM32F215xx  ) || defined(STM32F217xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F410Cx  ) || \
    defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM_ADVANCED_CCMR1_Input_0_ICPCS ICPCS
#else
#define TIM_ADVANCED_CCMR1_Input_0_ICPCS
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G4      ) || \
    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L4      )
#define TIM_ADVANCED_CCMR1_Input_0_IC1F IC1F
#define TIM_ADVANCED_CCMR2_Input_0_IC3PSC IC3PSC
#else
#define TIM_ADVANCED_CCMR1_Input_0_IC1F
#define TIM_ADVANCED_CCMR2_Input_0_IC3PSC
#endif

#if	defined(STM32F0      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32L4      ) || defined(STM32F215xx  ) || \
    defined(STM32F217xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || \
    defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM_ADVANCED_CCMR1_Input_0_IC2PCS IC2PCS
#else
#define TIM_ADVANCED_CCMR1_Input_0_IC2PCS
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || defined(STM32F205xx  ) || \
    defined(STM32F207xx  ) || defined(STM32F405xx  ) || defined(STM32F407xx  )
#define TIM_ADVANCED_CCMR1_Input_1
#endif

#if	defined(STM32F205xx  ) || defined(STM32F207xx  )
#define TIM_ADVANCED_CCMR1_Input_1_ICPSC ICPSC
#else
#define TIM_ADVANCED_CCMR1_Input_1_ICPSC
#endif

#if	defined(STM32WB      )
#define TIM_ADVANCED_CCMR1_Input_1_C1F C1F
#define TIM_ADVANCED_CCMR2_Input_1_C3PSC C3PSC
#define TIM_ADVANCED_OR
#define TIM_ADVANCED_MAP0_OR OR_t OR
#define TIM_GENERAL_1_CNT_3_UIFCPY UIFCPY
#define TIM_GENERAL_1_OR_4
#define TIM_GENERAL_1_MAP3_AF typename tmpl::OR2_t AF
#define TIM_GENERAL_3_CR1_1
#define TIM_GENERAL_3_CR1_2
#define TIM_GENERAL_3_DIER_1
#define TIM_GENERAL_3_MAP0_CCER CCER_t CCER
#define TIM_GENERAL_3_MAP0_CNT CNT_t CNT
#define TIM_GENERAL_3_MAP0_PSC PSC_t PSC
#define TIM_GENERAL_3_MAP0_ARR ARR_t ARR
#define TIM_GENERAL_3_MAP0_RCR RCR_t RCR
#define TIM_GENERAL_3_MAP0_CCR1 CCR1_t CCR1
#define TIM_GENERAL_3_MAP0_BDTR BDTR_t BDTR
#define TIM_GENERAL_3_MAP1_DIER typename tmpl::CR1_t DIER
#define TIM_GENERAL_3_MAP2
#define TIM_GENERAL_3_MAP3_DIER typename tmpl::DIER_t DIER
#define TIM_GENERAL_3_MAP3_SR SR_t SR
#define TIM_GENERAL_3_MAP3_EGR EGR_t EGR
#define TIM_GENERAL_3_MAP3_CCMR1_Output CCMR1_Output_t CCMR1_Output
#define TIM_GENERAL_3_MAP3_OR typename tmpl::OR_t OR
#define TIM_GENERAL_3_MAP3_AF1 typename tmpl::CR1_t AF1
#else
#define TIM_ADVANCED_CCMR1_Input_1_C1F
#define TIM_ADVANCED_CCMR2_Input_1_C3PSC
#define TIM_ADVANCED_MAP0_OR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_1_CNT_3_UIFCPY
#define TIM_GENERAL_1_MAP3_AF __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP0_CCER __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP0_CNT __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP0_PSC __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP0_ARR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP0_RCR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP0_CCR1 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP0_BDTR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP1_DIER __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP3_DIER __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP3_SR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP3_EGR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP3_CCMR1_Output __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP3_OR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP3_AF1 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || defined(STM32F205xx  ) || defined(STM32F207xx  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  )
#define TIM_ADVANCED_CCMR1_Input_1_IC2PSC IC2PSC
#else
#define TIM_ADVANCED_CCMR1_Input_1_IC2PSC
#endif

#if	defined(STM32G0      ) || defined(STM32WB      ) || defined(STM32F405xx  ) || defined(STM32F407xx  )
#define TIM_ADVANCED_CCMR1_Input_2
#endif

#if	defined(STM32WB      ) || defined(STM32F405xx  ) || defined(STM32F407xx  )
#define TIM_ADVANCED_CCMR1_Input_2_IC1PSC IC1PSC
#else
#define TIM_ADVANCED_CCMR1_Input_2_IC1PSC
#endif

#if	defined(STM32F0      )
#define TIM_ADVANCED_CCMR1_Input_3
#define TIM_GENERAL_1_DMAR_1
#endif

#if	defined(STM32H7      )
#define TIM_ADVANCED_CCMR2_Output_0_OC4M_4 OC4M_4
#define TIM_ADVANCED_AF1_0_BKDF1BK0E BKDF1BK0E
#define TIM_ADVANCED_AF2_0_BK2DF1BK1E BK2DF1BK1E
#define TIM_GENERAL_1_TISEL_TI3SEL TI3SEL
#define TIM_GENERAL_1_TISEL_TI4SEL TI4SEL
#else
#define TIM_ADVANCED_CCMR2_Output_0_OC4M_4
#define TIM_ADVANCED_AF1_0_BKDF1BK0E
#define TIM_ADVANCED_AF2_0_BK2DF1BK1E
#define TIM_GENERAL_1_TISEL_TI3SEL
#define TIM_GENERAL_1_TISEL_TI4SEL
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || defined(STM32F722xx  ) || \
    defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  )
#define TIM_ADVANCED_CCMR2_Output_1
#endif

#if	defined(STM32G0      ) || defined(STM32WB      )
#define TIM_ADVANCED_CCMR2_Input_1
#define TIM_ADVANCED_AF1_1
#define TIM_ADVANCED_AF2_1_BK2DFBK0E BK2DFBK0E
#define TIM_GENERAL_3_MAP3
#else
#define TIM_ADVANCED_AF2_1_BK2DFBK0E
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || \
    defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || \
    defined(STM32H757xx_CORE_CM7)
#define TIM_ADVANCED_DMAR_0
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32G0      ) || defined(STM32L4      ) || \
    defined(STM32WB      ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || \
    defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define TIM_ADVANCED_DMAR_1
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32H7      ) || \
    defined(STM32L4      )
#define TIM_ADVANCED_RCR_0
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      )
#define TIM_ADVANCED_RCR_1
#define TIM_ADVANCED_AF2_1
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      )
#define TIM_ADVANCED_BDTR_BKDSRM BKDSRM
#define TIM_ADVANCED_BDTR_BK2DSRM BK2DSRM
#define TIM_ADVANCED_BDTR_BKBID BKBID
#define TIM_ADVANCED_BDTR_BK2ID BK2ID
#define TIM_GENERAL_3_BDTR_BKDSRM BKDSRM
#define TIM_GENERAL_3_BDTR_BKBID BKBID
#define TIM_GENERAL_3_TISEL
#define TIM_GENERAL_3_AF1
#define TIM_GENERAL_3_MAP0_AF1 AF1_t AF1
#else
#define TIM_ADVANCED_BDTR_BKDSRM
#define TIM_ADVANCED_BDTR_BK2DSRM
#define TIM_ADVANCED_BDTR_BKBID
#define TIM_ADVANCED_BDTR_BK2ID
#define TIM_GENERAL_3_BDTR_BKDSRM
#define TIM_GENERAL_3_BDTR_BKBID
#define TIM_GENERAL_3_MAP0_AF1 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || \
    defined(STM32L4      ) || defined(STM32WB      )
#define TIM_ADVANCED_CCMR3_Output
#define TIM_ADVANCED_CCR5
#define TIM_ADVANCED_CxR6
#endif

#if	defined(STM32F7      ) || defined(STM32H7      )
#define TIM_ADVANCED_CCMR3_Output_0_OC5M3 OC5M3
#define TIM_ADVANCED_CCMR3_Output_0_OC6M3 OC6M3
#else
#define TIM_ADVANCED_CCMR3_Output_0_OC5M3
#define TIM_ADVANCED_CCMR3_Output_0_OC6M3
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
#define TIM_ADVANCED_CCMR3_Output_1
#define TIM_GENERAL_3_CNT_UIFCPY UIFCPY
#else
#define TIM_GENERAL_3_CNT_UIFCPY
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_ADVANCED_CCMR3_Output_1_OC5M_bit3 OC5M_bit3
#else
#define TIM_ADVANCED_CCMR3_Output_1_OC5M_bit3
#endif

#if	defined(STM32G0      ) || defined(STM32WB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_ADVANCED_CCMR3_Output_2
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32WB      )
#define TIM_ADVANCED_AF1
#define TIM_ADVANCED_AF2
#define TIM_ADVANCED_MAP1_AF1 AF1_t AF1
#define TIM_ADVANCED_MAP1_AF2 AF2_t AF2
#else
#define TIM_ADVANCED_MAP1_AF1 __SOOL_PERIPH_PADDING_4
#define TIM_ADVANCED_MAP1_AF2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32H7      ) || defined(STM32WB      )
#define TIM_ADVANCED_AF2_0_BK2INE BK2INE
#else
#define TIM_ADVANCED_AF2_0_BK2INE
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32G030xx  ) || defined(STM32G031xx  ) || \
    defined(STM32G041xx  )
#define TIM_ADVANCED_TISEL
#endif

#if	defined(STM32G030xx  ) || defined(STM32G031xx  ) || defined(STM32G041xx  )
#define TIM_ADVANCED_TISEL_1
#endif

#if	defined(STM32G0      ) || defined(STM32L4      )
#define TIM_ADVANCED_OR1
#define TIM_ADVANCED_MAP1_OR1 typename tmpl::OR1_t OR1
#else
#define TIM_ADVANCED_MAP1_OR1 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_ADVANCED_OR1_0
#define TIM_ADVANCED_OR1_1_ETR_ADC2_RMP ETR_ADC2_RMP
#define TIM_ADVANCED_OR2_0
#define TIM_ADVANCED_OR2_1_BKDFBK2E BKDFBK2E
#define TIM_ADVANCED_OR3_0
#define TIM_ADVANCED_OR3_1_BK2DFBK3E BK2DFBK3E
#define TIM_ADVANCED_TIM_ADVANCED_tmpl_0
#else
#define TIM_ADVANCED_OR1_1_ETR_ADC2_RMP
#define TIM_ADVANCED_OR2_1_BKDFBK2E
#define TIM_ADVANCED_OR3_1_BK2DFBK3E
#endif

#if	defined(STM32L4      )
#define TIM_ADVANCED_OR1_1
#define TIM_ADVANCED_OR2
#define TIM_ADVANCED_OR3
#define TIM_ADVANCED_MAP0_OR2 typename tmpl::OR2_t OR2
#define TIM_ADVANCED_MAP0_OR3 typename tmpl::OR3_t OR3
#define TIM_GENERAL_3_OR2
#define TIM_GENERAL_3_MAP1_OR1 typename tmpl::OR_t OR1
#define TIM_GENERAL_3_MAP1_OR2 typename tmpl::OR2_t OR2
#else
#define TIM_ADVANCED_MAP0_OR2 __SOOL_PERIPH_PADDING_4
#define TIM_ADVANCED_MAP0_OR3 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP1_OR1 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP1_OR2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_ADVANCED_OR1_1_ETR_ADC3_RMP ETR_ADC3_RMP
#else
#define TIM_ADVANCED_OR1_1_ETR_ADC3_RMP
#endif

#if	defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  )
#define TIM_ADVANCED_OR1_2
#define TIM_ADVANCED_OR2_2
#endif

#if	defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  )
#define TIM_ADVANCED_OR3_2
#endif

#if	defined(STM32G0      ) || defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  )
#define TIM_ADVANCED_MAP0_CCR6 CxR6_t CCR6
#else
#define TIM_ADVANCED_MAP0_CCR6 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32H7      ) || defined(STM32L4      ) || defined(STM32WB      )
#define TIM_ADVANCED_MAP1_DCR DCR_t DCR
#define TIM_ADVANCED_MAP1_DMAR DMAR_t DMAR
#else
#define TIM_ADVANCED_MAP1_DCR __SOOL_PERIPH_PADDING_4
#define TIM_ADVANCED_MAP1_DMAR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32H7      ) || defined(STM32L4      ) || defined(STM32WB      )
#define TIM_ADVANCED_MAP1_CCMR3_Output CCMR3_Output_t CCMR3_Output
#define TIM_ADVANCED_MAP1_CCR5 CCR5_t CCR5
#else
#define TIM_ADVANCED_MAP1_CCMR3_Output __SOOL_PERIPH_PADDING_4
#define TIM_ADVANCED_MAP1_CCR5 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32H7      ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  )
#define TIM_ADVANCED_MAP1_CRR6 CxR6_t CRR6
#else
#define TIM_ADVANCED_MAP1_CRR6 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32H7      ) || defined(STM32G030xx  ) || defined(STM32G031xx  ) || defined(STM32G041xx  )
#define TIM_ADVANCED_MAP1_TISEL TISEL_t TISEL
#else
#define TIM_ADVANCED_MAP1_TISEL __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || \
    defined(STM32F398xx  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || \
    defined(STM32F410Tx  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || \
    defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  ) || defined(STM32L011xx  ) || \
    defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L051xx  ) || defined(STM32L052xx  ) || \
    defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || defined(STM32L071xx  ) || defined(STM32L072xx  ) || \
    defined(STM32L073xx  ) || defined(STM32L081xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define PERIPH_TIM_BASIC
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F423xx  ) || defined(STM32G070xx  ) || \
    defined(STM32G071xx  ) || defined(STM32G081xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_BASIC_CR1_UIFREMAP UIFREMAP
#else
#define TIM_BASIC_CR1_UIFREMAP
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F423xx  ) || defined(STM32F722xx  ) || \
    defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32G070xx  ) || \
    defined(STM32G071xx  ) || defined(STM32G081xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_BASIC_CNT_UIFCPY UIFCPY
#else
#define TIM_BASIC_CNT_UIFCPY
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32WB      ) || \
    defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define PERIPH_TIM_GENERAL_1
#endif

#if	defined(STM32G0      ) || defined(STM32H7      ) || defined(STM32WB      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_GENERAL_1_CR1_UIFREMAP UIFREMAP
#define TIM_GENERAL_1_CCMR1_Output_0_OC1M_3 OC1M_3
#define TIM_GENERAL_1_CCMR1_Output_0_OC2M_3 OC2M_3
#define TIM_GENERAL_1_CCMR2_Output_0_OC3M_3 OC3M_3
#define TIM_GENERAL_1_CCMR2_Output_0_OC4M_3 OC4M_3
#else
#define TIM_GENERAL_1_CR1_UIFREMAP
#define TIM_GENERAL_1_CCMR1_Output_0_OC1M_3
#define TIM_GENERAL_1_CCMR1_Output_0_OC2M_3
#define TIM_GENERAL_1_CCMR2_Output_0_OC3M_3
#define TIM_GENERAL_1_CCMR2_Output_0_OC4M_3
#endif

#if	defined(STM32G0      ) || defined(STM32L1      ) || defined(STM32WB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_GENERAL_1_SMCR_OCCS OCCS
#else
#define TIM_GENERAL_1_SMCR_OCCS
#endif

#if	defined(STM32G0      ) || defined(STM32H7      ) || defined(STM32WB      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || \
    defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_GENERAL_1_SMCR_SMS_3 SMS_3
#else
#define TIM_GENERAL_1_SMCR_SMS_3
#endif

#if	defined(STM32G0      ) || defined(STM32H7      )
#define TIM_GENERAL_1_SMCR_TS_4_3 TS_4_3
#define TIM_GENERAL_1_AF1
#define TIM_GENERAL_1_TISEL
#define TIM_GENERAL_1_MAP1_AF1 AF1_t AF1
#define TIM_GENERAL_1_MAP1_TISEL TISEL_t TISEL
#else
#define TIM_GENERAL_1_SMCR_TS_4_3
#define TIM_GENERAL_1_MAP1_AF1 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_1_MAP1_TISEL __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || \
    defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || \
    defined(STM32L071xx  ) || defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L081xx  ) || defined(STM32L082xx  ) || \
    defined(STM32L083xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || \
    defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_1_DIER_COMDE COMDE
#else
#define TIM_GENERAL_1_DIER_COMDE
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM_GENERAL_1_DIER_TDE TDE
#else
#define TIM_GENERAL_1_DIER_TDE
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM_GENERAL_1_CCMR1_Output_0_CC2S CC2S
#define TIM_GENERAL_1_CCMR2_Output_0_CC4S CC4S
#define TIM_GENERAL_1_CCR1
#define TIM_GENERAL_1_CCR3
#define TIM_GENERAL_1_MAP1_CCR1 typename tmpl::CCR1_t CCR1
#define TIM_GENERAL_1_MAP1_CCR3 typename tmpl::CCR3_t CCR3
#else
#define TIM_GENERAL_1_CCMR1_Output_0_CC2S
#define TIM_GENERAL_1_CCMR2_Output_0_CC4S
#define TIM_GENERAL_1_MAP1_CCR1 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_1_MAP1_CCR3 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L1      )
#define TIM_GENERAL_1_CCMR1_Output_1
#define TIM_GENERAL_1_CCMR2_Output_1_CC4S CC4S
#define TIM_GENERAL_1_CNT_2_CNT CNT
#define TIM_GENERAL_1_ARR_3
#define TIM_GENERAL_1_CCR2_3
#define TIM_GENERAL_1_CCR4_3
#define TIM_GENERAL_1_CCRx
#define TIM_GENERAL_1_MAP3_CCR1 CCRx_t CCR1
#define TIM_GENERAL_1_MAP3_CCR3 CCRx_t CCR3
#define TIM_GENERAL_4_CR1_1
#define TIM_GENERAL_4_CCMR1_Output_0_OC1CE OC1CE
#define TIM_GENERAL_4_CCMR1_Output_0_OC2CE OC2CE
#define TIM_GENERAL_4_CCMR1_Output_1
#define TIM_GENERAL_4_OR_2
#else
#define TIM_GENERAL_1_CCMR2_Output_1_CC4S
#define TIM_GENERAL_1_CNT_2_CNT
#define TIM_GENERAL_1_MAP3_CCR1 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_1_MAP3_CCR3 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_4_CCMR1_Output_0_OC1CE
#define TIM_GENERAL_4_CCMR1_Output_0_OC2CE
#endif

#if	defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || \
    defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM_GENERAL_1_CCMR1_Input_0_ICPCS ICPCS
#define TIM_GENERAL_1_CCMR1_Input_0_IC2PCS IC2PCS
#else
#define TIM_GENERAL_1_CCMR1_Input_0_ICPCS
#define TIM_GENERAL_1_CCMR1_Input_0_IC2PCS
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32L4      ) || \
    defined(STM32WB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  )
#define TIM_GENERAL_1_CCMR1_Input_1
#endif

#if	defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || \
    defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || \
    defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || \
    defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  )
#define TIM_GENERAL_1_CCMR2_Output_0_O24CE O24CE
#else
#define TIM_GENERAL_1_CCMR2_Output_0_O24CE
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32L1      ) || \
    defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F405xx  ) || defined(STM32F407xx  )
#define TIM_GENERAL_1_CCMR2_Output_1
#endif

#if	defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define TIM_GENERAL_1_CNT_0
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L4      ) || defined(STM32WB      )
#define TIM_GENERAL_1_CNT_1
#define TIM_GENERAL_1_ARR_0
#define TIM_GENERAL_1_CCR1_0
#define TIM_GENERAL_1_CCR2_0
#define TIM_GENERAL_1_CCR3_0
#define TIM_GENERAL_1_CCR4_0
#endif

#if	defined(STM32WB      ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define TIM_GENERAL_1_CNT_1_CNT_H CNT_H
#else
#define TIM_GENERAL_1_CNT_1_CNT_H
#endif

#if	defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  )
#define TIM_GENERAL_1_CNT_1_CNT_31 CNT_31
#else
#define TIM_GENERAL_1_CNT_1_CNT_31
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || \
    defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_1_CNT_2
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32L0      ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || \
    defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_1_CNT_2_CNT_H CNT_H
#else
#define TIM_GENERAL_1_CNT_2_CNT_H
#endif

#if	defined(STM32WB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_GENERAL_1_CNT_3
#define TIM_GENERAL_1_OR2_1
#endif

#if	defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_GENERAL_1_CNT_3_CNT_M CNT_M
#define TIM_GENERAL_1_OR1_2
#define TIM_GENERAL_2_CR2_1
#else
#define TIM_GENERAL_1_CNT_3_CNT_M
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM_GENERAL_1_CNT_4
#define TIM_GENERAL_1_CNT_5
#define TIM_GENERAL_1_ARR_1
#define TIM_GENERAL_1_ARR_2
#define TIM_GENERAL_1_CCR1_1
#define TIM_GENERAL_1_CCR1_2
#define TIM_GENERAL_1_CCR2_1
#define TIM_GENERAL_1_CCR2_2
#define TIM_GENERAL_1_CCR3_1
#define TIM_GENERAL_1_CCR3_2
#define TIM_GENERAL_1_CCR4_1
#define TIM_GENERAL_1_CCR4_2
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32H7      ) || \
    defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM_GENERAL_1_DMAR_0
#endif

#if	defined(STM32F4      ) || defined(STM32L0      ) || defined(STM32WB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || \
    defined(STM32F398xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || \
    defined(STM32F733xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || \
    defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_1_OR
#define TIM_GENERAL_1_MAP1_OR typename tmpl::OR_t OR
#else
#define TIM_GENERAL_1_MAP1_OR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L0      ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_1_OR_0
#endif

#if	defined(STM32L0      ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || \
    defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_1_OR_0_ETR_RMP ETR_RMP
#define TIM_GENERAL_1_OR_0_TI4_RMP TI4_RMP
#else
#define TIM_GENERAL_1_OR_0_ETR_RMP
#define TIM_GENERAL_1_OR_0_TI4_RMP
#endif

#if	defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  )
#define TIM_GENERAL_1_OR_0_IT4_RMP IT4_RMP
#else
#define TIM_GENERAL_1_OR_0_IT4_RMP
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  )
#define TIM_GENERAL_1_OR_1
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM_GENERAL_1_OR_2
#endif

#if	defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  )
#define TIM_GENERAL_1_OR_3
#define TIM_GENERAL_5_CCMR1_Output_OC1M_3 OC1M_3
#define TIM_GENERAL_5_CCMR1_Output_OC2M_3 OC2M_3
#define TIM_GENERAL_6_SMCR_1
#else
#define TIM_GENERAL_5_CCMR1_Output_OC1M_3
#define TIM_GENERAL_5_CCMR1_Output_OC2M_3
#endif

#if	defined(STM32G0      ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || \
    defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_GENERAL_1_OR1
#define TIM_GENERAL_1_MAP0_OR1 typename tmpl::OR1_t OR1
#else
#define TIM_GENERAL_1_MAP0_OR1 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || \
    defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  )
#define TIM_GENERAL_1_OR1_0
#define TIM_GENERAL_1_OR1_1
#define TIM_GENERAL_1_OR2_0
#define TIM_GENERAL_6_SMCR_0
#endif

#if	defined(STM32WB      ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || \
    defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_GENERAL_1_OR2
#endif

#if	defined(STM32F2      )
#define TIM_GENERAL_1_TIMx_OR
#define TIM_GENERAL_1_MAP2
#define TIM_GENERAL_1_MAP3_TIM2_OR typename tmpl::TIMx_OR_t TIM2_OR
#else
#define TIM_GENERAL_1_MAP3_TIM2_OR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || \
    defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  )
#define TIM_GENERAL_1_MAP0_OR2 typename tmpl::OR2_t OR2
#else
#define TIM_GENERAL_1_MAP0_OR2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F2      ) || defined(STM32L1      ) || defined(STM32WB      )
#define TIM_GENERAL_1_MAP3
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || \
    defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || \
    defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || \
    defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || \
    defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || \
    defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define TIM_GENERAL_1_TIM_GENERAL_1_tmpl_0
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || \
    defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || \
    defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || \
    defined(STM32H757xx_CORE_CM7)
#define TIM_GENERAL_1_TIM_GENERAL_1_tmpl_1
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || \
    defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define TIM_GENERAL_1_TIM_GENERAL_1_tmpl_2
#endif

#if	defined(STM32F0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || \
    defined(STM32F398xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  )
#define PERIPH_TIM_GENERAL_2
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L442xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  )
#define TIM_GENERAL_2_CR1_UIFREMAP UIFREMAP
#define TIM_GENERAL_2_DIER_COMDE COMDE
#define TIM_GENERAL_2_CNT_UIFCPY UIFCPY
#else
#define TIM_GENERAL_2_CR1_UIFREMAP
#define TIM_GENERAL_2_DIER_COMDE
#define TIM_GENERAL_2_CNT_UIFCPY
#endif

#if	defined(STM32F0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || \
    defined(STM32F398xx  ) || defined(STM32L431xx  ) || defined(STM32L451xx  ) || defined(STM32L471xx  )
#define TIM_GENERAL_2_CR2_0_MMS MMS
#else
#define TIM_GENERAL_2_CR2_0_MMS
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L471xx  )
#define TIM_GENERAL_2_CR2_0_TI1S TI1S
#define TIM_GENERAL_2_SMCR_0_SMS_3 SMS_3
#define TIM_GENERAL_2_CCMR1_Output_0_OC1M_3 OC1M_3
#define TIM_GENERAL_2_CCMR1_Output_0_OC2M_3 OC2M_3
#else
#define TIM_GENERAL_2_CR2_0_TI1S
#define TIM_GENERAL_2_SMCR_0_SMS_3
#define TIM_GENERAL_2_CCMR1_Output_0_OC1M_3
#define TIM_GENERAL_2_CCMR1_Output_0_OC2M_3
#endif

#if	defined(STM32F0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || \
    defined(STM32F398xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L471xx  )
#define TIM_GENERAL_2_CR2_0_OIS2 OIS2
#define TIM_GENERAL_2_DIER_CC2IE CC2IE
#define TIM_GENERAL_2_DIER_CC2DE CC2DE
#define TIM_GENERAL_2_SR_CC2IF CC2IF
#define TIM_GENERAL_2_SR_CC2OF CC2OF
#define TIM_GENERAL_2_EGR_CC2G CC2G
#define TIM_GENERAL_2_CCMR1_Output_0_CC2S CC2S
#define TIM_GENERAL_2_CCMR1_Output_0_OC2FE OC2FE
#define TIM_GENERAL_2_CCMR1_Output_0_OC2PE OC2PE
#define TIM_GENERAL_2_CCMR1_Output_0_OC2M OC2M
#define TIM_GENERAL_2_CCMR1_Input_CC2S CC2S
#define TIM_GENERAL_2_CCMR1_Input_IC2PSC IC2PSC
#define TIM_GENERAL_2_CCMR1_Input_IC2F IC2F
#define TIM_GENERAL_2_CCER_CC2E CC2E
#define TIM_GENERAL_2_CCER_CC2P CC2P
#define TIM_GENERAL_2_CCER_CC2NP CC2NP
#else
#define TIM_GENERAL_2_CR2_0_OIS2
#define TIM_GENERAL_2_DIER_CC2IE
#define TIM_GENERAL_2_DIER_CC2DE
#define TIM_GENERAL_2_SR_CC2IF
#define TIM_GENERAL_2_SR_CC2OF
#define TIM_GENERAL_2_EGR_CC2G
#define TIM_GENERAL_2_CCMR1_Output_0_CC2S
#define TIM_GENERAL_2_CCMR1_Output_0_OC2FE
#define TIM_GENERAL_2_CCMR1_Output_0_OC2PE
#define TIM_GENERAL_2_CCMR1_Output_0_OC2M
#define TIM_GENERAL_2_CCMR1_Input_CC2S
#define TIM_GENERAL_2_CCMR1_Input_IC2PSC
#define TIM_GENERAL_2_CCMR1_Input_IC2F
#define TIM_GENERAL_2_CCER_CC2E
#define TIM_GENERAL_2_CCER_CC2P
#define TIM_GENERAL_2_CCER_CC2NP
#endif

#if	defined(STM32L432xx  ) || defined(STM32L442xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  )
#define TIM_GENERAL_2_SMCR_1
#define TIM_GENERAL_2_CCMR1_Output_1
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L432xx  ) || defined(STM32L442xx  ) || defined(STM32L452xx  ) || \
    defined(STM32L462xx  )
#define TIM_GENERAL_2_BDTR_BKF BKF
#else
#define TIM_GENERAL_2_BDTR_BKF
#endif

#if	defined(STM32F0      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L442xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  )
#define TIM_GENERAL_2_DMAR_1
#define TIM_GENERAL_2_MAP0_DCR DCR_t DCR
#define TIM_GENERAL_2_MAP0_DMAR DMAR_t DMAR
#else
#define TIM_GENERAL_2_MAP0_DCR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_2_MAP0_DMAR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  )
#define TIM_GENERAL_2_OR1
#define TIM_GENERAL_2_OR2
#define TIM_GENERAL_2_MAP0_OR2 OR2_t OR2
#define TIM_GENERAL_2_MAP1_OR1 OR1_t OR1
#define TIM_GENERAL_3_OR2_1
#else
#define TIM_GENERAL_2_MAP0_OR2 __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_2_MAP1_OR1 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || \
    defined(STM32WB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define PERIPH_TIM_GENERAL_3
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || \
    defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM_GENERAL_3_CR1_0
#define TIM_GENERAL_3_DIER_0
#define TIM_GENERAL_3_MAP0_DIER typename tmpl::DIER_t DIER
#else
#define TIM_GENERAL_3_MAP0_DIER __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      )
#define TIM_GENERAL_3_CR1_0_UIFREMAP UIFREMAP
#define TIM_GENERAL_3_DIER_0_COMDE COMDE
#else
#define TIM_GENERAL_3_CR1_0_UIFREMAP
#define TIM_GENERAL_3_DIER_0_COMDE
#endif

#if	defined(STM32F0      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_3_DIER_0_TIE TIE
#define TIM_GENERAL_3_DIER_0_TDE TDE
#else
#define TIM_GENERAL_3_DIER_0_TIE
#define TIM_GENERAL_3_DIER_0_TDE
#endif

#if	defined(STM32F0      ) || defined(STM32WB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_3_SR_TIF TIF
#define TIM_GENERAL_3_EGR_TG TG
#else
#define TIM_GENERAL_3_SR_TIF
#define TIM_GENERAL_3_EGR_TG
#endif

#if	defined(STM32G0      ) || defined(STM32WB      ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_3_CCMR1_Output_0_OC1M_2 OC1M_2
#else
#define TIM_GENERAL_3_CCMR1_Output_0_OC1M_2
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define TIM_GENERAL_3_CCMR1_Output_1
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_3_BDTR_BKF BKF
#else
#define TIM_GENERAL_3_BDTR_BKF
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM_GENERAL_3_DMAR_0
#define TIM_GENERAL_3_MAP1_DCR DCR_t DCR
#define TIM_GENERAL_3_MAP1_DMAR DMAR_t DMAR
#else
#define TIM_GENERAL_3_MAP1_DCR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_3_MAP1_DMAR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L4      ) || defined(STM32WB      )
#define TIM_GENERAL_3_OR
#endif

#if	defined(STM32L433xx  ) || defined(STM32L443xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define TIM_GENERAL_3_OR_0
#define TIM_GENERAL_3_OR2_0
#endif

#if	defined(STM32WB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  )
#define TIM_GENERAL_3_OR_1
#endif

#if	defined(STM32WB      ) || defined(STM32L433xx  ) || defined(STM32L443xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM_GENERAL_3_TIM_GENERAL_3_tmpl_0
#endif

#if	defined(STM32F2      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || \
    defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || \
    defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  )
#define PERIPH_TIM_GENERAL_4
#endif

#if	defined(STM32F2      ) || defined(STM32L0      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || \
    defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || \
    defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || \
    defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  )
#define TIM_GENERAL_4_CR1_0_OPM OPM
#define TIM_GENERAL_4_CCMR1_Output_0_CC2S CC2S
#define TIM_GENERAL_4_CCER
#define TIM_GENERAL_4_MAP1_CCER CCER_t CCER
#else
#define TIM_GENERAL_4_CR1_0_OPM
#define TIM_GENERAL_4_CCMR1_Output_0_CC2S
#define TIM_GENERAL_4_MAP1_CCER __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L0      )
#define TIM_GENERAL_4_CR1_0_DIR DIR
#define TIM_GENERAL_4_CR1_0_CMS CMS
#define TIM_GENERAL_4_SMCR_ETF ETF
#define TIM_GENERAL_4_SMCR_ETPS ETPS
#define TIM_GENERAL_4_SMCR_ECE ECE
#define TIM_GENERAL_4_SMCR_ETP ETP
#define TIM_GENERAL_4_OR_0
#define TIM_GENERAL_4_OR_1
#define TIM_GENERAL_4_TIM_GENERAL_4_tmpl_0
#else
#define TIM_GENERAL_4_CR1_0_DIR
#define TIM_GENERAL_4_CR1_0_CMS
#define TIM_GENERAL_4_SMCR_ETF
#define TIM_GENERAL_4_SMCR_ETPS
#define TIM_GENERAL_4_SMCR_ECE
#define TIM_GENERAL_4_SMCR_ETP
#endif

#if	defined(STM32L1      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || \
    defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  )
#define TIM_GENERAL_4_CCMR1_Input_0_ICPCS ICPCS
#define TIM_GENERAL_4_CCMR1_Input_0_IC2PCS IC2PCS
#else
#define TIM_GENERAL_4_CCMR1_Input_0_ICPCS
#define TIM_GENERAL_4_CCMR1_Input_0_IC2PCS
#endif

#if	defined(STM32F2      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F446xx  )
#define TIM_GENERAL_4_CCMR1_Input_0_IC1F IC1F
#define TIM_GENERAL_4_CCMR1_Input_0_IC2F IC2F
#else
#define TIM_GENERAL_4_CCMR1_Input_0_IC1F
#define TIM_GENERAL_4_CCMR1_Input_0_IC2F
#endif

#if	defined(STM32F2      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32F405xx  ) || defined(STM32F407xx  )
#define TIM_GENERAL_4_CCMR1_Input_1
#endif

#if	defined(STM32F2      ) || defined(STM32L0      ) || defined(STM32F405xx  ) || defined(STM32F407xx  )
#define TIM_GENERAL_4_CCMR1_Input_1_IC1PSC IC1PSC
#define TIM_GENERAL_4_CCMR1_Input_1_IC2PSC IC2PSC
#else
#define TIM_GENERAL_4_CCMR1_Input_1_IC1PSC
#define TIM_GENERAL_4_CCMR1_Input_1_IC2PSC
#endif

#if	defined(STM32L0      ) || defined(STM32L1      )
#define TIM_GENERAL_4_CCMR1_Input_1_IC1F IC1F
#define TIM_GENERAL_4_CCMR1_Input_1_IC2F IC2F
#define TIM_GENERAL_4_OR
#define TIM_GENERAL_4_MAP1_OR typename tmpl::OR_t OR
#else
#define TIM_GENERAL_4_CCMR1_Input_1_IC1F
#define TIM_GENERAL_4_CCMR1_Input_1_IC2F
#define TIM_GENERAL_4_MAP1_OR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F7      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define PERIPH_TIM_GENERAL_5
#endif

#if	defined(STM32F7      ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM_GENERAL_5_CCMR1_Input_0_ICPCS ICPCS
#define TIM_GENERAL_5_CCMR1_Input_0_IC2PCS IC2PCS
#define TIM_GENERAL_5_CCMR1_Input_0_IC2F IC2F
#else
#define TIM_GENERAL_5_CCMR1_Input_0_ICPCS
#define TIM_GENERAL_5_CCMR1_Input_0_IC2PCS
#define TIM_GENERAL_5_CCMR1_Input_0_IC2F
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F423xx  )
#define TIM_GENERAL_5_CCMR1_Input_1
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32L1      ) || defined(STM32W1      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define PERIPH_TIM_GENERAL_6
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || \
    defined(STM32L1      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM_GENERAL_6_CR1
#define TIM_GENERAL_6_DIER
#define TIM_GENERAL_6_SR
#define TIM_GENERAL_6_EGR
#define TIM_GENERAL_6_CCMR1_Output
#define TIM_GENERAL_6_CCMR1_Input
#define TIM_GENERAL_6_CCER
#define TIM_GENERAL_6_CNT
#define TIM_GENERAL_6_CCR1
#define TIM_GENERAL_6_MAP0
#define TIM_GENERAL_6_MAP1_CCMR1_Input typename tmpl::CCMR1_Input_t CCMR1_Input
#define TIM_GENERAL_6_MAP1_CCER CCER_t CCER
#define TIM_GENERAL_6_MAP1_CNT CNT_t CNT
#define TIM_GENERAL_6_MAP1_PSC xPSC_t PSC
#define TIM_GENERAL_6_MAP1_ARR xARR_t ARR
#define TIM_GENERAL_6_MAP1_CCR1 CCR1_t CCR1
#else
#define TIM_GENERAL_6_MAP1_CCMR1_Input __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_6_MAP1_CCER __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_6_MAP1_CNT __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_6_MAP1_PSC __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_6_MAP1_ARR __SOOL_PERIPH_PADDING_4
#define TIM_GENERAL_6_MAP1_CCR1 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || \
    defined(STM32F733xx  )
#define TIM_GENERAL_6_CR1_OPM OPM
#define TIM_GENERAL_6_CCMR1_Output_OC1M_3 OC1M_3
#else
#define TIM_GENERAL_6_CR1_OPM
#define TIM_GENERAL_6_CCMR1_Output_OC1M_3
#endif

#if	defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32L1      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || \
    defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM_GENERAL_6_CCMR1_Input_0_ICPCS ICPCS
#else
#define TIM_GENERAL_6_CCMR1_Input_0_ICPCS
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  )
#define TIM_GENERAL_6_CCMR1_Input_1
#endif

#if	defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || \
    defined(STM32F423xx  )
#define TIM_GENERAL_6_CCMR1_Input_2
#endif

#if	defined(STM32F7      )
#define TIM_GENERAL_6_SMCR
#define TIM_GENERAL_6_MAP1_SMCR SMCR_t SMCR
#else
#define TIM_GENERAL_6_MAP1_SMCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32L1      )
#define TIM_GENERAL_6_OR
#define TIM_GENERAL_6_MAP1_OR typename tmpl::OR_t OR
#else
#define TIM_GENERAL_6_MAP1_OR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F7      ) || defined(STM32L1      )
#define TIM_GENERAL_6_OR_0
#endif

#if	defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || \
    defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || \
    defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || \
    defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM_GENERAL_6_OR_1
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  )
#define TIM_GENERAL_6_OR_2
#endif

#if	defined(STM32W1      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || \
    defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  )
#define TIM_GENERAL_6_TIM_GENERAL_6_tmpl_0
#endif

namespace sool {
	namespace core {
		#ifdef TIM_ADVANCED_TIM_ADVANCED_tmpl_0
		struct TIM_ADVANCED_tmpl_0 /// fields used by TIM1 
		{
			#ifdef TIM_ADVANCED_OR1
			struct OR1_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_ADVANCED_OR1_0
					struct
					{
						uint32_t ETR_ADC1_RMP     : 2; /// External trigger remap on ADC1 analog watchdog
						uint32_t                  : 30;
					};
					#endif
					#ifdef TIM_ADVANCED_OR1_1
					struct
					{
						uint32_t TIM_ADVANCED_OR1_1_ETR_ADC2_RMP : 2; /// External trigger remap on ADC2 analog watchdog
						uint32_t TIM_ADVANCED_OR1_1_ETR_ADC3_RMP : 2; /// External trigger remap on ADC3 analog watchdog
						uint32_t TI1_RMP          : 1; /// Input Capture 1 remap
						uint32_t                  : 27;
					};
					#endif
					#ifdef TIM_ADVANCED_OR1_2
					struct
					{
						uint32_t ETR_ADC1_RMP     : 2; /// External trigger remap on ADC1 analog watchdog
						uint32_t                  : 30;
					};
					#endif
					#ifdef TIM_ADVANCED_OR1_3
					struct
					{
						uint32_t OCREF_CLR        : 1; /// Ocref_clr source selection
						uint32_t                  : 31;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_ADVANCED_OR2
			struct OR2_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_ADVANCED_OR2_0
					struct
					{
						uint32_t                  : 8;
						uint32_t BKDFBK0E         : 1; /// BRK DFSDM_BREAK0 enable
						uint32_t                  : 23;
					};
					#endif
					struct
					{
						uint32_t BKINE            : 1; /// BRK BKIN input enable
						uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
						uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
						uint32_t                  : 5;
						uint32_t TIM_ADVANCED_OR2_1_BKDFBK2E : 1; /// BRK DFSDM_BREAK2 enable
						uint32_t BKINP            : 1; /// BRK BKIN input polarity
						uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
						uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarity
						uint32_t                  : 2;
						uint32_t ETRSEL           : 3; /// ETR source selection
						uint32_t                  : 15;
					};
					#ifdef TIM_ADVANCED_OR2_2
					struct
					{
						uint32_t                  : 8;
						uint32_t BKDFBK0E         : 1; /// BRK DFSDM_BREAK0 enable
						uint32_t                  : 23;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_ADVANCED_OR3
			struct OR3_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_ADVANCED_OR3_0
					struct
					{
						uint32_t                  : 8;
						uint32_t BK2DFBK0E        : 1; /// BRK2 DFSDM_BREAK0 enable
						uint32_t                  : 23;
					};
					#endif
					struct
					{
						uint32_t BK2INE           : 1; /// BRK2 BKIN input enable
						uint32_t BK2CMP1E         : 1; /// BRK2 COMP1 enable
						uint32_t BK2CMP2E         : 1; /// BRK2 COMP2 enable
						uint32_t                  : 5;
						uint32_t TIM_ADVANCED_OR3_1_BK2DFBK3E : 1; /// BRK2 DFSDM_BREAK3 enable
						uint32_t BK2INP           : 1; /// BRK2 BKIN input polarity
						uint32_t BK2CMP1P         : 1; /// BRK2 COMP1 input polarity
						uint32_t BK2CMP2P         : 1; /// BRK2 COMP2 input polarity
						uint32_t                  : 20;
					};
					#ifdef TIM_ADVANCED_OR3_2
					struct
					{
						uint32_t                  : 8;
						uint32_t BK2DFBK0E        : 1; /// BRK2 DFSDM_BREAK0 enable
						uint32_t                  : 23;
					};
					#endif
				};
				
			};
			#endif
		};
		#endif
		struct TIM_ADVANCED_tmpl_default /// default template for TIM_ADVANCED 
		{
			#ifdef TIM_ADVANCED_OR1
			struct OR1_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_ADVANCED_OR1_1
					struct
					{
						uint32_t TIM_ADVANCED_OR1_1_ETR_ADC2_RMP : 2; /// External trigger remap on ADC2 analog watchdog
						uint32_t TIM_ADVANCED_OR1_1_ETR_ADC3_RMP : 2; /// External trigger remap on ADC3 analog watchdog
						uint32_t TI1_RMP          : 1; /// Input Capture 1 remap
						uint32_t                  : 27;
					};
					#endif
					#ifdef TIM_ADVANCED_OR1_2
					struct
					{
						uint32_t ETR_ADC1_RMP     : 2; /// External trigger remap on ADC1 analog watchdog
						uint32_t                  : 30;
					};
					#endif
					#ifdef TIM_ADVANCED_OR1_3
					struct
					{
						uint32_t OCREF_CLR        : 1; /// Ocref_clr source selection
						uint32_t                  : 31;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_ADVANCED_OR2
			struct OR2_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t BKINE            : 1; /// BRK BKIN input enable
						uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
						uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
						uint32_t                  : 5;
						uint32_t TIM_ADVANCED_OR2_1_BKDFBK2E : 1; /// BRK DFSDM_BREAK2 enable
						uint32_t BKINP            : 1; /// BRK BKIN input polarity
						uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
						uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarity
						uint32_t                  : 2;
						uint32_t ETRSEL           : 3; /// ETR source selection
						uint32_t                  : 15;
					};
					#ifdef TIM_ADVANCED_OR2_2
					struct
					{
						uint32_t                  : 8;
						uint32_t BKDFBK0E         : 1; /// BRK DFSDM_BREAK0 enable
						uint32_t                  : 23;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_ADVANCED_OR3
			struct OR3_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t BK2INE           : 1; /// BRK2 BKIN input enable
						uint32_t BK2CMP1E         : 1; /// BRK2 COMP1 enable
						uint32_t BK2CMP2E         : 1; /// BRK2 COMP2 enable
						uint32_t                  : 5;
						uint32_t TIM_ADVANCED_OR3_1_BK2DFBK3E : 1; /// BRK2 DFSDM_BREAK3 enable
						uint32_t BK2INP           : 1; /// BRK2 BKIN input polarity
						uint32_t BK2CMP1P         : 1; /// BRK2 COMP1 input polarity
						uint32_t BK2CMP2P         : 1; /// BRK2 COMP2 input polarity
						uint32_t                  : 20;
					};
					#ifdef TIM_ADVANCED_OR3_2
					struct
					{
						uint32_t                  : 8;
						uint32_t BK2DFBK0E        : 1; /// BRK2 DFSDM_BREAK0 enable
						uint32_t                  : 23;
					};
					#endif
				};
				
			};
			#endif
		};
		#ifdef TIM_GENERAL_1_TIM_GENERAL_1_tmpl_0
		struct TIM_GENERAL_1_tmpl_0 /// fields used by TIM12, TIM13, TIM2 
		{
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CNT_0
					struct
					{
						uint32_t                  : 31;
						uint32_t UIFCPY           : 1;
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_1
					struct
					{
						uint32_t CNT_L            : 16; /// low counter value
						uint32_t TIM_GENERAL_1_CNT_1_CNT_H : 15; /// High counter value
						uint32_t TIM_GENERAL_1_CNT_1_CNT_31 : 1; /// UIFCPY
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_2
					struct
					{
						uint32_t TIM_GENERAL_1_CNT_2_CNT : 16; /// TIM2 counter
						uint32_t TIM_GENERAL_1_CNT_2_CNT_H : 16; /// High counter value
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_3
					struct
					{
						uint32_t                  : 16;
						uint32_t TIM_GENERAL_1_CNT_3_CNT_M : 15; /// Most significant part counter value
						uint32_t TIM_GENERAL_1_CNT_3_UIFCPY : 1; /// Value depends on IUFREMAP in TIM2_CR1.
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_4
					struct
					{
						uint32_t CNTL             : 16; /// Low counter value
						uint32_t CNTH             : 16; /// High counter value
					};
					#endif
				};
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_ARR_0
					struct
					{
						uint32_t ARR_L            : 16; /// Low Auto-reload value
						uint32_t ARR_H            : 16; /// High Auto-reload value
					};
					#endif
					#ifdef TIM_GENERAL_1_ARR_1
					struct
					{
						uint32_t ARRL             : 16; /// Low Auto-reload value
						uint32_t ARRH             : 16; /// High Auto-reload value
					};
					#endif
					#ifdef TIM_GENERAL_1_ARR_3
					struct
					{
						uint32_t ARR              : 16; /// Auto-reload value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_CCR1
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR1_0
					struct
					{
						uint32_t CCR1_L           : 16; /// Low Capture/Compare 1 value
						uint32_t CCR1_H           : 16; /// High Capture/Compare 1 value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR1_1
					struct
					{
						uint32_t CCR1L            : 16; /// Low Capture/Compare 1 value
						uint32_t CCR1H            : 16; /// High Capture/Compare 1 value
					};
					#endif
				};
				
			};
			#endif
			struct CCR2_t: public Reg32_t /// capture/compare register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR2_0
					struct
					{
						uint32_t CCR2_L           : 16; /// Low Capture/Compare 2 value
						uint32_t CCR2_H           : 16; /// High Capture/Compare 2 value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR2_1
					struct
					{
						uint32_t CCR2L            : 16; /// Low Capture/Compare 2 value
						uint32_t CCR2H            : 16; /// High Capture/Compare 2 value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR2_3
					struct
					{
						uint32_t CCR2             : 16; /// Capture/Compare 2 value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_CCR3
			struct CCR3_t: public Reg32_t /// capture/compare register 3
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR3_0
					struct
					{
						uint32_t CCR3_L           : 16; /// Low Capture/Compare value
						uint32_t CCR3_H           : 16; /// High Capture/Compare value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR3_1
					struct
					{
						uint32_t CCR3L            : 16; /// Low Capture/Compare value
						uint32_t CCR3H            : 16; /// High Capture/Compare value
					};
					#endif
				};
				
			};
			#endif
			struct CCR4_t: public Reg32_t /// capture/compare register 4
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR4_0
					struct
					{
						uint32_t CCR4_L           : 16; /// Low Capture/Compare value
						uint32_t CCR4_H           : 16; /// High Capture/Compare value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR4_1
					struct
					{
						uint32_t CCR4L            : 16; /// Low Capture/Compare value
						uint32_t CCR4H            : 16; /// High Capture/Compare value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR4_3
					struct
					{
						uint32_t CCR4             : 16; /// Capture/Compare 4 value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_OR
			struct OR_t: public Reg32_t /// TIM2 option register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_OR_0
					struct
					{
						uint32_t TIM_GENERAL_1_OR_0_ETR_RMP : 3; /// Timer2 ETR remap
						uint32_t TIM_GENERAL_1_OR_0_TI4_RMP : 2; /// Internal trigger
						uint32_t                  : 1;
						uint32_t TIM_GENERAL_1_OR_0_IT4_RMP : 2; /// Timer Input 4 remap
						uint32_t                  : 24;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR_1
					struct
					{
						uint32_t                  : 10;
						uint32_t ITR1_RMP         : 2; /// Timer Input 4 remap
						uint32_t                  : 20;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR_4
					struct
					{
						uint32_t ITR_RMP          : 1; /// Internal trigger remap
						uint32_t ETR_RMP          : 1; /// External trigger remap
						uint32_t TI4_RMP          : 2; /// Input capture 4 remap
						uint32_t                  : 28;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_1_OR1
			struct OR1_t: public Reg32_t /// TIM2 option register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_OR1_0
					struct
					{
						uint32_t ITR1_RMP         : 1; /// Internal trigger 1 remap
						uint32_t ETR1_RMP         : 1; /// External trigger remap
						uint32_t TI4_RMP          : 2; /// Input Capture 4 remap
						uint32_t                  : 28;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR1_2
					struct
					{
						uint32_t ITR1_RMP         : 1; /// Internal trigger 1 remap
						uint32_t ETR1_RMP         : 1; /// External trigger remap
						uint32_t TI4_RMP          : 2; /// Input Capture 4 remap
						uint32_t                  : 28;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR1_3
					struct
					{
						uint32_t IOCREF_CLR       : 1;
						uint32_t                  : 31;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_1_OR2
			struct OR2_t: public Reg32_t /// TIM2 option register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_OR2_0
					struct
					{
						uint32_t                  : 14;
						uint32_t ETRSEL           : 3; /// ETR source selection
						uint32_t                  : 15;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR2_1
					struct
					{
						uint32_t                  : 14;
						uint32_t ETRSEL           : 3; /// ETR source selection
						uint32_t                  : 15;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_1_TIMx_OR
			struct TIMx_OR_t: public Reg32_t /// TIM2 option register
			{
				using Reg32_t::operator=;
				uint32_t                  : 6;
				uint32_t IT4_RMP          : 2; /// Timer Input 4 remap
				uint32_t                  : 24;
				
			};
			#endif
		};
		#endif
		#ifdef TIM_GENERAL_1_TIM_GENERAL_1_tmpl_1
		struct TIM_GENERAL_1_tmpl_1 /// fields used by TIM4, TIM3, TIM19 
		{
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CNT_0
					struct
					{
						uint32_t                  : 31;
						uint32_t UIFCPY           : 1;
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_1
					struct
					{
						uint32_t CNT_L            : 16; /// low counter value
						uint32_t TIM_GENERAL_1_CNT_1_CNT_H : 15; /// High counter value
						uint32_t TIM_GENERAL_1_CNT_1_CNT_31 : 1; /// UIFCPY
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_2
					struct
					{
						uint32_t TIM_GENERAL_1_CNT_2_CNT : 16; /// TIM2 counter
						uint32_t TIM_GENERAL_1_CNT_2_CNT_H : 16; /// High counter value
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_5
					struct
					{
						uint32_t CNT              : 16; /// counter value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_ARR_0
					struct
					{
						uint32_t ARR_L            : 16; /// Low Auto-reload value
						uint32_t ARR_H            : 16; /// High Auto-reload value
					};
					#endif
					#ifdef TIM_GENERAL_1_ARR_2
					struct
					{
						uint32_t ARR              : 16; /// Auto-reload value
						uint32_t                  : 16;
					};
					#endif
					#ifdef TIM_GENERAL_1_ARR_3
					struct
					{
						uint32_t ARR              : 16; /// Auto-reload value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_CCR1
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR1_0
					struct
					{
						uint32_t CCR1_L           : 16; /// Low Capture/Compare 1 value
						uint32_t CCR1_H           : 16; /// High Capture/Compare 1 value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR1_2
					struct
					{
						uint32_t CCR1             : 16; /// Capture/Compare 1 value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#endif
			struct CCR2_t: public Reg32_t /// capture/compare register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR2_0
					struct
					{
						uint32_t CCR2_L           : 16; /// Low Capture/Compare 2 value
						uint32_t CCR2_H           : 16; /// High Capture/Compare 2 value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR2_2
					struct
					{
						uint32_t CCR2             : 16; /// Capture/Compare 2 value
						uint32_t                  : 16;
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR2_3
					struct
					{
						uint32_t CCR2             : 16; /// Capture/Compare 2 value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_CCR3
			struct CCR3_t: public Reg32_t /// capture/compare register 3
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR3_0
					struct
					{
						uint32_t CCR3_L           : 16; /// Low Capture/Compare value
						uint32_t CCR3_H           : 16; /// High Capture/Compare value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR3_2
					struct
					{
						uint32_t CCR3             : 16; /// Capture/Compare value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#endif
			struct CCR4_t: public Reg32_t /// capture/compare register 4
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR4_0
					struct
					{
						uint32_t CCR4_L           : 16; /// Low Capture/Compare value
						uint32_t CCR4_H           : 16; /// High Capture/Compare value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR4_2
					struct
					{
						uint32_t CCR4             : 16; /// Capture/Compare value
						uint32_t                  : 16;
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR4_3
					struct
					{
						uint32_t CCR4             : 16; /// Capture/Compare 4 value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_OR
			struct OR_t: public Reg32_t /// TIM2 option register
			{
				using Reg32_t::operator=;
				#ifdef TIM_GENERAL_1_OR_0
				struct
				{
					uint32_t TIM_GENERAL_1_OR_0_ETR_RMP : 3; /// Timer2 ETR remap
					uint32_t TIM_GENERAL_1_OR_0_TI4_RMP : 2; /// Internal trigger
					uint32_t                  : 1;
					uint32_t TIM_GENERAL_1_OR_0_IT4_RMP : 2; /// Timer Input 4 remap
					uint32_t                  : 24;
				};
				#endif
				
			};
			#endif
			#ifdef TIM_GENERAL_1_OR1
			struct OR1_t: public Reg32_t /// TIM2 option register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_OR1_1
					struct
					{
						uint32_t TI1_RMP          : 2; /// Input Capture 1 remap
						uint32_t                  : 30;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR1_3
					struct
					{
						uint32_t IOCREF_CLR       : 1;
						uint32_t                  : 31;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_1_OR2
			struct OR2_t: public Reg32_t /// TIM2 option register 2
			{
				using Reg32_t::operator=;
				#ifdef TIM_GENERAL_1_OR2_0
				struct
				{
					uint32_t                  : 14;
					uint32_t ETRSEL           : 3; /// ETR source selection
					uint32_t                  : 15;
				};
				#endif
				
			};
			#endif
		};
		#endif
		#ifdef TIM_GENERAL_1_TIM_GENERAL_1_tmpl_2
		struct TIM_GENERAL_1_tmpl_2 /// fields used by TIM5 
		{
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CNT_0
					struct
					{
						uint32_t                  : 31;
						uint32_t UIFCPY           : 1;
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_1
					struct
					{
						uint32_t CNT_L            : 16; /// low counter value
						uint32_t TIM_GENERAL_1_CNT_1_CNT_H : 15; /// High counter value
						uint32_t TIM_GENERAL_1_CNT_1_CNT_31 : 1; /// UIFCPY
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_2
					struct
					{
						uint32_t TIM_GENERAL_1_CNT_2_CNT : 16; /// TIM2 counter
						uint32_t TIM_GENERAL_1_CNT_2_CNT_H : 16; /// High counter value
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_4
					struct
					{
						uint32_t CNTL             : 16; /// Low counter value
						uint32_t CNTH             : 16; /// High counter value
					};
					#endif
				};
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_ARR_0
					struct
					{
						uint32_t ARR_L            : 16; /// Low Auto-reload value
						uint32_t ARR_H            : 16; /// High Auto-reload value
					};
					#endif
					#ifdef TIM_GENERAL_1_ARR_1
					struct
					{
						uint32_t ARRL             : 16; /// Low Auto-reload value
						uint32_t ARRH             : 16; /// High Auto-reload value
					};
					#endif
					#ifdef TIM_GENERAL_1_ARR_3
					struct
					{
						uint32_t ARR              : 16; /// Auto-reload value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_CCR1
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR1_0
					struct
					{
						uint32_t CCR1_L           : 16; /// Low Capture/Compare 1 value
						uint32_t CCR1_H           : 16; /// High Capture/Compare 1 value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR1_1
					struct
					{
						uint32_t CCR1L            : 16; /// Low Capture/Compare 1 value
						uint32_t CCR1H            : 16; /// High Capture/Compare 1 value
					};
					#endif
				};
				
			};
			#endif
			struct CCR2_t: public Reg32_t /// capture/compare register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR2_0
					struct
					{
						uint32_t CCR2_L           : 16; /// Low Capture/Compare 2 value
						uint32_t CCR2_H           : 16; /// High Capture/Compare 2 value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR2_1
					struct
					{
						uint32_t CCR2L            : 16; /// Low Capture/Compare 2 value
						uint32_t CCR2H            : 16; /// High Capture/Compare 2 value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR2_3
					struct
					{
						uint32_t CCR2             : 16; /// Capture/Compare 2 value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_CCR3
			struct CCR3_t: public Reg32_t /// capture/compare register 3
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR3_0
					struct
					{
						uint32_t CCR3_L           : 16; /// Low Capture/Compare value
						uint32_t CCR3_H           : 16; /// High Capture/Compare value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR3_1
					struct
					{
						uint32_t CCR3L            : 16; /// Low Capture/Compare value
						uint32_t CCR3H            : 16; /// High Capture/Compare value
					};
					#endif
				};
				
			};
			#endif
			struct CCR4_t: public Reg32_t /// capture/compare register 4
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR4_0
					struct
					{
						uint32_t CCR4_L           : 16; /// Low Capture/Compare value
						uint32_t CCR4_H           : 16; /// High Capture/Compare value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR4_1
					struct
					{
						uint32_t CCR4L            : 16; /// Low Capture/Compare value
						uint32_t CCR4H            : 16; /// High Capture/Compare value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR4_3
					struct
					{
						uint32_t CCR4             : 16; /// Capture/Compare 4 value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_OR
			struct OR_t: public Reg32_t /// TIM2 option register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_OR_0
					struct
					{
						uint32_t TIM_GENERAL_1_OR_0_ETR_RMP : 3; /// Timer2 ETR remap
						uint32_t TIM_GENERAL_1_OR_0_TI4_RMP : 2; /// Internal trigger
						uint32_t                  : 1;
						uint32_t TIM_GENERAL_1_OR_0_IT4_RMP : 2; /// Timer Input 4 remap
						uint32_t                  : 24;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR_2
					struct
					{
						uint32_t                  : 6;
						uint32_t IT4_RMP          : 2; /// Timer Input 4 remap
						uint32_t                  : 24;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR_3
					struct
					{
						uint32_t                  : 6;
						uint32_t TI4_RMP          : 2; /// Timer Input 4 remap
						uint32_t                  : 24;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_1_TIMx_OR
			struct TIMx_OR_t: public Reg32_t /// TIM2 option register
			{
				using Reg32_t::operator=;
				uint32_t                  : 6;
				uint32_t IT4_RMP          : 2; /// Timer Input 4 remap
				uint32_t                  : 24;
				
			};
			#endif
		};
		#endif
		struct TIM_GENERAL_1_tmpl_default /// default template for TIM_GENERAL_1 
		{
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CNT_1
					struct
					{
						uint32_t CNT_L            : 16; /// low counter value
						uint32_t TIM_GENERAL_1_CNT_1_CNT_H : 15; /// High counter value
						uint32_t TIM_GENERAL_1_CNT_1_CNT_31 : 1; /// UIFCPY
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_2
					struct
					{
						uint32_t TIM_GENERAL_1_CNT_2_CNT : 16; /// TIM2 counter
						uint32_t TIM_GENERAL_1_CNT_2_CNT_H : 16; /// High counter value
					};
					#endif
					#ifdef TIM_GENERAL_1_CNT_3
					struct
					{
						uint32_t                  : 16;
						uint32_t TIM_GENERAL_1_CNT_3_CNT_M : 15; /// Most significant part counter value
						uint32_t TIM_GENERAL_1_CNT_3_UIFCPY : 1; /// Value depends on IUFREMAP in TIM2_CR1.
					};
					#endif
				};
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_ARR_0
					struct
					{
						uint32_t ARR_L            : 16; /// Low Auto-reload value
						uint32_t ARR_H            : 16; /// High Auto-reload value
					};
					#endif
					#ifdef TIM_GENERAL_1_ARR_3
					struct
					{
						uint32_t ARR              : 16; /// Auto-reload value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_CCR1
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				#ifdef TIM_GENERAL_1_CCR1_0
				struct
				{
					uint32_t CCR1_L           : 16; /// Low Capture/Compare 1 value
					uint32_t CCR1_H           : 16; /// High Capture/Compare 1 value
				};
				#endif
				
			};
			#endif
			struct CCR2_t: public Reg32_t /// capture/compare register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR2_0
					struct
					{
						uint32_t CCR2_L           : 16; /// Low Capture/Compare 2 value
						uint32_t CCR2_H           : 16; /// High Capture/Compare 2 value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR2_3
					struct
					{
						uint32_t CCR2             : 16; /// Capture/Compare 2 value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_CCR3
			struct CCR3_t: public Reg32_t /// capture/compare register 3
			{
				using Reg32_t::operator=;
				#ifdef TIM_GENERAL_1_CCR3_0
				struct
				{
					uint32_t CCR3_L           : 16; /// Low Capture/Compare value
					uint32_t CCR3_H           : 16; /// High Capture/Compare value
				};
				#endif
				
			};
			#endif
			struct CCR4_t: public Reg32_t /// capture/compare register 4
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_CCR4_0
					struct
					{
						uint32_t CCR4_L           : 16; /// Low Capture/Compare value
						uint32_t CCR4_H           : 16; /// High Capture/Compare value
					};
					#endif
					#ifdef TIM_GENERAL_1_CCR4_3
					struct
					{
						uint32_t CCR4             : 16; /// Capture/Compare 4 value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_OR
			struct OR_t: public Reg32_t /// TIM2 option register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_OR_0
					struct
					{
						uint32_t TIM_GENERAL_1_OR_0_ETR_RMP : 3; /// Timer2 ETR remap
						uint32_t TIM_GENERAL_1_OR_0_TI4_RMP : 2; /// Internal trigger
						uint32_t                  : 1;
						uint32_t TIM_GENERAL_1_OR_0_IT4_RMP : 2; /// Timer Input 4 remap
						uint32_t                  : 24;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR_4
					struct
					{
						uint32_t ITR_RMP          : 1; /// Internal trigger remap
						uint32_t ETR_RMP          : 1; /// External trigger remap
						uint32_t TI4_RMP          : 2; /// Input capture 4 remap
						uint32_t                  : 28;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_1_OR1
			struct OR1_t: public Reg32_t /// TIM2 option register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_OR1_2
					struct
					{
						uint32_t ITR1_RMP         : 1; /// Internal trigger 1 remap
						uint32_t ETR1_RMP         : 1; /// External trigger remap
						uint32_t TI4_RMP          : 2; /// Input Capture 4 remap
						uint32_t                  : 28;
					};
					#endif
					#ifdef TIM_GENERAL_1_OR1_3
					struct
					{
						uint32_t IOCREF_CLR       : 1;
						uint32_t                  : 31;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_1_OR2
			struct OR2_t: public Reg32_t /// TIM2 option register 2
			{
				using Reg32_t::operator=;
				#ifdef TIM_GENERAL_1_OR2_1
				struct
				{
					uint32_t                  : 14;
					uint32_t ETRSEL           : 3; /// ETR source selection
					uint32_t                  : 15;
				};
				#endif
				
			};
			#endif
		};
		#ifdef TIM_GENERAL_3_TIM_GENERAL_3_tmpl_0
		struct TIM_GENERAL_3_tmpl_0 /// fields used by TIM16, TIM17 
		{
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_3_CR1_0
					struct
					{
						uint32_t CEN              : 1; /// Counter enable
						uint32_t UDIS             : 1; /// Update disable
						uint32_t URS              : 1; /// Update request source
						uint32_t OPM              : 1; /// One-pulse mode
						uint32_t                  : 3;
						uint32_t ARPE             : 1; /// Auto-reload preload enable
						uint32_t CKD              : 2; /// Clock division
						uint32_t                  : 1;
						uint32_t TIM_GENERAL_3_CR1_0_UIFREMAP : 1; /// UIF status bit remapping
						uint32_t TIM_GENERAL_3_CR1_0_DITHEN : 1; /// Dithering Enable
						uint32_t                  : 19;
					};
					#endif
					#ifdef TIM_GENERAL_3_CR1_1
					struct
					{
						uint32_t BKINE            : 1; /// BRK BKIN input enable
						uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
						uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
						uint32_t                  : 6;
						uint32_t BKINP            : 1; /// BRK BKIN input polarity
						uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
						uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarit
						uint32_t                  : 20;
					};
					#endif
					#ifdef TIM_GENERAL_3_CR1_2
					struct
					{
						uint32_t CEN              : 1; /// Counter enable
						uint32_t UDIS             : 1; /// Update disable
						uint32_t URS              : 1; /// Update request source
						uint32_t OPM              : 1; /// One-pulse mode
						uint32_t                  : 3;
						uint32_t ARPE             : 1; /// Auto-reload preload enable
						uint32_t CKD              : 2; /// Clock division
						uint32_t                  : 1;
						uint32_t UIFREMAP         : 1; /// UIF status bit remapping
						uint32_t                  : 20;
					};
					#endif
				};
				
			};
			struct DIER_t: public Reg32_t /// DMA/Interrupt enable register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_3_DIER_0
					struct
					{
						uint32_t UIE              : 1; /// Update interrupt enable
						uint32_t CC1IE            : 1; /// Capture/Compare 1 interrupt enable
						uint32_t                  : 3;
						uint32_t COMIE            : 1; /// COM interrupt enable
						uint32_t TIM_GENERAL_3_DIER_0_TIE : 1; /// Trigger interrupt enable
						uint32_t BIE              : 1; /// Break interrupt enable
						uint32_t UDE              : 1; /// Update DMA request enable
						uint32_t CC1DE            : 1; /// Capture/Compare 1 DMA request enable
						uint32_t                  : 3;
						uint32_t TIM_GENERAL_3_DIER_0_COMDE : 1; /// COM DMA request enable
						uint32_t TIM_GENERAL_3_DIER_0_TDE : 1; /// Trigger DMA request enable
						uint32_t                  : 17;
					};
					#endif
					#ifdef TIM_GENERAL_3_DIER_1
					struct
					{
						uint32_t BKINE            : 1; /// BRK BKIN input enable
						uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
						uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
						uint32_t                  : 6;
						uint32_t BKINP            : 1; /// BRK BKIN input polarity
						uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
						uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarit
						uint32_t                  : 20;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_3_OR
			struct OR_t: public Reg32_t /// TIM16 option register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_3_OR_0
					struct
					{
						uint32_t TI1_RMP          : 2; /// Input capture 1 remap
						uint32_t                  : 30;
					};
					#endif
					#ifdef TIM_GENERAL_3_OR_1
					struct
					{
						uint32_t TI1_RMP          : 2; /// Input capture 1 remap
						uint32_t                  : 30;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_3_OR2
			struct OR2_t: public Reg32_t /// TIM17 option register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_3_OR2_0
					struct
					{
						uint32_t BKINE            : 1; /// BRK BKIN input enable
						uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
						uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
						uint32_t                  : 5;
						uint32_t BKDFBK1E         : 1; /// BRK DFSDM_BREAK1 enable
						uint32_t BKINP            : 1; /// BRK BKIN input polarity
						uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
						uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarit
						uint32_t                  : 20;
					};
					#endif
					#ifdef TIM_GENERAL_3_OR2_1
					struct
					{
						uint32_t BKINE            : 1; /// BRK BKIN input enable
						uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
						uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
						uint32_t                  : 5;
						uint32_t BKDFBK1E         : 1; /// BRK DFSDM_BREAK1 enable
						uint32_t BKINP            : 1; /// BRK BKIN input polarity
						uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
						uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarit
						uint32_t                  : 20;
					};
					#endif
				};
				
			};
			#endif
		};
		#endif
		struct TIM_GENERAL_3_tmpl_default /// default template for TIM_GENERAL_3 
		{
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				#ifdef TIM_GENERAL_3_CR1_0
				struct
				{
					uint32_t CEN              : 1; /// Counter enable
					uint32_t UDIS             : 1; /// Update disable
					uint32_t URS              : 1; /// Update request source
					uint32_t OPM              : 1; /// One-pulse mode
					uint32_t                  : 3;
					uint32_t ARPE             : 1; /// Auto-reload preload enable
					uint32_t CKD              : 2; /// Clock division
					uint32_t                  : 1;
					uint32_t TIM_GENERAL_3_CR1_0_UIFREMAP : 1; /// UIF status bit remapping
					uint32_t TIM_GENERAL_3_CR1_0_DITHEN : 1; /// Dithering Enable
					uint32_t                  : 19;
				};
				#endif
				
			};
			struct DIER_t: public Reg32_t /// DMA/Interrupt enable register
			{
				using Reg32_t::operator=;
				#ifdef TIM_GENERAL_3_DIER_0
				struct
				{
					uint32_t UIE              : 1; /// Update interrupt enable
					uint32_t CC1IE            : 1; /// Capture/Compare 1 interrupt enable
					uint32_t                  : 3;
					uint32_t COMIE            : 1; /// COM interrupt enable
					uint32_t TIM_GENERAL_3_DIER_0_TIE : 1; /// Trigger interrupt enable
					uint32_t BIE              : 1; /// Break interrupt enable
					uint32_t UDE              : 1; /// Update DMA request enable
					uint32_t CC1DE            : 1; /// Capture/Compare 1 DMA request enable
					uint32_t                  : 3;
					uint32_t TIM_GENERAL_3_DIER_0_COMDE : 1; /// COM DMA request enable
					uint32_t TIM_GENERAL_3_DIER_0_TDE : 1; /// Trigger DMA request enable
					uint32_t                  : 17;
				};
				#endif
				
			};
			#ifdef TIM_GENERAL_3_OR
			struct OR_t: public Reg32_t /// TIM16 option register 1
			{
				using Reg32_t::operator=;
				#ifdef TIM_GENERAL_3_OR_1
				struct
				{
					uint32_t TI1_RMP          : 2; /// Input capture 1 remap
					uint32_t                  : 30;
				};
				#endif
				
			};
			#endif
			#ifdef TIM_GENERAL_3_OR2
			struct OR2_t: public Reg32_t /// TIM17 option register 1
			{
				using Reg32_t::operator=;
				#ifdef TIM_GENERAL_3_OR2_1
				struct
				{
					uint32_t BKINE            : 1; /// BRK BKIN input enable
					uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
					uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
					uint32_t                  : 5;
					uint32_t BKDFBK1E         : 1; /// BRK DFSDM_BREAK1 enable
					uint32_t BKINP            : 1; /// BRK BKIN input polarity
					uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
					uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarit
					uint32_t                  : 20;
				};
				#endif
				
			};
			#endif
		};
		#ifdef TIM_GENERAL_4_TIM_GENERAL_4_tmpl_0
		struct TIM_GENERAL_4_tmpl_0 /// fields used by TIM21 
		{
			#ifdef TIM_GENERAL_4_OR
			struct OR_t: public Reg32_t /// TIM21 option register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_4_OR_0
					struct
					{
						uint32_t                  : 2;
						uint32_t TI1_RMP          : 3; /// Timer21 TI1
						uint32_t TI2_RMP          : 1; /// Timer21 TI2
						uint32_t                  : 26;
					};
					#endif
					#ifdef TIM_GENERAL_4_OR_1
					struct
					{
						uint32_t ETR_RMP          : 2; /// Timer22 ETR remap
						uint32_t TI1_RMP          : 2; /// Timer22 TI1
						uint32_t                  : 28;
					};
					#endif
				};
				
			};
			#endif
		};
		#endif
		struct TIM_GENERAL_4_tmpl_default /// default template for TIM_GENERAL_4 
		{
			#ifdef TIM_GENERAL_4_OR
			struct OR_t: public Reg32_t /// TIM21 option register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_4_OR_1
					struct
					{
						uint32_t ETR_RMP          : 2; /// Timer22 ETR remap
						uint32_t TI1_RMP          : 2; /// Timer22 TI1
						uint32_t                  : 28;
					};
					#endif
					#ifdef TIM_GENERAL_4_OR_2
					struct
					{
						uint32_t TI1_RMP          : 2; /// TIM9 Input 1 remapping capability
						uint32_t                  : 30;
					};
					#endif
				};
				
			};
			#endif
		};
		#ifdef TIM_GENERAL_6_TIM_GENERAL_6_tmpl_0
		struct TIM_GENERAL_6_tmpl_0 /// fields used by TIM2, TIM10, TIM11, TIM13, TIM14, TIM1 
		{
			#ifdef TIM_GENERAL_6_CCMR1_Input
			struct CCMR1_Input_t: public Reg32_t /// capture/compare mode register 1 (input mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t TIM_GENERAL_6_CCMR1_Input_0_ICPCS : 2; /// Input capture 1 prescaler
						uint32_t IC1F             : 4; /// Input capture 1 filter
						uint32_t                  : 24;
					};
					#ifdef TIM_GENERAL_6_CCMR1_Input_1
					struct
					{
						uint32_t                  : 2;
						uint32_t IC1PSC           : 2; /// Input capture 1 prescaler
						uint32_t                  : 28;
					};
					#endif
					#ifdef TIM_GENERAL_6_CCMR1_Input_2
					struct
					{
						uint32_t                  : 2;
						uint32_t IC1PSC           : 2; /// Input capture 1 prescaler
						uint32_t                  : 28;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_6_OR
			struct OR_t: public Reg32_t /// option register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_6_OR_0
					struct
					{
						uint32_t TI1_RMP          : 2; /// TIM11 Input 1 remapping capability
						uint32_t                  : 30;
					};
					#endif
					#ifdef TIM_GENERAL_6_OR_2
					struct
					{
						uint32_t RMP              : 2; /// Input 1 remapping capability
						uint32_t                  : 30;
					};
					#endif
					#ifdef TIM_GENERAL_6_OR_1
					struct
					{
						uint32_t RMP              : 2; /// Input 1 remapping capability
						uint32_t                  : 30;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIM1_OR
			struct TIM1_OR_t: public Reg32_t /// TIM option register
			{
				using Reg32_t::operator=;
				uint32_t EXTRIGSEL        : 2;
				uint32_t CLKMSKEN         : 1;
				uint32_t ORRSVD           : 1;
				uint32_t                  : 28;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIM2_OR
			struct TIM2_OR_t: public Reg32_t /// TIM option register
			{
				using Reg32_t::operator=;
				uint32_t EXTRIGSEL        : 2;
				uint32_t CLKMSKEN         : 1;
				uint32_t ORRSVD           : 1;
				uint32_t REMAPC1          : 1;
				uint32_t REMAPC2          : 1;
				uint32_t REMAPC3          : 1;
				uint32_t REMAPC4          : 1;
				uint32_t                  : 24;
				
			};
			#endif
		};
		#endif
		struct TIM_GENERAL_6_tmpl_default /// default template for TIM_GENERAL_6 
		{
			#ifdef TIM_GENERAL_6_CCMR1_Input
			struct CCMR1_Input_t: public Reg32_t /// capture/compare mode register 1 (input mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t TIM_GENERAL_6_CCMR1_Input_0_ICPCS : 2; /// Input capture 1 prescaler
						uint32_t IC1F             : 4; /// Input capture 1 filter
						uint32_t                  : 24;
					};
					#ifdef TIM_GENERAL_6_CCMR1_Input_1
					struct
					{
						uint32_t                  : 2;
						uint32_t IC1PSC           : 2; /// Input capture 1 prescaler
						uint32_t                  : 28;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_6_OR
			struct OR_t: public Reg32_t /// option register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_6_OR_0
					struct
					{
						uint32_t TI1_RMP          : 2; /// TIM11 Input 1 remapping capability
						uint32_t                  : 30;
					};
					#endif
					#ifdef TIM_GENERAL_6_OR_2
					struct
					{
						uint32_t RMP              : 2; /// Input 1 remapping capability
						uint32_t                  : 30;
					};
					#endif
				};
				
			};
			#endif
		};
		class TIM_PARENT /// TIM peripherals parent class
		{
		public:
			
			

			#if __SOOL_DEBUG_NOPHY
				TIM_PARENT(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() const volatile {return myaddr;};
			#else
				inline const uintptr_t get_addr() const volatile {return (uintptr_t)(this);};
			private:
				TIM_PARENT() = delete;
			#endif
		};
		#ifdef PERIPH_MAC_TIM
		class MAC_TIM : public TIM_PARENT/// mac timer
		{
		public:
			
			struct MACTMR_CNTR_t: public Reg32_t /// MACTMR counter register
			{
				using Reg32_t::operator=;
				uint32_t CNT              : 20; /// MAC timer count
				uint32_t                  : 12;
				
			};
			struct MACTMR_CR_t: public Reg32_t /// MACTMR configuration register
			{
				using Reg32_t::operator=;
				uint32_t EN               : 1; /// MAC timer enable
				uint32_t RST              : 1; /// MAC timer reset
				uint32_t                  : 30;
				
			};
			MACTMR_CNTR_t MACTMR_CNTR; /// MACTMR counter register
			__SOOL_PERIPH_PADDING_16;
			__SOOL_PERIPH_PADDING_64;
			MACTMR_CR_t MACTMR_CR; /// MACTMR configuration register
			
		};
		#endif
		#ifdef PERIPH_TIM_ADVANCED
		template<typename tmpl=TIM_ADVANCED_tmpl_default>
		class TIM_ADVANCED : public TIM_PARENT/// advanced timers
		{
		public:
			
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				uint32_t CEN              : 1; /// Counter enable
				uint32_t UDIS             : 1; /// Update disable
				uint32_t URS              : 1; /// Update request source
				uint32_t OPM              : 1; /// One-pulse mode
				uint32_t DIR              : 1; /// Direction
				uint32_t CMS              : 2; /// Center-aligned mode selection
				uint32_t ARPE             : 1; /// Auto-reload preload enable
				uint32_t CKD              : 2; /// Clock division
				uint32_t                  : 1;
				uint32_t TIM_ADVANCED_CR1_UIFREMAP : 1; /// UIF status bit remapping
				uint32_t TIM_ADVANCED_CR1_DITHEN : 1; /// Dithering Enable
				uint32_t                  : 19;
				
			};
			struct CR2_t: public Reg32_t /// control register 2
			{
				using Reg32_t::operator=;
				uint32_t CCPC             : 1; /// Capture/compare preloaded control
				uint32_t                  : 1;
				uint32_t CCUS             : 1; /// Capture/compare control update selection
				uint32_t CCDS             : 1; /// Capture/compare DMA selection
				uint32_t MMS              : 3; /// Master mode selection
				uint32_t TI1S             : 1; /// TI1 selection
				uint32_t OIS1             : 1; /// Output Idle state 1
				uint32_t OIS1N            : 1; /// Output Idle state 1
				uint32_t OIS2             : 1; /// Output Idle state 2
				uint32_t OIS2N            : 1; /// Output Idle state 2
				uint32_t OIS3             : 1; /// Output Idle state 3
				uint32_t OIS3N            : 1; /// Output Idle state 3
				uint32_t OIS4             : 1; /// Output Idle state 4
				uint32_t TIM_ADVANCED_CR2_OIS4N : 1; /// Output Idle state 4 (OC4N output)
				uint32_t TIM_ADVANCED_CR2_OIS5 : 1; /// Output Idle state 5
				uint32_t                  : 1;
				uint32_t TIM_ADVANCED_CR2_OIS6 : 1; /// Output Idle state 6
				uint32_t                  : 1;
				uint32_t TIM_ADVANCED_CR2_MMS2 : 4; /// Master mode selection 2
				uint32_t                  : 1;
				uint32_t TIM_ADVANCED_CR2_MMS_3 : 1; /// Master mode selection - bit 3
				uint32_t                  : 6;
				
			};
			struct SMCR_t: public Reg32_t /// slave mode control register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t SMS              : 3; /// Slave mode selection
						uint32_t TIM_ADVANCED_SMCR_0_OCCS : 1; /// OCREF clear selection
						uint32_t TIM_ADVANCED_SMCR_0_TS : 3; /// Trigger selection
						uint32_t MSM              : 1; /// Master/Slave mode
						uint32_t ETF              : 4; /// External trigger filter
						uint32_t ETPS             : 2; /// External trigger prescaler
						uint32_t ECE              : 1; /// External clock enable
						uint32_t ETP              : 1; /// External trigger polarity
						uint32_t TIM_ADVANCED_SMCR_0_SMS_3 : 1; /// Slave mode selection - bit 3
						uint32_t                  : 3;
						uint32_t TIM_ADVANCED_SMCR_0_TS_4_3 : 2; /// Trigger selection - bit 4:3
						uint32_t                  : 2;
						uint32_t TIM_ADVANCED_SMCR_0_SMSPE : 1; /// SMS Preload Enable
						uint32_t TIM_ADVANCED_SMCR_0_SMSPS : 1; /// SMS Preload Source
						uint32_t                  : 6;
					};
					#ifdef TIM_ADVANCED_SMCR_1
					struct
					{
						uint32_t                  : 4;
						uint32_t TS_4             : 3; /// Trigger selection
						uint32_t                  : 13;
						uint32_t TS               : 2; /// Trigger selection
						uint32_t                  : 10;
					};
					#endif
				};
				
			};
			struct DIER_t: public Reg32_t /// DMA/Interrupt enable register
			{
				using Reg32_t::operator=;
				uint32_t UIE              : 1; /// Update interrupt enable
				uint32_t CC1IE            : 1; /// Capture/Compare 1 interrupt enable
				uint32_t CC2IE            : 1; /// Capture/Compare 2 interrupt enable
				uint32_t CC3IE            : 1; /// Capture/Compare 3 interrupt enable
				uint32_t CC4IE            : 1; /// Capture/Compare 4 interrupt enable
				uint32_t COMIE            : 1; /// COM interrupt enable
				uint32_t TIE              : 1; /// Trigger interrupt enable
				uint32_t BIE              : 1; /// Break interrupt enable
				uint32_t UDE              : 1; /// Update DMA request enable
				uint32_t CC1DE            : 1; /// Capture/Compare 1 DMA request enable
				uint32_t CC2DE            : 1; /// Capture/Compare 2 DMA request enable
				uint32_t CC3DE            : 1; /// Capture/Compare 3 DMA request enable
				uint32_t CC4DE            : 1; /// Capture/Compare 4 DMA request enable
				uint32_t COMDE            : 1; /// COM DMA request enable
				uint32_t TDE              : 1; /// Trigger DMA request enable
				uint32_t                  : 5;
				uint32_t TIM_ADVANCED_DIER_IDXIE : 1; /// Index interrupt enable
				uint32_t TIM_ADVANCED_DIER_DIRIE : 1; /// Direction Change interrupt enable
				uint32_t TIM_ADVANCED_DIER_IERRIE : 1; /// Index Error interrupt enable
				uint32_t TIM_ADVANCED_DIER_TERRIE : 1; /// Transition Error interrupt enable
				uint32_t                  : 8;
				
			};
			struct SR_t: public Reg32_t /// status register
			{
				using Reg32_t::operator=;
				uint32_t UIF              : 1; /// Update interrupt flag
				uint32_t CC1IF            : 1; /// Capture/compare 1 interrupt flag
				uint32_t CC2IF            : 1; /// Capture/Compare 2 interrupt flag
				uint32_t CC3IF            : 1; /// Capture/Compare 3 interrupt flag
				uint32_t CC4IF            : 1; /// Capture/Compare 4 interrupt flag
				uint32_t COMIF            : 1; /// COM interrupt flag
				uint32_t TIF              : 1; /// Trigger interrupt flag
				uint32_t BIF              : 1; /// Break interrupt flag
				uint32_t TIM_ADVANCED_SR_B2IF : 1; /// Break 2 interrupt flag
				uint32_t CC1OF            : 1; /// Capture/Compare 1 overcapture flag
				uint32_t CC2OF            : 1; /// Capture/compare 2 overcapture flag
				uint32_t CC3OF            : 1; /// Capture/Compare 3 overcapture flag
				uint32_t CC4OF            : 1; /// Capture/Compare 4 overcapture flag
				uint32_t TIM_ADVANCED_SR_SBIF : 1; /// System Break interrupt flag
				uint32_t                  : 2;
				uint32_t TIM_ADVANCED_SR_CC5IF : 1; /// Compare 5 interrupt flag
				uint32_t TIM_ADVANCED_SR_CC6IF : 1; /// Compare 6 interrupt flag
				uint32_t                  : 2;
				uint32_t TIM_ADVANCED_SR_IDXF : 1; /// Index interrupt flag
				uint32_t TIM_ADVANCED_SR_DIRF : 1; /// Direction Change interrupt flag
				uint32_t TIM_ADVANCED_SR_IERRF : 1; /// Index Error interrupt flag
				uint32_t TIM_ADVANCED_SR_TERRF : 1; /// Transition Error interrupt flag
				uint32_t                  : 8;
				
			};
			struct EGR_t: public Reg32_t /// event generation register
			{
				using Reg32_t::operator=;
				uint32_t UG               : 1; /// Update generation
				uint32_t CC1G             : 1; /// Capture/compare 1 generation
				uint32_t CC2G             : 1; /// Capture/compare 2 generation
				uint32_t CC3G             : 1; /// Capture/compare 3 generation
				uint32_t CC4G             : 1; /// Capture/compare 4 generation
				uint32_t COMG             : 1; /// Capture/Compare control update generation
				uint32_t TG               : 1; /// Trigger generation
				uint32_t BG               : 1; /// Break generation
				uint32_t TIM_ADVANCED_EGR_B2G : 1; /// Break 2 generation
				uint32_t                  : 23;
				
			};
			struct CCMR1_Output_t: public Reg32_t /// capture/compare mode register 1 (output mode)
			{
				using Reg32_t::operator=;
				uint32_t CC1S             : 2; /// Capture/Compare 1 selection
				uint32_t OC1FE            : 1; /// Output Compare 1 fast enable
				uint32_t OC1PE            : 1; /// Output Compare 1 preload enable
				uint32_t OC1M             : 3; /// Output Compare 1 mode
				uint32_t OC1CE            : 1; /// Output Compare 1 clear enable
				uint32_t CC2S             : 2; /// Capture/Compare 2 selection
				uint32_t OC2FE            : 1; /// Output Compare 2 fast enable
				uint32_t OC2PE            : 1; /// Output Compare 2 preload enable
				uint32_t OC2M             : 3; /// Output Compare 2 mode
				uint32_t OC2CE            : 1; /// Output Compare 2 clear enable
				uint32_t TIM_ADVANCED_CCMR1_Output_OC1M_3 : 1; /// Output Compare 1 mode - bit 3
				uint32_t                  : 7;
				uint32_t TIM_ADVANCED_CCMR1_Output_OC2M_3 : 1; /// Output Compare 2 mode - bit 3
				uint32_t                  : 7;
				
			};
			struct CCMR1_Input_t: public Reg32_t /// capture/compare mode register 1 (input mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t TIM_ADVANCED_CCMR1_Input_0_ICPCS : 2; /// Input capture 1 prescaler
						uint32_t TIM_ADVANCED_CCMR1_Input_0_IC1F : 4; /// Input capture 1 filter
						uint32_t CC2S             : 2; /// Capture/Compare 2 selection
						uint32_t TIM_ADVANCED_CCMR1_Input_0_IC2PCS : 2; /// Input capture 2 prescaler
						uint32_t TIM_ADVANCED_CCMR1_Input_0_IC2F : 4; /// Input capture 2 filter
						uint32_t                  : 16;
					};
					#ifdef TIM_ADVANCED_CCMR1_Input_1
					struct
					{
						uint32_t                  : 2;
						uint32_t TIM_ADVANCED_CCMR1_Input_1_ICPSC : 2; /// Input capture 1 prescaler
						uint32_t TIM_ADVANCED_CCMR1_Input_1_C1F : 4; /// Input capture 1 filter
						uint32_t                  : 2;
						uint32_t TIM_ADVANCED_CCMR1_Input_1_IC2PSC : 2; /// Input capture 2 prescaler
						uint32_t TIM_ADVANCED_CCMR1_Input_1_OC2M : 3; /// Output Compare 2 mode
						uint32_t TIM_ADVANCED_CCMR1_Input_1_OC2CE : 1; /// Output Compare 2 clear enable
						uint32_t                  : 16;
					};
					#endif
					#ifdef TIM_ADVANCED_CCMR1_Input_2
					struct
					{
						uint32_t                  : 2;
						uint32_t TIM_ADVANCED_CCMR1_Input_2_IC1PSC : 2; /// Input capture 1 prescaler
						uint32_t TIM_ADVANCED_CCMR1_Input_2_OC1M : 3; /// Output Compare 1 mode
						uint32_t TIM_ADVANCED_CCMR1_Input_2_OC1CE : 1; /// Output Compare 1 clear enable
						uint32_t                  : 2;
						uint32_t TIM_ADVANCED_CCMR1_Input_2_OC2FE : 1; /// Output Compare 2 fast enable
						uint32_t TIM_ADVANCED_CCMR1_Input_2_OC2PE : 1; /// Output Compare 2 preload enable
						uint32_t                  : 20;
					};
					#endif
					#ifdef TIM_ADVANCED_CCMR1_Input_3
					struct
					{
						uint32_t                  : 2;
						uint32_t IC1PCS           : 2; /// Input capture 1 prescaler
						uint32_t                  : 28;
					};
					#endif
					#ifdef TIM_ADVANCED_CCMR1_Input_4
					struct
					{
						uint32_t                  : 2;
						uint32_t OC1FE            : 1; /// Output Compare 1 fast enable
						uint32_t OC1PE            : 1; /// Output Compare 1 preload enable
						uint32_t                  : 28;
					};
					#endif
				};
				
			};
			struct CCMR2_Output_t: public Reg32_t /// capture/compare mode register 2 (output mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC3S             : 2; /// Capture/Compare 3 selection
						uint32_t OC3FE            : 1; /// Output compare 3 fast enable
						uint32_t OC3PE            : 1; /// Output compare 3 preload enable
						uint32_t OC3M             : 3; /// Output compare 3 mode
						uint32_t OC3CE            : 1; /// Output compare 3 clear enable
						uint32_t CC4S             : 2; /// Capture/Compare 4 selection
						uint32_t OC4FE            : 1; /// Output compare 4 fast enable
						uint32_t OC4PE            : 1; /// Output compare 4 preload enable
						uint32_t OC4M             : 3; /// Output compare 4 mode
						uint32_t OC4CE            : 1; /// Output compare 4 clear enable
						uint32_t TIM_ADVANCED_CCMR2_Output_0_OC3M_3 : 1; /// Output Compare 3 mode - bit 3
						uint32_t                  : 7;
						uint32_t TIM_ADVANCED_CCMR2_Output_0_OC4M_4 : 1; /// Output Compare 4 mode - bit 3
						uint32_t                  : 7;
					};
					#ifdef TIM_ADVANCED_CCMR2_Output_1
					struct
					{
						uint32_t                  : 24;
						uint32_t OC4M_3           : 1; /// Output Compare 4 mode - bit 3
						uint32_t                  : 7;
					};
					#endif
				};
				
			};
			struct CCMR2_Input_t: public Reg32_t /// capture/compare mode register 2 (input mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC3S             : 2; /// Capture/compare 3 selection
						uint32_t TIM_ADVANCED_CCMR2_Input_0_IC3PSC : 2; /// Input capture 3 prescaler
						uint32_t TIM_ADVANCED_CCMR2_Input_0_IC3F : 4; /// Input capture 3 filter
						uint32_t CC4S             : 2; /// Capture/Compare 4 selection
						uint32_t TIM_ADVANCED_CCMR2_Input_0_IC4PSC : 2; /// Input capture 4 prescaler
						uint32_t TIM_ADVANCED_CCMR2_Input_0_IC4F : 4; /// Input capture 4 filter
						uint32_t                  : 16;
					};
					#ifdef TIM_ADVANCED_CCMR2_Input_1
					struct
					{
						uint32_t                  : 2;
						uint32_t TIM_ADVANCED_CCMR2_Input_1_C3PSC : 2; /// Input capture 3 prescaler
						uint32_t TIM_ADVANCED_CCMR2_Input_1_OC3M : 3; /// Output compare 3 mode
						uint32_t TIM_ADVANCED_CCMR2_Input_1_OC3CE : 1; /// Output compare 3 clear enable
						uint32_t                  : 2;
						uint32_t TIM_ADVANCED_CCMR2_Input_1_OC4FE : 1; /// Output compare 4 fast enable
						uint32_t TIM_ADVANCED_CCMR2_Input_1_OC4PE : 1; /// Output compare 4 preload enable
						uint32_t TIM_ADVANCED_CCMR2_Input_1_OC4M : 3; /// Output compare 4 mode
						uint32_t TIM_ADVANCED_CCMR2_Input_1_OC4CE : 1; /// Output compare 4 clear enable
						uint32_t                  : 16;
					};
					#endif
					#ifdef TIM_ADVANCED_CCMR2_Input_2
					struct
					{
						uint32_t                  : 2;
						uint32_t OC3FE            : 1; /// Output compare 3 fast enable
						uint32_t OC3PE            : 1; /// Output compare 3 preload enable
						uint32_t                  : 28;
					};
					#endif
				};
				
			};
			struct CCER_t: public Reg32_t /// capture/compare enable register
			{
				using Reg32_t::operator=;
				uint32_t CC1E             : 1; /// Capture/Compare 1 output enable
				uint32_t CC1P             : 1; /// Capture/Compare 1 output Polarity
				uint32_t CC1NE            : 1; /// Capture/Compare 1 complementary output enable
				uint32_t CC1NP            : 1; /// Capture/Compare 1 output Polarity
				uint32_t CC2E             : 1; /// Capture/Compare 2 output enable
				uint32_t CC2P             : 1; /// Capture/Compare 2 output Polarity
				uint32_t CC2NE            : 1; /// Capture/Compare 2 complementary output enable
				uint32_t CC2NP            : 1; /// Capture/Compare 2 output Polarity
				uint32_t CC3E             : 1; /// Capture/Compare 3 output enable
				uint32_t CC3P             : 1; /// Capture/Compare 3 output Polarity
				uint32_t CC3NE            : 1; /// Capture/Compare 3 complementary output enable
				uint32_t CC3NP            : 1; /// Capture/Compare 3 output Polarity
				uint32_t CC4E             : 1; /// Capture/Compare 4 output enable
				uint32_t CC4P             : 1; /// Capture/Compare 3 output Polarity
				uint32_t TIM_ADVANCED_CCER_CC4NE : 1; /// Capture/Compare 4 complementary output enable
				uint32_t TIM_ADVANCED_CCER_CC4NP : 1; /// Capture/Compare 4 complementary output polarity
				uint32_t TIM_ADVANCED_CCER_CC5E : 1; /// Capture/Compare 5 output enable
				uint32_t TIM_ADVANCED_CCER_CC5P : 1; /// Capture/Compare 5 output polarity
				uint32_t                  : 2;
				uint32_t TIM_ADVANCED_CCER_CC6E : 1; /// Capture/Compare 6 output enable
				uint32_t TIM_ADVANCED_CCER_CC6P : 1; /// Capture/Compare 6 output polarity
				uint32_t                  : 10;
				
			};
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				uint32_t CNT              : 16; /// counter value
				uint32_t                  : 15;
				uint32_t TIM_ADVANCED_CNT_UIFCPY : 1; /// UIF copy
				
			};
			struct PSC_t: public Reg32_t /// prescaler
			{
				using Reg32_t::operator=;
				uint32_t PSC              : 16; /// Prescaler value
				uint32_t                  : 16;
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				uint32_t ARR              : 16; /// Auto-reload value
				uint32_t                  : 16;
				
			};
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				uint32_t CCR1             : 16; /// Capture/Compare 1 value
				uint32_t                  : 16;
				
			};
			struct CCR2_t: public Reg32_t /// capture/compare register 2
			{
				using Reg32_t::operator=;
				uint32_t CCR2             : 16; /// Capture/Compare 2 value
				uint32_t                  : 16;
				
			};
			struct CCR3_t: public Reg32_t /// capture/compare register 3
			{
				using Reg32_t::operator=;
				uint32_t CCR3             : 16; /// Capture/Compare value
				uint32_t                  : 16;
				
			};
			struct CCR4_t: public Reg32_t /// capture/compare register 4
			{
				using Reg32_t::operator=;
				uint32_t CCR4             : 16; /// Capture/Compare value
				uint32_t                  : 16;
				
			};
			struct DCR_t: public Reg32_t /// DMA control register
			{
				using Reg32_t::operator=;
				uint32_t DBA              : 5; /// DMA base address
				uint32_t                  : 3;
				uint32_t DBL              : 5; /// DMA burst length
				uint32_t                  : 19;
				
			};
			struct DMAR_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_ADVANCED_DMAR_0
					struct
					{
						uint32_t DMAB             : 32; /// DMA register for burst accesses
					};
					#endif
					#ifdef TIM_ADVANCED_DMAR_1
					struct
					{
						uint32_t DMAB             : 16; /// DMA register for burst accesses
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			struct RCR_t: public Reg32_t /// repetition counter register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_ADVANCED_RCR_0
					struct
					{
						uint32_t REP              : 8; /// Repetition counter value
						uint32_t                  : 24;
					};
					#endif
					#ifdef TIM_ADVANCED_RCR_1
					struct
					{
						uint32_t REP              : 16; /// Repetition counter value
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			struct BDTR_t: public Reg32_t /// break and dead-time register
			{
				using Reg32_t::operator=;
				uint32_t DTG              : 8; /// Dead-time generator setup
				uint32_t LOCK             : 2; /// Lock configuration
				uint32_t OSSI             : 1; /// Off-state selection for Idle mode
				uint32_t OSSR             : 1; /// Off-state selection for Run mode
				uint32_t BKE              : 1; /// Break enable
				uint32_t BKP              : 1; /// Break polarity
				uint32_t AOE              : 1; /// Automatic output enable
				uint32_t MOE              : 1; /// Main output enable
				uint32_t TIM_ADVANCED_BDTR_BKF : 4; /// Break filter
				uint32_t TIM_ADVANCED_BDTR_BK2F : 4; /// Break 2 filter
				uint32_t TIM_ADVANCED_BDTR_BK2E : 1; /// Break 2 enable
				uint32_t TIM_ADVANCED_BDTR_BK2P : 1; /// Break 2 polarity
				uint32_t TIM_ADVANCED_BDTR_BKDSRM : 1; /// Break Disarm
				uint32_t TIM_ADVANCED_BDTR_BK2DSRM : 1; /// Break2 Disarm
				uint32_t TIM_ADVANCED_BDTR_BKBID : 1; /// Break Bidirectional
				uint32_t TIM_ADVANCED_BDTR_BK2ID : 1; /// Break2 bidirectional
				uint32_t                  : 2;
				
			};
			#ifdef TIM_ADVANCED_CCMR3_Output
			struct CCMR3_Output_t: public Reg32_t /// capture/compare mode register 3 (output mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t                  : 2;
						uint32_t OC5FE            : 1; /// Output compare 5 fast enable
						uint32_t OC5PE            : 1; /// Output compare 5 preload enable
						uint32_t OC5M             : 3; /// Output compare 5 mode
						uint32_t OC5CE            : 1; /// Output compare 5 clear enable
						uint32_t                  : 2;
						uint32_t OC6FE            : 1; /// Output compare 6 fast enable
						uint32_t OC6PE            : 1; /// Output compare 6 preload enable
						uint32_t OC6M             : 3; /// Output compare 6 mode
						uint32_t OC6CE            : 1; /// Output compare 6 clear enable
						uint32_t TIM_ADVANCED_CCMR3_Output_0_OC5M3 : 1; /// Output Compare 5 mode
						uint32_t                  : 7;
						uint32_t TIM_ADVANCED_CCMR3_Output_0_OC6M3 : 1; /// Output Compare 6 mode
						uint32_t                  : 7;
					};
					#ifdef TIM_ADVANCED_CCMR3_Output_1
					struct
					{
						uint32_t                  : 16;
						uint32_t TIM_ADVANCED_CCMR3_Output_1_OC5M_bit3 : 3; /// Output Compare 5 mode bit 3
						uint32_t                  : 5;
						uint32_t OC6M_bit3        : 1; /// Output Compare 6 mode bit 3
						uint32_t                  : 7;
					};
					#endif
					#ifdef TIM_ADVANCED_CCMR3_Output_2
					struct
					{
						uint32_t                  : 16;
						uint32_t OC5M_bit3        : 1; /// Output Compare 5 mode bit 3
						uint32_t                  : 15;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_ADVANCED_CCR5
			struct CCR5_t: public Reg32_t /// capture/compare register 5
			{
				using Reg32_t::operator=;
				uint32_t CCR5             : 16; /// Capture/Compare 5 value
				uint32_t                  : 13;
				uint32_t GC5C1            : 1; /// Group Channel 5 and Channel 1
				uint32_t GC5C2            : 1; /// Group Channel 5 and Channel 2
				uint32_t GC5C3            : 1; /// Group Channel 5 and Channel 3
				
			};
			#endif
			#ifdef TIM_ADVANCED_CxR6
			struct CxR6_t: public Reg32_t /// capture/compare register 6
			{
				using Reg32_t::operator=;
				uint32_t CCR6             : 16; /// Capture/Compare 6 value
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef TIM_ADVANCED_AF1
			struct AF1_t: public Reg32_t /// TIM1 alternate function option register 1
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t BKINE            : 1; /// BRK BKIN input enable
						uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
						uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
						uint32_t TIM_ADVANCED_AF1_0_BKCMP3E : 1; /// BRK COMP3 enable
						uint32_t TIM_ADVANCED_AF1_0_BKCMP4E : 1; /// BRK COMP4 enable
						uint32_t TIM_ADVANCED_AF1_0_BKCMP5E : 1; /// BRK COMP5 enable
						uint32_t TIM_ADVANCED_AF1_0_BKCMP6E : 1; /// BRK COMP6 enable
						uint32_t TIM_ADVANCED_AF1_0_BKCMP7E : 1; /// BRK COMP7 enable
						uint32_t TIM_ADVANCED_AF1_0_BKDF1BK0E : 1; /// BRK dfsdm1_break[0] enable
						uint32_t BKINP            : 1; /// BRK BKIN input polarity
						uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
						uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarity
						uint32_t TIM_ADVANCED_AF1_0_BKCMP3P : 1; /// BRK COMP3 input polarity
						uint32_t TIM_ADVANCED_AF1_0_BKCMP4P : 1; /// BRK COMP4 input polarity
						uint32_t TIM_ADVANCED_AF1_0_ETRSEL : 4; /// ETR source selection
						uint32_t                  : 14;
					};
					#ifdef TIM_ADVANCED_AF1_1
					struct
					{
						uint32_t                  : 14;
						uint32_t ETRSEL           : 3; /// ETR source selection
						uint32_t                  : 15;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_ADVANCED_AF2
			struct AF2_t: public Reg32_t /// TIM1 Alternate function odfsdm1_breakster 2
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t TIM_ADVANCED_AF2_0_BK2INE : 1; /// BRK2 BKIN input enable
						uint32_t BK2CMP1E         : 1; /// BRK2 COMP1 enable
						uint32_t BK2CMP2E         : 1; /// BRK2 COMP2 enable
						uint32_t TIM_ADVANCED_AF2_0_BK2CMP3E : 1; /// BRK2 COMP3 enable
						uint32_t TIM_ADVANCED_AF2_0_BK2CMP4E : 1; /// BRK2 COMP4 enable
						uint32_t TIM_ADVANCED_AF2_0_BK2CMP5E : 1; /// BRK2 COMP5 enable
						uint32_t TIM_ADVANCED_AF2_0_BK2CMP6E : 1; /// BRK2 COMP6 enable
						uint32_t TIM_ADVANCED_AF2_0_BK2CMP7E : 1; /// BRK2 COMP7 enable
						uint32_t TIM_ADVANCED_AF2_0_BK2DF1BK1E : 1; /// BRK2 dfsdm1_break[1] enable
						uint32_t BK2INP           : 1; /// BRK2 BKIN2 input polarity
						uint32_t BK2CMP1P         : 1; /// BRK2 COMP1 input polarit
						uint32_t BK2CMP2P         : 1; /// BRK2 COMP2 input polarity
						uint32_t TIM_ADVANCED_AF2_0_BK2CMP3P : 1; /// BRK2 COMP3 input polarity
						uint32_t TIM_ADVANCED_AF2_0_BK2CMP4P : 1; /// BRK2 COMP4 input polarity
						uint32_t                  : 2;
						uint32_t TIM_ADVANCED_AF2_0_OCRSEL : 3; /// OCREF_CLR source selection
						uint32_t                  : 13;
					};
					#ifdef TIM_ADVANCED_AF2_1
					struct
					{
						uint32_t TIM_ADVANCED_AF2_1_BKINE : 1; /// BRK BKIN input enable
						uint32_t                  : 7;
						uint32_t TIM_ADVANCED_AF2_1_BK2DFBK0E : 1; /// BRK2 DFSDM_BREAK0 enable
						uint32_t                  : 23;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_ADVANCED_TISEL
			struct TISEL_t: public Reg32_t /// TIM1 timer input selection register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_ADVANCED_TISEL_0
					struct
					{
						uint32_t TI1SEL           : 4; /// selects TI1[0] to TI1[15] input
						uint32_t                  : 4;
						uint32_t TI2SEL           : 4; /// selects TI2[0] to TI2[15] input
						uint32_t                  : 4;
						uint32_t TI3SEL           : 4; /// selects TI3[0] to TI3[15] input
						uint32_t                  : 4;
						uint32_t TI4SEL           : 4; /// selects TI4[0] to TI4[15] input
						uint32_t                  : 4;
					};
					#endif
					#ifdef TIM_ADVANCED_TISEL_1
					struct
					{
						uint32_t TI1SEL3_0        : 4; /// selects TI1[0] to TI1[15] input
						uint32_t                  : 4;
						uint32_t TI2SEL3_0        : 4; /// selects TI2[0] to TI2[15] input
						uint32_t                  : 4;
						uint32_t TI3SEL3_0        : 4; /// selects TI3[0] to TI3[15] input
						uint32_t                  : 4;
						uint32_t TI4SEL3_0        : 4; /// selects TI4[0] to TI4[15] input
						uint32_t                  : 4;
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_ADVANCED_DTR2
			struct DTR2_t: public Reg32_t /// timer Deadtime Register 2
			{
				using Reg32_t::operator=;
				uint32_t DTGF             : 8; /// Dead-time falling edge generator setup
				uint32_t                  : 8;
				uint32_t DTAE             : 1; /// Deadtime Asymmetric Enable
				uint32_t DTPE             : 1; /// Deadtime Preload Enable
				uint32_t                  : 14;
				
			};
			#endif
			#ifdef TIM_ADVANCED_ECR
			struct ECR_t: public Reg32_t /// DMA control register
			{
				using Reg32_t::operator=;
				uint32_t IE               : 1; /// Index Enable
				uint32_t IDIR             : 2; /// Index Direction
				uint32_t IBLK             : 2; /// Index Blanking
				uint32_t FIDX             : 1; /// First Index
				uint32_t IPOS             : 2; /// Index Positioning
				uint32_t                  : 8;
				uint32_t PW               : 8; /// Pulse width
				uint32_t PWPRSC           : 3; /// Pulse Width prescaler
				uint32_t                  : 5;
				
			};
			#endif
			#ifdef TIM_ADVANCED_OR
			struct OR_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				uint32_t TIM1_ETR_ADC1_RMP : 2; /// TIM1_ETR_ADC1 remapping capability
				uint32_t                  : 2;
				uint32_t TI1_RMP          : 1; /// Input Capture 1 remap
				uint32_t                  : 27;
				
			};
			#endif
			union
			{
				struct
				{
					CR1_t CR1; /// control register 1
					CR2_t CR2; /// control register 2
					SMCR_t SMCR; /// slave mode control register
					DIER_t DIER; /// DMA/Interrupt enable register
					SR_t SR; /// status register
					EGR_t EGR; /// event generation register
					CCMR1_Output_t CCMR1_Output; /// capture/compare mode register 1 (output mode)
					CCMR2_Input_t CCMR2_Input; /// capture/compare mode register 2 (input mode)
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_32;
					TIM_ADVANCED_MAP0_CCR5; /// capture/compare register 4
					__SOOL_PERIPH_PADDING_4;
					TIM_ADVANCED_MAP0_OR; /// DMA address for full transfer
					__SOOL_PERIPH_PADDING_8;
					TIM_ADVANCED_MAP0_CCR6; /// capture/compare register 4
					TIM_ADVANCED_MAP0_OR2; /// DMA address for full transfer
					TIM_ADVANCED_MAP0_OR3; /// DMA address for full transfer
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					CCMR1_Input_t CCMR1_Input; /// capture/compare mode register 1 (input mode)
					CCMR2_Output_t CCMR2_Output; /// capture/compare mode register 2 (output mode)
					CCER_t CCER; /// capture/compare enable register
					CNT_t CNT; /// counter
					PSC_t PSC; /// prescaler
					ARR_t ARR; /// auto-reload register
					RCR_t RCR; /// repetition counter register
					CCR1_t CCR1; /// capture/compare register 1
					CCR2_t CCR2; /// capture/compare register 2
					CCR3_t CCR3; /// capture/compare register 3
					CCR4_t CCR4; /// capture/compare register 4
					BDTR_t BDTR; /// break and dead-time register
					TIM_ADVANCED_MAP1_DCR; /// DMA control register
					TIM_ADVANCED_MAP1_DMAR; /// DMA address for full transfer
					TIM_ADVANCED_MAP1_OR1; /// DMA address for full transfer
					TIM_ADVANCED_MAP1_CCMR3_Output; /// capture/compare mode register 3 (output mode)
					TIM_ADVANCED_MAP1_CCR5; /// capture/compare register 5
					TIM_ADVANCED_MAP1_CRR6; /// capture/compare register 6
					TIM_ADVANCED_MAP1_AF1; /// TIM1 alternate function option register 1
					TIM_ADVANCED_MAP1_AF2; /// TIM1 Alternate function odfsdm1_breakster 2
					TIM_ADVANCED_MAP1_TISEL; /// TIM1 timer input selection register
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				#ifdef TIM_ADVANCED_MAP2
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_64;
					CxR6_t CCR6; /// capture/compare register 4
					CCMR3_Output_t CCMR3_Output; /// capture/compare mode register 2 (output mode)
					DTR2_t DTR2; /// timer Deadtime Register 2
					ECR_t ECR; /// DMA control register
					TISEL_t TISEL; /// TIM timer input selection register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					DCR_t DCR; /// control register
					DMAR_t DMAR; /// DMA address for full transfer
				};
				#endif
			};
			
		};
		#endif
		#ifdef PERIPH_TIM_BASIC
		class TIM_BASIC : public TIM_PARENT/// basic timers
		{
		public:
			
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				uint32_t CEN              : 1; /// Counter enable
				uint32_t UDIS             : 1; /// Update disable
				uint32_t URS              : 1; /// Update request source
				uint32_t OPM              : 1; /// One-pulse mode
				uint32_t                  : 3;
				uint32_t ARPE             : 1; /// Auto-reload preload enable
				uint32_t                  : 3;
				uint32_t TIM_BASIC_CR1_UIFREMAP : 1; /// UIF status bit remapping
				uint32_t TIM_BASIC_CR1_DITHEN : 1; /// Dithering Enable
				uint32_t                  : 19;
				
			};
			struct CR2_t: public Reg32_t /// control register 2
			{
				using Reg32_t::operator=;
				uint32_t                  : 4;
				uint32_t MMS              : 3; /// Master mode selection
				uint32_t                  : 25;
				
			};
			struct DIER_t: public Reg32_t /// DMA/Interrupt enable register
			{
				using Reg32_t::operator=;
				uint32_t UIE              : 1; /// Update interrupt enable
				uint32_t                  : 7;
				uint32_t UDE              : 1; /// Update DMA request enable
				uint32_t                  : 23;
				
			};
			struct SR_t: public Reg32_t /// status register
			{
				using Reg32_t::operator=;
				uint32_t UIF              : 1; /// Update interrupt flag
				uint32_t                  : 31;
				
			};
			struct EGR_t: public Reg32_t /// event generation register
			{
				using Reg32_t::operator=;
				uint32_t UG               : 1; /// Update generation
				uint32_t                  : 31;
				
			};
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				uint32_t CNT              : 16; /// Low counter value
				uint32_t                  : 15;
				uint32_t TIM_BASIC_CNT_UIFCPY : 1; /// UIF Copy
				
			};
			struct PSC_t: public Reg32_t /// prescaler
			{
				using Reg32_t::operator=;
				uint32_t PSC              : 16; /// Prescaler value
				uint32_t                  : 16;
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				uint32_t ARR              : 16; /// Low Auto-reload value
				uint32_t                  : 16;
				
			};
			CR1_t CR1; /// control register 1
			CR2_t CR2; /// control register 2
			__SOOL_PERIPH_PADDING_4;
			DIER_t DIER; /// DMA/Interrupt enable register
			SR_t SR; /// status register
			EGR_t EGR; /// event generation register
			__SOOL_PERIPH_PADDING_4;
			__SOOL_PERIPH_PADDING_8;
			CNT_t CNT; /// counter
			PSC_t PSC; /// prescaler
			ARR_t ARR; /// auto-reload register
			
		};
		#endif
		#ifdef PERIPH_TIM_GENERAL_1
		template<typename tmpl=TIM_GENERAL_1_tmpl_default>
		class TIM_GENERAL_1 : public TIM_PARENT/// general purpose timers
		{
		public:
			
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				uint32_t CEN              : 1; /// Counter enable
				uint32_t UDIS             : 1; /// Update disable
				uint32_t URS              : 1; /// Update request source
				uint32_t OPM              : 1; /// One-pulse mode
				uint32_t DIR              : 1; /// Direction
				uint32_t CMS              : 2; /// Center-aligned mode selection
				uint32_t ARPE             : 1; /// Auto-reload preload enable
				uint32_t CKD              : 2; /// Clock division
				uint32_t                  : 1;
				uint32_t TIM_GENERAL_1_CR1_UIFREMAP : 1; /// UIF status bit remapping
				uint32_t                  : 20;
				
			};
			struct CR2_t: public Reg32_t /// control register 2
			{
				using Reg32_t::operator=;
				uint32_t                  : 3;
				uint32_t CCDS             : 1; /// Capture/compare DMA selection
				uint32_t MMS              : 3; /// Master mode selection
				uint32_t TI1S             : 1; /// TI1 selection
				uint32_t                  : 24;
				
			};
			struct SMCR_t: public Reg32_t /// slave mode control register
			{
				using Reg32_t::operator=;
				uint32_t SMS              : 3; /// Slave mode selection
				uint32_t TIM_GENERAL_1_SMCR_OCCS : 1; /// OCREF clear selection
				uint32_t TS               : 3; /// Trigger selection
				uint32_t MSM              : 1; /// Master/Slave mode
				uint32_t ETF              : 4; /// External trigger filter
				uint32_t ETPS             : 2; /// External trigger prescaler
				uint32_t ECE              : 1; /// External clock enable
				uint32_t ETP              : 1; /// External trigger polarity
				uint32_t TIM_GENERAL_1_SMCR_SMS_3 : 1; /// Slave mode selection - bit 3
				uint32_t                  : 3;
				uint32_t TIM_GENERAL_1_SMCR_TS_4_3 : 2; /// Trigger selection
				uint32_t                  : 10;
				
			};
			struct DIER_t: public Reg32_t /// DMA/Interrupt enable register
			{
				using Reg32_t::operator=;
				uint32_t UIE              : 1; /// Update interrupt enable
				uint32_t CC1IE            : 1; /// Capture/Compare 1 interrupt enable
				uint32_t CC2IE            : 1; /// Capture/Compare 2 interrupt enable
				uint32_t CC3IE            : 1; /// Capture/Compare 3 interrupt enable
				uint32_t CC4IE            : 1; /// Capture/Compare 4 interrupt enable
				uint32_t                  : 1;
				uint32_t TIE              : 1; /// Trigger interrupt enable
				uint32_t                  : 1;
				uint32_t UDE              : 1; /// Update DMA request enable
				uint32_t CC1DE            : 1; /// Capture/Compare 1 DMA request enable
				uint32_t CC2DE            : 1; /// Capture/Compare 2 DMA request enable
				uint32_t CC3DE            : 1; /// Capture/Compare 3 DMA request enable
				uint32_t CC4DE            : 1; /// Capture/Compare 4 DMA request enable
				uint32_t TIM_GENERAL_1_DIER_COMDE : 1; /// COM DMA request enable
				uint32_t TIM_GENERAL_1_DIER_TDE : 1; /// Trigger DMA request enable
				uint32_t                  : 17;
				
			};
			struct SR_t: public Reg32_t /// status register
			{
				using Reg32_t::operator=;
				uint32_t UIF              : 1; /// Update interrupt flag
				uint32_t CC1IF            : 1; /// Capture/compare 1 interrupt flag
				uint32_t CC2IF            : 1; /// Capture/Compare 2 interrupt flag
				uint32_t CC3IF            : 1; /// Capture/Compare 3 interrupt flag
				uint32_t CC4IF            : 1; /// Capture/Compare 4 interrupt flag
				uint32_t                  : 1;
				uint32_t TIF              : 1; /// Trigger interrupt flag
				uint32_t                  : 2;
				uint32_t CC1OF            : 1; /// Capture/Compare 1 overcapture flag
				uint32_t CC2OF            : 1; /// Capture/compare 2 overcapture flag
				uint32_t CC3OF            : 1; /// Capture/Compare 3 overcapture flag
				uint32_t CC4OF            : 1; /// Capture/Compare 4 overcapture flag
				uint32_t                  : 19;
				
			};
			struct EGR_t: public Reg32_t /// event generation register
			{
				using Reg32_t::operator=;
				uint32_t UG               : 1; /// Update generation
				uint32_t CC1G             : 1; /// Capture/compare 1 generation
				uint32_t CC2G             : 1; /// Capture/compare 2 generation
				uint32_t CC3G             : 1; /// Capture/compare 3 generation
				uint32_t CC4G             : 1; /// Capture/compare 4 generation
				uint32_t                  : 1;
				uint32_t TG               : 1; /// Trigger generation
				uint32_t                  : 25;
				
			};
			struct CCMR1_Output_t: public Reg32_t /// capture/compare mode register 1 (output mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t OC1FE            : 1; /// Output compare 1 fast enable
						uint32_t OC1PE            : 1; /// Output compare 1 preload enable
						uint32_t OC1M             : 3; /// Output compare 1 mode
						uint32_t OC1CE            : 1; /// Output compare 1 clear enable
						uint32_t TIM_GENERAL_1_CCMR1_Output_0_CC2S : 2; /// Capture/Compare 2 selection
						uint32_t OC2FE            : 1; /// Output compare 2 fast enable
						uint32_t OC2PE            : 1; /// Output compare 2 preload enable
						uint32_t OC2M             : 3; /// Output compare 2 mode
						uint32_t OC2CE            : 1; /// Output compare 2 clear enable
						uint32_t TIM_GENERAL_1_CCMR1_Output_0_OC1M_3 : 1; /// Output Compare 1 mode - bit 3
						uint32_t                  : 7;
						uint32_t TIM_GENERAL_1_CCMR1_Output_0_OC2M_3 : 1; /// Output Compare 2 mode - bit 3
						uint32_t                  : 7;
					};
					#ifdef TIM_GENERAL_1_CCMR1_Output_1
					struct
					{
						uint32_t                  : 8;
						uint32_t CC2S             : 1; /// Capture/Compare 2 selection
						uint32_t                  : 23;
					};
					#endif
				};
				
			};
			struct CCMR1_Input_t: public Reg32_t /// capture/compare mode register 1 (input mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t TIM_GENERAL_1_CCMR1_Input_0_ICPCS : 2; /// Input capture 1 prescaler
						uint32_t IC1F             : 4; /// Input capture 1 filter
						uint32_t CC2S             : 2; /// Capture/Compare 2 selection
						uint32_t TIM_GENERAL_1_CCMR1_Input_0_IC2PCS : 2; /// Input capture 2 prescaler
						uint32_t IC2F             : 4; /// Input capture 2 filter
						uint32_t                  : 16;
					};
					#ifdef TIM_GENERAL_1_CCMR1_Input_1
					struct
					{
						uint32_t                  : 2;
						uint32_t IC1PSC           : 2; /// Input capture 1 prescaler
						uint32_t                  : 6;
						uint32_t IC2PSC           : 2; /// Input capture 2 prescaler
						uint32_t                  : 20;
					};
					#endif
				};
				
			};
			struct CCMR2_Output_t: public Reg32_t /// capture/compare mode register 2 (output mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC3S             : 2; /// Capture/Compare 3 selection
						uint32_t OC3FE            : 1; /// Output compare 3 fast enable
						uint32_t OC3PE            : 1; /// Output compare 3 preload enable
						uint32_t OC3M             : 3; /// Output compare 3 mode
						uint32_t OC3CE            : 1; /// Output compare 3 clear enable
						uint32_t TIM_GENERAL_1_CCMR2_Output_0_CC4S : 2; /// Capture/Compare 4 selection
						uint32_t OC4FE            : 1; /// Output compare 4 fast enable
						uint32_t OC4PE            : 1; /// Output compare 4 preload enable
						uint32_t OC4M             : 3; /// Output compare 4 mode
						uint32_t TIM_GENERAL_1_CCMR2_Output_0_O24CE : 1; /// Output compare 4 clear enable
						uint32_t TIM_GENERAL_1_CCMR2_Output_0_OC3M_3 : 1; /// Output Compare 1 mode - bit 3
						uint32_t                  : 7;
						uint32_t TIM_GENERAL_1_CCMR2_Output_0_OC4M_3 : 1; /// Output Compare 2 mode - bit 3
						uint32_t                  : 7;
					};
					#ifdef TIM_GENERAL_1_CCMR2_Output_1
					struct
					{
						uint32_t                  : 8;
						uint32_t TIM_GENERAL_1_CCMR2_Output_1_CC4S : 1; /// Capture/Compare 4 selection
						uint32_t                  : 6;
						uint32_t OC4CE            : 1; /// Output compare 4 clear enable
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			struct CCMR2_Input_t: public Reg32_t /// capture/compare mode register 2 (input mode)
			{
				using Reg32_t::operator=;
				uint32_t CC3S             : 2; /// Capture/compare 3 selection
				uint32_t IC3PSC           : 2; /// Input capture 3 prescaler
				uint32_t IC3F             : 4; /// Input capture 3 filter
				uint32_t CC4S             : 2; /// Capture/Compare 4 selection
				uint32_t IC4PSC           : 2; /// Input capture 4 prescaler
				uint32_t IC4F             : 4; /// Input capture 4 filter
				uint32_t                  : 16;
				
			};
			struct CCER_t: public Reg32_t /// capture/compare enable register
			{
				using Reg32_t::operator=;
				uint32_t CC1E             : 1; /// Capture/Compare 1 output enable
				uint32_t CC1P             : 1; /// Capture/Compare 1 output Polarity
				uint32_t                  : 1;
				uint32_t CC1NP            : 1; /// Capture/Compare 1 output Polarity
				uint32_t CC2E             : 1; /// Capture/Compare 2 output enable
				uint32_t CC2P             : 1; /// Capture/Compare 2 output Polarity
				uint32_t                  : 1;
				uint32_t CC2NP            : 1; /// Capture/Compare 2 output Polarity
				uint32_t CC3E             : 1; /// Capture/Compare 3 output enable
				uint32_t CC3P             : 1; /// Capture/Compare 3 output Polarity
				uint32_t                  : 1;
				uint32_t CC3NP            : 1; /// Capture/Compare 3 output Polarity
				uint32_t CC4E             : 1; /// Capture/Compare 4 output enable
				uint32_t CC4P             : 1; /// Capture/Compare 3 output Polarity
				uint32_t                  : 1;
				uint32_t CC4NP            : 1; /// Capture/Compare 4 output Polarity
				uint32_t                  : 16;
				
			};
			struct PSC_t: public Reg32_t /// prescaler
			{
				using Reg32_t::operator=;
				uint32_t PSC              : 16; /// Prescaler value
				uint32_t                  : 16;
				
			};
			struct DCR_t: public Reg32_t /// DMA control register
			{
				using Reg32_t::operator=;
				uint32_t DBA              : 5; /// DMA base address
				uint32_t                  : 3;
				uint32_t DBL              : 5; /// DMA burst length
				uint32_t                  : 19;
				
			};
			struct DMAR_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_1_DMAR_0
					struct
					{
						uint32_t DMAB             : 16; /// DMA register for burst accesses
						uint32_t                  : 16;
					};
					#endif
					#ifdef TIM_GENERAL_1_DMAR_1
					struct
					{
						uint32_t DMAR             : 16; /// DMA register for burst accesses
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_1_AF1
			struct AF1_t: public Reg32_t /// TIM alternate function option register 1
			{
				using Reg32_t::operator=;
				uint32_t                  : 14;
				uint32_t ETRSEL           : 4; /// ETR source selection
				uint32_t                  : 14;
				
			};
			#endif
			#ifdef TIM_GENERAL_1_TISEL
			struct TISEL_t: public Reg32_t /// TIM timer input selection register
			{
				using Reg32_t::operator=;
				uint32_t TI1SEL           : 4; /// TI1[0] to TI1[15] input selection
				uint32_t                  : 4;
				uint32_t TI2SEL           : 4; /// TI2[0] to TI2[15] input selection
				uint32_t                  : 4;
				uint32_t TIM_GENERAL_1_TISEL_TI3SEL : 4; /// TI3[0] to TI3[15] input selection
				uint32_t                  : 4;
				uint32_t TIM_GENERAL_1_TISEL_TI4SEL : 4; /// TI4[0] to TI4[15] input selection
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef TIM_GENERAL_1_CCRx
			struct CCRx_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				uint32_t CCR1             : 16; /// Capture/Compare 1 value
				uint32_t                  : 16;
				
			};
			#endif
			union
			{
				struct
				{
					CR1_t CR1; /// control register 1
					CR2_t CR2; /// control register 2
					SMCR_t SMCR; /// slave mode control register
					DIER_t DIER; /// DMA/Interrupt enable register
					SR_t SR; /// status register
					EGR_t EGR; /// event generation register
					CCMR1_Output_t CCMR1_Output; /// capture/compare mode register 1 (output mode)
					CCMR2_Input_t CCMR2_Input; /// capture/compare mode register 2 (input mode)
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					TIM_GENERAL_1_MAP0_OR1; /// TIM2 option register 1
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					TIM_GENERAL_1_MAP0_OR2; /// TIM2 option register 2
					__SOOL_PERIPH_PADDING_8;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					CCMR1_Input_t CCMR1_Input; /// capture/compare mode register 1 (input mode)
					CCMR2_Output_t CCMR2_Output; /// capture/compare mode register 2 (output mode)
					CCER_t CCER; /// capture/compare enable register
					typename tmpl::CNT_t CNT; /// counter
					PSC_t PSC; /// prescaler
					typename tmpl::ARR_t ARR; /// auto-reload register
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_1_MAP1_CCR1; /// capture/compare register 1
					typename tmpl::CCR2_t CCR2; /// capture/compare register 2
					TIM_GENERAL_1_MAP1_CCR3; /// capture/compare register 3
					typename tmpl::CCR4_t CCR4; /// capture/compare register 4
					__SOOL_PERIPH_PADDING_4;
					DCR_t DCR; /// DMA control register
					DMAR_t DMAR; /// DMA address for full transfer
					TIM_GENERAL_1_MAP1_OR; /// TIM2 option register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					TIM_GENERAL_1_MAP1_AF1; /// TIM alternate function option register 1
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_1_MAP1_TISEL; /// TIM timer input selection register
				};
				#ifdef TIM_GENERAL_1_MAP2
				struct
				{
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_64;
					typename tmpl::TIMx_OR_t TIM5_OR; /// TIM5 option register
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
				};
				#endif
				#ifdef TIM_GENERAL_1_MAP3
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					TIM_GENERAL_1_MAP3_CCR1; /// capture/compare register 1
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_1_MAP3_CCR3; /// capture/compare register 1
					__SOOL_PERIPH_PADDING_16;
					TIM_GENERAL_1_MAP3_TIM2_OR; /// TIM2 option register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					TIM_GENERAL_1_MAP3_AF; /// TIM2 alternate function option register 1
					__SOOL_PERIPH_PADDING_8;
				};
				#endif
			};
			
		};
		#endif
		#ifdef PERIPH_TIM_GENERAL_2
		class TIM_GENERAL_2 : public TIM_PARENT/// general purpose timers
		{
		public:
			
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				uint32_t CEN              : 1; /// Counter enable
				uint32_t UDIS             : 1; /// Update disable
				uint32_t URS              : 1; /// Update request source
				uint32_t OPM              : 1; /// One-pulse mode
				uint32_t                  : 3;
				uint32_t ARPE             : 1; /// Auto-reload preload enable
				uint32_t CKD              : 2; /// Clock division
				uint32_t                  : 1;
				uint32_t TIM_GENERAL_2_CR1_UIFREMAP : 1; /// UIF status bit remapping
				uint32_t TIM_GENERAL_2_CR1_DITHEN : 1; /// Dithering Enable
				uint32_t                  : 19;
				
			};
			struct CR2_t: public Reg32_t /// control register 2
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CCPC             : 1; /// Capture/compare preloaded control
						uint32_t                  : 1;
						uint32_t CCUS             : 1; /// Capture/compare control update selection
						uint32_t CCDS             : 1; /// Capture/compare DMA selection
						uint32_t TIM_GENERAL_2_CR2_0_MMS : 3; /// Master mode selection
						uint32_t TIM_GENERAL_2_CR2_0_TI1S : 1; /// TI1 selection
						uint32_t OIS1             : 1; /// Output Idle state 1
						uint32_t OIS1N            : 1; /// Output Idle state 1
						uint32_t TIM_GENERAL_2_CR2_0_OIS2 : 1; /// Output idle state 2 (OC2 output)
						uint32_t                  : 21;
					};
					#ifdef TIM_GENERAL_2_CR2_1
					struct
					{
						uint32_t                  : 4;
						uint32_t MMS              : 2; /// Master mode selection
						uint32_t                  : 26;
					};
					#endif
				};
				
			};
			struct SMCR_t: public Reg32_t /// slave mode control register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t SMS              : 3; /// Slave mode selection
						uint32_t                  : 1;
						uint32_t TS               : 3; /// Trigger selection
						uint32_t MSM              : 1; /// Master/Slave mode
						uint32_t                  : 8;
						uint32_t TIM_GENERAL_2_SMCR_0_SMS_3 : 1; /// Slave mode selection - bit 3
						uint32_t                  : 3;
						uint32_t TIM_GENERAL_2_SMCR_0_TS_4_3 : 2; /// Trigger selection - bit 4:3
						uint32_t                  : 10;
					};
					#ifdef TIM_GENERAL_2_SMCR_1
					struct
					{
						uint32_t                  : 16;
						uint32_t SMS_16           : 1; /// SMS bit 16
						uint32_t                  : 15;
					};
					#endif
				};
				
			};
			struct DIER_t: public Reg32_t /// DMA/Interrupt enable register
			{
				using Reg32_t::operator=;
				uint32_t UIE              : 1; /// Update interrupt enable
				uint32_t CC1IE            : 1; /// Capture/Compare 1 interrupt enable
				uint32_t TIM_GENERAL_2_DIER_CC2IE : 1; /// Capture/Compare 2 interrupt enable
				uint32_t                  : 2;
				uint32_t COMIE            : 1; /// COM interrupt enable
				uint32_t TIE              : 1; /// Trigger interrupt enable
				uint32_t BIE              : 1; /// Break interrupt enable
				uint32_t UDE              : 1; /// Update DMA request enable
				uint32_t CC1DE            : 1; /// Capture/Compare 1 DMA request enable
				uint32_t TIM_GENERAL_2_DIER_CC2DE : 1; /// Capture/Compare 2 DMA request enable
				uint32_t                  : 2;
				uint32_t TIM_GENERAL_2_DIER_COMDE : 1; /// COM DMA request enable
				uint32_t TDE              : 1; /// Trigger DMA request enable
				uint32_t                  : 17;
				
			};
			struct SR_t: public Reg32_t /// status register
			{
				using Reg32_t::operator=;
				uint32_t UIF              : 1; /// Update interrupt flag
				uint32_t CC1IF            : 1; /// Capture/compare 1 interrupt flag
				uint32_t TIM_GENERAL_2_SR_CC2IF : 1; /// Capture/compare 2 interrupt flag
				uint32_t                  : 2;
				uint32_t COMIF            : 1; /// COM interrupt flag
				uint32_t TIF              : 1; /// Trigger interrupt flag
				uint32_t BIF              : 1; /// Break interrupt flag
				uint32_t                  : 1;
				uint32_t CC1OF            : 1; /// Capture/Compare 1 overcapture flag
				uint32_t TIM_GENERAL_2_SR_CC2OF : 1; /// Capture/Compare 2 overcapture flag
				uint32_t                  : 21;
				
			};
			struct EGR_t: public Reg32_t /// event generation register
			{
				using Reg32_t::operator=;
				uint32_t UG               : 1; /// Update generation
				uint32_t CC1G             : 1; /// Capture/compare 1 generation
				uint32_t TIM_GENERAL_2_EGR_CC2G : 1; /// Capture/compare 2 generation
				uint32_t                  : 2;
				uint32_t COMG             : 1; /// Capture/Compare control update generation
				uint32_t TG               : 1; /// Trigger generation
				uint32_t BG               : 1; /// Break generation
				uint32_t                  : 24;
				
			};
			struct CCMR1_Output_t: public Reg32_t /// capture/compare mode register (output mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t OC1FE            : 1; /// Output Compare 1 fast enable
						uint32_t OC1PE            : 1; /// Output Compare 1 preload enable
						uint32_t OC1M             : 3; /// Output Compare 1 mode
						uint32_t TIM_GENERAL_2_CCMR1_Output_0_OC1CE : 1;
						uint32_t TIM_GENERAL_2_CCMR1_Output_0_CC2S : 2; /// Capture/Compare 2 selection
						uint32_t TIM_GENERAL_2_CCMR1_Output_0_OC2FE : 1; /// Output Compare 2 fast enable
						uint32_t TIM_GENERAL_2_CCMR1_Output_0_OC2PE : 1; /// Output Compare 2 preload enable
						uint32_t TIM_GENERAL_2_CCMR1_Output_0_OC2M : 3; /// Output Compare 2 mode
						uint32_t                  : 1;
						uint32_t TIM_GENERAL_2_CCMR1_Output_0_OC1M_3 : 1; /// Output Compare 1 mode
						uint32_t                  : 7;
						uint32_t TIM_GENERAL_2_CCMR1_Output_0_OC2M_3 : 1; /// Output Compare 2 mode - bit 3
						uint32_t                  : 7;
					};
					#ifdef TIM_GENERAL_2_CCMR1_Output_1
					struct
					{
						uint32_t                  : 16;
						uint32_t OC1M_2           : 1; /// Output Compare 1 mode
						uint32_t                  : 15;
					};
					#endif
				};
				
			};
			struct CCMR1_Input_t: public Reg32_t /// capture/compare mode register 1 (input mode)
			{
				using Reg32_t::operator=;
				uint32_t CC1S             : 2; /// Capture/Compare 1 selection
				uint32_t IC1PSC           : 2; /// Input capture 1 prescaler
				uint32_t IC1F             : 4; /// Input capture 1 filter
				uint32_t TIM_GENERAL_2_CCMR1_Input_CC2S : 2; /// Capture/Compare 2 selection
				uint32_t TIM_GENERAL_2_CCMR1_Input_IC2PSC : 2; /// Input capture 2 prescaler
				uint32_t TIM_GENERAL_2_CCMR1_Input_IC2F : 4; /// Input capture 2 filter
				uint32_t                  : 16;
				
			};
			struct CCER_t: public Reg32_t /// capture/compare enable register
			{
				using Reg32_t::operator=;
				uint32_t CC1E             : 1; /// Capture/Compare 1 output enable
				uint32_t CC1P             : 1; /// Capture/Compare 1 output Polarity
				uint32_t CC1NE            : 1; /// Capture/Compare 1 complementary output enable
				uint32_t CC1NP            : 1; /// Capture/Compare 1 output Polarity
				uint32_t TIM_GENERAL_2_CCER_CC2E : 1; /// Capture/Compare 2 output enable
				uint32_t TIM_GENERAL_2_CCER_CC2P : 1; /// Capture/Compare 2 output polarity
				uint32_t                  : 1;
				uint32_t TIM_GENERAL_2_CCER_CC2NP : 1; /// Capture/Compare 2 complementary output polarity
				uint32_t                  : 24;
				
			};
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				uint32_t CNT              : 16; /// counter value
				uint32_t                  : 15;
				uint32_t TIM_GENERAL_2_CNT_UIFCPY : 1; /// UIF Copy
				
			};
			struct PSC_t: public Reg32_t /// prescaler
			{
				using Reg32_t::operator=;
				uint32_t PSC              : 16; /// Prescaler value
				uint32_t                  : 16;
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				uint32_t ARR              : 16; /// Auto-reload value
				uint32_t                  : 16;
				
			};
			struct RCR_t: public Reg32_t /// repetition counter register
			{
				using Reg32_t::operator=;
				uint32_t REP              : 8; /// Repetition counter value
				uint32_t                  : 24;
				
			};
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				uint32_t CCR1             : 16; /// Capture/Compare 1 value
				uint32_t                  : 16;
				
			};
			struct CCR2_t: public Reg32_t /// capture/compare register 2
			{
				using Reg32_t::operator=;
				uint32_t CCR2             : 16; /// Capture/Compare 1 value
				uint32_t                  : 16;
				
			};
			struct BDTR_t: public Reg32_t /// break and dead-time register
			{
				using Reg32_t::operator=;
				uint32_t DTG              : 8; /// Dead-time generator setup
				uint32_t LOCK             : 2; /// Lock configuration
				uint32_t OSSI             : 1; /// Off-state selection for Idle mode
				uint32_t OSSR             : 1; /// Off-state selection for Run mode
				uint32_t BKE              : 1; /// Break enable
				uint32_t BKP              : 1; /// Break polarity
				uint32_t AOE              : 1; /// Automatic output enable
				uint32_t MOE              : 1; /// Main output enable
				uint32_t TIM_GENERAL_2_BDTR_BKF : 4; /// Break filter
				uint32_t                  : 6;
				uint32_t TIM_GENERAL_2_BDTR_BKDSRM : 1;
				uint32_t                  : 1;
				uint32_t TIM_GENERAL_2_BDTR_BKBID : 1;
				uint32_t                  : 3;
				
			};
			#ifdef TIM_GENERAL_2_DTR2
			struct DTR2_t: public Reg32_t /// timer Deadtime Register 2
			{
				using Reg32_t::operator=;
				uint32_t DTGF             : 8; /// Dead-time generator setup
				uint32_t                  : 8;
				uint32_t DTAE             : 1; /// Deadtime Asymmetric Enable
				uint32_t DTPE             : 1; /// Deadtime Preload Enable
				uint32_t                  : 14;
				
			};
			#endif
			#ifdef TIM_GENERAL_2_TISEL
			struct TISEL_t: public Reg32_t /// TIM timer input selection register
			{
				using Reg32_t::operator=;
				uint32_t TI1SEL           : 4; /// TI1[0] to TI1[15] input selection
				uint32_t                  : 4;
				uint32_t TI2SEL           : 4; /// TI2[0] to TI2[15] input selection
				uint32_t                  : 20;
				
			};
			#endif
			#ifdef TIM_GENERAL_2_AF1
			struct AF1_t: public Reg32_t /// TIM alternate function option register 1
			{
				using Reg32_t::operator=;
				uint32_t BKINE            : 1; /// BRK BKIN input enable
				uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
				uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
				uint32_t BKCMP3E          : 1; /// BRK COMP3 enable
				uint32_t BKCMP4E          : 1; /// BRK COMP4 enable
				uint32_t BKCMP5E          : 1; /// BRK COMP5 enable
				uint32_t BKCMP6E          : 1; /// BRK COMP6 enable
				uint32_t BKCMP7E          : 1; /// BRK COMP7 enable
				uint32_t                  : 1;
				uint32_t BKINP            : 1; /// BRK BKIN input polarity
				uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
				uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarity
				uint32_t BKCMP3P          : 1; /// BRK COMP3 input polarity
				uint32_t BKCMP4P          : 1; /// BRK COMP4 input polarity
				uint32_t                  : 18;
				
			};
			#endif
			#ifdef TIM_GENERAL_2_AF2
			struct AF2_t: public Reg32_t /// TIM alternate function option register 2
			{
				using Reg32_t::operator=;
				uint32_t                  : 16;
				uint32_t OCRSEL           : 3; /// OCREF_CLR source selection
				uint32_t                  : 13;
				
			};
			#endif
			struct DCR_t: public Reg32_t /// DMA control register
			{
				using Reg32_t::operator=;
				uint32_t DBA              : 5; /// DMA base address
				uint32_t                  : 3;
				uint32_t DBL              : 5; /// DMA burst length
				uint32_t                  : 19;
				
			};
			struct DMAR_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_2_DMAR_0
					struct
					{
						uint32_t DMAB             : 32; /// DMA register for burst accesses
					};
					#endif
					#ifdef TIM_GENERAL_2_DMAR_1
					struct
					{
						uint32_t DMAB             : 16; /// DMA register for burst accesses
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_2_OR1
			struct OR1_t: public Reg32_t /// TIM15 option register 1
			{
				using Reg32_t::operator=;
				uint32_t TI1_RMP          : 1; /// Input capture 1 remap
				uint32_t ENCODER_MODE     : 2; /// Encoder mode
				uint32_t                  : 29;
				
			};
			#endif
			#ifdef TIM_GENERAL_2_OR2
			struct OR2_t: public Reg32_t /// TIM15 option register 2
			{
				using Reg32_t::operator=;
				uint32_t BKINE            : 1; /// BRK BKIN input enable
				uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
				uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
				uint32_t                  : 6;
				uint32_t BKINP            : 1; /// BRK BKIN input polarity
				uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
				uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarity
				uint32_t                  : 20;
				
			};
			#endif
			union
			{
				struct
				{
					CR1_t CR1; /// control register 1
					CR2_t CR2; /// control register 2
					SMCR_t SMCR; /// slave mode control register
					DIER_t DIER; /// DMA/Interrupt enable register
					SR_t SR; /// status register
					EGR_t EGR; /// event generation register
					CCMR1_Output_t CCMR1_Output; /// capture/compare mode register (output mode)
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_32;
					TIM_GENERAL_2_MAP0_DCR; /// DMA control register
					TIM_GENERAL_2_MAP0_DMAR; /// DMA address for full transfer
					__SOOL_PERIPH_PADDING_16;
					TIM_GENERAL_2_MAP0_OR2; /// TIM15 option register 2
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					CCMR1_Input_t CCMR1_Input; /// capture/compare mode register 1 (input mode)
					__SOOL_PERIPH_PADDING_4;
					CCER_t CCER; /// capture/compare enable register
					CNT_t CNT; /// counter
					PSC_t PSC; /// prescaler
					ARR_t ARR; /// auto-reload register
					RCR_t RCR; /// repetition counter register
					CCR1_t CCR1; /// capture/compare register 1
					CCR2_t CCR2; /// capture/compare register 2
					__SOOL_PERIPH_PADDING_8;
					BDTR_t BDTR; /// break and dead-time register
					__SOOL_PERIPH_PADDING_8;
					TIM_GENERAL_2_MAP1_OR1; /// TIM15 option register 1
					TIM_GENERAL_2_MAP1_DTR2; /// timer Deadtime Register 2
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_2_MAP1_TISEL; /// TIM timer input selection register
					TIM_GENERAL_2_MAP1_AF1; /// TIM alternate function option register 1
					TIM_GENERAL_2_MAP1_AF2; /// TIM alternate function option register 2
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					TIM_GENERAL_2_MAP1_DCR; /// DMA control register
					TIM_GENERAL_2_MAP1_DMAR; /// DMA address for full transfer
				};
			};
			
		};
		#endif
		#ifdef PERIPH_TIM_GENERAL_3
		template<typename tmpl=TIM_GENERAL_3_tmpl_default>
		class TIM_GENERAL_3 : public TIM_PARENT/// general purpose timers
		{
		public:
			
			struct CR2_t: public Reg32_t /// control register 2
			{
				using Reg32_t::operator=;
				uint32_t CCPC             : 1; /// Capture/compare preloaded control
				uint32_t                  : 1;
				uint32_t CCUS             : 1; /// Capture/compare control update selection
				uint32_t CCDS             : 1; /// Capture/compare DMA selection
				uint32_t                  : 4;
				uint32_t OIS1             : 1; /// Output Idle state 1
				uint32_t OIS1N            : 1; /// Output Idle state 1
				uint32_t                  : 22;
				
			};
			struct SR_t: public Reg32_t /// status register
			{
				using Reg32_t::operator=;
				uint32_t UIF              : 1; /// Update interrupt flag
				uint32_t CC1IF            : 1; /// Capture/compare 1 interrupt flag
				uint32_t                  : 3;
				uint32_t COMIF            : 1; /// COM interrupt flag
				uint32_t TIM_GENERAL_3_SR_TIF : 1; /// Trigger interrupt flag
				uint32_t BIF              : 1; /// Break interrupt flag
				uint32_t                  : 1;
				uint32_t CC1OF            : 1; /// Capture/Compare 1 overcapture flag
				uint32_t                  : 22;
				
			};
			struct EGR_t: public Reg32_t /// event generation register
			{
				using Reg32_t::operator=;
				uint32_t UG               : 1; /// Update generation
				uint32_t CC1G             : 1; /// Capture/compare 1 generation
				uint32_t                  : 3;
				uint32_t COMG             : 1; /// Capture/Compare control update generation
				uint32_t TIM_GENERAL_3_EGR_TG : 1; /// Trigger generation
				uint32_t BG               : 1; /// Break generation
				uint32_t                  : 24;
				
			};
			struct CCMR1_Output_t: public Reg32_t /// capture/compare mode register (output mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t OC1FE            : 1; /// Output Compare 1 fast enable
						uint32_t OC1PE            : 1; /// Output Compare 1 preload enable
						uint32_t OC1M             : 3; /// Output Compare 1 mode
						uint32_t                  : 9;
						uint32_t TIM_GENERAL_3_CCMR1_Output_0_OC1M_2 : 1; /// Output Compare 1 mode
						uint32_t                  : 15;
					};
					#ifdef TIM_GENERAL_3_CCMR1_Output_1
					struct
					{
						uint32_t                  : 16;
						uint32_t OC1M_3           : 1; /// Output Compare 1 mode
						uint32_t                  : 15;
					};
					#endif
				};
				
			};
			struct CCMR1_Input_t: public Reg32_t /// capture/compare mode register 1 (input mode)
			{
				using Reg32_t::operator=;
				uint32_t CC1S             : 2; /// Capture/Compare 1 selection
				uint32_t IC1PSC           : 2; /// Input capture 1 prescaler
				uint32_t IC1F             : 4; /// Input capture 1 filter
				uint32_t                  : 24;
				
			};
			struct CCER_t: public Reg32_t /// capture/compare enable register
			{
				using Reg32_t::operator=;
				uint32_t CC1E             : 1; /// Capture/Compare 1 output enable
				uint32_t CC1P             : 1; /// Capture/Compare 1 output Polarity
				uint32_t CC1NE            : 1; /// Capture/Compare 1 complementary output enable
				uint32_t CC1NP            : 1; /// Capture/Compare 1 output Polarity
				uint32_t                  : 28;
				
			};
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				uint32_t CNT              : 16; /// counter value
				uint32_t                  : 15;
				uint32_t TIM_GENERAL_3_CNT_UIFCPY : 1; /// UIF Copy
				
			};
			struct PSC_t: public Reg32_t /// prescaler
			{
				using Reg32_t::operator=;
				uint32_t PSC              : 16; /// Prescaler value
				uint32_t                  : 16;
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				uint32_t ARR              : 16; /// Auto-reload value
				uint32_t                  : 16;
				
			};
			struct RCR_t: public Reg32_t /// repetition counter register
			{
				using Reg32_t::operator=;
				uint32_t REP              : 8; /// Repetition counter value
				uint32_t                  : 24;
				
			};
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				uint32_t CCR1             : 16; /// Capture/Compare 1 value
				uint32_t                  : 16;
				
			};
			struct BDTR_t: public Reg32_t /// break and dead-time register
			{
				using Reg32_t::operator=;
				uint32_t DTG              : 8; /// Dead-time generator setup
				uint32_t LOCK             : 2; /// Lock configuration
				uint32_t OSSI             : 1; /// Off-state selection for Idle mode
				uint32_t OSSR             : 1; /// Off-state selection for Run mode
				uint32_t BKE              : 1; /// Break enable
				uint32_t BKP              : 1; /// Break polarity
				uint32_t AOE              : 1; /// Automatic output enable
				uint32_t MOE              : 1; /// Main output enable
				uint32_t TIM_GENERAL_3_BDTR_BKF : 4; /// Break filter
				uint32_t                  : 6;
				uint32_t TIM_GENERAL_3_BDTR_BKDSRM : 1; /// Break Disarm
				uint32_t                  : 1;
				uint32_t TIM_GENERAL_3_BDTR_BKBID : 1; /// Break Bidirectional
				uint32_t                  : 3;
				
			};
			struct DCR_t: public Reg32_t /// DMA control register
			{
				using Reg32_t::operator=;
				uint32_t DBA              : 5; /// DMA base address
				uint32_t                  : 3;
				uint32_t DBL              : 5; /// DMA burst length
				uint32_t                  : 19;
				
			};
			struct DMAR_t: public Reg32_t /// DMA address for full transfer
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_3_DMAR_0
					struct
					{
						uint32_t DMAB             : 16; /// DMA register for burst accesses
						uint32_t                  : 16;
					};
					#endif
					#ifdef TIM_GENERAL_3_DMAR_1
					struct
					{
						uint32_t DMAB             : 32; /// DMA register for burst accesses
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_3_DTR2
			struct DTR2_t: public Reg32_t /// timer Deadtime Register 2
			{
				using Reg32_t::operator=;
				uint32_t DTGF             : 8; /// Dead-time generator setup
				uint32_t                  : 8;
				uint32_t DTAE             : 1; /// Deadtime Asymmetric Enable
				uint32_t DTPE             : 1; /// Deadtime Preload Enable
				uint32_t                  : 14;
				
			};
			#endif
			#ifdef TIM_GENERAL_3_TISEL
			struct TISEL_t: public Reg32_t /// TIM timer input selection register
			{
				using Reg32_t::operator=;
				uint32_t TI1SEL           : 4; /// TI1[0] to TI1[15] input selection
				uint32_t                  : 28;
				
			};
			#endif
			#ifdef TIM_GENERAL_3_AF1
			struct AF1_t: public Reg32_t /// TIM alternate function option register 1
			{
				using Reg32_t::operator=;
				uint32_t BKINE            : 1; /// BRK BKIN input enable
				uint32_t BKCMP1E          : 1; /// BRK COMP1 enable
				uint32_t BKCMP2E          : 1; /// BRK COMP2 enable
				uint32_t TIM_GENERAL_3_AF1_BKCMP3E : 1; /// BRK COMP3 enable
				uint32_t TIM_GENERAL_3_AF1_BKCMP4E : 1; /// BRK COMP4 enable
				uint32_t TIM_GENERAL_3_AF1_BKCMP5E : 1; /// BRK COMP5 enable
				uint32_t TIM_GENERAL_3_AF1_BKCMP6E : 1; /// BRK COMP6 enable
				uint32_t TIM_GENERAL_3_AF1_BKCMP7E : 1; /// BRK COMP7 enable
				uint32_t TIM_GENERAL_3_AF1_BKDFBK1E : 1; /// BRK DFSDM_BREAK1 enable
				uint32_t BKINP            : 1; /// BRK BKIN input polarity
				uint32_t BKCMP1P          : 1; /// BRK COMP1 input polarity
				uint32_t BKCMP2P          : 1; /// BRK COMP2 input polarity
				uint32_t TIM_GENERAL_3_AF1_BKCMP3P : 1; /// BRK COMP3 input polarity
				uint32_t TIM_GENERAL_3_AF1_BKCMP4P : 1; /// BRK COMP4 input polarity
				uint32_t                  : 18;
				
			};
			#endif
			#ifdef TIM_GENERAL_3_AF2
			struct AF2_t: public Reg32_t /// TIM alternate function option register 2
			{
				using Reg32_t::operator=;
				uint32_t                  : 16;
				uint32_t OCRSEL           : 3; /// OCREF_CLR source selection
				uint32_t                  : 13;
				
			};
			#endif
			union
			{
				struct
				{
					typename tmpl::CR1_t CR1; /// control register 1
					CR2_t CR2; /// control register 2
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_3_MAP0_DIER; /// DMA/Interrupt enable register
					SR_t SR; /// status register
					EGR_t EGR; /// event generation register
					CCMR1_Output_t CCMR1_Output; /// capture/compare mode register (output mode)
					TIM_GENERAL_3_MAP0_CCER; /// capture/compare enable register
					TIM_GENERAL_3_MAP0_CNT; /// counter
					TIM_GENERAL_3_MAP0_PSC; /// prescaler
					TIM_GENERAL_3_MAP0_ARR; /// auto-reload register
					TIM_GENERAL_3_MAP0_RCR; /// repetition counter register
					TIM_GENERAL_3_MAP0_CCR1; /// capture/compare register 1
					TIM_GENERAL_3_MAP0_BDTR; /// break and dead-time register
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_32;
					TIM_GENERAL_3_MAP0_AF1; /// TIM alternate function option register 1
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					TIM_GENERAL_3_MAP0_DCR; /// DMA control register
					TIM_GENERAL_3_MAP0_DMAR; /// DMA address for full transfer
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					TIM_GENERAL_3_MAP1_DIER; /// DMA/Interrupt enable register
					__SOOL_PERIPH_PADDING_8;
					CCMR1_Input_t CCMR1_Input; /// capture/compare mode register 1 (input mode)
					__SOOL_PERIPH_PADDING_4;
					CCER_t CCER; /// capture/compare enable register
					CNT_t CNT; /// counter
					PSC_t PSC; /// prescaler
					ARR_t ARR; /// auto-reload register
					RCR_t RCR; /// repetition counter register
					CCR1_t CCR1; /// capture/compare register 1
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					BDTR_t BDTR; /// break and dead-time register
					TIM_GENERAL_3_MAP1_DCR; /// DMA control register
					TIM_GENERAL_3_MAP1_DMAR; /// DMA address for full transfer
					TIM_GENERAL_3_MAP1_OR1; /// TIM16 option register 1
					TIM_GENERAL_3_MAP1_DTR2; /// timer Deadtime Register 2
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_3_MAP1_TISEL; /// TIM timer input selection register
					TIM_GENERAL_3_MAP1_OR2; /// TIM17 option register 1
					TIM_GENERAL_3_MAP1_AF2; /// TIM alternate function option register 2
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				#ifdef TIM_GENERAL_3_MAP2
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					DCR_t DCR; /// DMA control register
					DMAR_t DMAR; /// DMA address for full transfer
					typename tmpl::OR_t OR; /// TIM16 option register 1
					typename tmpl::DIER_t AF1; /// TIM17 option register 1
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				#endif
				#ifdef TIM_GENERAL_3_MAP3
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					TIM_GENERAL_3_MAP3_DIER; /// DMA/Interrupt enable register
					TIM_GENERAL_3_MAP3_SR; /// status register
					TIM_GENERAL_3_MAP3_EGR; /// event generation register
					TIM_GENERAL_3_MAP3_CCMR1_Output; /// capture/compare mode register (output mode)
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					TIM_GENERAL_3_MAP3_OR; /// TIM16 option register 1
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					TIM_GENERAL_3_MAP3_AF1; /// TIM17 option register 1
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_3_MAP3_TISEL; /// input selection register
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				#endif
			};
			
		};
		#endif
		#ifdef PERIPH_TIM_GENERAL_4
		template<typename tmpl=TIM_GENERAL_4_tmpl_default>
		class TIM_GENERAL_4 : public TIM_PARENT/// general purpose timers
		{
		public:
			
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CEN              : 1; /// Counter enable
						uint32_t UDIS             : 1; /// Update disable
						uint32_t URS              : 1; /// Update request source
						uint32_t TIM_GENERAL_4_CR1_0_OPM : 1; /// One-pulse mode
						uint32_t TIM_GENERAL_4_CR1_0_DIR : 1; /// Direction
						uint32_t TIM_GENERAL_4_CR1_0_CMS : 2; /// Center-aligned mode selection
						uint32_t ARPE             : 1; /// Auto-reload preload enable
						uint32_t CKD              : 2; /// Clock division
						uint32_t                  : 22;
					};
					#ifdef TIM_GENERAL_4_CR1_1
					struct
					{
						uint32_t                  : 3;
						uint32_t OMP              : 1; /// One-pulse mode
						uint32_t                  : 28;
					};
					#endif
				};
				
			};
			struct CR2_t: public Reg32_t /// control register 2
			{
				using Reg32_t::operator=;
				uint32_t                  : 4;
				uint32_t MMS              : 3; /// Master mode selection
				uint32_t                  : 25;
				
			};
			struct SMCR_t: public Reg32_t /// slave mode control register
			{
				using Reg32_t::operator=;
				uint32_t SMS              : 3; /// Slave mode selection
				uint32_t                  : 1;
				uint32_t TS               : 3; /// Trigger selection
				uint32_t MSM              : 1; /// Master/Slave mode
				uint32_t TIM_GENERAL_4_SMCR_ETF : 4; /// External trigger filter
				uint32_t TIM_GENERAL_4_SMCR_ETPS : 2; /// External trigger prescaler
				uint32_t TIM_GENERAL_4_SMCR_ECE : 1; /// External clock enable
				uint32_t TIM_GENERAL_4_SMCR_ETP : 1; /// External trigger polarity
				uint32_t                  : 16;
				
			};
			struct DIER_t: public Reg32_t /// DMA/Interrupt enable register
			{
				using Reg32_t::operator=;
				uint32_t UIE              : 1; /// Update interrupt enable
				uint32_t CC1IE            : 1; /// Capture/Compare 1 interrupt enable
				uint32_t CC2IE            : 1; /// Capture/Compare 2 interrupt enable
				uint32_t                  : 3;
				uint32_t TIE              : 1; /// Trigger interrupt enable
				uint32_t                  : 25;
				
			};
			struct SR_t: public Reg32_t /// status register
			{
				using Reg32_t::operator=;
				uint32_t UIF              : 1; /// Update interrupt flag
				uint32_t CC1IF            : 1; /// Capture/compare 1 interrupt flag
				uint32_t CC2IF            : 1; /// Capture/Compare 2 interrupt flag
				uint32_t                  : 3;
				uint32_t TIF              : 1; /// Trigger interrupt flag
				uint32_t                  : 2;
				uint32_t CC1OF            : 1; /// Capture/Compare 1 overcapture flag
				uint32_t CC2OF            : 1; /// Capture/compare 2 overcapture flag
				uint32_t                  : 21;
				
			};
			struct EGR_t: public Reg32_t /// event generation register
			{
				using Reg32_t::operator=;
				uint32_t UG               : 1; /// Update generation
				uint32_t CC1G             : 1; /// Capture/compare 1 generation
				uint32_t CC2G             : 1; /// Capture/compare 2 generation
				uint32_t                  : 3;
				uint32_t TG               : 1; /// Trigger generation
				uint32_t                  : 25;
				
			};
			struct CCMR1_Output_t: public Reg32_t /// capture/compare mode register 1 (output mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t OC1FE            : 1; /// Output Compare 1 fast enable
						uint32_t OC1PE            : 1; /// Output Compare 1 preload enable
						uint32_t OC1M             : 3; /// Output Compare 1 mode
						uint32_t TIM_GENERAL_4_CCMR1_Output_0_OC1CE : 1; /// Output compare 1 clear enable
						uint32_t TIM_GENERAL_4_CCMR1_Output_0_CC2S : 2; /// Capture/Compare 2 selection
						uint32_t OC2FE            : 1; /// Output Compare 2 fast enable
						uint32_t OC2PE            : 1; /// Output Compare 2 preload enable
						uint32_t OC2M             : 3; /// Output Compare 2 mode
						uint32_t TIM_GENERAL_4_CCMR1_Output_0_OC2CE : 1; /// Output compare 2 clear enable
						uint32_t                  : 16;
					};
					#ifdef TIM_GENERAL_4_CCMR1_Output_1
					struct
					{
						uint32_t                  : 8;
						uint32_t CC2S             : 1; /// Capture/Compare 2 selection
						uint32_t                  : 23;
					};
					#endif
				};
				
			};
			struct CCMR1_Input_t: public Reg32_t /// capture/compare mode register 1 (input mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t TIM_GENERAL_4_CCMR1_Input_0_ICPCS : 2; /// Input capture 1 prescaler
						uint32_t TIM_GENERAL_4_CCMR1_Input_0_IC1F : 3; /// Input capture 1 filter
						uint32_t                  : 1;
						uint32_t CC2S             : 2; /// Capture/Compare 2 selection
						uint32_t TIM_GENERAL_4_CCMR1_Input_0_IC2PCS : 2; /// Input capture 2 prescaler
						uint32_t TIM_GENERAL_4_CCMR1_Input_0_IC2F : 3; /// Input capture 2 filter
						uint32_t                  : 17;
					};
					#ifdef TIM_GENERAL_4_CCMR1_Input_1
					struct
					{
						uint32_t                  : 2;
						uint32_t TIM_GENERAL_4_CCMR1_Input_1_IC1PSC : 2; /// Input capture 1 prescaler
						uint32_t TIM_GENERAL_4_CCMR1_Input_1_IC1F : 4; /// Input capture 1 filter
						uint32_t                  : 2;
						uint32_t TIM_GENERAL_4_CCMR1_Input_1_IC2PSC : 2; /// Input capture 2 prescaler
						uint32_t TIM_GENERAL_4_CCMR1_Input_1_IC2F : 4; /// Input capture 2 filter
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#ifdef TIM_GENERAL_4_CCER
			struct CCER_t: public Reg32_t /// capture/compare enable register
			{
				using Reg32_t::operator=;
				uint32_t CC1E             : 1; /// Capture/Compare 1 output enable
				uint32_t CC1P             : 1; /// Capture/Compare 1 output Polarity
				uint32_t                  : 1;
				uint32_t CC1NP            : 1; /// Capture/Compare 1 output Polarity
				uint32_t CC2E             : 1; /// Capture/Compare 2 output enable
				uint32_t CC2P             : 1; /// Capture/Compare 2 output Polarity
				uint32_t                  : 1;
				uint32_t CC2NP            : 1; /// Capture/Compare 2 output Polarity
				uint32_t                  : 24;
				
			};
			#endif
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				uint32_t CNT              : 16; /// counter value
				uint32_t                  : 16;
				
			};
			struct PSC_t: public Reg32_t /// prescaler
			{
				using Reg32_t::operator=;
				uint32_t PSC              : 16; /// Prescaler value
				uint32_t                  : 16;
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				uint32_t ARR              : 16; /// Auto-reload value
				uint32_t                  : 16;
				
			};
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				uint32_t CCR1             : 16; /// Capture/Compare 1 value
				uint32_t                  : 16;
				
			};
			struct CCR2_t: public Reg32_t /// capture/compare register 2
			{
				using Reg32_t::operator=;
				uint32_t CCR2             : 16; /// Capture/Compare 2 value
				uint32_t                  : 16;
				
			};
			union
			{
				struct
				{
					CR1_t CR1; /// control register 1
					CR2_t CR2; /// control register 2
					SMCR_t SMCR; /// slave mode control register
					DIER_t DIER; /// DMA/Interrupt enable register
					SR_t SR; /// status register
					EGR_t EGR; /// event generation register
					CCMR1_Output_t CCMR1_Output; /// capture/compare mode register 1 (output mode)
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					CCMR1_Input_t CCMR1_Input; /// capture/compare mode register 1 (input mode)
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_4_MAP1_CCER; /// capture/compare enable register
					CNT_t CNT; /// counter
					PSC_t PSC; /// prescaler
					ARR_t ARR; /// auto-reload register
					__SOOL_PERIPH_PADDING_4;
					CCR1_t CCR1; /// capture/compare register 1
					CCR2_t CCR2; /// capture/compare register 2
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					TIM_GENERAL_4_MAP1_OR; /// TIM21 option register
				};
			};
			
		};
		#endif
		#ifdef PERIPH_TIM_GENERAL_5
		class TIM_GENERAL_5 : public TIM_PARENT/// general purpose timers
		{
		public:
			
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				uint32_t CEN              : 1; /// Counter enable
				uint32_t UDIS             : 1; /// Update disable
				uint32_t URS              : 1; /// Update request source
				uint32_t OPM              : 1; /// One-pulse mode
				uint32_t                  : 3;
				uint32_t ARPE             : 1; /// Auto-reload preload enable
				uint32_t CKD              : 2; /// Clock division
				uint32_t                  : 22;
				
			};
			struct SMCR_t: public Reg32_t /// slave mode control register
			{
				using Reg32_t::operator=;
				uint32_t SMS              : 3; /// Slave mode selection
				uint32_t                  : 1;
				uint32_t TS               : 3; /// Trigger selection
				uint32_t MSM              : 1; /// Master/Slave mode
				uint32_t                  : 24;
				
			};
			struct DIER_t: public Reg32_t /// DMA/Interrupt enable register
			{
				using Reg32_t::operator=;
				uint32_t UIE              : 1; /// Update interrupt enable
				uint32_t CC1IE            : 1; /// Capture/Compare 1 interrupt enable
				uint32_t CC2IE            : 1; /// Capture/Compare 2 interrupt enable
				uint32_t                  : 3;
				uint32_t TIE              : 1; /// Trigger interrupt enable
				uint32_t                  : 25;
				
			};
			struct SR_t: public Reg32_t /// status register
			{
				using Reg32_t::operator=;
				uint32_t UIF              : 1; /// Update interrupt flag
				uint32_t CC1IF            : 1; /// Capture/compare 1 interrupt flag
				uint32_t CC2IF            : 1; /// Capture/Compare 2 interrupt flag
				uint32_t                  : 3;
				uint32_t TIF              : 1; /// Trigger interrupt flag
				uint32_t                  : 2;
				uint32_t CC1OF            : 1; /// Capture/Compare 1 overcapture flag
				uint32_t CC2OF            : 1; /// Capture/compare 2 overcapture flag
				uint32_t                  : 21;
				
			};
			struct EGR_t: public Reg32_t /// event generation register
			{
				using Reg32_t::operator=;
				uint32_t UG               : 1; /// Update generation
				uint32_t CC1G             : 1; /// Capture/compare 1 generation
				uint32_t CC2G             : 1; /// Capture/compare 2 generation
				uint32_t                  : 3;
				uint32_t TG               : 1; /// Trigger generation
				uint32_t                  : 25;
				
			};
			struct CCMR1_Output_t: public Reg32_t /// capture/compare mode register 1 (output mode)
			{
				using Reg32_t::operator=;
				uint32_t CC1S             : 2; /// Capture/Compare 1 selection
				uint32_t OC1FE            : 1; /// Output Compare 1 fast enable
				uint32_t OC1PE            : 1; /// Output Compare 1 preload enable
				uint32_t OC1M             : 3; /// Output Compare 1 mode
				uint32_t                  : 1;
				uint32_t CC2S             : 2; /// Capture/Compare 2 selection
				uint32_t OC2FE            : 1; /// Output Compare 2 fast enable
				uint32_t OC2PE            : 1; /// Output Compare 2 preload enable
				uint32_t OC2M             : 3; /// Output Compare 2 mode
				uint32_t                  : 1;
				uint32_t TIM_GENERAL_5_CCMR1_Output_OC1M_3 : 1; /// Output Compare 1 mode - bit 3
				uint32_t                  : 7;
				uint32_t TIM_GENERAL_5_CCMR1_Output_OC2M_3 : 1; /// Output Compare 2 mode - bit 3
				uint32_t                  : 7;
				
			};
			struct CCMR1_Input_t: public Reg32_t /// capture/compare mode register 1 (input mode)
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t CC1S             : 2; /// Capture/Compare 1 selection
						uint32_t TIM_GENERAL_5_CCMR1_Input_0_ICPCS : 2; /// Input capture 1 prescaler
						uint32_t IC1F             : 3; /// Input capture 1 filter
						uint32_t                  : 1;
						uint32_t CC2S             : 2; /// Capture/Compare 2 selection
						uint32_t TIM_GENERAL_5_CCMR1_Input_0_IC2PCS : 2; /// Input capture 2 prescaler
						uint32_t TIM_GENERAL_5_CCMR1_Input_0_IC2F : 3; /// Input capture 2 filter
						uint32_t                  : 17;
					};
					#ifdef TIM_GENERAL_5_CCMR1_Input_1
					struct
					{
						uint32_t                  : 2;
						uint32_t IC1PSC           : 2; /// Input capture 1 prescaler
						uint32_t                  : 6;
						uint32_t IC2PSC           : 2; /// Input capture 2 prescaler
						uint32_t IC2F             : 4; /// Input capture 2 filter
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			struct CCER_t: public Reg32_t /// capture/compare enable register
			{
				using Reg32_t::operator=;
				uint32_t CC1E             : 1; /// Capture/Compare 1 output enable
				uint32_t CC1P             : 1; /// Capture/Compare 1 output Polarity
				uint32_t                  : 1;
				uint32_t CC1NP            : 1; /// Capture/Compare 1 output Polarity
				uint32_t CC2E             : 1; /// Capture/Compare 2 output enable
				uint32_t CC2P             : 1; /// Capture/Compare 2 output Polarity
				uint32_t                  : 1;
				uint32_t CC2NP            : 1; /// Capture/Compare 2 output Polarity
				uint32_t                  : 24;
				
			};
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				uint32_t CNT              : 16; /// counter value
				uint32_t                  : 16;
				
			};
			struct PSC_t: public Reg32_t /// prescaler
			{
				using Reg32_t::operator=;
				uint32_t PSC              : 16; /// Prescaler value
				uint32_t                  : 16;
				
			};
			struct ARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				uint32_t ARR              : 16; /// Auto-reload value
				uint32_t                  : 16;
				
			};
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				uint32_t CCR1             : 16; /// Capture/Compare 1 value
				uint32_t                  : 16;
				
			};
			struct CCR2_t: public Reg32_t /// capture/compare register 2
			{
				using Reg32_t::operator=;
				uint32_t CCR2             : 16; /// Capture/Compare 2 value
				uint32_t                  : 16;
				
			};
			union
			{
				struct
				{
					CR1_t CR1; /// control register 1
					__SOOL_PERIPH_PADDING_4;
					SMCR_t SMCR; /// slave mode control register
					DIER_t DIER; /// DMA/Interrupt enable register
					SR_t SR; /// status register
					EGR_t EGR; /// event generation register
					CCMR1_Output_t CCMR1_Output; /// capture/compare mode register 1 (output mode)
					__SOOL_PERIPH_PADDING_32;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					CCMR1_Input_t CCMR1_Input; /// capture/compare mode register 1 (input mode)
					__SOOL_PERIPH_PADDING_4;
					CCER_t CCER; /// capture/compare enable register
					CNT_t CNT; /// counter
					PSC_t PSC; /// prescaler
					ARR_t ARR; /// auto-reload register
					__SOOL_PERIPH_PADDING_4;
					CCR1_t CCR1; /// capture/compare register 1
					CCR2_t CCR2; /// capture/compare register 2
				};
			};
			
		};
		#endif
		#ifdef PERIPH_TIM_GENERAL_6
		template<typename tmpl=TIM_GENERAL_6_tmpl_default>
		class TIM_GENERAL_6 : public TIM_PARENT/// general purpose timers
		{
		public:
			
			#ifdef TIM_GENERAL_6_CR1
			struct CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				uint32_t CEN              : 1; /// Counter enable
				uint32_t UDIS             : 1; /// Update disable
				uint32_t URS              : 1; /// Update request source
				uint32_t TIM_GENERAL_6_CR1_OPM : 1; /// One-pulse mode
				uint32_t                  : 3;
				uint32_t ARPE             : 1; /// Auto-reload preload enable
				uint32_t CKD              : 2; /// Clock division
				uint32_t                  : 1;
				uint32_t TIM_GENERAL_6_CR1_UIFREMAP : 1; /// UIF status bit remapping
				uint32_t                  : 20;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_DIER
			struct DIER_t: public Reg32_t /// DMA/Interrupt enable register
			{
				using Reg32_t::operator=;
				uint32_t UIE              : 1; /// Update interrupt enable
				uint32_t CC1IE            : 1; /// Capture/Compare 1 interrupt enable
				uint32_t                  : 30;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_SR
			struct SR_t: public Reg32_t /// status register
			{
				using Reg32_t::operator=;
				uint32_t UIF              : 1; /// Update interrupt flag
				uint32_t CC1IF            : 1; /// Capture/compare 1 interrupt flag
				uint32_t                  : 7;
				uint32_t CC1OF            : 1; /// Capture/Compare 1 overcapture flag
				uint32_t                  : 22;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_EGR
			struct EGR_t: public Reg32_t /// event generation register
			{
				using Reg32_t::operator=;
				uint32_t UG               : 1; /// Update generation
				uint32_t CC1G             : 1; /// Capture/compare 1 generation
				uint32_t                  : 30;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_CCMR1_Output
			struct CCMR1_Output_t: public Reg32_t /// capture/compare mode register 1 (output mode)
			{
				using Reg32_t::operator=;
				uint32_t CC1S             : 2; /// Capture/Compare 1 selection
				uint32_t OC1FE            : 1; /// Output Compare 1 fast enable
				uint32_t OC1PE            : 1; /// Output Compare 1 preload enable
				uint32_t OC1M             : 3; /// Output Compare 1 mode
				uint32_t TIM_GENERAL_6_CCMR1_Output_OC1CE : 1;
				uint32_t                  : 8;
				uint32_t TIM_GENERAL_6_CCMR1_Output_OC1M_3 : 1; /// Output Compare 1 mode - bit 3
				uint32_t                  : 15;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_CCER
			struct CCER_t: public Reg32_t /// capture/compare enable register
			{
				using Reg32_t::operator=;
				uint32_t CC1E             : 1; /// Capture/Compare 1 output enable
				uint32_t CC1P             : 1; /// Capture/Compare 1 output Polarity
				uint32_t                  : 1;
				uint32_t CC1NP            : 1; /// Capture/Compare 1 output Polarity
				uint32_t                  : 28;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_CNT
			struct CNT_t: public Reg32_t /// counter
			{
				using Reg32_t::operator=;
				uint32_t CNT              : 16; /// counter value
				uint32_t                  : 15;
				uint32_t TIM_GENERAL_6_CNT_UIFCPY : 1; /// UIF Copy
				
			};
			#endif
			struct xPSC_t: public Reg32_t /// prescaler
			{
				using Reg32_t::operator=;
				uint32_t PSC              : 16; /// Prescaler value
				uint32_t                  : 16;
				
			};
			struct xARR_t: public Reg32_t /// auto-reload register
			{
				using Reg32_t::operator=;
				uint32_t ARR              : 16; /// Auto-reload value
				uint32_t                  : 16;
				
			};
			#ifdef TIM_GENERAL_6_CCR1
			struct CCR1_t: public Reg32_t /// capture/compare register 1
			{
				using Reg32_t::operator=;
				uint32_t CCR1             : 16; /// Capture/Compare 1 value
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_SMCR
			struct SMCR_t: public Reg32_t /// slave mode control register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef TIM_GENERAL_6_SMCR_0
					struct
					{
						uint32_t SMS              : 3; /// Slave mode selection
						uint32_t                  : 1;
						uint32_t TS               : 3; /// Trigger selection
						uint32_t MSM              : 1; /// Master/slave mode
						uint32_t ETF              : 4; /// External trigger filter
						uint32_t ETPS             : 2; /// External trigger prescaler
						uint32_t ECE              : 1; /// External clock enable
						uint32_t ETP              : 1; /// External trigger polarity
						uint32_t SMS3             : 1; /// Slave mode selection
						uint32_t                  : 15;
					};
					#endif
					#ifdef TIM_GENERAL_6_SMCR_1
					struct
					{
						uint32_t Res              : 32; /// Res.
					};
					#endif
				};
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TISEL
			struct TISEL_t: public Reg32_t /// TIM timer input selection register
			{
				using Reg32_t::operator=;
				uint32_t TISEL            : 4; /// TI1[0] to TI1[15] input selection
				uint32_t                  : 28;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_ISR
			struct TIMx_ISR_t: public Reg32_t /// TIM Interrupt Status Register
			{
				using Reg32_t::operator=;
				uint32_t UIF              : 1;
				uint32_t CC1IF            : 1;
				uint32_t CC2IF            : 1;
				uint32_t CC3IF            : 1;
				uint32_t CC4IF            : 1;
				uint32_t                  : 1;
				uint32_t TIF              : 1;
				uint32_t                  : 1;
				uint32_t RSVD             : 5;
				uint32_t                  : 19;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_MISSR
			struct TIMx_MISSR_t: public Reg32_t /// TIM interrupt missed register
			{
				using Reg32_t::operator=;
				uint32_t RSVD             : 7;
				uint32_t                  : 2;
				uint32_t CC1IM            : 1;
				uint32_t CC2IM            : 1;
				uint32_t CC3IM            : 1;
				uint32_t CC4IM            : 1;
				uint32_t                  : 19;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_CR1
			struct TIMx_CR1_t: public Reg32_t /// control register 1
			{
				using Reg32_t::operator=;
				uint32_t CEN              : 1;
				uint32_t UDIS             : 1;
				uint32_t URS              : 1;
				uint32_t OPM              : 1;
				uint32_t DIR              : 1;
				uint32_t CMS              : 2;
				uint32_t ARBE             : 1;
				uint32_t                  : 24;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_IER
			struct TIMx_IER_t: public Reg32_t /// TIM Interrupt Enable Register
			{
				using Reg32_t::operator=;
				uint32_t UIE              : 1;
				uint32_t CC1IE            : 1;
				uint32_t CC2IE            : 1;
				uint32_t CC3IE            : 1;
				uint32_t CC4IE            : 1;
				uint32_t                  : 1;
				uint32_t TIE              : 1;
				uint32_t                  : 25;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_CR2
			struct TIMx_CR2_t: public Reg32_t /// control register 2
			{
				using Reg32_t::operator=;
				uint32_t                  : 4;
				uint32_t MMS              : 3;
				uint32_t TI1S             : 1;
				uint32_t                  : 24;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_SMCR
			struct TIMx_SMCR_t: public Reg32_t /// slave Mode Control register
			{
				using Reg32_t::operator=;
				uint32_t SMS              : 3;
				uint32_t                  : 1;
				uint32_t TS               : 3;
				uint32_t MSM              : 1;
				uint32_t ETF              : 4;
				uint32_t ETPS             : 2;
				uint32_t ECE              : 1;
				uint32_t ETP              : 1;
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_EGR
			struct TIMx_EGR_t: public Reg32_t /// TIM event generation register
			{
				using Reg32_t::operator=;
				uint32_t UG               : 1;
				uint32_t CC1G             : 1;
				uint32_t CC2G             : 1;
				uint32_t CC3G             : 1;
				uint32_t CC4G             : 1;
				uint32_t                  : 1;
				uint32_t TG               : 1;
				uint32_t                  : 25;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_CCMR1_Input
			struct TIMx_CCMR1_Input_t: public Reg32_t /// capture/compare mode register 1 (Input mode)
			{
				using Reg32_t::operator=;
				uint32_t CC1S             : 2;
				uint32_t IC1PSC           : 2;
				uint32_t IC1F             : 4;
				uint32_t CC2S             : 2;
				uint32_t IC2PSC           : 2;
				uint32_t IC2F             : 4;
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_CCMR1_Output
			struct TIMx_CCMR1_Output_t: public Reg32_t /// capture/compare mode register 1 (output mode)
			{
				using Reg32_t::operator=;
				uint32_t CC1S             : 2;
				uint32_t OC1FE            : 1;
				uint32_t OC1PE            : 1;
				uint32_t OC1M             : 3;
				uint32_t                  : 1;
				uint32_t CC2S             : 2;
				uint32_t OC2FE            : 1;
				uint32_t OC2PE            : 1;
				uint32_t OC2M             : 3;
				uint32_t                  : 17;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_CCMR2_Input
			struct TIMx_CCMR2_Input_t: public Reg32_t /// capture/compare mode register 2 (input mode)
			{
				using Reg32_t::operator=;
				uint32_t CC3S             : 2;
				uint32_t IC3PSC           : 2;
				uint32_t IC3F             : 4;
				uint32_t CC4S             : 2;
				uint32_t IC4PSC           : 2;
				uint32_t IC4F             : 4;
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_CCMR2_Output
			struct TIMx_CCMR2_Output_t: public Reg32_t /// capture/compare mode register 2 (output mode)
			{
				using Reg32_t::operator=;
				uint32_t CC3S             : 2;
				uint32_t OC3FE            : 1;
				uint32_t OC3PE            : 1;
				uint32_t OC3M             : 3;
				uint32_t                  : 1;
				uint32_t CC4S             : 2;
				uint32_t OC4FE            : 1;
				uint32_t OC4PE            : 1;
				uint32_t OC4M             : 3;
				uint32_t                  : 17;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_CCER
			struct TIMx_CCER_t: public Reg32_t /// TIM capture/compare enable register
			{
				using Reg32_t::operator=;
				uint32_t CC1E             : 1;
				uint32_t CC1P             : 1;
				uint32_t                  : 2;
				uint32_t CC2E             : 1;
				uint32_t CC2P             : 1;
				uint32_t                  : 2;
				uint32_t CC3E             : 1;
				uint32_t CC3P             : 1;
				uint32_t                  : 2;
				uint32_t CC4E             : 1;
				uint32_t CC4P             : 1;
				uint32_t                  : 18;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_CNT
			struct TIMx_CNT_t: public Reg32_t /// TIM counter register
			{
				using Reg32_t::operator=;
				uint32_t CNT              : 16;
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef TIM_GENERAL_6_TIMx_CCRx
			struct TIMx_CCRx_t: public Reg32_t /// IM capture/compare register 1
			{
				using Reg32_t::operator=;
				uint32_t CCR              : 16;
				uint32_t                  : 16;
				
			};
			#endif
			union
			{
				#ifdef TIM_GENERAL_6_MAP0
				struct
				{
					CR1_t CR1; /// control register 1
					__SOOL_PERIPH_PADDING_8;
					DIER_t DIER; /// DMA/Interrupt enable register
					SR_t SR; /// status register
					EGR_t EGR; /// event generation register
					CCMR1_Output_t CCMR1_Output; /// capture/compare mode register 1 (output mode)
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_2048;
					__SOOL_PERIPH_PADDING_16384;
				};
				#endif
				struct
				{
					TIM_GENERAL_6_MAP1_TIM1_ISR; /// TIM Interrupt Status Register
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_6_MAP1_SMCR; /// slave mode control register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					TIM_GENERAL_6_MAP1_CCMR1_Input; /// capture/compare mode register 1 (input mode)
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_6_MAP1_CCER; /// capture/compare enable register
					TIM_GENERAL_6_MAP1_CNT; /// counter
					TIM_GENERAL_6_MAP1_PSC; /// prescaler
					TIM_GENERAL_6_MAP1_ARR; /// auto-reload register
					__SOOL_PERIPH_PADDING_4;
					TIM_GENERAL_6_MAP1_CCR1; /// capture/compare register 1
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					TIM_GENERAL_6_MAP1_OR; /// option register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					TIM_GENERAL_6_MAP1_TISEL; /// TIM timer input selection register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_4096;
					__SOOL_PERIPH_PADDING_8192;
					TIM_GENERAL_6_MAP1_TIM1_CCMR1_Output; /// capture/compare mode register 1 (output mode)
					TIM_GENERAL_6_MAP1_TIM1_CCMR2_Input; /// capture/compare mode register 2 (input mode)
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_4096;
				};
				#ifdef TIM_GENERAL_6_MAP2
				struct
				{
					TIMx_ISR_t TIM2_ISR; /// TIM Interrupt Status Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					TIMx_MISSR_t TIM1_MISSR; /// TIM interrupt missed register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_32;
					TIMx_IER_t TIM1_IER; /// TIM Interrupt Enable Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_4096;
					__SOOL_PERIPH_PADDING_8192;
					TIMx_CR1_t TIM1_CR1; /// control register 1
					TIMx_CR2_t TIM1_CR2; /// control register 2
					TIMx_SMCR_t TIM1_SMCR; /// slave Mode Control register
					__SOOL_PERIPH_PADDING_8;
					TIMx_EGR_t TIM1_EGR; /// TIM event generation register
					TIMx_CCMR1_Input_t TIM1_CCMR1_Input; /// capture/compare mode register 1 (Input mode)
					TIMx_CCMR2_Output_t TIM1_CCMR2_Output; /// capture/compare mode register 2 (output mode)
					TIMx_CCER_t TIM1_CCER; /// TIM capture/compare enable register
					TIMx_CNT_t TIM1_CNT; /// TIM counter register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					TIMx_CCRx_t TIM1_CCR1; /// IM capture/compare register 1
					TIMx_CCRx_t TIM1_CCR2; /// TIM capture/compare register 2
					TIMx_CCRx_t TIM1_CCR3; /// TIM capture/compare register 3
					TIMx_CCRx_t TIM1_CCR4; /// TIM capture/compare register 4
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					typename tmpl::TIM1_OR_t TIM1_OR; /// TIM option register
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_2048;
					TIMx_CCMR1_Output_t TIM2_CCMR1_Output; /// capture/compare mode register 1 (output mode)
					TIMx_CCMR2_Input_t TIM2_CCMR2_Input; /// capture/compare mode register 2 (input mode)
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
				};
				#endif
				#ifdef TIM_GENERAL_6_MAP3
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					TIMx_MISSR_t TIM2_MISSR; /// TIM interrupt missed register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_32;
					TIMx_IER_t TIM2_IER; /// TIM Interrupt Enable Register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_4096;
					__SOOL_PERIPH_PADDING_8192;
					xPSC_t TIM1_PSC; /// TIM prescaler register
					xARR_t TIM1_ARR; /// TIM auto-reload register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_2048;
					TIMx_CR1_t TIM2_CR1; /// control register 1
					TIMx_CR2_t TIM2_CR2; /// control register 1
					TIMx_SMCR_t TIM2_SMCR; /// TIM slave Mode Control register
					__SOOL_PERIPH_PADDING_8;
					TIMx_EGR_t TIM2_EGR; /// TIM event generation register
					TIMx_CCMR1_Input_t TIM2_CCMR1_Input; /// capture/compare mode register 1 (Input mode)
					TIMx_CCMR2_Output_t TIM2_CCMR2_Output; /// capture/compare mode register 2 (output mode)
					TIMx_CCER_t TIM2_CCER; /// TIM capture/compare enable register
					TIMx_CNT_t TIM2_CNT; /// TIM counter register
					xPSC_t TIM2_PSC; /// TIM prescaler register
					xARR_t TIM2_ARR; /// TIM auto-reload register
					__SOOL_PERIPH_PADDING_4;
					TIMx_CCRx_t TIM2_CCR1; /// TIM capture/compare register 1
					TIMx_CCRx_t TIM2_CCR2; /// TIM capture/compare register 2
					TIMx_CCRx_t TIM2_CCR3; /// TIM capture/compare register 3
					TIMx_CCRx_t TIM2_CCR4; /// TIM capture/compare register 4
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					typename tmpl::TIM2_OR_t TIM2_OR; /// TIM option register
				};
				#endif
			};
			
		};
		#endif

#if	defined(STM32W1      )
#define MAC_TIM_BASE_ADDR ((uint32_t)0x40002038U)
#define MAC_TIM_MAC_TIM
#define MAC_TIM_TMPL
#define TIM1_BASE_ADDR ((uint32_t)0x4000a800U)
#define TIM_GENERAL_6_TIM1
#define TIM1_TMPL TIM_GENERAL_6_tmpl_0
#define TIM2_BASE_ADDR ((uint32_t)0x4000a804U)
#define TIM_GENERAL_6_TIM2
#define TIM2_TMPL TIM_GENERAL_6_tmpl_0
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32H7      )
#define TIM1_BASE_ADDR ((uint32_t)0x40010000U)
#define TIM_ADVANCED_TIM1
#define TIM1_TMPL
#define TIM8_BASE_ADDR ((uint32_t)0x40010400U)
#define TIM_ADVANCED_TIM8
#define TIM8_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || \
    defined(STM32WB      )
#define TIM1_BASE_ADDR ((uint32_t)0x40012c00U)
#define TIM_ADVANCED_TIM1
#endif

#if	defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM1_TMPL TIM_ADVANCED_tmpl_0
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || \
    defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  )
#define TIM1_TMPL
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L431xx  ) || defined(STM32L451xx  ) || defined(STM32L471xx  ) || \
    defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM8_BASE_ADDR ((uint32_t)0x40013400U)
#define TIM_ADVANCED_TIM8
#define TIM8_TMPL
#endif

#if	defined(STM32G473xx  ) || defined(STM32G474xx  ) || defined(STM32G484xx  )
#define TIM20_BASE_ADDR ((uint32_t)0x40015000U)
#define TIM_ADVANCED_TIM20
#define TIM20_TMPL
#endif

#if	defined(STM32G4      ) || defined(STM32GB      )
#define TIM2_BASE_ADDR ((uint32_t)0x40000000U)
#define TIM_ADVANCED_TIM2
#define TIM2_TMPL
#define TIM3_BASE_ADDR ((uint32_t)0x40000400U)
#define TIM_ADVANCED_TIM3
#define TIM3_TMPL
#define TIM4_BASE_ADDR ((uint32_t)0x40000800U)
#define TIM_ADVANCED_TIM4
#define TIM4_TMPL
#endif

#if	defined(STM32G471xx  ) || defined(STM32G473xx  ) || defined(STM32G474xx  ) || defined(STM32G484xx  )
#define TIM5_BASE_ADDR ((uint32_t)0x40000c00U)
#define TIM_ADVANCED_TIM5
#define TIM5_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || \
    defined(STM32F398xx  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || \
    defined(STM32F410Tx  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || \
    defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  ) || defined(STM32L011xx  ) || \
    defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L051xx  ) || defined(STM32L052xx  ) || \
    defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || defined(STM32L071xx  ) || defined(STM32L072xx  ) || \
    defined(STM32L073xx  ) || defined(STM32L081xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define TIM6_BASE_ADDR ((uint32_t)0x40001000U)
#define TIM_BASIC_TIM6
#define TIM6_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  ) || \
    defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM7_BASE_ADDR ((uint32_t)0x40001400U)
#define TIM_BASIC_TIM7
#define TIM7_TMPL
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM18_BASE_ADDR ((uint32_t)0x40009c00U)
#define TIM_BASIC_TIM18
#define TIM18_TMPL
#define TIM19_BASE_ADDR ((uint32_t)0x40015c00U)
#define TIM_GENERAL_1_TIM19
#define TIM19_TMPL TIM_GENERAL_1_tmpl_1
#endif

#if	defined(STM32L011xx  ) || defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || \
    defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L081xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define TIM7_BASE_ADDR ((uint32_t)0x40000c00U)
#define TIM_BASIC_TIM7
#define TIM7_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32H7      ) || defined(STM32L0      ) || \
    defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F031x6  ) || defined(STM32F038xx  ) || \
    defined(STM32F042x6  ) || defined(STM32F048xx  ) || defined(STM32F051x8  ) || defined(STM32F058xx  ) || defined(STM32F071xB  ) || \
    defined(STM32F072xB  ) || defined(STM32F078xx  ) || defined(STM32F091xC  ) || defined(STM32F098xx  ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM2_BASE_ADDR ((uint32_t)0x40000000U)
#define TIM_GENERAL_1_TIM2
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || \
    defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || \
    defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || \
    defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || \
    defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || \
    defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define TIM2_TMPL TIM_GENERAL_1_tmpl_0
#endif

#if	defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32WB      ) || \
    defined(STM32F031x6  ) || defined(STM32F038xx  ) || defined(STM32F042x6  ) || defined(STM32F048xx  ) || defined(STM32F051x8  ) || \
    defined(STM32F058xx  ) || defined(STM32F071xB  ) || defined(STM32F072xB  ) || defined(STM32F078xx  ) || defined(STM32F091xC  ) || \
    defined(STM32F098xx  ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || \
    defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define TIM2_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32H7      ) || \
    defined(STM32L1      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F401xC  ) || \
    defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32L011xx  ) || \
    defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L072xx  ) || \
    defined(STM32L073xx  ) || defined(STM32L081xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L442xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM3_BASE_ADDR ((uint32_t)0x40000400U)
#define TIM_GENERAL_1_TIM3
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || \
    defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || \
    defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || \
    defined(STM32H757xx_CORE_CM7)
#define TIM3_TMPL TIM_GENERAL_1_tmpl_1
#define TIM4_TMPL TIM_GENERAL_1_tmpl_1
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32G0      ) || defined(STM32L1      ) || defined(STM32F401xC  ) || \
    defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || \
    defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32H742xx  ) || \
    defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || \
    defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || defined(STM32L031xx  ) || \
    defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L081xx  ) || \
    defined(STM32L082xx  ) || defined(STM32L083xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM3_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32L431xx  ) || defined(STM32L451xx  ) || defined(STM32L471xx  ) || \
    defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM4_BASE_ADDR ((uint32_t)0x40000800U)
#define TIM_GENERAL_1_TIM4
#endif

#if	defined(STM32F2      ) || defined(STM32L1      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || \
    defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || \
    defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7) || \
    defined(STM32L431xx  ) || defined(STM32L451xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM4_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32L151xB  ) || defined(STM32L151xC  ) || defined(STM32L151xCA ) || \
    defined(STM32L151xD  ) || defined(STM32L151xE  ) || defined(STM32L152xB  ) || defined(STM32L152xC  ) || defined(STM32L152xCA ) || \
    defined(STM32L152xD  ) || defined(STM32L152xE  ) || defined(STM32L431xx  ) || defined(STM32L451xx  ) || defined(STM32L471xx  ) || \
    defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM5_BASE_ADDR ((uint32_t)0x40000c00U)
#define TIM_GENERAL_1_TIM5
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || \
    defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define TIM5_TMPL TIM_GENERAL_1_tmpl_2
#endif

#if	defined(STM32F2      ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F745xx  ) || \
    defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || \
    defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || \
    defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || \
    defined(STM32H755xx_CORE_CM7) || defined(STM32L151xB  ) || defined(STM32L151xC  ) || defined(STM32L151xCA ) || defined(STM32L151xD  ) || \
    defined(STM32L151xE  ) || defined(STM32L152xB  ) || defined(STM32L152xC  ) || defined(STM32L152xCA ) || defined(STM32L152xD  ) || \
    defined(STM32L152xE  ) || defined(STM32L431xx  ) || defined(STM32L451xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM5_TMPL
#endif

#if	defined(STM32H7      )
#define TIM12_BASE_ADDR ((uint32_t)0x40001800U)
#define TIM_GENERAL_1_TIM12
#define TIM13_BASE_ADDR ((uint32_t)0x40001c00U)
#define TIM_GENERAL_1_TIM13
#define TIM14_BASE_ADDR ((uint32_t)0x40002000U)
#define TIM_GENERAL_1_TIM14
#define TIM14_TMPL
#endif

#if	defined(STM32H747xx_CORE_CM4) || defined(STM32H747xx_CORE_CM7) || defined(STM32H757xx_CORE_CM4) || defined(STM32H757xx_CORE_CM7)
#define TIM12_TMPL TIM_GENERAL_1_tmpl_0
#define TIM13_TMPL TIM_GENERAL_1_tmpl_0
#endif

#if	defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define TIM12_TMPL
#define TIM13_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || \
    defined(STM32F398xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  )
#define TIM15_BASE_ADDR ((uint32_t)0x40014000U)
#define TIM_GENERAL_2_TIM15
#define TIM15_TMPL
#endif

#if	defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  ) || defined(STM32L433xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM15_BASE_ADDR ((uint32_t)0x40014000U)
#define TIM_GENERAL_3_TIM15
#define TIM15_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || \
    defined(STM32WB      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM16_BASE_ADDR ((uint32_t)0x40014400U)
#define TIM_GENERAL_3_TIM16
#endif

#if	defined(STM32WB      ) || defined(STM32L433xx  ) || defined(STM32L443xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM16_TMPL TIM_GENERAL_3_tmpl_0
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L442xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  )
#define TIM16_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      ) || \
    defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM17_BASE_ADDR ((uint32_t)0x40014800U)
#define TIM_GENERAL_3_TIM17
#endif

#if	defined(STM32WB      ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define TIM17_TMPL TIM_GENERAL_3_tmpl_0
#endif

#if	defined(STM32F0      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM17_TMPL
#endif

#if	defined(STM32L431xx  ) || defined(STM32L451xx  ) || defined(STM32L471xx  )
#define TIM17_BASE_ADDR ((uint32_t)0x40001800U)
#define TIM_GENERAL_3_TIM17
#define TIM17_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F446xx  )
#define TIM9_BASE_ADDR ((uint32_t)0x40014000U)
#define TIM_GENERAL_4_TIM9
#define TIM9_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  )
#define TIM12_BASE_ADDR ((uint32_t)0x40001800U)
#define TIM_GENERAL_4_TIM12
#define TIM12_TMPL
#endif

#if	defined(STM32L0      )
#define TIM21_BASE_ADDR ((uint32_t)0x40010800U)
#define TIM_GENERAL_4_TIM21
#define TIM21_TMPL TIM_GENERAL_4_tmpl_0
#define TIM22_BASE_ADDR ((uint32_t)0x40011400U)
#define TIM_GENERAL_4_TIM22
#define TIM22_TMPL
#endif

#if	defined(STM32L1      )
#define TIM9_BASE_ADDR ((uint32_t)0x40010800U)
#define TIM_GENERAL_4_TIM9
#define TIM9_TMPL
#define TIM10_BASE_ADDR ((uint32_t)0x40010c00U)
#define TIM_GENERAL_6_TIM10
#define TIM10_TMPL
#define TIM11_BASE_ADDR ((uint32_t)0x40011000U)
#define TIM_GENERAL_6_TIM11
#define TIM11_TMPL
#endif

#if	defined(STM32F7      ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM9_BASE_ADDR ((uint32_t)0x40014000U)
#define TIM_GENERAL_5_TIM9
#define TIM9_TMPL
#endif

#if	defined(STM32F7      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM12_BASE_ADDR ((uint32_t)0x40001800U)
#define TIM_GENERAL_5_TIM12
#define TIM12_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM10_BASE_ADDR ((uint32_t)0x40014400U)
#define TIM_GENERAL_6_TIM10
#endif

#if	defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F411xE  ) || \
    defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || \
    defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || \
    defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM10_TMPL TIM_GENERAL_6_tmpl_0
#define TIM11_TMPL TIM_GENERAL_6_tmpl_0
#endif

#if	defined(STM32F2      ) || defined(STM32F7      )
#define TIM10_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
#define TIM11_BASE_ADDR ((uint32_t)0x40014800U)
#define TIM_GENERAL_6_TIM11
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  )
#define TIM11_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM13_BASE_ADDR ((uint32_t)0x40001c00U)
#define TIM_GENERAL_6_TIM13
#endif

#if	defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM13_TMPL TIM_GENERAL_6_tmpl_0
#define TIM14_TMPL TIM_GENERAL_6_tmpl_0
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM13_TMPL
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || \
    defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define TIM14_BASE_ADDR ((uint32_t)0x40002000U)
#define TIM_GENERAL_6_TIM14
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32F373xC  ) || \
    defined(STM32F378xx  ) || defined(STM32F398xx  )
#define TIM14_TMPL
#endif


//Instances for peripheral TIM_PARENT

//Instances for peripheral MAC_TIM

		#if defined(MAC_TIM_MAC_TIM) 
			#if __SOOL_DEBUG_NOPHY
				volatile class MAC_TIM * const MAC_TIM = new class MAC_TIM(MAC_TIM_BASE_ADDR);
			#else
				volatile class MAC_TIM * const MAC_TIM = reinterpret_cast<class MAC_TIM* const>(MAC_TIM_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral TIM_ADVANCED

		#if defined(TIM_ADVANCED_TIM1) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_ADVANCED<> * const TIM1 = new class TIM_ADVANCED<>(TIM1_BASE_ADDR);
			#else
				volatile class TIM_ADVANCED<> * const TIM1 = reinterpret_cast<class TIM_ADVANCED<>* const>(TIM1_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM2_BASE_ADDR) && defined(TIM_ADVANCED_TIM2) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_ADVANCED<> * const TIM2 = new class TIM_ADVANCED<>(TIM2_BASE_ADDR);
			#else
				volatile class TIM_ADVANCED<> * const TIM2 = reinterpret_cast<class TIM_ADVANCED<>* const>(TIM2_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM20_BASE_ADDR) && defined(TIM_ADVANCED_TIM20) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_ADVANCED<> * const TIM20 = new class TIM_ADVANCED<>(TIM20_BASE_ADDR);
			#else
				volatile class TIM_ADVANCED<> * const TIM20 = reinterpret_cast<class TIM_ADVANCED<>* const>(TIM20_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM3_BASE_ADDR) && defined(TIM_ADVANCED_TIM3) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_ADVANCED<> * const TIM3 = new class TIM_ADVANCED<>(TIM3_BASE_ADDR);
			#else
				volatile class TIM_ADVANCED<> * const TIM3 = reinterpret_cast<class TIM_ADVANCED<>* const>(TIM3_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM4_BASE_ADDR) && defined(TIM_ADVANCED_TIM4) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_ADVANCED<> * const TIM4 = new class TIM_ADVANCED<>(TIM4_BASE_ADDR);
			#else
				volatile class TIM_ADVANCED<> * const TIM4 = reinterpret_cast<class TIM_ADVANCED<>* const>(TIM4_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM5_BASE_ADDR) && defined(TIM_ADVANCED_TIM5) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_ADVANCED<> * const TIM5 = new class TIM_ADVANCED<>(TIM5_BASE_ADDR);
			#else
				volatile class TIM_ADVANCED<> * const TIM5 = reinterpret_cast<class TIM_ADVANCED<>* const>(TIM5_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM8_BASE_ADDR) && defined(TIM_ADVANCED_TIM8) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_ADVANCED<> * const TIM8 = new class TIM_ADVANCED<>(TIM8_BASE_ADDR);
			#else
				volatile class TIM_ADVANCED<> * const TIM8 = reinterpret_cast<class TIM_ADVANCED<>* const>(TIM8_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral TIM_BASIC

		#if defined(TIM_BASIC_TIM6) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_BASIC * const TIM6 = new class TIM_BASIC(TIM6_BASE_ADDR);
			#else
				volatile class TIM_BASIC * const TIM6 = reinterpret_cast<class TIM_BASIC* const>(TIM6_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM18_BASE_ADDR) && defined(TIM_BASIC_TIM18) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_BASIC * const TIM18 = new class TIM_BASIC(TIM18_BASE_ADDR);
			#else
				volatile class TIM_BASIC * const TIM18 = reinterpret_cast<class TIM_BASIC* const>(TIM18_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM7_BASE_ADDR) && defined(TIM_BASIC_TIM7) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_BASIC * const TIM7 = new class TIM_BASIC(TIM7_BASE_ADDR);
			#else
				volatile class TIM_BASIC * const TIM7 = reinterpret_cast<class TIM_BASIC* const>(TIM7_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral TIM_GENERAL_1

		#if defined(TIM12_BASE_ADDR) && defined(TIM_GENERAL_1_TIM12) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_1<> * const TIM12 = new class TIM_GENERAL_1<>(TIM12_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_1<> * const TIM12 = reinterpret_cast<class TIM_GENERAL_1<>* const>(TIM12_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM13_BASE_ADDR) && defined(TIM_GENERAL_1_TIM13) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_1<> * const TIM13 = new class TIM_GENERAL_1<>(TIM13_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_1<> * const TIM13 = reinterpret_cast<class TIM_GENERAL_1<>* const>(TIM13_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM14_BASE_ADDR) && defined(TIM_GENERAL_1_TIM14) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_1<> * const TIM14 = new class TIM_GENERAL_1<>(TIM14_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_1<> * const TIM14 = reinterpret_cast<class TIM_GENERAL_1<>* const>(TIM14_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM19_BASE_ADDR) && defined(TIM_GENERAL_1_TIM19) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_1<> * const TIM19 = new class TIM_GENERAL_1<>(TIM19_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_1<> * const TIM19 = reinterpret_cast<class TIM_GENERAL_1<>* const>(TIM19_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM2_BASE_ADDR) && defined(TIM_GENERAL_1_TIM2) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_1<> * const TIM2 = new class TIM_GENERAL_1<>(TIM2_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_1<> * const TIM2 = reinterpret_cast<class TIM_GENERAL_1<>* const>(TIM2_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM3_BASE_ADDR) && defined(TIM_GENERAL_1_TIM3) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_1<> * const TIM3 = new class TIM_GENERAL_1<>(TIM3_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_1<> * const TIM3 = reinterpret_cast<class TIM_GENERAL_1<>* const>(TIM3_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM4_BASE_ADDR) && defined(TIM_GENERAL_1_TIM4) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_1<> * const TIM4 = new class TIM_GENERAL_1<>(TIM4_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_1<> * const TIM4 = reinterpret_cast<class TIM_GENERAL_1<>* const>(TIM4_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM5_BASE_ADDR) && defined(TIM_GENERAL_1_TIM5) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_1<> * const TIM5 = new class TIM_GENERAL_1<>(TIM5_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_1<> * const TIM5 = reinterpret_cast<class TIM_GENERAL_1<>* const>(TIM5_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral TIM_GENERAL_2

		#if defined(TIM_GENERAL_2_TIM15) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_2 * const TIM15 = new class TIM_GENERAL_2(TIM15_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_2 * const TIM15 = reinterpret_cast<class TIM_GENERAL_2* const>(TIM15_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral TIM_GENERAL_3

		#if defined(TIM_GENERAL_3_TIM16) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_3<> * const TIM16 = new class TIM_GENERAL_3<>(TIM16_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_3<> * const TIM16 = reinterpret_cast<class TIM_GENERAL_3<>* const>(TIM16_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM15_BASE_ADDR) && defined(TIM_GENERAL_3_TIM15) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_3<> * const TIM15 = new class TIM_GENERAL_3<>(TIM15_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_3<> * const TIM15 = reinterpret_cast<class TIM_GENERAL_3<>* const>(TIM15_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM17_BASE_ADDR) && defined(TIM_GENERAL_3_TIM17) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_3<> * const TIM17 = new class TIM_GENERAL_3<>(TIM17_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_3<> * const TIM17 = reinterpret_cast<class TIM_GENERAL_3<>* const>(TIM17_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral TIM_GENERAL_4

		#if defined(TIM12_BASE_ADDR) && defined(TIM_GENERAL_4_TIM12) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_4<> * const TIM12 = new class TIM_GENERAL_4<>(TIM12_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_4<> * const TIM12 = reinterpret_cast<class TIM_GENERAL_4<>* const>(TIM12_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM21_BASE_ADDR) && defined(TIM_GENERAL_4_TIM21) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_4<> * const TIM21 = new class TIM_GENERAL_4<>(TIM21_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_4<> * const TIM21 = reinterpret_cast<class TIM_GENERAL_4<>* const>(TIM21_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM22_BASE_ADDR) && defined(TIM_GENERAL_4_TIM22) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_4<> * const TIM22 = new class TIM_GENERAL_4<>(TIM22_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_4<> * const TIM22 = reinterpret_cast<class TIM_GENERAL_4<>* const>(TIM22_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM9_BASE_ADDR) && defined(TIM_GENERAL_4_TIM9) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_4<> * const TIM9 = new class TIM_GENERAL_4<>(TIM9_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_4<> * const TIM9 = reinterpret_cast<class TIM_GENERAL_4<>* const>(TIM9_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral TIM_GENERAL_5

		#if defined(TIM_GENERAL_5_TIM12) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_5 * const TIM12 = new class TIM_GENERAL_5(TIM12_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_5 * const TIM12 = reinterpret_cast<class TIM_GENERAL_5* const>(TIM12_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM9_BASE_ADDR) && defined(TIM_GENERAL_5_TIM9) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_5 * const TIM9 = new class TIM_GENERAL_5(TIM9_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_5 * const TIM9 = reinterpret_cast<class TIM_GENERAL_5* const>(TIM9_BASE_ADDR);
			#endif
		#endif

//Instances for peripheral TIM_GENERAL_6

		#if defined(TIM1_BASE_ADDR) && defined(TIM_GENERAL_6_TIM1) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_6<> * const TIM1 = new class TIM_GENERAL_6<>(TIM1_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_6<> * const TIM1 = reinterpret_cast<class TIM_GENERAL_6<>* const>(TIM1_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM10_BASE_ADDR) && defined(TIM_GENERAL_6_TIM10) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_6<> * const TIM10 = new class TIM_GENERAL_6<>(TIM10_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_6<> * const TIM10 = reinterpret_cast<class TIM_GENERAL_6<>* const>(TIM10_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM11_BASE_ADDR) && defined(TIM_GENERAL_6_TIM11) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_6<> * const TIM11 = new class TIM_GENERAL_6<>(TIM11_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_6<> * const TIM11 = reinterpret_cast<class TIM_GENERAL_6<>* const>(TIM11_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM13_BASE_ADDR) && defined(TIM_GENERAL_6_TIM13) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_6<> * const TIM13 = new class TIM_GENERAL_6<>(TIM13_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_6<> * const TIM13 = reinterpret_cast<class TIM_GENERAL_6<>* const>(TIM13_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM14_BASE_ADDR) && defined(TIM_GENERAL_6_TIM14) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_6<> * const TIM14 = new class TIM_GENERAL_6<>(TIM14_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_6<> * const TIM14 = reinterpret_cast<class TIM_GENERAL_6<>* const>(TIM14_BASE_ADDR);
			#endif
		#endif

		#if defined(TIM2_BASE_ADDR) && defined(TIM_GENERAL_6_TIM2) 
			#if __SOOL_DEBUG_NOPHY
				volatile class TIM_GENERAL_6<> * const TIM2 = new class TIM_GENERAL_6<>(TIM2_BASE_ADDR);
			#else
				volatile class TIM_GENERAL_6<> * const TIM2 = reinterpret_cast<class TIM_GENERAL_6<>* const>(TIM2_BASE_ADDR);
			#endif
		#endif
		
		
	};
};
#undef TIM_GENERAL_3_MAP1_OR1
#undef TIM_ADVANCED_CCMR1_Input_3
#undef TIM_GENERAL_6_MAP0
#undef TIM_GENERAL_1_CCR4_1
#undef TIM_GENERAL_1_CNT_3_UIFCPY
#undef TIM_GENERAL_6_CR1_OPM
#undef TIM_GENERAL_1_OR1_3
#undef TIM_GENERAL_5_CCMR1_Input_0_IC2F
#undef TIM_GENERAL_2_CCMR1_Output_1
#undef TIM_GENERAL_1_CCMR1_Input_1
#undef TIM_ADVANCED_SR_CC5IF
#undef TIM_GENERAL_4_MAP1_OR
#undef TIM_ADVANCED_AF1_0_BKCMP4E
#undef TIM_ADVANCED_CCMR2_Input_1_OC4CE
#undef TIM_GENERAL_3_DIER_0_TIE
#undef TIM_GENERAL_2_TIM15
#undef TIM_GENERAL_2_CR1_UIFREMAP
#undef TIM_ADVANCED_MAP1_CRR6
#undef TIM_ADVANCED_CCMR3_Output_2
#undef TIM_GENERAL_4_TIM_GENERAL_4_tmpl_0
#undef TIM_GENERAL_1_CCMR2_Output_0_O24CE
#undef TIM_ADVANCED_MAP0_OR
#undef TIM_GENERAL_5_CCMR1_Input_0_ICPCS
#undef TIM_ADVANCED_OR2_2
#undef TIM_GENERAL_2_MAP1_DMAR
#undef TIM_GENERAL_1_OR1_0
#undef TIM_GENERAL_4_TIM22
#undef TIM_GENERAL_6_MAP1_TISEL
#undef TIM_ADVANCED_AF2_0_BK2INE
#undef TIM_ADVANCED_MAP0_OR2
#undef TIM_GENERAL_6_MAP1_TIM1_CCMR1_Output
#undef TIM_GENERAL_1_OR_1
#undef TIM_GENERAL_6_TIM14
#undef TIM_ADVANCED_MAP1_OR1
#undef TIM_ADVANCED_AF1_0_BKCMP3P
#undef TIM_ADVANCED_TIM20
#undef TIM5_TMPL
#undef TIM_GENERAL_6_CCMR1_Output_OC1M_3
#undef TIM_GENERAL_1_CCR2_2
#undef TIM_GENERAL_3_MAP1_AF2
#undef TIM_GENERAL_4_CCMR1_Input_0_IC2F
#undef TIM_GENERAL_3_AF1_BKCMP7E
#undef TIM_ADVANCED_SR_B2IF
#undef TIM_BASIC_TIM7
#undef TIM_ADVANCED_OR2_1_BKDFBK2E
#undef TIM_ADVANCED_CCMR1_Input_1
#undef TIM_GENERAL_2_SMCR_1
#undef TIM_GENERAL_1_CCR3_0
#undef TIM_GENERAL_3_AF1_BKCMP4P
#undef TIM_GENERAL_3_CCMR1_Output_1
#undef TIM_GENERAL_1_MAP3_CCR3
#undef TIM_GENERAL_5_TIM9
#undef TIM_ADVANCED_SMCR_0_SMS_3
#undef TIM_ADVANCED_CR2_OIS6
#undef TIM_GENERAL_1_ARR_1
#undef TIM_GENERAL_3_OR2_1
#undef TIM_GENERAL_6_CNT_UIFCPY
#undef TIM_GENERAL_1_TIM_GENERAL_1_tmpl_0
#undef TIM_GENERAL_1_CNT_4
#undef TIM_GENERAL_6_MAP1_PSC
#undef TIM_ADVANCED_CCMR2_Input_0_IC3F
#undef TIM_ADVANCED_CCMR1_Output_OC2M_3
#undef TIM_ADVANCED_MAP0_CCR5
#undef TIM_GENERAL_4_CR1_0_DIR
#undef TIM_GENERAL_6_OR_2
#undef TIM_GENERAL_2_CCMR1_Output_0_OC1M_3
#undef TIM_GENERAL_1_MAP1_OR
#undef TIM_GENERAL_3_MAP1_DMAR
#undef PERIPH_MAC_TIM
#undef PERIPH_TIM_GENERAL_4
#undef TIM_ADVANCED_CCMR2_Input_0_IC4PSC
#undef TIM_ADVANCED_CR2_OIS4N
#undef TIM_GENERAL_1_DIER_COMDE
#undef TIM_GENERAL_1_CNT_1
#undef TIM_GENERAL_6_CCMR1_Input_2
#undef TIM_ADVANCED_CCER_CC4NP
#undef TIM_GENERAL_1_MAP1_TISEL
#undef TIM_GENERAL_4_SMCR_ETF
#undef TIM_ADVANCED_CCMR1_Output_OC1M_3
#undef TIM_GENERAL_3_BDTR_BKDSRM
#undef TIM_ADVANCED_BDTR_BK2F
#undef TIM_GENERAL_1_CR1_UIFREMAP
#undef TIM_GENERAL_3_CR1_1
#undef TIM_ADVANCED_OR1_3
#undef TIM_GENERAL_4_CCMR1_Output_0_CC2S
#undef TIM_GENERAL_2_CCMR1_Output_0_OC2M_3
#undef TIM_ADVANCED_CR2_MMS_3
#undef TIM_ADVANCED_CCMR1_Input_2_OC2PE
#undef TIM_ADVANCED_AF1_0_BKCMP7E
#undef TIM_ADVANCED_TIM3
#undef TIM_ADVANCED_EGR_B2G
#undef TIM_ADVANCED_TIM4
#undef TIM_GENERAL_1_CCR3_1
#undef TIM_GENERAL_2_CCMR1_Output_0_OC2FE
#undef TIM6_TMPL
#undef TIM_GENERAL_3_DIER_0_COMDE
#undef TIM_GENERAL_1_MAP0_OR1
#undef TIM_GENERAL_4_SMCR_ETPS
#undef TIM_GENERAL_1_CCMR1_Input_0_IC2PCS
#undef TIM_GENERAL_4_OR_0
#undef TIM_ADVANCED_SMCR_1
#undef TIM9_TMPL
#undef TIM_GENERAL_3_AF1_BKDFBK1E
#undef TIM_ADVANCED_DIER_IDXIE
#undef TIM_GENERAL_1_CCR4_3
#undef TIM_GENERAL_1_CCR1_1
#undef TIM_GENERAL_2_MAP1_AF1
#undef TIM_GENERAL_6_MAP1_TIM1_CCMR2_Input
#undef TIM_GENERAL_2_CCMR1_Input_IC2F
#undef TIM_GENERAL_2_DIER_CC2IE
#undef TIM_GENERAL_6_TIM2
#undef TIM_GENERAL_2_EGR_CC2G
#undef TIM17_TMPL
#undef TIM20_TMPL
#undef TIM_GENERAL_1_CCMR2_Output_1
#undef TIM_ADVANCED_CCMR2_Input_1_OC3M
#undef TIM_GENERAL_3_MAP3_AF1
#undef TIM_ADVANCED_CCER_CC6E
#undef TIM_GENERAL_4_CR1_0_OPM
#undef TIM_BASIC_TIM18
#undef TIM_GENERAL_6_SMCR_1
#undef TIM_ADVANCED_OR1_1_ETR_ADC2_RMP
#undef TIM_GENERAL_1_CNT_3_CNT_M
#undef TIM_GENERAL_6_MAP1_ARR
#undef TIM_ADVANCED_DIER_DIRIE
#undef TIM_GENERAL_1_CCR1_0
#undef TIM_ADVANCED_BDTR_BK2P
#undef TIM_GENERAL_3_MAP0_CCR1
#undef TIM_ADVANCED_CCER_CC5E
#undef TIM_ADVANCED_DIER_TERRIE
#undef TIM_GENERAL_3_CNT_UIFCPY
#undef TIM_ADVANCED_CCMR1_Input_1_OC2CE
#undef TIM_ADVANCED_CCMR1_Input_2
#undef TIM_GENERAL_3_TIM_GENERAL_3_tmpl_0
#undef TIM_ADVANCED_SMCR_0_TS_4_3
#undef TIM_ADVANCED_MAP1_CCR5
#undef TIM3_TMPL
#undef TIM22_TMPL
#undef TIM4_TMPL
#undef TIM_ADVANCED_MAP0_CCR6
#undef TIM_ADVANCED_CCMR2_Input_1_OC4M
#undef TIM_GENERAL_3_DIER_0
#undef TIM_GENERAL_1_MAP3_CCR1
#undef TIM_ADVANCED_CCMR2_Output_0_OC3M_3
#undef TIM_GENERAL_3_BDTR_BKBID
#undef TIM_GENERAL_6_MAP1_SMCR
#undef TIM_ADVANCED_CCMR1_Input_2_IC1PSC
#undef TIM_GENERAL_2_MAP0_DMAR
#undef TIM1_TMPL
#undef TIM_GENERAL_1_TIM3
#undef TIM_GENERAL_2_CR1_DITHEN
#undef TIM_GENERAL_6_TIM11
#undef TIM_ADVANCED_TIM_ADVANCED_tmpl_0
#undef TIM_ADVANCED_DIER_IERRIE
#undef TIM_GENERAL_1_SMCR_OCCS
#undef TIM_GENERAL_4_CCMR1_Output_0_OC1CE
#undef TIM_BASIC_TIM6
#undef TIM_ADVANCED_SMCR_0_OCCS
#undef TIM_GENERAL_1_OR_0_IT4_RMP
#undef TIM_GENERAL_6_MAP1_CCR1
#undef TIM_ADVANCED_OR3_0
#undef TIM_GENERAL_3_MAP3_DIER
#undef TIM_GENERAL_1_CNT_2_CNT_H
#undef TIM_GENERAL_1_DMAR_0
#undef TIM_GENERAL_6_MAP3
#undef TIM_ADVANCED_CCMR3_Output_0_OC6M3
#undef TIM_GENERAL_1_ARR_3
#undef TIM_GENERAL_1_CCMR2_Output_1_CC4S
#undef TIM_GENERAL_1_SMCR_TS_4_3
#undef TIM_GENERAL_3_MAP1_DIER
#undef TIM_GENERAL_6_TIM_GENERAL_6_tmpl_0
#undef TIM_GENERAL_1_CNT_2
#undef TIM_GENERAL_4_SMCR_ETP
#undef TIM_GENERAL_6_TIM10
#undef TIM_ADVANCED_CR2_OIS5
#undef PERIPH_TIM_GENERAL_1
#undef TIM_GENERAL_5_TIM12
#undef TIM_ADVANCED_CCMR1_Input_1_C1F
#undef TIM_GENERAL_3_TIM16
#undef TIM_GENERAL_5_CCMR1_Input_1
#undef TIM_ADVANCED_MAP2
#undef TIM_GENERAL_1_OR1_2
#undef TIM_ADVANCED_CCMR2_Input_1
#undef TIM_GENERAL_3_DIER_0_TDE
#undef TIM_GENERAL_1_OR_0
#undef TIM_GENERAL_2_DIER_CC2DE
#undef TIM_ADVANCED_CCER_CC4NE
#undef TIM_ADVANCED_CR1_UIFREMAP
#undef TIM_GENERAL_1_OR_4
#undef TIM_GENERAL_1_TIM13
#undef TIM_GENERAL_4_CR1_0_CMS
#undef TIM_GENERAL_3_BDTR_BKF
#undef TIM_GENERAL_1_OR_0_TI4_RMP
#undef TIM_GENERAL_1_CCR4_0
#undef TIM_ADVANCED_TISEL_0
#undef TIM13_TMPL
#undef TIM_GENERAL_1_OR2_0
#undef TIM_GENERAL_2_DIER_COMDE
#undef TIM_ADVANCED_TIM5
#undef TIM_BASIC_CR1_DITHEN
#undef TIM_GENERAL_1_CCMR2_Output_0_OC3M_3
#undef TIM_GENERAL_6_MAP1_TIM1_ISR
#undef TIM_GENERAL_2_CCER_CC2E
#undef TIM_GENERAL_3_MAP0_ARR
#undef TIM_GENERAL_1_CNT_2_CNT
#undef TIM_GENERAL_3_AF1_BKCMP3P
#undef TIM_GENERAL_2_MAP1_DTR2
#undef TIM_GENERAL_6_CR1_UIFREMAP
#undef TIM_GENERAL_2_CR2_0_TI1S
#undef TIM_GENERAL_4_TIM9
#undef TIM_GENERAL_3_MAP3_SR
#undef TIM_GENERAL_6_MAP1_CCMR1_Input
#undef TIM_ADVANCED_TISEL_1
#undef TIM_ADVANCED_AF2_0_OCRSEL
#undef TIM_GENERAL_4_CCMR1_Output_0_OC2CE
#undef TIM_GENERAL_1_OR_2
#undef TIM12_TMPL
#undef TIM_GENERAL_3_CR1_0_DITHEN
#undef TIM_ADVANCED_SR_DIRF
#undef TIM_ADVANCED_CCER_CC6P
#undef TIM_ADVANCED_BDTR_BK2ID
#undef TIM2_TMPL
#undef TIM_ADVANCED_OR1_1_ETR_ADC3_RMP
#undef TIM_GENERAL_4_CCMR1_Input_1_IC2PSC
#undef TIM_ADVANCED_CCMR1_Input_2_OC1CE
#undef TIM16_TMPL
#undef TIM_ADVANCED_CCMR2_Input_1_OC3CE
#undef TIM_GENERAL_6_MAP1_CNT
#undef TIM_GENERAL_1_CNT_5
#undef TIM_GENERAL_6_SMCR_0
#undef TIM_ADVANCED_CCMR2_Input_0_IC4F
#undef TIM_GENERAL_2_SR_CC2OF
#undef TIM_ADVANCED_CCMR2_Output_1
#undef MAC_TIM_MAC_TIM
#undef TIM_ADVANCED_BDTR_BK2E
#undef TIM_GENERAL_3_MAP3_EGR
#undef TIM_ADVANCED_MAP1_TISEL
#undef TIM_GENERAL_3_DIER_1
#undef TIM_GENERAL_3_MAP3
#undef TIM_GENERAL_2_MAP1_TISEL
#undef TIM_GENERAL_1_CNT_1_CNT_H
#undef TIM_GENERAL_2_DMAR_1
#undef PERIPH_TIM_GENERAL_6
#undef TIM_ADVANCED_CCMR1_Input_2_OC2FE
#undef TIM_GENERAL_1_CCMR1_Input_0_ICPCS
#undef TIM_GENERAL_1_MAP2
#undef TIM_GENERAL_1_TISEL_TI4SEL
#undef TIM_ADVANCED_DMAR_0
#undef TIM_ADVANCED_SR_IERRF
#undef TIM_GENERAL_1_OR2_1
#undef TIM_GENERAL_1_TIM19
#undef PERIPH_TIM_GENERAL_2
#undef TIM_GENERAL_2_CNT_UIFCPY
#undef TIM_GENERAL_3_EGR_TG
#undef TIM_GENERAL_3_TIM17
#undef TIM_GENERAL_1_MAP1_AF1
#undef TIM_GENERAL_3_MAP3_TISEL
#undef TIM_GENERAL_2_CR2_0_MMS
#undef TIM_GENERAL_3_MAP0_DIER
#undef TIM_GENERAL_2_CR2_0_OIS2
#undef TIM_GENERAL_1_CCR1_2
#undef TIM_ADVANCED_AF2_1
#undef TIM_GENERAL_4_CR1_1
#undef TIM_ADVANCED_RCR_1
#undef TIM_GENERAL_1_CCMR2_Output_0_CC4S
#undef TIM_GENERAL_3_MAP0_PSC
#undef TIM_GENERAL_1_MAP0_OR2
#undef TIM_ADVANCED_CCMR1_Input_0_ICPCS
#undef TIM_ADVANCED_BDTR_BKF
#undef TIM_GENERAL_2_CCMR1_Input_CC2S
#undef TIM_ADVANCED_CCMR1_Input_2_OC1M
#undef TIM_GENERAL_1_MAP3
#undef TIM_GENERAL_4_MAP1_CCER
#undef TIM_GENERAL_6_CCMR1_Output_OC1CE
#undef TIM_GENERAL_6_CCMR1_Input_1
#undef TIM_GENERAL_6_MAP2
#undef TIM_ADVANCED_CCMR1_Input_4
#undef TIM_ADVANCED_AF2_0_BK2CMP4P
#undef TIM_GENERAL_3_MAP3_CCMR1_Output
#undef TIM_GENERAL_3_MAP2
#undef TIM_GENERAL_2_BDTR_BKF
#undef TIM_GENERAL_4_CCMR1_Input_0_IC1F
#undef TIM_GENERAL_6_OR_0
#undef TIM_GENERAL_1_TIM5
#undef TIM_ADVANCED_AF2_0_BK2CMP5E
#undef TIM_GENERAL_2_CCMR1_Output_0_OC1CE
#undef TIM_GENERAL_3_AF1_BKCMP4E
#undef TIM_GENERAL_3_MAP0_DMAR
#undef TIM_ADVANCED_MAP1_CCMR3_Output
#undef TIM_GENERAL_1_OR_0_ETR_RMP
#undef TIM_GENERAL_2_MAP1_AF2
#undef TIM_ADVANCED_SMCR_0_SMSPS
#undef TIM_GENERAL_3_MAP0_CCER
#undef TIM_ADVANCED_CR2_MMS2
#undef TIM_ADVANCED_CCMR1_Input_0_IC1F
#undef TIM_ADVANCED_MAP1_AF2
#undef TIM_GENERAL_1_ARR_0
#undef TIM_ADVANCED_SR_CC6IF
#undef TIM_GENERAL_3_MAP0_CNT
#undef TIM_GENERAL_5_CCMR1_Output_OC2M_3
#undef TIM_BASIC_CR1_UIFREMAP
#undef TIM_GENERAL_4_SMCR_ECE
#undef TIM_ADVANCED_TIM1
#undef TIM_BASIC_CNT_UIFCPY
#undef TIM_ADVANCED_OR1_2
#undef TIM_ADVANCED_AF2_0_BK2CMP4E
#undef TIM_GENERAL_2_SMCR_0_SMS_3
#undef TIM_ADVANCED_SR_IDXF
#undef TIM_GENERAL_3_SR_TIF
#undef TIM_ADVANCED_CCMR3_Output_1
#undef TIM_ADVANCED_OR3_1_BK2DFBK3E
#undef TIM_ADVANCED_SMCR_0_SMSPE
#undef TIM_GENERAL_1_CCR2_0
#undef TIM_ADVANCED_BDTR_BKDSRM
#undef TIM_ADVANCED_CCMR1_Input_1_IC2PSC
#undef TIM_GENERAL_1_ARR_2
#undef TIM_GENERAL_4_CCMR1_Input_1_IC1F
#undef TIM_ADVANCED_CNT_UIFCPY
#undef TIM_GENERAL_4_TIM21
#undef TIM_GENERAL_5_CCMR1_Input_0_IC2PCS
#undef TIM_GENERAL_6_TIM1
#undef TIM_GENERAL_3_MAP0_BDTR
#undef TIM_GENERAL_1_CCR2_1
#undef TIM_GENERAL_3_OR_1
#undef TIM11_TMPL
#undef TIM_GENERAL_3_MAP1_OR2
#undef TIM_ADVANCED_CR1_DITHEN
#undef TIM_GENERAL_1_TISEL_TI3SEL
#undef TIM_GENERAL_2_CCMR1_Output_0_OC2M
#undef TIM_GENERAL_3_MAP1_DTR2
#undef TIM_ADVANCED_AF1_0_BKCMP6E
#undef TIM_GENERAL_2_SMCR_0_TS_4_3
#undef TIM_GENERAL_3_MAP0_RCR
#undef TIM_GENERAL_3_MAP0_AF1
#undef TIM_GENERAL_1_CCMR1_Output_1
#undef TIM_ADVANCED_CCMR3_Output_1_OC5M_bit3
#undef TIM_ADVANCED_AF2_1_BKINE
#undef TIM_ADVANCED_CCMR1_Input_0_IC2F
#undef TIM_ADVANCED_CCMR2_Output_0_OC4M_4
#undef TIM_GENERAL_2_CR2_1
#undef TIM_ADVANCED_MAP1_DCR
#undef TIM_ADVANCED_CCER_CC5P
#undef TIM_GENERAL_3_CCMR1_Output_0_OC1M_2
#undef TIM18_TMPL
#undef TIM_GENERAL_1_TIM12
#undef TIM_GENERAL_2_BDTR_BKDSRM
#undef TIM_GENERAL_1_SMCR_SMS_3
#undef TIM_GENERAL_1_CNT_1_CNT_31
#undef TIM_ADVANCED_AF1_0_ETRSEL
#undef TIM_ADVANCED_OR1_0
#undef TIM_ADVANCED_MAP1_DMAR
#undef TIM_GENERAL_6_MAP1_CCER
#undef TIM_GENERAL_4_OR_2
#undef TIM_GENERAL_1_CNT_0
#undef TIM_GENERAL_3_AF1_BKCMP3E
#undef TIM_GENERAL_6_MAP1_OR
#undef TIM_GENERAL_3_OR_0
#undef TIM_GENERAL_3_AF1_BKCMP6E
#undef PERIPH_TIM_GENERAL_3
#undef TIM_GENERAL_1_OR1_1
#undef TIM_GENERAL_1_DMAR_1
#undef TIM_ADVANCED_OR1_1
#undef TIM_GENERAL_3_MAP3_OR
#undef TIM_GENERAL_4_CCMR1_Input_1_IC1PSC
#undef TIM_ADVANCED_AF2_0_BK2CMP3E
#undef TIM_GENERAL_2_BDTR_BKBID
#undef TIM_GENERAL_2_MAP1_DCR
#undef TIM_GENERAL_2_CCMR1_Output_0_CC2S
#undef PERIPH_TIM_ADVANCED
#undef TIM_ADVANCED_CCMR1_Input_1_OC2M
#undef TIM_GENERAL_5_CCMR1_Output_OC1M_3
#undef TIM_GENERAL_2_CCMR1_Output_0_OC2PE
#undef TIM_GENERAL_3_CR1_0_UIFREMAP
#undef TIM_GENERAL_3_TIM15
#undef TIM_GENERAL_1_CCR4_2
#undef TIM_GENERAL_1_CCMR1_Output_0_OC2M_3
#undef TIM_GENERAL_1_DIER_TDE
#undef TIM_ADVANCED_AF2_1_BK2DFBK0E
#undef TIM_ADVANCED_DMAR_1
#undef TIM_GENERAL_1_OR_3
#undef TIM_GENERAL_1_TIM_GENERAL_1_tmpl_2
#undef TIM_GENERAL_3_DMAR_1
#undef TIM_ADVANCED_CCMR2_Input_1_C3PSC
#undef TIM_GENERAL_1_MAP1_CCR3
#undef TIM_GENERAL_1_CCR2_3
#undef TIM_GENERAL_2_CCMR1_Input_IC2PSC
#undef TIM_GENERAL_6_TIM13
#undef TIM_ADVANCED_SMCR_0_TS
#undef TIM_ADVANCED_CCMR1_Input_1_ICPSC
#undef TIM_ADVANCED_AF1_1
#undef TIM_GENERAL_4_TIM12
#undef TIM_GENERAL_1_CCR3_2
#undef TIM_GENERAL_6_CCMR1_Input_0_ICPCS
#undef TIM_ADVANCED_CCMR2_Input_2
#undef TIM_ADVANCED_AF1_0_BKCMP3E
#undef TIM_GENERAL_4_CCMR1_Input_1_IC2F
#undef TIM_GENERAL_1_MAP3_AF
#undef TIM_GENERAL_2_MAP1_OR1
#undef TIM8_TMPL
#undef TIM_GENERAL_2_MAP0_DCR
#undef TIM7_TMPL
#undef TIM_GENERAL_1_CNT_3
#undef TIM_GENERAL_1_MAP1_CCR1
#undef TIM_ADVANCED_AF2_0_BK2CMP7E
#undef TIM_GENERAL_1_TIM14
#undef TIM_ADVANCED_CCMR2_Input_1_OC4PE
#undef TIM_ADVANCED_MAP1_AF1
#undef TIM_GENERAL_6_OR_1
#undef TIM_ADVANCED_CCMR2_Input_0_IC3PSC
#undef TIM_GENERAL_1_CCMR1_Output_0_OC1M_3
#undef MAC_TIM_TMPL
#undef TIM_GENERAL_3_MAP0_DCR
#undef TIM_GENERAL_1_MAP3_TIM2_OR
#undef TIM_ADVANCED_CCMR2_Input_1_OC4FE
#undef TIM_GENERAL_1_CCMR2_Output_0_OC4M_3
#undef TIM_ADVANCED_SR_SBIF
#undef TIM_GENERAL_3_OR2_0
#undef TIM_ADVANCED_BDTR_BK2DSRM
#undef TIM21_TMPL
#undef TIM_GENERAL_2_DMAR_0
#undef TIM_GENERAL_1_TIM2
#undef TIM_GENERAL_3_AF1_BKCMP5E
#undef TIM_ADVANCED_SR_TERRF
#undef TIM_GENERAL_2_MAP0_OR2
#undef PERIPH_TIM_GENERAL_5
#undef TIM_ADVANCED_AF1_0_BKCMP5E
#undef TIM_ADVANCED_OR2_0
#undef TIM_ADVANCED_MAP0_OR3
#undef TIM19_TMPL
#undef TIM_GENERAL_4_CCMR1_Input_1
#undef TIM15_TMPL
#undef TIM_ADVANCED_AF2_0_BK2CMP6E
#undef TIM_GENERAL_3_CR1_0
#undef TIM_GENERAL_4_OR_1
#undef TIM_ADVANCED_AF2_0_BK2DF1BK1E
#undef TIM_ADVANCED_CCMR3_Output_0_OC5M3
#undef TIM_ADVANCED_TIM2
#undef TIM_GENERAL_4_CCMR1_Input_0_IC2PCS
#undef TIM_ADVANCED_OR3_2
#undef PERIPH_TIM_BASIC
#undef TIM_GENERAL_2_CCER_CC2P
#undef TIM10_TMPL
#undef TIM_GENERAL_3_DMAR_0
#undef TIM_ADVANCED_BDTR_BKBID
#undef TIM_GENERAL_3_MAP1_TISEL
#undef TIM_GENERAL_2_CCER_CC2NP
#undef TIM_GENERAL_3_MAP1_DCR
#undef TIM_GENERAL_4_CCMR1_Output_1
#undef TIM_ADVANCED_AF1_0_BKCMP4P
#undef TIM_GENERAL_4_CCMR1_Input_0_ICPCS
#undef TIM_ADVANCED_RCR_0
#undef TIM_GENERAL_1_TIM4
#undef TIM_GENERAL_1_TIM_GENERAL_1_tmpl_1
#undef TIM_GENERAL_1_CCMR1_Output_0_CC2S
#undef TIM_GENERAL_2_SR_CC2IF
#undef TIM_ADVANCED_CCMR1_Input_0_IC2PCS
#undef TIM_ADVANCED_AF2_0_BK2CMP3P
#undef TIM14_TMPL
#undef TIM_ADVANCED_TIM8
#undef TIM_ADVANCED_AF1_0_BKDF1BK0E
#undef TIM_GENERAL_3_CR1_2

#endif

#endif //__SOOL_CORE_TIM_H