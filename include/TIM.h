#ifndef __SOOL_TIM_H
#define __SOOL_TIM_H

#include "lib_utils/peripheral_include.h"
#include "RCC.h"


//region defines

#if defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) ||\
    defined(STM32F779xx ) || defined(STM32H7     ) 
#define TIM_AF1
#define TIM_AF2
#endif

#define TIM_ARR
#define TIM_CCER
#define TIM_CCMR1
#define TIM_CCMR2
#define TIM_CCR1
#define TIM_CCR2
#define TIM_CCR3
#define TIM_CCR4
#define TIM_CNT
#define TIM_CR1
#define TIM_CR2
#define TIM_DCR
#define TIM_DIER
#define TIM_DMAR
#define TIM_EGR
#define TIM_PSC
#define TIM_SMCR
#define TIM_SR

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM_ARR_0
#define TIM_CNT_0
#define TIM_DIER_COMDE       COMDE                // 1 bits @ 13
#else
#define TIM_DIER_COMDE
#endif

#if defined(STM32L0     ) 
#define TIM_ARR_1
#define TIM_CNT_1_CNT        CNT                  // 16 bits @ 0
#define TIM2_OR_0_ETR_RMP    ETR_RMP              // 3 bits @ 0
#define TIM2_OR_0_TI4_RMP    TI4_RMP              // 2 bits @ 3
#define TIM21_OR_0_ETR_RMP   ETR_RMP              // 2 bits @ 0
#define TIM21_OR_0_TI1_RMP   TI1_RMP              // 3 bits @ 2
#define TIM21_OR_0_TI2_RMP   TI2_RMP              // 1 bits @ 5
#else
#define TIM_CNT_1_CNT
#define TIM2_OR_0_ETR_RMP
#define TIM2_OR_0_TI4_RMP
#define TIM21_OR_0_ETR_RMP
#define TIM21_OR_0_TI1_RMP
#define TIM21_OR_0_TI2_RMP
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define TIM_BDTR
#define TIM_CCER_CC1NE       CC1NE                // 1 bits @ 2
#define TIM_CCER_CC2NE       CC2NE                // 1 bits @ 6
#define TIM_CCER_CC3NE       CC3NE                // 1 bits @ 10
#define TIM_CR2_0_CCPC       CCPC                 // 1 bits @ 0
#define TIM_CR2_0_CCUS       CCUS                 // 1 bits @ 2
#define TIM_CR2_0_OIS1       OIS1                 // 1 bits @ 8
#define TIM_CR2_0_OIS1N      OIS1N                // 1 bits @ 9
#define TIM_CR2_0_OIS2       OIS2                 // 1 bits @ 10
#define TIM_DIER_COMIE       COMIE                // 1 bits @ 5
#define TIM_DIER_BIE         BIE                  // 1 bits @ 7
#define TIM_EGR_COMG         COMG                 // 1 bits @ 5
#define TIM_EGR_BG           BG                   // 1 bits @ 7
#define TIM_RCR
#define TIM_SR_COMIF         COMIF                // 1 bits @ 5
#define TIM_SR_BIF           BIF                  // 1 bits @ 7
#define TIM_MAP0_RCR         RCR_TypeDef RCR
#define TIM_MAP0_BDTR        BDTR_TypeDef BDTR
#else
#define TIM_CCER_CC1NE
#define TIM_CCER_CC2NE
#define TIM_CCER_CC3NE
#define TIM_CR2_0_CCPC
#define TIM_CR2_0_CCUS
#define TIM_CR2_0_OIS1
#define TIM_CR2_0_OIS1N
#define TIM_CR2_0_OIS2
#define TIM_DIER_COMIE
#define TIM_DIER_BIE
#define TIM_EGR_COMG
#define TIM_EGR_BG
#define TIM_SR_COMIF
#define TIM_SR_BIF
#define TIM_MAP0_RCR __SOOL_PERIPH_PADDING_4
#define TIM_MAP0_BDTR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM_BDTR_BKF         BKF                  // 4 bits @ 16
#define TIM_BDTR_BK2F        BK2F                 // 4 bits @ 20
#define TIM_BDTR_BK2E        BK2E                 // 1 bits @ 24
#define TIM_BDTR_BK2P        BK2P                 // 1 bits @ 25
#define TIM_CCER_CC5E        CC5E                 // 1 bits @ 16
#define TIM_CCER_CC5P        CC5P                 // 1 bits @ 17
#define TIM_CCER_CC6E        CC6E                 // 1 bits @ 20
#define TIM_CCER_CC6P        CC6P                 // 1 bits @ 21
#define TIM_CCMR3
#define TIM_CCR5
#define TIM_CCR6
#define TIM_CNT_1_UIFCPY     UIFCPY               // 1 bits @ 31
#define TIM_CR1_UIFREMAP     UIFREMAP             // 1 bits @ 11
#define TIM_CR2_0_OIS5       OIS5                 // 1 bits @ 16
#define TIM_CR2_0_MMS2       MMS2                 // 4 bits @ 20
#define TIM_EGR_B2G          B2G                  // 1 bits @ 8
#define TIM_SR_B2IF          B2IF                 // 1 bits @ 8
#define TIM_SR_CC5IF         CC5IF                // 1 bits @ 16
#define TIM_SR_CC6IF         CC6IF                // 1 bits @ 17
#else
#define TIM_BDTR_BKF
#define TIM_BDTR_BK2F
#define TIM_BDTR_BK2E
#define TIM_BDTR_BK2P
#define TIM_CCER_CC5E
#define TIM_CCER_CC5P
#define TIM_CCER_CC6E
#define TIM_CCER_CC6P
#define TIM_CNT_1_UIFCPY
#define TIM_CR1_UIFREMAP
#define TIM_CR2_0_OIS5
#define TIM_CR2_0_MMS2
#define TIM_EGR_B2G
#define TIM_SR_B2IF
#define TIM_SR_CC5IF
#define TIM_SR_CC6IF
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM_CCER_CC4NP       CC4NP                // 1 bits @ 15
#else
#define TIM_CCER_CC4NP
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F4     ) || defined(STM32L0     ) || defined(STM32L1     ) 
#define TIM_CCMR1_0_OC1M     OC1M                 // 3 bits @ 4
#define TIM_CCMR1_0_OC2M     OC2M                 // 3 bits @ 12
#define TIM_SMCR_SMS         SMS                  // 3 bits @ 0
#else
#define TIM_CCMR1_0_OC1M
#define TIM_CCMR1_0_OC2M
#define TIM_SMCR_SMS
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F4     ) || defined(STM32H7     ) || defined(STM32L0     ) ||\
    defined(STM32L1     ) 
#define TIM_CCMR2_0_OC3M     OC3M                 // 3 bits @ 4
#define TIM_CCMR2_0_OC4M     OC4M                 // 3 bits @ 12
#else
#define TIM_CCMR2_0_OC3M
#define TIM_CCMR2_0_OC4M
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32F7     ) 
#define TIM_CCMR3_0_OC5M0    OC5M0                // 1 bits @ 0
#define TIM_CCMR3_0_OC5M1    OC5M1                // 1 bits @ 1
#define TIM_CCMR3_0_OC5M3    OC5M3                // 1 bits @ 12
#define TIM_CCMR3_1
#define TIM_CCMR3_2_OC6M2    OC6M2                // 1 bits @ 2
#else
#define TIM_CCMR3_0_OC5M0
#define TIM_CCMR3_0_OC5M1
#define TIM_CCMR3_0_OC5M3
#define TIM_CCMR3_2_OC6M2
#endif

#if defined(STM32H7     ) 
#define TIM_CCMR3_0_OC5M     OC5M                 // 3 bits @ 4
#define TIM_CCMR3_2_OC6M     OC6M                 // 3 bits @ 12
#define TIM_CR2_1
#define TIM_TISEL
#define TIM_MAP2_CCMR3       CCMR3_TypeDef CCMR3
#define TIM_MAP1_CCR5        CCR5_TypeDef CCR5
#define TIM_MAP1_CCR6        CCR6_TypeDef CCR6
#define TIM_MAP1_AF1         typename plugin::AF1_TypeDef AF1
#define TIM_MAP1_AF2         typename plugin::AF2_TypeDef AF2
#define TIM_MAP1_TISEL       typename plugin::TISEL_TypeDef TISEL
#define TIM1_AF1_0_BKCMP1E   BKCMP1E              // 1 bits @ 1
#define TIM1_AF1_0_BKCMP2E   BKCMP2E              // 1 bits @ 2
#define TIM1_AF1_0_BKCMP1P   BKCMP1P              // 1 bits @ 10
#define TIM1_AF1_0_BKCMP2P   BKCMP2P              // 1 bits @ 11
#define TIM1_AF1_0_ETR_SEL   ETR_SEL              // 4 bits @ 14
#define TIM1_AF1_1
#define TIM1_AF2_0_BK2CMP1E  BK2CMP1E             // 1 bits @ 1
#define TIM1_AF2_0_BK2CMP2E  BK2CMP2E             // 1 bits @ 2
#define TIM1_AF2_0_BK2CMP1P  BK2CMP1P             // 1 bits @ 10
#define TIM1_AF2_0_BK2CMP2P  BK2CMP2P             // 1 bits @ 11
#define TIM1_AF2_1
#define TIM8_AF1_0_BKCMP1E   BKCMP1E              // 1 bits @ 1
#define TIM8_AF1_0_BKCMP2E   BKCMP2E              // 1 bits @ 2
#define TIM8_AF1_0_BKCMP1P   BKCMP1P              // 1 bits @ 10
#define TIM8_AF1_0_BKCMP2P   BKCMP2P              // 1 bits @ 11
#define TIM8_AF1_0_ETR_SEL   ETR_SEL              // 4 bits @ 14
#define TIM8_AF1_1
#define TIM8_AF2_0_BK2CMP1E  BK2CMP1E             // 1 bits @ 1
#define TIM8_AF2_0_BK2CMP2E  BK2CMP2E             // 1 bits @ 2
#define TIM8_AF2_0_BK2CMP1P  BK2CMP1P             // 1 bits @ 10
#define TIM8_AF2_0_BK2CMP2P  BK2CMP2P             // 1 bits @ 11
#define TIM8_AF2_1
#else
#define TIM_CCMR3_0_OC5M
#define TIM_CCMR3_2_OC6M
#define TIM_MAP2_CCMR3 __SOOL_PERIPH_PADDING_4
#define TIM_MAP1_CCR5 __SOOL_PERIPH_PADDING_4
#define TIM_MAP1_CCR6 __SOOL_PERIPH_PADDING_4
#define TIM_MAP1_AF1 __SOOL_PERIPH_PADDING_4
#define TIM_MAP1_AF2 __SOOL_PERIPH_PADDING_4
#define TIM_MAP1_TISEL __SOOL_PERIPH_PADDING_4
#define TIM1_AF1_0_BKCMP1E
#define TIM1_AF1_0_BKCMP2E
#define TIM1_AF1_0_BKCMP1P
#define TIM1_AF1_0_BKCMP2P
#define TIM1_AF1_0_ETR_SEL
#define TIM1_AF2_0_BK2CMP1E
#define TIM1_AF2_0_BK2CMP2E
#define TIM1_AF2_0_BK2CMP1P
#define TIM1_AF2_0_BK2CMP2P
#define TIM8_AF1_0_BKCMP1E
#define TIM8_AF1_0_BKCMP2E
#define TIM8_AF1_0_BKCMP1P
#define TIM8_AF1_0_BKCMP2P
#define TIM8_AF1_0_ETR_SEL
#define TIM8_AF2_0_BK2CMP1E
#define TIM8_AF2_0_BK2CMP2E
#define TIM8_AF2_0_BK2CMP1P
#define TIM8_AF2_0_BK2CMP2P
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) 
#define TIM_CCMR3_2
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define TIM_CNT_1
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F301x8 ) ||\
    defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) ||\
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F328xx ) ||\
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM_CR2_0_OIS2N      OIS2N                // 1 bits @ 11
#define TIM_CR2_0_OIS3       OIS3                 // 1 bits @ 12
#define TIM_CR2_0_OIS3N      OIS3N                // 1 bits @ 13
#define TIM_CR2_0_OIS4       OIS4                 // 1 bits @ 14
#else
#define TIM_CR2_0_OIS2N
#define TIM_CR2_0_OIS3
#define TIM_CR2_0_OIS3N
#define TIM_CR2_0_OIS4
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32F7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM_CR2_0_OIS6       OIS6                 // 1 bits @ 18
#define TIM_RCR_1
#define TIM_MAP0_CCMR3       CCMR3_TypeDef CCMR3
#define TIM_MAP0_CCR5        CCR5_TypeDef CCR5
#define TIM_MAP0_CCR6        CCR6_TypeDef CCR6
#else
#define TIM_CR2_0_OIS6
#define TIM_MAP0_CCMR3 __SOOL_PERIPH_PADDING_4
#define TIM_MAP0_CCR5 __SOOL_PERIPH_PADDING_4
#define TIM_MAP0_CCR6 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) 
#define TIM_OR
#define TIM_MAP0_OR          typename plugin::OR_TypeDef OR
#else
#define TIM_MAP0_OR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     ) 
#define TIM_OR_0
#define TIM2_OR_1
#define TIM5_OR_0
#define TIM11_OR_0
#define TIM3_OR_1
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) 
#define TIM_OR_0_TI1_RMP     TI1_RMP              // 2 bits @ 0
#define TIM1_OR_1_TI1_RMP    TI1_RMP              // 2 bits @ 0
#define TIM8_OR_1_TI1_RMP    TI1_RMP              // 2 bits @ 0
#define TIM20_OR_1_TI1_RMP   TI1_RMP              // 2 bits @ 0
#define TIM2_OR_2
#define TIM5_OR_0_TI1_RMP    TI1_RMP              // 2 bits @ 0
#define TIM3_OR_2
#define TIM21_OR_1_TI1_RMP   TI1_RMP              // 2 bits @ 0
#define TIM22_OR_1_TI1_RMP   TI1_RMP              // 2 bits @ 0
#define TIM9_OR_0_TI1_RMP    TI1_RMP              // 2 bits @ 0
#else
#define TIM_OR_0_TI1_RMP
#define TIM1_OR_1_TI1_RMP
#define TIM8_OR_1_TI1_RMP
#define TIM20_OR_1_TI1_RMP
#define TIM5_OR_0_TI1_RMP
#define TIM21_OR_1_TI1_RMP
#define TIM22_OR_1_TI1_RMP
#define TIM9_OR_0_TI1_RMP
#endif

#if defined(STM32L1     ) 
#define TIM_OR_0_ETR_RMP     ETR_RMP              // 1 bits @ 2
#define TIM_OR_1
#define TIM14_OR_0_ETR_RMP   ETR_RMP              // 1 bits @ 2
#define TIM14_OR_1
#define TIM16_OR_0_TI1RMP    TI1RMP               // 2 bits @ 0
#define TIM16_OR_0_ETR_RMP   ETR_RMP              // 1 bits @ 2
#define TIM1_OR_1_ETR_RMP    ETR_RMP              // 1 bits @ 2
#define TIM1_OR_2
#define TIM8_OR_1_ETR_RMP    ETR_RMP              // 1 bits @ 2
#define TIM8_OR_2
#define TIM20_OR_1_ETR_RMP   ETR_RMP              // 1 bits @ 2
#define TIM20_OR_2
#define TIM2_OR_1_ETR_RMP    ETR_RMP              // 1 bits @ 2
#define TIM2_OR_3
#define TIM5_OR_0_ETR_RMP    ETR_RMP              // 1 bits @ 2
#define TIM5_OR_1
#define TIM11_OR_0_ETR_RMP   ETR_RMP              // 1 bits @ 2
#define TIM11_OR_1
#define TIM3_OR_1_ETR_RMP    ETR_RMP              // 1 bits @ 2
#define TIM3_OR_3
#define TIM21_OR_1_ETR_RMP   ETR_RMP              // 1 bits @ 2
#define TIM21_OR_2
#define TIM22_OR_1_ETR_RMP   ETR_RMP              // 1 bits @ 2
#define TIM22_OR_2
#define TIM9_OR_1_TI1RMP     TI1RMP               // 2 bits @ 0
#define TIM9_OR_1_ETR_RMP    ETR_RMP              // 1 bits @ 2
#else
#define TIM_OR_0_ETR_RMP
#define TIM14_OR_0_ETR_RMP
#define TIM16_OR_0_TI1RMP
#define TIM16_OR_0_ETR_RMP
#define TIM1_OR_1_ETR_RMP
#define TIM8_OR_1_ETR_RMP
#define TIM20_OR_1_ETR_RMP
#define TIM2_OR_1_ETR_RMP
#define TIM5_OR_0_ETR_RMP
#define TIM11_OR_0_ETR_RMP
#define TIM3_OR_1_ETR_RMP
#define TIM21_OR_1_ETR_RMP
#define TIM22_OR_1_ETR_RMP
#define TIM9_OR_1_TI1RMP
#define TIM9_OR_1_ETR_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define TIM_OR_0_TI4_RMP     TI4_RMP              // 2 bits @ 6
#define TIM14_OR_0_TI4_RMP   TI4_RMP              // 2 bits @ 6
#define TIM16_OR_1_TI4_RMP   TI4_RMP              // 2 bits @ 6
#define TIM1_OR_0_TI4_RMP    TI4_RMP              // 2 bits @ 6
#define TIM8_OR_0_TI4_RMP    TI4_RMP              // 2 bits @ 6
#define TIM20_OR_0_TI4_RMP   TI4_RMP              // 2 bits @ 6
#define TIM2_OR_1_TI4_RMP    TI4_RMP              // 2 bits @ 6
#define TIM5_OR_0_TI4_RMP    TI4_RMP              // 2 bits @ 6
#define TIM11_OR_0_TI1_RMP   TI1_RMP              // 2 bits @ 0
#define TIM11_OR_0_TI4_RMP   TI4_RMP              // 2 bits @ 6
#define TIM3_OR_1_TI4_RMP    TI4_RMP              // 2 bits @ 6
#define TIM21_OR_0_TI4_RMP   TI4_RMP              // 2 bits @ 6
#define TIM22_OR_0_TI4_RMP   TI4_RMP              // 2 bits @ 6
#define TIM9_OR_0_TI4_RMP    TI4_RMP              // 2 bits @ 6
#else
#define TIM_OR_0_TI4_RMP
#define TIM14_OR_0_TI4_RMP
#define TIM16_OR_1_TI4_RMP
#define TIM1_OR_0_TI4_RMP
#define TIM8_OR_0_TI4_RMP
#define TIM20_OR_0_TI4_RMP
#define TIM2_OR_1_TI4_RMP
#define TIM5_OR_0_TI4_RMP
#define TIM11_OR_0_TI1_RMP
#define TIM11_OR_0_TI4_RMP
#define TIM3_OR_1_TI4_RMP
#define TIM21_OR_0_TI4_RMP
#define TIM22_OR_0_TI4_RMP
#define TIM9_OR_0_TI4_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) ||\
    defined(STM32F479xx ) || defined(STM32F7     ) 
#define TIM_OR_0_ITR1_RMP    ITR1_RMP             // 2 bits @ 10
#define TIM14_OR_0_ITR1_RMP  ITR1_RMP             // 2 bits @ 10
#define TIM16_OR_0_ITR1_RMP  ITR1_RMP             // 2 bits @ 10
#define TIM1_OR_0_ITR1_RMP   ITR1_RMP             // 2 bits @ 10
#define TIM8_OR_0_ITR1_RMP   ITR1_RMP             // 2 bits @ 10
#define TIM20_OR_0_ITR1_RMP  ITR1_RMP             // 2 bits @ 10
#define TIM5_OR_0_ITR1_RMP   ITR1_RMP             // 2 bits @ 10
#define TIM11_OR_0_ITR1_RMP  ITR1_RMP             // 2 bits @ 10
#define TIM3_OR_0_ITR1_RMP   ITR1_RMP             // 2 bits @ 10
#define TIM21_OR_0_ITR1_RMP  ITR1_RMP             // 2 bits @ 10
#define TIM22_OR_0_ITR1_RMP  ITR1_RMP             // 2 bits @ 10
#define TIM9_OR_1_ITR1_RMP   ITR1_RMP             // 2 bits @ 10
#else
#define TIM_OR_0_ITR1_RMP
#define TIM14_OR_0_ITR1_RMP
#define TIM16_OR_0_ITR1_RMP
#define TIM1_OR_0_ITR1_RMP
#define TIM8_OR_0_ITR1_RMP
#define TIM20_OR_0_ITR1_RMP
#define TIM5_OR_0_ITR1_RMP
#define TIM11_OR_0_ITR1_RMP
#define TIM3_OR_0_ITR1_RMP
#define TIM21_OR_0_ITR1_RMP
#define TIM22_OR_0_ITR1_RMP
#define TIM9_OR_1_ITR1_RMP
#endif

#if defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM_OR1
#define TIM_OR2
#define TIM_OR3
#define TIM_MAP1_OR1         typename plugin::OR1_TypeDef OR1
#define TIM_MAP2_OR2         typename plugin::OR2_TypeDef OR2
#define TIM_MAP2_OR3         typename plugin::OR3_TypeDef OR3
#else
#define TIM_MAP1_OR1 __SOOL_PERIPH_PADDING_4
#define TIM_MAP2_OR2 __SOOL_PERIPH_PADDING_4
#define TIM_MAP2_OR3 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F4     ) || defined(STM32H7     ) 
#define TIM_RCR_0
#endif

#if defined(STM32F0     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define TIM_SMCR_OCCS        OCCS                 // 1 bits @ 3
#else
#define TIM_SMCR_OCCS
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM_SMCR_TS          TS                   // 3 bits @ 4
#else
#define TIM_SMCR_TS
#endif

#if defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM_SR_SBIF          SBIF                 // 1 bits @ 13
#else
#define TIM_SR_SBIF
#endif

#if defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) ||\
    defined(STM32F779xx ) 
#define TIM_MAP0_AF1         typename plugin::AF1_TypeDef AF1
#define TIM_MAP0_AF2         typename plugin::AF2_TypeDef AF2
#define TIM1_AF1_0_BKDF1BKE  BKDF1BKE             // 1 bits @ 8
#define TIM1_AF2_0_BK2DF1BKE BK2DF1BKE            // 1 bits @ 8
#define TIM8_AF1_0_BKDF1BKE  BKDF1BKE             // 1 bits @ 8
#define TIM8_AF2_0_BK2DF1BKE BK2DF1BKE            // 1 bits @ 8
#else
#define TIM_MAP0_AF1 __SOOL_PERIPH_PADDING_4
#define TIM_MAP0_AF2 __SOOL_PERIPH_PADDING_4
#define TIM1_AF1_0_BKDF1BKE
#define TIM1_AF2_0_BK2DF1BKE
#define TIM8_AF1_0_BKDF1BKE
#define TIM8_AF2_0_BK2DF1BKE
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     ) 
#define TIM14_OR_0
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F4     ) 
#define TIM14_OR_0_TI1_RMP   TI1_RMP              // 2 bits @ 0
#else
#define TIM14_OR_0_TI1_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302xC ) || defined(STM32F303x8 ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F358xx ) || defined(STM32F401xC ) ||\
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) ||\
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) ||\
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) ||\
    defined(STM32L1     ) 
#define TIM16_OR_0
#endif

#if defined(STM32F301x8 ) || defined(STM32F302xC ) || defined(STM32F303x8 ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F358xx ) 
#define TIM16_OR_0_TI1_RMP   TI1_RMP              // 2 bits @ 6
#else
#define TIM16_OR_0_TI1_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F334x8 ) || defined(STM32F398xx ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) 
#define TIM16_OR_1
#endif

#if defined(STM32F2     ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F334x8 ) || defined(STM32F398xx ) || defined(STM32F4     ) 
#define TIM16_OR_1_TI1_RMP   TI1_RMP              // 2 bits @ 0
#else
#define TIM16_OR_1_TI1_RMP
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) ||\
    defined(STM32L443xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define TIM16_OR1_0
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L4P    ) 
#define TIM16_OR1_1
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define TIM16_OR2_BKDF1BK1E  BKDF1BK1E            // 1 bits @ 8
#define TIM1_OR2_BKDF1BK0E   BKDF1BK0E            // 1 bits @ 8
#define TIM1_OR3_BK2DF1BK1E  BK2DF1BK1E           // 1 bits @ 8
#define TIM15_OR2_BKDF1BK0E  BKDF1BK0E            // 1 bits @ 8
#else
#define TIM16_OR2_BKDF1BK1E
#define TIM1_OR2_BKDF1BK0E
#define TIM1_OR3_BK2DF1BK1E
#define TIM15_OR2_BKDF1BK0E
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define TIM1_OR_0
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) 
#define TIM1_OR_0_ETR_RMP    ETR_RMP              // 4 bits @ 0
#else
#define TIM1_OR_0_ETR_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32L1     ) 
#define TIM1_OR_1
#define TIM8_OR_1
#define TIM20_OR_1
#define TIM21_OR_1
#define TIM22_OR_1
#endif

#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define TIM1_OR1_ETR_ADC3_RMP ETR_ADC3_RMP         // 2 bits @ 2
#define TIM8_OR1_ETR_ADC2_RMP ETR_ADC2_RMP         // 2 bits @ 0
#define TIM8_OR1_ETR_ADC3_RMP ETR_ADC3_RMP         // 2 bits @ 2
#else
#define TIM1_OR1_ETR_ADC3_RMP
#define TIM8_OR1_ETR_ADC2_RMP
#define TIM8_OR1_ETR_ADC3_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define TIM8_OR_0
#endif

#if defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F398xx ) 
#define TIM8_OR_0_ETR_RMP    ETR_RMP              // 4 bits @ 0
#else
#define TIM8_OR_0_ETR_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F303xE ) || defined(STM32F398xx ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) 
#define TIM20_OR_0
#endif

#if defined(STM32F303xE ) || defined(STM32F398xx ) 
#define TIM20_OR_0_ETR_RMP   ETR_RMP              // 4 bits @ 0
#else
#define TIM20_OR_0_ETR_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F401xC ) ||\
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) ||\
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) ||\
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) ||\
    defined(STM32L0     ) 
#define TIM2_OR_0
#endif

#if defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F401xC ) ||\
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) ||\
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) ||\
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) 
#define TIM2_OR_0_ITR1_RMP   ITR1_RMP             // 2 bits @ 10
#else
#define TIM2_OR_0_ITR1_RMP
#endif

#if defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) ||\
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) ||\
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) ||\
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) 
#define TIM2_OR_1_ITR1_RMP   ITR1_RMP             // 1 bits @ 0
#define TIM3_OR_1_ITR2_RMP   ITR2_RMP             // 1 bits @ 0
#define TIM9_OR_0_ITR1_RMP   ITR1_RMP             // 1 bits @ 2
#else
#define TIM2_OR_1_ITR1_RMP
#define TIM3_OR_1_ITR2_RMP
#define TIM9_OR_0_ITR1_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) ||\
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L071xx ) || defined(STM32L072xx ) ||\
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) 
#define TIM3_OR_0
#endif

#if defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) 
#define TIM3_OR_0_ETR_RMP    ETR_RMP              // 2 bits @ 0
#define TIM3_OR_0_TI1_RMP    TI1_RMP              // 1 bits @ 2
#define TIM3_OR_0_TI2_RMP    TI2_RMP              // 1 bits @ 3
#define TIM3_OR_0_TI4_RMP    TI4_RMP              // 1 bits @ 4
#else
#define TIM3_OR_0_ETR_RMP
#define TIM3_OR_0_TI1_RMP
#define TIM3_OR_0_TI2_RMP
#define TIM3_OR_0_TI4_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) 
#define TIM21_OR_0
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L031xx ) ||\
    defined(STM32L041xx ) || defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) ||\
    defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) ||\
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) ||\
    defined(STM32L083xx ) 
#define TIM22_OR_0
#endif

#if defined(STM32L031xx ) || defined(STM32L041xx ) || defined(STM32L051xx ) || defined(STM32L052xx ) ||\
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) ||\
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) 
#define TIM22_OR_0_ETR_RMP   ETR_RMP              // 2 bits @ 0
#define TIM22_OR_0_TI1_RMP   TI1_RMP              // 2 bits @ 2
#else
#define TIM22_OR_0_ETR_RMP
#define TIM22_OR_0_TI1_RMP
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L100xC ) ||\
    defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) ||\
    defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) ||\
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) ||\
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) 
#define TIM9_OR_0
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) ||\
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L1     ) 
#define TIM9_OR_1
#endif

//endregion

namespace sool
{
	namespace core
	{struct TIM_base_plugin
		{
		
			#ifdef TIM_AF1
			struct AF1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
			
				
			};
			#endif
			
			#ifdef TIM_AF2
			struct AF2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
			
				
			};
			#endif
			
			#ifdef TIM_OR
			struct OR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef TIM_OR_0
					struct
					{
						uint32_t TIM_OR_0_TI1_RMP     :2;
						uint32_t TIM_OR_0_ETR_RMP     :1;
						uint32_t                      :3;
						uint32_t TIM_OR_0_TI4_RMP     :2;
						uint32_t                      :2;
						uint32_t TIM_OR_0_ITR1_RMP    :2;
						uint32_t                      :20;
					};
					#endif
					#ifdef TIM_OR_1
					struct
					{
						uint32_t TI1RMP               :2;
						uint32_t                      :30;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef TIM_OR1
			struct OR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
			
				
			};
			#endif
			
			#ifdef TIM_OR2
			struct OR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
			
				
			};
			#endif
			
			#ifdef TIM_OR3
			struct OR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
			
				
			};
			#endif
			
			#ifdef TIM_TISEL
			struct TISEL_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
			
				
			};
			#endif
			};
		template<typename plugin=TIM_base_plugin>
		class TIM
		{
			
			
			public :
			
			#ifdef TIM_ARR
			struct ARR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef TIM_ARR_0
					struct
					{
						uint32_t ARR                  :32;
					};
					#endif
					#ifdef TIM_ARR_1
					struct
					{
						uint32_t ARR                  :16;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef TIM_BDTR
			struct BDTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t DTG                  :8;
					uint32_t LOCK                 :2;
					uint32_t OSSI                 :1;
					uint32_t OSSR                 :1;
					uint32_t BKE                  :1;
					uint32_t BKP                  :1;
					uint32_t AOE                  :1;
					uint32_t MOE                  :1;
					uint32_t TIM_BDTR_BKF         :4;
					uint32_t TIM_BDTR_BK2F        :4;
					uint32_t TIM_BDTR_BK2E        :1;
					uint32_t TIM_BDTR_BK2P        :1;
					uint32_t                      :6;
			
				
			};
			#endif
			
			#ifdef TIM_CCER
			struct CCER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CC1E                 :1;
					uint32_t CC1P                 :1;
					uint32_t TIM_CCER_CC1NE       :1;
					uint32_t CC1NP                :1;
					uint32_t CC2E                 :1;
					uint32_t CC2P                 :1;
					uint32_t TIM_CCER_CC2NE       :1;
					uint32_t CC2NP                :1;
					uint32_t CC3E                 :1;
					uint32_t CC3P                 :1;
					uint32_t TIM_CCER_CC3NE       :1;
					uint32_t CC3NP                :1;
					uint32_t CC4E                 :1;
					uint32_t CC4P                 :1;
					uint32_t                      :1;
					uint32_t TIM_CCER_CC4NP       :1;
					uint32_t TIM_CCER_CC5E        :1;
					uint32_t TIM_CCER_CC5P        :1;
					uint32_t                      :2;
					uint32_t TIM_CCER_CC6E        :1;
					uint32_t TIM_CCER_CC6P        :1;
					uint32_t                      :10;
			
				
			};
			#endif
			
			#ifdef TIM_CCMR1
			struct CCMR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t CC1S                 :2;
						uint32_t OC1FE                :1;
						uint32_t OC1PE                :1;
						uint32_t TIM_CCMR1_0_OC1M     :3;
						uint32_t OC1CE                :1;
						uint32_t CC2S                 :2;
						uint32_t OC2FE                :1;
						uint32_t OC2PE                :1;
						uint32_t TIM_CCMR1_0_OC2M     :3;
						uint32_t OC2CE                :1;
						uint32_t                      :16;
					};
					struct
					{
						uint32_t                      :2;
						uint32_t IC1PSC               :2;
						uint32_t IC1F                 :4;
						uint32_t                      :2;
						uint32_t IC2PSC               :2;
						uint32_t IC2F                 :4;
						uint32_t                      :16;
					};
				};
				
			};
			#endif
			
			#ifdef TIM_CCMR2
			struct CCMR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t CC3S                 :2;
						uint32_t OC3FE                :1;
						uint32_t OC3PE                :1;
						uint32_t TIM_CCMR2_0_OC3M     :3;
						uint32_t OC3CE                :1;
						uint32_t CC4S                 :2;
						uint32_t OC4FE                :1;
						uint32_t OC4PE                :1;
						uint32_t TIM_CCMR2_0_OC4M     :3;
						uint32_t OC4CE                :1;
						uint32_t                      :16;
					};
					struct
					{
						uint32_t                      :2;
						uint32_t IC3PSC               :2;
						uint32_t IC3F                 :4;
						uint32_t                      :2;
						uint32_t IC4PSC               :2;
						uint32_t IC4F                 :4;
						uint32_t                      :16;
					};
				};
				
			};
			#endif
			
			#ifdef TIM_CCMR3
			struct CCMR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t TIM_CCMR3_0_OC5M0    :1;
						uint32_t TIM_CCMR3_0_OC5M1    :1;
						uint32_t OC5FE                :1;
						uint32_t OC5PE                :1;
						uint32_t TIM_CCMR3_0_OC5M     :3;
						uint32_t OC5CE                :1;
						uint32_t                      :2;
						uint32_t OC6FE                :1;
						uint32_t OC6PE                :1;
						uint32_t TIM_CCMR3_0_OC5M3    :1;
						uint32_t                      :2;
						uint32_t OC6CE                :1;
						uint32_t                      :16;
					};
					#ifdef TIM_CCMR3_1
					struct
					{
						uint32_t OC6M0                :1;
						uint32_t OC6M1                :1;
						uint32_t OC5M2                :1;
						uint32_t                      :9;
						uint32_t OC6M3                :1;
						uint32_t                      :19;
					};
					#endif
					#ifdef TIM_CCMR3_2
					struct
					{
						uint32_t                      :2;
						uint32_t TIM_CCMR3_2_OC6M2    :1;
						uint32_t                      :9;
						uint32_t TIM_CCMR3_2_OC6M     :3;
						uint32_t                      :17;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef TIM_CCR1
			struct CCR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CCR1                 :16;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef TIM_CCR2
			struct CCR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CCR2                 :16;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef TIM_CCR3
			struct CCR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CCR3                 :16;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef TIM_CCR4
			struct CCR4_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CCR4                 :16;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef TIM_CCR5
			struct CCR5_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t CCR5                 :32;
					};
					struct
					{
						uint32_t                      :29;
						uint32_t GC5C1                :1;
						uint32_t GC5C2                :1;
						uint32_t GC5C3                :1;
					};
				};
				
			};
			#endif
			
			#ifdef TIM_CCR6
			struct CCR6_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CCR6                 :16;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef TIM_CNT
			struct CNT_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef TIM_CNT_0
					struct
					{
						uint32_t CNT                  :32;
					};
					#endif
					#ifdef TIM_CNT_1
					struct
					{
						uint32_t TIM_CNT_1_CNT        :16;
						uint32_t                      :15;
						uint32_t TIM_CNT_1_UIFCPY     :1;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef TIM_CR1
			struct CR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CEN                  :1;
					uint32_t UDIS                 :1;
					uint32_t URS                  :1;
					uint32_t OPM                  :1;
					uint32_t DIR                  :1;
					uint32_t CMS                  :2;
					uint32_t ARPE                 :1;
					uint32_t CKD                  :2;
					uint32_t                      :1;
					uint32_t TIM_CR1_UIFREMAP     :1;
					uint32_t                      :20;
			
				
			};
			#endif
			
			#ifdef TIM_CR2
			struct CR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t TIM_CR2_0_CCPC       :1;
						uint32_t                      :1;
						uint32_t TIM_CR2_0_CCUS       :1;
						uint32_t CCDS                 :1;
						uint32_t MMS                  :3;
						uint32_t TI1S                 :1;
						uint32_t TIM_CR2_0_OIS1       :1;
						uint32_t TIM_CR2_0_OIS1N      :1;
						uint32_t TIM_CR2_0_OIS2       :1;
						uint32_t TIM_CR2_0_OIS2N      :1;
						uint32_t TIM_CR2_0_OIS3       :1;
						uint32_t TIM_CR2_0_OIS3N      :1;
						uint32_t TIM_CR2_0_OIS4       :1;
						uint32_t                      :1;
						uint32_t TIM_CR2_0_OIS5       :1;
						uint32_t                      :1;
						uint32_t TIM_CR2_0_OIS6       :1;
						uint32_t                      :1;
						uint32_t TIM_CR2_0_MMS2       :4;
						uint32_t                      :8;
					};
					#ifdef TIM_CR2_1
					struct
					{
						uint32_t                      :17;
						uint32_t OIS6                 :1;
						uint32_t                      :14;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef TIM_DCR
			struct DCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t DBA                  :5;
					uint32_t                      :3;
					uint32_t DBL                  :5;
					uint32_t                      :19;
			
				
			};
			#endif
			
			#ifdef TIM_DIER
			struct DIER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t UIE                  :1;
					uint32_t CC1IE                :1;
					uint32_t CC2IE                :1;
					uint32_t CC3IE                :1;
					uint32_t CC4IE                :1;
					uint32_t TIM_DIER_COMIE       :1;
					uint32_t TIE                  :1;
					uint32_t TIM_DIER_BIE         :1;
					uint32_t UDE                  :1;
					uint32_t CC1DE                :1;
					uint32_t CC2DE                :1;
					uint32_t CC3DE                :1;
					uint32_t CC4DE                :1;
					uint32_t TIM_DIER_COMDE       :1;
					uint32_t TDE                  :1;
					uint32_t                      :17;
			
				
			};
			#endif
			
			#ifdef TIM_DMAR
			struct DMAR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t DMAB                 :16;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef TIM_EGR
			struct EGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t UG                   :1;
					uint32_t CC1G                 :1;
					uint32_t CC2G                 :1;
					uint32_t CC3G                 :1;
					uint32_t CC4G                 :1;
					uint32_t TIM_EGR_COMG         :1;
					uint32_t TG                   :1;
					uint32_t TIM_EGR_BG           :1;
					uint32_t TIM_EGR_B2G          :1;
					uint32_t                      :23;
			
				
			};
			#endif
			
			#ifdef TIM_PSC
			struct PSC_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PSC                  :16;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef TIM_RCR
			struct RCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef TIM_RCR_0
					struct
					{
						uint32_t REP                  :8;
						uint32_t                      :24;
					};
					#endif
					#ifdef TIM_RCR_1
					struct
					{
						uint32_t REP                  :16;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef TIM_SMCR
			struct SMCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t TIM_SMCR_SMS         :3;
					uint32_t TIM_SMCR_OCCS        :1;
					uint32_t TIM_SMCR_TS          :3;
					uint32_t MSM                  :1;
					uint32_t ETF                  :4;
					uint32_t ETPS                 :2;
					uint32_t ECE                  :1;
					uint32_t ETP                  :1;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef TIM_SR
			struct SR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t UIF                  :1;
					uint32_t CC1IF                :1;
					uint32_t CC2IF                :1;
					uint32_t CC3IF                :1;
					uint32_t CC4IF                :1;
					uint32_t TIM_SR_COMIF         :1;
					uint32_t TIF                  :1;
					uint32_t TIM_SR_BIF           :1;
					uint32_t TIM_SR_B2IF          :1;
					uint32_t CC1OF                :1;
					uint32_t CC2OF                :1;
					uint32_t CC3OF                :1;
					uint32_t CC4OF                :1;
					uint32_t TIM_SR_SBIF          :1;
					uint32_t                      :2;
					uint32_t TIM_SR_CC5IF         :1;
					uint32_t TIM_SR_CC6IF         :1;
					uint32_t                      :14;
			
				
			};
			#endif
			
			union
			{
				
				struct
				{
					CR1_TypeDef CR1;     // @0x000
					CR2_TypeDef CR2;     // @0x004
					SMCR_TypeDef SMCR;   // @0x008
					DIER_TypeDef DIER;   // @0x00c
					SR_TypeDef SR;       // @0x010
					EGR_TypeDef EGR;     // @0x014
					CCMR1_TypeDef CCMR1; // @0x018
					CCMR2_TypeDef CCMR2; // @0x01c
					CCER_TypeDef CCER;   // @0x020
					CNT_TypeDef CNT;     // @0x024
					PSC_TypeDef PSC;     // @0x028
					ARR_TypeDef ARR;     // @0x02c
					TIM_MAP0_RCR;        // @0x030
					CCR1_TypeDef CCR1;   // @0x034
					CCR2_TypeDef CCR2;   // @0x038
					CCR3_TypeDef CCR3;   // @0x03c
					CCR4_TypeDef CCR4;   // @0x040
					TIM_MAP0_BDTR;       // @0x044
					DCR_TypeDef DCR;     // @0x048
					DMAR_TypeDef DMAR;   // @0x04c
					TIM_MAP0_OR;         // @0x050
					TIM_MAP0_CCMR3;      // @0x054
					TIM_MAP0_CCR5;       // @0x058
					TIM_MAP0_CCR6;       // @0x05c
					TIM_MAP0_AF1;        // @0x060
					TIM_MAP0_AF2;        // @0x064
					__SOOL_PERIPH_PADDING_2;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_16;
					TIM_MAP1_OR1;        // @0x050
					__SOOL_PERIPH_PADDING_2;
					TIM_MAP1_CCR5;       // @0x056
					TIM_MAP1_CCR6;       // @0x05a
					TIM_MAP1_AF1;        // @0x05e
					TIM_MAP1_AF2;        // @0x062
					TIM_MAP1_TISEL;      // @0x066
				};
				struct
				{
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_2;
					TIM_MAP2_CCMR3;      // @0x052
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_2;
					TIM_MAP2_OR2;        // @0x060
					TIM_MAP2_OR3;        // @0x064
					__SOOL_PERIPH_PADDING_2;
				};
			};
			private:
			TIM() = delete;
			private:
				static constexpr uint32_t get_clock_enable_bit(const uint32_t addr);
			
				static constexpr volatile Reg32_t &get_clock_enable_reg(const uint32_t addr);
			
			public:
				void enable_clock() volatile;
			
				void disable_clock() volatile;
			
				bool is_clock_enabled() const volatile;
			
		};
		
		//region instances
#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F401xC ) || defined(STM32F401xE ) ||\
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L1     ) || defined(STM32L451xx ) ||\
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) ||\
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define TIM3_BASE_ADDR ((uint32_t)0x40000400U)
#endif

#if defined(STM32F0     ) || defined(STM32F100xE ) || defined(STM32F101xG ) || defined(STM32F103xG ) ||\
    defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) 
#define TIM14_BASE_ADDR ((uint32_t)0x40002000U)
#endif

#if defined(STM32F0     ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F103x6 ) ||\
    defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) ||\
    defined(STM32F107xC ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM1_BASE_ADDR ((uint32_t)0x40012C00U)
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) 
#define TIM1_BASE_ADDR ((uint32_t)0x40010000U)
#endif

#if defined(STM32F0     ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F3     ) ||\
    defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM16_BASE_ADDR ((uint32_t)0x40014400U)
#endif

#if defined(STM32F0     ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F3     ) ||\
    defined(STM32H7     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) ||\
    defined(STM32L4P    ) 
#define TIM17_BASE_ADDR ((uint32_t)0x40014800U)
#endif

#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) || defined(STM32F058xx ) ||\
    defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) || defined(STM32F100xE ) ||\
    defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L051xx ) || defined(STM32L052xx ) ||\
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) ||\
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define TIM6_BASE_ADDR ((uint32_t)0x40001000U)
#endif

#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) || defined(STM32F058xx ) ||\
    defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) || defined(STM32F100xE ) ||\
    defined(STM32F3     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM15_BASE_ADDR ((uint32_t)0x40014000U)
#endif

#if defined(STM32F030xC ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) ||\
    defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) ||\
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) ||\
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L1     ) || defined(STM32L431xx ) ||\
    defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) ||\
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define TIM7_BASE_ADDR ((uint32_t)0x40001400U)
#endif

#if defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) ||\
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F1     ) ||\
    defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F401xC ) || defined(STM32F401xE ) ||\
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define TIM2_BASE_ADDR ((uint32_t)0x40000000U)
#endif

#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) ||\
    defined(STM32F101xG ) || defined(STM32F102xB ) || defined(STM32F103xB ) || defined(STM32F103xE ) ||\
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) ||\
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) ||\
    defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) ||\
    defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define TIM4_BASE_ADDR ((uint32_t)0x40000800U)
#endif

#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) ||\
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) ||\
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F4     ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) ||\
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) ||\
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) ||\
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) ||\
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define TIM5_BASE_ADDR ((uint32_t)0x40000C00U)
#endif

#if defined(STM32F100xE ) || defined(STM32F101xG ) || defined(STM32F103xG ) || defined(STM32F2     ) ||\
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) ||\
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) ||\
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) 
#define TIM12_BASE_ADDR ((uint32_t)0x40001800U)
#define TIM13_BASE_ADDR ((uint32_t)0x40001C00U)
#endif

#if defined(STM32F101xG ) || defined(STM32F103xG ) 
#define TIM9_BASE_ADDR ((uint32_t)0x40014C00U)
#define TIM10_BASE_ADDR ((uint32_t)0x40015000U)
#define TIM11_BASE_ADDR ((uint32_t)0x40015400U)
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define TIM9_BASE_ADDR ((uint32_t)0x40014000U)
#define TIM11_BASE_ADDR ((uint32_t)0x40014800U)
#endif

#if defined(STM32L1     ) 
#define TIM9_BASE_ADDR ((uint32_t)0x40010800U)
#define TIM10_BASE_ADDR ((uint32_t)0x40010C00U)
#define TIM11_BASE_ADDR ((uint32_t)0x40011000U)
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) ||\
    defined(STM32F479xx ) || defined(STM32F7     ) 
#define TIM10_BASE_ADDR ((uint32_t)0x40014400U)
#endif

#if defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) ||\
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define TIM8_BASE_ADDR ((uint32_t)0x40013400U)
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) 
#define TIM8_BASE_ADDR ((uint32_t)0x40010400U)
#endif

#if defined(STM32F303xE ) || defined(STM32F398xx ) 
#define TIM20_BASE_ADDR ((uint32_t)0x40015000U)
#endif

#if defined(STM32F373xC ) || defined(STM32F378xx ) 
#define TIM18_BASE_ADDR ((uint32_t)0x40009C00U)
#define TIM19_BASE_ADDR ((uint32_t)0x40015C00U)
#endif

#if defined(STM32L0     ) 
#define TIM21_BASE_ADDR ((uint32_t)0x40010800U)
#endif

#if defined(STM32L031xx ) || defined(STM32L041xx ) || defined(STM32L051xx ) || defined(STM32L052xx ) ||\
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) ||\
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) 
#define TIM22_BASE_ADDR ((uint32_t)0x40011400U)
#endif

#ifdef TIM3_BASE_ADDR
struct TIM3_plugin: TIM_base_plugin {
	
	#ifdef TIM_AF1
	struct AF1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t                      :14;
			uint32_t ETR_SEL              :4;
			uint32_t                      :14;
	
		
	};
	#endif
	
	#ifdef TIM_TISEL
	struct TISEL_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1SEL               :4;
			uint32_t                      :4;
			uint32_t TI2SEL               :4;
			uint32_t                      :4;
			uint32_t TI3SEL               :4;
			uint32_t                      :4;
			uint32_t TI4SEL               :4;
			uint32_t                      :4;
	
		
	};
	#endif
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM3_OR_0
			struct
			{
				uint32_t TIM3_OR_0_ETR_RMP    :2;
				uint32_t TIM3_OR_0_TI1_RMP    :1;
				uint32_t TIM3_OR_0_TI2_RMP    :1;
				uint32_t TIM3_OR_0_TI4_RMP    :1;
				uint32_t                      :5;
				uint32_t TIM3_OR_0_ITR1_RMP   :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM3_OR_1
			struct
			{
				uint32_t TIM3_OR_1_ITR2_RMP   :1;
				uint32_t                      :1;
				uint32_t TIM3_OR_1_ETR_RMP    :1;
				uint32_t                      :3;
				uint32_t TIM3_OR_1_TI4_RMP    :2;
				uint32_t                      :24;
			};
			#endif
			#ifdef TIM3_OR_2
			struct
			{
				uint32_t TI1_RMP              :2;
				uint32_t                      :30;
			};
			#endif
			#ifdef TIM3_OR_3
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_OR1
	struct OR1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1_RMP              :2;
			uint32_t                      :30;
	
		
	};
	#endif
	
	#ifdef TIM_OR2
	struct OR2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t                      :14;
			uint32_t ETRSEL               :3;
			uint32_t                      :15;
	
		
	};
	#endif
	
};
volatile class TIM<TIM3_plugin>* const TIM3 =reinterpret_cast<class TIM<TIM3_plugin>* const>(TIM3_BASE_ADDR);
#endif
#ifdef TIM14_BASE_ADDR
struct TIM14_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM14_OR_0
			struct
			{
				uint32_t TIM14_OR_0_TI1_RMP   :2;
				uint32_t TIM14_OR_0_ETR_RMP   :1;
				uint32_t                      :3;
				uint32_t TIM14_OR_0_TI4_RMP   :2;
				uint32_t                      :2;
				uint32_t TIM14_OR_0_ITR1_RMP  :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM14_OR_1
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
};
volatile class TIM<TIM14_plugin>* const TIM14 =reinterpret_cast<class TIM<TIM14_plugin>* const>(TIM14_BASE_ADDR);
#endif
#ifdef TIM1_BASE_ADDR
struct TIM1_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM1_OR_0
			struct
			{
				uint32_t TIM1_OR_0_ETR_RMP    :4;
				uint32_t                      :2;
				uint32_t TIM1_OR_0_TI4_RMP    :2;
				uint32_t                      :2;
				uint32_t TIM1_OR_0_ITR1_RMP   :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM1_OR_1
			struct
			{
				uint32_t TIM1_OR_1_TI1_RMP    :2;
				uint32_t TIM1_OR_1_ETR_RMP    :1;
				uint32_t                      :29;
			};
			#endif
			#ifdef TIM1_OR_2
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_AF1
	struct AF1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			struct
			{
				uint32_t BKINE                :1;
				uint32_t TIM1_AF1_0_BKCMP1E   :1;
				uint32_t TIM1_AF1_0_BKCMP2E   :1;
				uint32_t                      :5;
				uint32_t TIM1_AF1_0_BKDF1BKE  :1;
				uint32_t BKINP                :1;
				uint32_t TIM1_AF1_0_BKCMP1P   :1;
				uint32_t TIM1_AF1_0_BKCMP2P   :1;
				uint32_t                      :2;
				uint32_t TIM1_AF1_0_ETR_SEL   :4;
				uint32_t                      :14;
			};
			#ifdef TIM1_AF1_1
			struct
			{
				uint32_t                      :8;
				uint32_t BKDFBK0E             :1;
				uint32_t                      :23;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_AF2
	struct AF2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			struct
			{
				uint32_t BK2INE               :1;
				uint32_t TIM1_AF2_0_BK2CMP1E  :1;
				uint32_t TIM1_AF2_0_BK2CMP2E  :1;
				uint32_t                      :5;
				uint32_t TIM1_AF2_0_BK2DF1BKE :1;
				uint32_t BK2INP               :1;
				uint32_t TIM1_AF2_0_BK2CMP1P  :1;
				uint32_t TIM1_AF2_0_BK2CMP2P  :1;
				uint32_t                      :20;
			};
			#ifdef TIM1_AF2_1
			struct
			{
				uint32_t                      :8;
				uint32_t BK2DFBK1E            :1;
				uint32_t                      :23;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_TISEL
	struct TISEL_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1SEL               :4;
			uint32_t                      :4;
			uint32_t TI2SEL               :4;
			uint32_t                      :4;
			uint32_t TI3SEL               :4;
			uint32_t                      :4;
			uint32_t TI4SEL               :4;
			uint32_t                      :4;
	
		
	};
	#endif
	
	#ifdef TIM_OR1
	struct OR1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t ETR_ADC1_RMP         :2;
			uint32_t TIM1_OR1_ETR_ADC3_RMP :2;
			uint32_t TI1_RMP              :1;
			uint32_t                      :27;
	
		
	};
	#endif
	
	#ifdef TIM_OR2
	struct OR2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BKINE                :1;
			uint32_t BKCMP1E              :1;
			uint32_t BKCMP2E              :1;
			uint32_t                      :5;
			uint32_t TIM1_OR2_BKDF1BK0E   :1;
			uint32_t BKINP                :1;
			uint32_t BKCMP1P              :1;
			uint32_t BKCMP2P              :1;
			uint32_t                      :2;
			uint32_t ETRSEL               :3;
			uint32_t                      :15;
	
		
	};
	#endif
	
	#ifdef TIM_OR3
	struct OR3_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BK2INE               :1;
			uint32_t BK2CMP1E             :1;
			uint32_t BK2CMP2E             :1;
			uint32_t                      :5;
			uint32_t TIM1_OR3_BK2DF1BK1E  :1;
			uint32_t BK2INP               :1;
			uint32_t BK2CMP1P             :1;
			uint32_t BK2CMP2P             :1;
			uint32_t                      :20;
	
		
	};
	#endif
	
};
volatile class TIM<TIM1_plugin>* const TIM1 =reinterpret_cast<class TIM<TIM1_plugin>* const>(TIM1_BASE_ADDR);
#endif
#ifdef TIM16_BASE_ADDR
struct TIM16_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM16_OR_0
			struct
			{
				uint32_t TIM16_OR_0_TI1RMP    :2;
				uint32_t TIM16_OR_0_ETR_RMP   :1;
				uint32_t                      :3;
				uint32_t TIM16_OR_0_TI1_RMP   :2;
				uint32_t                      :2;
				uint32_t TIM16_OR_0_ITR1_RMP  :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM16_OR_1
			struct
			{
				uint32_t TIM16_OR_1_TI1_RMP   :2;
				uint32_t                      :4;
				uint32_t TIM16_OR_1_TI4_RMP   :2;
				uint32_t                      :24;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_AF1
	struct AF1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BKINE                :1;
			uint32_t BKCMP1E              :1;
			uint32_t BKCMP2E              :1;
			uint32_t                      :5;
			uint32_t BKDF1BK2E            :1;
			uint32_t BKINP                :1;
			uint32_t BKCMP1P              :1;
			uint32_t BKCMP2P              :1;
			uint32_t                      :20;
	
		
	};
	#endif
	
	#ifdef TIM_TISEL
	struct TISEL_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1SEL               :4;
			uint32_t                      :28;
	
		
	};
	#endif
	
	#ifdef TIM_OR1
	struct OR1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM16_OR1_0
			struct
			{
				uint32_t TI1_RMP              :3;
				uint32_t                      :29;
			};
			#endif
			#ifdef TIM16_OR1_1
			struct
			{
				uint32_t TI1_RMP              :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_OR2
	struct OR2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BKINE                :1;
			uint32_t BKCMP1E              :1;
			uint32_t BKCMP2E              :1;
			uint32_t                      :5;
			uint32_t TIM16_OR2_BKDF1BK1E  :1;
			uint32_t BKINP                :1;
			uint32_t BKCMP1P              :1;
			uint32_t BKCMP2P              :1;
			uint32_t                      :20;
	
		
	};
	#endif
	
};
volatile class TIM<TIM16_plugin>* const TIM16 =reinterpret_cast<class TIM<TIM16_plugin>* const>(TIM16_BASE_ADDR);
#endif
#ifdef TIM17_BASE_ADDR
struct TIM17_plugin: TIM_base_plugin {
	
	#ifdef TIM_AF1
	struct AF1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BKINE                :1;
			uint32_t BKCMP1E              :1;
			uint32_t BKCMP2E              :1;
			uint32_t                      :5;
			uint32_t BKDF1BK2E            :1;
			uint32_t BKINP                :1;
			uint32_t BKCMP1P              :1;
			uint32_t BKCMP2P              :1;
			uint32_t                      :20;
	
		
	};
	#endif
	
	#ifdef TIM_TISEL
	struct TISEL_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1SEL               :4;
			uint32_t                      :28;
	
		
	};
	#endif
	
	#ifdef TIM_OR1
	struct OR1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1_RMP              :2;
			uint32_t                      :30;
	
		
	};
	#endif
	
	#ifdef TIM_OR2
	struct OR2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BKINE                :1;
			uint32_t BKCMP1E              :1;
			uint32_t BKCMP2E              :1;
			uint32_t                      :5;
			uint32_t BKDF1BK2E            :1;
			uint32_t BKINP                :1;
			uint32_t BKCMP1P              :1;
			uint32_t BKCMP2P              :1;
			uint32_t                      :20;
	
		
	};
	#endif
	
};
volatile class TIM<TIM17_plugin>* const TIM17 =reinterpret_cast<class TIM<TIM17_plugin>* const>(TIM17_BASE_ADDR);
#endif
#ifdef TIM6_BASE_ADDR
volatile class TIM<>* const TIM6 =reinterpret_cast<class TIM<>* const>(TIM6_BASE_ADDR);
#endif
#ifdef TIM15_BASE_ADDR
struct TIM15_plugin: TIM_base_plugin {
	
	#ifdef TIM_AF1
	struct AF1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BKINE                :1;
			uint32_t BKCMP1E              :1;
			uint32_t BKCMP2E              :1;
			uint32_t                      :5;
			uint32_t BKDF1BK2E            :1;
			uint32_t BKINP                :1;
			uint32_t BKCMP1P              :1;
			uint32_t BKCMP2P              :1;
			uint32_t                      :20;
	
		
	};
	#endif
	
	#ifdef TIM_TISEL
	struct TISEL_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1SEL               :4;
			uint32_t                      :4;
			uint32_t TI2SEL               :4;
			uint32_t                      :20;
	
		
	};
	#endif
	
	#ifdef TIM_OR1
	struct OR1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1_RMP              :1;
			uint32_t ENCODER_MODE         :2;
			uint32_t                      :29;
	
		
	};
	#endif
	
	#ifdef TIM_OR2
	struct OR2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BKINE                :1;
			uint32_t BKCMP1E              :1;
			uint32_t BKCMP2E              :1;
			uint32_t                      :5;
			uint32_t TIM15_OR2_BKDF1BK0E  :1;
			uint32_t BKINP                :1;
			uint32_t BKCMP1P              :1;
			uint32_t BKCMP2P              :1;
			uint32_t                      :20;
	
		
	};
	#endif
	
};
volatile class TIM<TIM15_plugin>* const TIM15 =reinterpret_cast<class TIM<TIM15_plugin>* const>(TIM15_BASE_ADDR);
#endif
#ifdef TIM7_BASE_ADDR
volatile class TIM<>* const TIM7 =reinterpret_cast<class TIM<>* const>(TIM7_BASE_ADDR);
#endif
#ifdef TIM2_BASE_ADDR
struct TIM2_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM2_OR_0
			struct
			{
				uint32_t TIM2_OR_0_ETR_RMP    :3;
				uint32_t TIM2_OR_0_TI4_RMP    :2;
				uint32_t                      :5;
				uint32_t TIM2_OR_0_ITR1_RMP   :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM2_OR_1
			struct
			{
				uint32_t TIM2_OR_1_ITR1_RMP   :1;
				uint32_t                      :1;
				uint32_t TIM2_OR_1_ETR_RMP    :1;
				uint32_t                      :3;
				uint32_t TIM2_OR_1_TI4_RMP    :2;
				uint32_t                      :24;
			};
			#endif
			#ifdef TIM2_OR_2
			struct
			{
				uint32_t TI1_RMP              :2;
				uint32_t                      :30;
			};
			#endif
			#ifdef TIM2_OR_3
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_AF1
	struct AF1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t                      :14;
			uint32_t ETR_SEL              :4;
			uint32_t                      :14;
	
		
	};
	#endif
	
	#ifdef TIM_TISEL
	struct TISEL_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1SEL               :4;
			uint32_t                      :4;
			uint32_t TI2SEL               :4;
			uint32_t                      :4;
			uint32_t TI3SEL               :4;
			uint32_t                      :4;
			uint32_t TI4SEL               :4;
			uint32_t                      :4;
	
		
	};
	#endif
	
	#ifdef TIM_OR1
	struct OR1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t ITR1_RMP             :1;
			uint32_t ETR1_RMP             :1;
			uint32_t TI4_RMP              :2;
			uint32_t                      :28;
	
		
	};
	#endif
	
	#ifdef TIM_OR2
	struct OR2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t                      :14;
			uint32_t ETRSEL               :3;
			uint32_t                      :15;
	
		
	};
	#endif
	
};
volatile class TIM<TIM2_plugin>* const TIM2 =reinterpret_cast<class TIM<TIM2_plugin>* const>(TIM2_BASE_ADDR);
#endif
#ifdef TIM4_BASE_ADDR
volatile class TIM<>* const TIM4 =reinterpret_cast<class TIM<>* const>(TIM4_BASE_ADDR);
#endif
#ifdef TIM5_BASE_ADDR
struct TIM5_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM5_OR_0
			struct
			{
				uint32_t TIM5_OR_0_TI1_RMP    :2;
				uint32_t TIM5_OR_0_ETR_RMP    :1;
				uint32_t                      :3;
				uint32_t TIM5_OR_0_TI4_RMP    :2;
				uint32_t                      :2;
				uint32_t TIM5_OR_0_ITR1_RMP   :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM5_OR_1
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_AF1
	struct AF1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t                      :14;
			uint32_t ETR_SEL              :4;
			uint32_t                      :14;
	
		
	};
	#endif
	
	#ifdef TIM_TISEL
	struct TISEL_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1SEL               :4;
			uint32_t                      :4;
			uint32_t TI2SEL               :4;
			uint32_t                      :4;
			uint32_t TI3SEL               :4;
			uint32_t                      :4;
			uint32_t TI4SEL               :4;
			uint32_t                      :4;
	
		
	};
	#endif
	
};
volatile class TIM<TIM5_plugin>* const TIM5 =reinterpret_cast<class TIM<TIM5_plugin>* const>(TIM5_BASE_ADDR);
#endif
#ifdef TIM12_BASE_ADDR
volatile class TIM<>* const TIM12 =reinterpret_cast<class TIM<>* const>(TIM12_BASE_ADDR);
#endif
#ifdef TIM13_BASE_ADDR
volatile class TIM<>* const TIM13 =reinterpret_cast<class TIM<>* const>(TIM13_BASE_ADDR);
#endif
#ifdef TIM9_BASE_ADDR
struct TIM9_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM9_OR_0
			struct
			{
				uint32_t TIM9_OR_0_TI1_RMP    :2;
				uint32_t TIM9_OR_0_ITR1_RMP   :1;
				uint32_t                      :3;
				uint32_t TIM9_OR_0_TI4_RMP    :2;
				uint32_t                      :24;
			};
			#endif
			#ifdef TIM9_OR_1
			struct
			{
				uint32_t TIM9_OR_1_TI1RMP     :2;
				uint32_t TIM9_OR_1_ETR_RMP    :1;
				uint32_t                      :7;
				uint32_t TIM9_OR_1_ITR1_RMP   :2;
				uint32_t                      :20;
			};
			#endif
		};
		
	};
	#endif
	
};
volatile class TIM<TIM9_plugin>* const TIM9 =reinterpret_cast<class TIM<TIM9_plugin>* const>(TIM9_BASE_ADDR);
#endif
#ifdef TIM10_BASE_ADDR
volatile class TIM<>* const TIM10 =reinterpret_cast<class TIM<>* const>(TIM10_BASE_ADDR);
#endif
#ifdef TIM11_BASE_ADDR
struct TIM11_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM11_OR_0
			struct
			{
				uint32_t TIM11_OR_0_TI1_RMP   :2;
				uint32_t TIM11_OR_0_ETR_RMP   :1;
				uint32_t                      :3;
				uint32_t TIM11_OR_0_TI4_RMP   :2;
				uint32_t                      :2;
				uint32_t TIM11_OR_0_ITR1_RMP  :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM11_OR_1
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
};
volatile class TIM<TIM11_plugin>* const TIM11 =reinterpret_cast<class TIM<TIM11_plugin>* const>(TIM11_BASE_ADDR);
#endif
#ifdef TIM8_BASE_ADDR
struct TIM8_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM8_OR_0
			struct
			{
				uint32_t TIM8_OR_0_ETR_RMP    :4;
				uint32_t                      :2;
				uint32_t TIM8_OR_0_TI4_RMP    :2;
				uint32_t                      :2;
				uint32_t TIM8_OR_0_ITR1_RMP   :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM8_OR_1
			struct
			{
				uint32_t TIM8_OR_1_TI1_RMP    :2;
				uint32_t TIM8_OR_1_ETR_RMP    :1;
				uint32_t                      :29;
			};
			#endif
			#ifdef TIM8_OR_2
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_AF1
	struct AF1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			struct
			{
				uint32_t BKINE                :1;
				uint32_t TIM8_AF1_0_BKCMP1E   :1;
				uint32_t TIM8_AF1_0_BKCMP2E   :1;
				uint32_t                      :5;
				uint32_t TIM8_AF1_0_BKDF1BKE  :1;
				uint32_t BKINP                :1;
				uint32_t TIM8_AF1_0_BKCMP1P   :1;
				uint32_t TIM8_AF1_0_BKCMP2P   :1;
				uint32_t                      :2;
				uint32_t TIM8_AF1_0_ETR_SEL   :4;
				uint32_t                      :14;
			};
			#ifdef TIM8_AF1_1
			struct
			{
				uint32_t                      :8;
				uint32_t BKDFBK2E             :1;
				uint32_t                      :23;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_AF2
	struct AF2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			struct
			{
				uint32_t BK2INE               :1;
				uint32_t TIM8_AF2_0_BK2CMP1E  :1;
				uint32_t TIM8_AF2_0_BK2CMP2E  :1;
				uint32_t                      :5;
				uint32_t TIM8_AF2_0_BK2DF1BKE :1;
				uint32_t BK2INP               :1;
				uint32_t TIM8_AF2_0_BK2CMP1P  :1;
				uint32_t TIM8_AF2_0_BK2CMP2P  :1;
				uint32_t                      :20;
			};
			#ifdef TIM8_AF2_1
			struct
			{
				uint32_t                      :8;
				uint32_t BK2DFBK3E            :1;
				uint32_t                      :23;
			};
			#endif
		};
		
	};
	#endif
	
	#ifdef TIM_TISEL
	struct TISEL_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TI1SEL               :4;
			uint32_t                      :4;
			uint32_t TI2SEL               :4;
			uint32_t                      :4;
			uint32_t TI3SEL               :4;
			uint32_t                      :4;
			uint32_t TI4SEL               :4;
			uint32_t                      :4;
	
		
	};
	#endif
	
	#ifdef TIM_OR1
	struct OR1_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t TIM8_OR1_ETR_ADC2_RMP :2;
			uint32_t TIM8_OR1_ETR_ADC3_RMP :2;
			uint32_t TI1_RMP              :1;
			uint32_t                      :27;
	
		
	};
	#endif
	
	#ifdef TIM_OR2
	struct OR2_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BKINE                :1;
			uint32_t BKCMP1E              :1;
			uint32_t BKCMP2E              :1;
			uint32_t                      :5;
			uint32_t BKDF1BK2E            :1;
			uint32_t BKINP                :1;
			uint32_t BKCMP1P              :1;
			uint32_t BKCMP2P              :1;
			uint32_t                      :2;
			uint32_t ETRSEL               :3;
			uint32_t                      :15;
	
		
	};
	#endif
	
	#ifdef TIM_OR3
	struct OR3_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
		
			uint32_t BK2INE               :1;
			uint32_t BK2CMP1E             :1;
			uint32_t BK2CMP2E             :1;
			uint32_t                      :5;
			uint32_t BK2DF1BK3E           :1;
			uint32_t BK2INP               :1;
			uint32_t BK2CMP1P             :1;
			uint32_t BK2CMP2P             :1;
			uint32_t                      :20;
	
		
	};
	#endif
	
};
volatile class TIM<TIM8_plugin>* const TIM8 =reinterpret_cast<class TIM<TIM8_plugin>* const>(TIM8_BASE_ADDR);
#endif
#ifdef TIM20_BASE_ADDR
struct TIM20_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM20_OR_0
			struct
			{
				uint32_t TIM20_OR_0_ETR_RMP   :4;
				uint32_t                      :2;
				uint32_t TIM20_OR_0_TI4_RMP   :2;
				uint32_t                      :2;
				uint32_t TIM20_OR_0_ITR1_RMP  :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM20_OR_1
			struct
			{
				uint32_t TIM20_OR_1_TI1_RMP   :2;
				uint32_t TIM20_OR_1_ETR_RMP   :1;
				uint32_t                      :29;
			};
			#endif
			#ifdef TIM20_OR_2
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
};
volatile class TIM<TIM20_plugin>* const TIM20 =reinterpret_cast<class TIM<TIM20_plugin>* const>(TIM20_BASE_ADDR);
#endif
#ifdef TIM18_BASE_ADDR
volatile class TIM<>* const TIM18 =reinterpret_cast<class TIM<>* const>(TIM18_BASE_ADDR);
#endif
#ifdef TIM19_BASE_ADDR
volatile class TIM<>* const TIM19 =reinterpret_cast<class TIM<>* const>(TIM19_BASE_ADDR);
#endif
#ifdef TIM21_BASE_ADDR
struct TIM21_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM21_OR_0
			struct
			{
				uint32_t TIM21_OR_0_ETR_RMP   :2;
				uint32_t TIM21_OR_0_TI1_RMP   :3;
				uint32_t TIM21_OR_0_TI2_RMP   :1;
				uint32_t TIM21_OR_0_TI4_RMP   :2;
				uint32_t                      :2;
				uint32_t TIM21_OR_0_ITR1_RMP  :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM21_OR_1
			struct
			{
				uint32_t TIM21_OR_1_TI1_RMP   :2;
				uint32_t TIM21_OR_1_ETR_RMP   :1;
				uint32_t                      :29;
			};
			#endif
			#ifdef TIM21_OR_2
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
};
volatile class TIM<TIM21_plugin>* const TIM21 =reinterpret_cast<class TIM<TIM21_plugin>* const>(TIM21_BASE_ADDR);
#endif
#ifdef TIM22_BASE_ADDR
struct TIM22_plugin: TIM_base_plugin {
	
	#ifdef TIM_OR
	struct OR_TypeDef : public Reg32_t
	{
		using Reg32_t::operator=;
	
		union
		{
			#ifdef TIM22_OR_0
			struct
			{
				uint32_t TIM22_OR_0_ETR_RMP   :2;
				uint32_t TIM22_OR_0_TI1_RMP   :2;
				uint32_t                      :2;
				uint32_t TIM22_OR_0_TI4_RMP   :2;
				uint32_t                      :2;
				uint32_t TIM22_OR_0_ITR1_RMP  :2;
				uint32_t                      :20;
			};
			#endif
			#ifdef TIM22_OR_1
			struct
			{
				uint32_t TIM22_OR_1_TI1_RMP   :2;
				uint32_t TIM22_OR_1_ETR_RMP   :1;
				uint32_t                      :29;
			};
			#endif
			#ifdef TIM22_OR_2
			struct
			{
				uint32_t TI1RMP               :2;
				uint32_t                      :30;
			};
			#endif
		};
		
	};
	#endif
	
};
volatile class TIM<TIM22_plugin>* const TIM22 =reinterpret_cast<class TIM<TIM22_plugin>* const>(TIM22_BASE_ADDR);
#endif
//endregion


template<typename plugin>
constexpr uint32_t TIM<plugin>::get_clock_enable_bit(const uint32_t addr)
{
	switch (addr) {
#ifdef TIM1_BASE_ADDR
		case TIM1_BASE_ADDR:
#if defined(STM32F2) || defined(STM32F4) || defined(STM32F7) || defined(STM32H7)
				return 1 << 0;
#else
				return 1 << 11;
#endif
#endif
#ifdef TIM2_BASE_ADDR
		case TIM2_BASE_ADDR: return 1 << 0;
#endif
#ifdef TIM3_BASE_ADDR
		case TIM3_BASE_ADDR: return 1 << 1;
#endif
#ifdef TIM4_BASE_ADDR
		case TIM4_BASE_ADDR: return 1 << 2;
#endif
#ifdef TIM5_BASE_ADDR
		case TIM5_BASE_ADDR: return 1 << 3;
#endif
#ifdef TIM6_BASE_ADDR
		case TIM6_BASE_ADDR: return 1 << 4;
#endif
#ifdef TIM7_BASE_ADDR
		case TIM7_BASE_ADDR: return 1 << 5;
#endif
#ifdef TIM8_BASE_ADDR
		case TIM8_BASE_ADDR:
#if defined(STM32F2) || defined(STM32F4) || defined(STM32F7) || defined(STM32H7)
				return 1 << 1;
#else
				return 1 << 13;
#endif
#endif
#ifdef TIM9_BASE_ADDR
		case TIM9_BASE_ADDR:
#if defined(STM32F0)
				return 1 << 19;
#elif defined(STM32L1)
				return 1 << 2;
#else
				return 1 << 16;
#endif
#endif
#ifdef TIM10_BASE_ADDR
		case TIM10_BASE_ADDR:
#if defined(STM32F0)
				return 1 << 20;
#elif defined(STM32L1)
				return 1 << 3;
#else
				return 1 << 17;
#endif
#endif
#ifdef TIM11_BASE_ADDR
		case TIM11_BASE_ADDR:
#if defined(STM32F0)
				return 1 << 21;
#elif defined(STM32L1)
				return 1 << 4;
#else
				return 1 << 18;
#endif
#endif
#ifdef TIM12_BASE_ADDR
		case TIM12_BASE_ADDR: return 1 << 6;
#endif
#ifdef TIM13_BASE_ADDR
		case TIM13_BASE_ADDR: return 1 << 7;
#endif
#ifdef TIM14_BASE_ADDR
		case TIM14_BASE_ADDR: return 1 << 8;
#endif
#ifdef TIM15_BASE_ADDR
		case TIM15_BASE_ADDR: return 1 << 16;
#endif
#ifdef TIM16_BASE_ADDR
		case TIM16_BASE_ADDR: return 1 << 17;
#endif
#ifdef TIM17_BASE_ADDR
		case TIM17_BASE_ADDR: return 1 << 18;
#endif
#ifdef TIM18_BASE_ADDR
		case TIM18_BASE_ADDR: return 1 << 9;
#endif
#ifdef TIM19_BASE_ADDR
		case TIM19_BASE_ADDR: return 1 << 19;
#endif
#ifdef TIM20_BASE_ADDR
		case TIM20_BASE_ADDR: return 1 << 20;
#endif
#ifdef TIM21_BASE_ADDR
		case TIM21_BASE_ADDR: return 1 << 2;
#endif
#ifdef TIM22_BASE_ADDR
		case TIM22_BASE_ADDR: return 1 << 5;
#endif
		default:
			return 0;
	}
}

template<typename plugin>
constexpr volatile Reg32_t &TIM<plugin>::get_clock_enable_reg(const uint32_t addr)
{
	switch (addr) {
#ifdef TIM1_BASE_ADDR
		case TIM1_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM8_BASE_ADDR
		case TIM8_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM9_BASE_ADDR
		case TIM9_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM10_BASE_ADDR
		case TIM10_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM11_BASE_ADDR
		case TIM11_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM15_BASE_ADDR
		case TIM15_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM16_BASE_ADDR
		case TIM16_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM17_BASE_ADDR
		case TIM17_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM19_BASE_ADDR
		case TIM19_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM20_BASE_ADDR
		case TIM20_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM21_BASE_ADDR
		case TIM21_BASE_ADDR: return RCC->APB2ENR;
#endif
#ifdef TIM22_BASE_ADDR
		case TIM22_BASE_ADDR: return RCC->APB2ENR;
#endif
		default:
#if defined(RCC_APB1ENR1)
			return RCC->APB1ENR1;
#elif defined(RCC_APB1LENR)
			return RCC->APB1LENR;
#elif defined(RCC_APB1ENR)
			return RCC->APB1ENR;
#else
			return *reinterpret_cast<volatile Reg32_t *>(0);
#endif
	}
}

template<typename plugin>
inline void TIM<plugin>::enable_clock() volatile
{
	TIM<plugin>::get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
			|= get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
}

template<typename plugin>
inline void TIM<plugin>::disable_clock() volatile
{
	TIM<plugin>::get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
			&= ~get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
}

template<typename plugin>
inline bool TIM<plugin>::is_clock_enabled() const volatile
{
	return (get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
			& get_clock_enable_bit(reinterpret_cast<const uint32_t>(this)))
		   == get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
}

	};
};//region undef
#undef TIM_DIER_COMDE
#undef TIM_CNT_1_CNT
#undef TIM2_OR_0_ETR_RMP
#undef TIM2_OR_0_TI4_RMP
#undef TIM21_OR_0_ETR_RMP
#undef TIM21_OR_0_TI1_RMP
#undef TIM21_OR_0_TI2_RMP
#undef TIM_CCER_CC1NE
#undef TIM_CCER_CC2NE
#undef TIM_CCER_CC3NE
#undef TIM_CR2_0_CCPC
#undef TIM_CR2_0_CCUS
#undef TIM_CR2_0_OIS1
#undef TIM_CR2_0_OIS1N
#undef TIM_CR2_0_OIS2
#undef TIM_DIER_COMIE
#undef TIM_DIER_BIE
#undef TIM_EGR_COMG
#undef TIM_EGR_BG
#undef TIM_SR_COMIF
#undef TIM_SR_BIF
#undef TIM_MAP0_RCR
#undef TIM_MAP0_BDTR
#undef TIM_BDTR_BKF
#undef TIM_BDTR_BK2F
#undef TIM_BDTR_BK2E
#undef TIM_BDTR_BK2P
#undef TIM_CCER_CC5E
#undef TIM_CCER_CC5P
#undef TIM_CCER_CC6E
#undef TIM_CCER_CC6P
#undef TIM_CNT_1_UIFCPY
#undef TIM_CR1_UIFREMAP
#undef TIM_CR2_0_OIS5
#undef TIM_CR2_0_MMS2
#undef TIM_EGR_B2G
#undef TIM_SR_B2IF
#undef TIM_SR_CC5IF
#undef TIM_SR_CC6IF
#undef TIM_CCER_CC4NP
#undef TIM_CCMR1_0_OC1M
#undef TIM_CCMR1_0_OC2M
#undef TIM_SMCR_SMS
#undef TIM_CCMR2_0_OC3M
#undef TIM_CCMR2_0_OC4M
#undef TIM_CCMR3_0_OC5M0
#undef TIM_CCMR3_0_OC5M1
#undef TIM_CCMR3_0_OC5M3
#undef TIM_CCMR3_2_OC6M2
#undef TIM_CCMR3_0_OC5M
#undef TIM_CCMR3_2_OC6M
#undef TIM_MAP2_CCMR3
#undef TIM_MAP1_CCR5
#undef TIM_MAP1_CCR6
#undef TIM_MAP1_AF1
#undef TIM_MAP1_AF2
#undef TIM_MAP1_TISEL
#undef TIM1_AF1_0_BKCMP1E
#undef TIM1_AF1_0_BKCMP2E
#undef TIM1_AF1_0_BKCMP1P
#undef TIM1_AF1_0_BKCMP2P
#undef TIM1_AF1_0_ETR_SEL
#undef TIM1_AF2_0_BK2CMP1E
#undef TIM1_AF2_0_BK2CMP2E
#undef TIM1_AF2_0_BK2CMP1P
#undef TIM1_AF2_0_BK2CMP2P
#undef TIM8_AF1_0_BKCMP1E
#undef TIM8_AF1_0_BKCMP2E
#undef TIM8_AF1_0_BKCMP1P
#undef TIM8_AF1_0_BKCMP2P
#undef TIM8_AF1_0_ETR_SEL
#undef TIM8_AF2_0_BK2CMP1E
#undef TIM8_AF2_0_BK2CMP2E
#undef TIM8_AF2_0_BK2CMP1P
#undef TIM8_AF2_0_BK2CMP2P
#undef TIM_CR2_0_OIS2N
#undef TIM_CR2_0_OIS3
#undef TIM_CR2_0_OIS3N
#undef TIM_CR2_0_OIS4
#undef TIM_CR2_0_OIS6
#undef TIM_MAP0_CCMR3
#undef TIM_MAP0_CCR5
#undef TIM_MAP0_CCR6
#undef TIM_MAP0_OR
#undef TIM_OR_0_TI1_RMP
#undef TIM1_OR_1_TI1_RMP
#undef TIM8_OR_1_TI1_RMP
#undef TIM20_OR_1_TI1_RMP
#undef TIM5_OR_0_TI1_RMP
#undef TIM21_OR_1_TI1_RMP
#undef TIM22_OR_1_TI1_RMP
#undef TIM9_OR_0_TI1_RMP
#undef TIM_OR_0_ETR_RMP
#undef TIM14_OR_0_ETR_RMP
#undef TIM16_OR_0_TI1RMP
#undef TIM16_OR_0_ETR_RMP
#undef TIM1_OR_1_ETR_RMP
#undef TIM8_OR_1_ETR_RMP
#undef TIM20_OR_1_ETR_RMP
#undef TIM2_OR_1_ETR_RMP
#undef TIM5_OR_0_ETR_RMP
#undef TIM11_OR_0_ETR_RMP
#undef TIM3_OR_1_ETR_RMP
#undef TIM21_OR_1_ETR_RMP
#undef TIM22_OR_1_ETR_RMP
#undef TIM9_OR_1_TI1RMP
#undef TIM9_OR_1_ETR_RMP
#undef TIM_OR_0_TI4_RMP
#undef TIM14_OR_0_TI4_RMP
#undef TIM16_OR_1_TI4_RMP
#undef TIM1_OR_0_TI4_RMP
#undef TIM8_OR_0_TI4_RMP
#undef TIM20_OR_0_TI4_RMP
#undef TIM2_OR_1_TI4_RMP
#undef TIM5_OR_0_TI4_RMP
#undef TIM11_OR_0_TI1_RMP
#undef TIM11_OR_0_TI4_RMP
#undef TIM3_OR_1_TI4_RMP
#undef TIM21_OR_0_TI4_RMP
#undef TIM22_OR_0_TI4_RMP
#undef TIM9_OR_0_TI4_RMP
#undef TIM_OR_0_ITR1_RMP
#undef TIM14_OR_0_ITR1_RMP
#undef TIM16_OR_0_ITR1_RMP
#undef TIM1_OR_0_ITR1_RMP
#undef TIM8_OR_0_ITR1_RMP
#undef TIM20_OR_0_ITR1_RMP
#undef TIM5_OR_0_ITR1_RMP
#undef TIM11_OR_0_ITR1_RMP
#undef TIM3_OR_0_ITR1_RMP
#undef TIM21_OR_0_ITR1_RMP
#undef TIM22_OR_0_ITR1_RMP
#undef TIM9_OR_1_ITR1_RMP
#undef TIM_MAP1_OR1
#undef TIM_MAP2_OR2
#undef TIM_MAP2_OR3
#undef TIM_SMCR_OCCS
#undef TIM_SMCR_TS
#undef TIM_SR_SBIF
#undef TIM_MAP0_AF1
#undef TIM_MAP0_AF2
#undef TIM1_AF1_0_BKDF1BKE
#undef TIM1_AF2_0_BK2DF1BKE
#undef TIM8_AF1_0_BKDF1BKE
#undef TIM8_AF2_0_BK2DF1BKE
#undef TIM14_OR_0_TI1_RMP
#undef TIM16_OR_0_TI1_RMP
#undef TIM16_OR_1_TI1_RMP
#undef TIM16_OR2_BKDF1BK1E
#undef TIM1_OR2_BKDF1BK0E
#undef TIM1_OR3_BK2DF1BK1E
#undef TIM15_OR2_BKDF1BK0E
#undef TIM1_OR_0_ETR_RMP
#undef TIM1_OR1_ETR_ADC3_RMP
#undef TIM8_OR1_ETR_ADC2_RMP
#undef TIM8_OR1_ETR_ADC3_RMP
#undef TIM8_OR_0_ETR_RMP
#undef TIM20_OR_0_ETR_RMP
#undef TIM2_OR_0_ITR1_RMP
#undef TIM2_OR_1_ITR1_RMP
#undef TIM3_OR_1_ITR2_RMP
#undef TIM9_OR_0_ITR1_RMP
#undef TIM3_OR_0_ETR_RMP
#undef TIM3_OR_0_TI1_RMP
#undef TIM3_OR_0_TI2_RMP
#undef TIM3_OR_0_TI4_RMP
#undef TIM22_OR_0_ETR_RMP
#undef TIM22_OR_0_TI1_RMP
//endregion
#endif
