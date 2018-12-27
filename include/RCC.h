/**
 * Copyright (c) 2018 FAUCHER Julien & FRANCE Loic
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
#ifndef __SOOL_RCC_H
#define __SOOL_RCC_H

#include "lib_utils/peripheral_include.h"

//region defines

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_AHB1ENR
#define RCC_AHB1RSTR
#define RCC_PLLCFGR
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     )
#define RCC_AHB1ENR_0_GPIOAEN GPIOAEN              // 1 bits @ 0
#define RCC_AHB1ENR_0_GPIOBEN GPIOBEN              // 1 bits @ 1
#define RCC_AHB1ENR_0_GPIOCEN GPIOCEN              // 1 bits @ 2
#define RCC_AHB1ENR_0_GPIOHEN GPIOHEN              // 1 bits @ 7
#define RCC_AHB1ENR_0_DMA1EN DMA1EN               // 1 bits @ 21
#define RCC_AHB1ENR_0_DMA2EN DMA2EN               // 1 bits @ 22
#define RCC_AHB1LPENR_0
#define RCC_AHB1RSTR_0_GPIOARST GPIOARST             // 1 bits @ 0
#define RCC_AHB1RSTR_0_GPIOBRST GPIOBRST             // 1 bits @ 1
#define RCC_AHB1RSTR_0_GPIOCRST GPIOCRST             // 1 bits @ 2
#define RCC_AHB1RSTR_0_GPIOHRST GPIOHRST             // 1 bits @ 7
#define RCC_AHB1RSTR_0_DMA1RST DMA1RST              // 1 bits @ 21
#define RCC_AHB1RSTR_0_DMA2RST DMA2RST              // 1 bits @ 22
#define RCC_APB2ENR_1_SYSCFGEN SYSCFGEN             // 1 bits @ 14
#define RCC_APB2ENR_1_TIM9EN TIM9EN               // 1 bits @ 16
#define RCC_APB2ENR_1_TIM11EN TIM11EN              // 1 bits @ 18
#define RCC_APB2ENR_2_ADC1EN ADC1EN               // 1 bits @ 8
#define RCC_APB2LPENR_0_ADC1LPEN ADC1LPEN             // 1 bits @ 8
#define RCC_APB2LPENR_0_SYSCFGLPEN SYSCFGLPEN           // 1 bits @ 14
#define RCC_APB2LPENR_0_TIM9LPEN TIM9LPEN             // 1 bits @ 16
#define RCC_APB2LPENR_0_TIM11LPEN TIM11LPEN            // 1 bits @ 18
#define RCC_APB2RSTR_1_ADCRST ADCRST               // 1 bits @ 8
#define RCC_APB2RSTR_1_SYSCFGRST SYSCFGRST            // 1 bits @ 14
#define RCC_APB2RSTR_1_TIM9RST TIM9RST              // 1 bits @ 16
#define RCC_APB2RSTR_1_TIM11RST TIM11RST             // 1 bits @ 18
#define RCC_CFGR_2_PPRE1     PPRE1                // 3 bits @ 10
#define RCC_CFGR_2_RTCPRE    RTCPRE               // 5 bits @ 16
#define RCC_CFGR_2_MCO1      MCO1                 // 2 bits @ 21
#define RCC_CFGR_3_PPRE2     PPRE2                // 3 bits @ 13
#define RCC_CFGR_3_MCO1PRE   MCO1PRE              // 3 bits @ 24
#define RCC_PLLCFGR_0_PLLM   PLLM                 // 6 bits @ 0
#define RCC_PLLCFGR_0_PLLN   PLLN                 // 9 bits @ 6
#define RCC_PLLCFGR_0_PLLP   PLLP                 // 2 bits @ 16
#define RCC_PLLCFGR_0_PLLSRC PLLSRC               // 1 bits @ 22
#define RCC_PLLCFGR_0_PLLQ   PLLQ                 // 4 bits @ 24
#define RCC_SSCGR
#define RCC_MAP1_PLLCFGR     PLLCFGR_TypeDef PLLCFGR
#define RCC_MAP1_AHB1RSTR    AHB1RSTR_TypeDef AHB1RSTR
#define RCC_MAP1_APB1RSTR    APB1RSTR_TypeDef APB1RSTR
#define RCC_MAP1_AHB1ENR     AHB1ENR_TypeDef AHB1ENR
#define RCC_MAP1_APB1ENR     APB1ENR_TypeDef APB1ENR
#define RCC_MAP1_APB2ENR     APB2ENR_TypeDef APB2ENR
#define RCC_MAP0_AHB1LPENR   AHB1LPENR_TypeDef AHB1LPENR
#define RCC_MAP0_APB1LPENR   APB1LPENR_TypeDef APB1LPENR
#define RCC_MAP0_APB2LPENR   APB2LPENR_TypeDef APB2LPENR
#define RCC_MAP0_SSCGR       SSCGR_TypeDef SSCGR
#else
#define RCC_AHB1ENR_0_GPIOAEN
#define RCC_AHB1ENR_0_GPIOBEN
#define RCC_AHB1ENR_0_GPIOCEN
#define RCC_AHB1ENR_0_GPIOHEN
#define RCC_AHB1ENR_0_DMA1EN
#define RCC_AHB1ENR_0_DMA2EN
#define RCC_AHB1RSTR_0_GPIOARST
#define RCC_AHB1RSTR_0_GPIOBRST
#define RCC_AHB1RSTR_0_GPIOCRST
#define RCC_AHB1RSTR_0_GPIOHRST
#define RCC_AHB1RSTR_0_DMA1RST
#define RCC_AHB1RSTR_0_DMA2RST
#define RCC_APB2ENR_1_SYSCFGEN
#define RCC_APB2ENR_1_TIM9EN
#define RCC_APB2ENR_1_TIM11EN
#define RCC_APB2ENR_2_ADC1EN
#define RCC_APB2LPENR_0_ADC1LPEN
#define RCC_APB2LPENR_0_SYSCFGLPEN
#define RCC_APB2LPENR_0_TIM9LPEN
#define RCC_APB2LPENR_0_TIM11LPEN
#define RCC_APB2RSTR_1_ADCRST
#define RCC_APB2RSTR_1_SYSCFGRST
#define RCC_APB2RSTR_1_TIM9RST
#define RCC_APB2RSTR_1_TIM11RST
#define RCC_CFGR_2_PPRE1
#define RCC_CFGR_2_RTCPRE
#define RCC_CFGR_2_MCO1
#define RCC_CFGR_3_PPRE2
#define RCC_CFGR_3_MCO1PRE
#define RCC_PLLCFGR_0_PLLM
#define RCC_PLLCFGR_0_PLLN
#define RCC_PLLCFGR_0_PLLP
#define RCC_PLLCFGR_0_PLLSRC
#define RCC_PLLCFGR_0_PLLQ
#define RCC_MAP1_PLLCFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_AHB1RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_APB1RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_AHB1ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_APB1ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_APB2ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB1LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB2LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_SSCGR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_AHB1ENR_0_GPIODEN GPIODEN              // 1 bits @ 3
#define RCC_AHB1ENR_0_GPIOEEN GPIOEEN              // 1 bits @ 4
#define RCC_AHB1LPENR_0_GPIODLPEN GPIODLPEN            // 1 bits @ 3
#define RCC_AHB1LPENR_0_GPIOELPEN GPIOELPEN            // 1 bits @ 4
#define RCC_AHB1RSTR_0_GPIODRST GPIODRST             // 1 bits @ 3
#define RCC_AHB1RSTR_0_GPIOERST GPIOERST             // 1 bits @ 4
#define RCC_AHB2ENR_0_OTGFSEN OTGFSEN              // 1 bits @ 7
#define RCC_AHB2LPENR_0_OTGFSLPEN OTGFSLPEN            // 1 bits @ 7
#define RCC_AHB2RSTR_0_OTGFSRST OTGFSRST             // 1 bits @ 7
#define RCC_APB1ENR_1_I2C3EN I2C3EN               // 1 bits @ 23
#define RCC_APB1LPENR_0_I2C3LPEN I2C3LPEN             // 1 bits @ 23
#define RCC_APB1RSTR_1_I2C3RST I2C3RST              // 1 bits @ 23
#define RCC_APB2ENR_1_TIM10EN TIM10EN              // 1 bits @ 17
#define RCC_APB2LPENR_0_TIM10LPEN TIM10LPEN            // 1 bits @ 17
#define RCC_APB2RSTR_1_TIM10RST TIM10RST             // 1 bits @ 17
#define RCC_CIR_2
#define RCC_CR_1_PLLI2SON    PLLI2SON             // 1 bits @ 26
#define RCC_CR_1_PLLI2SRDY   PLLI2SRDY            // 1 bits @ 27
#define RCC_PLLI2SCFGR
#define RCC_MAP1_AHB2RSTR    AHB2RSTR_TypeDef AHB2RSTR
#define RCC_MAP1_AHB2ENR     AHB2ENR_TypeDef AHB2ENR
#define RCC_MAP0_AHB2LPENR   AHB2LPENR_TypeDef AHB2LPENR
#define RCC_MAP0_PLLI2SCFGR  PLLI2SCFGR_TypeDef PLLI2SCFGR
#else
#define RCC_AHB1ENR_0_GPIODEN
#define RCC_AHB1ENR_0_GPIOEEN
#define RCC_AHB1LPENR_0_GPIODLPEN
#define RCC_AHB1LPENR_0_GPIOELPEN
#define RCC_AHB1RSTR_0_GPIODRST
#define RCC_AHB1RSTR_0_GPIOERST
#define RCC_AHB2ENR_0_OTGFSEN
#define RCC_AHB2LPENR_0_OTGFSLPEN
#define RCC_AHB2RSTR_0_OTGFSRST
#define RCC_APB1ENR_1_I2C3EN
#define RCC_APB1LPENR_0_I2C3LPEN
#define RCC_APB1RSTR_1_I2C3RST
#define RCC_APB2ENR_1_TIM10EN
#define RCC_APB2LPENR_0_TIM10LPEN
#define RCC_APB2RSTR_1_TIM10RST
#define RCC_CR_1_PLLI2SON
#define RCC_CR_1_PLLI2SRDY
#define RCC_MAP1_AHB2RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_AHB2ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB2LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_PLLI2SCFGR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_AHB1ENR_0_GPIOFEN GPIOFEN              // 1 bits @ 5
#define RCC_AHB1ENR_0_GPIOGEN GPIOGEN              // 1 bits @ 6
#define RCC_AHB1LPENR_0_GPIOFLPEN GPIOFLPEN            // 1 bits @ 5
#define RCC_AHB1LPENR_0_GPIOGLPEN GPIOGLPEN            // 1 bits @ 6
#define RCC_AHB1RSTR_0_GPIOFRST GPIOFRST             // 1 bits @ 5
#define RCC_AHB1RSTR_0_GPIOGRST GPIOGRST             // 1 bits @ 6
#define RCC_APB1LPENR_0_TIM12LPEN TIM12LPEN            // 1 bits @ 6
#define RCC_APB1LPENR_0_TIM13LPEN TIM13LPEN            // 1 bits @ 7
#define RCC_APB1LPENR_0_TIM14LPEN TIM14LPEN            // 1 bits @ 8
#define RCC_APB1LPENR_0_CAN1LPEN CAN1LPEN             // 1 bits @ 25
#else
#define RCC_AHB1ENR_0_GPIOFEN
#define RCC_AHB1ENR_0_GPIOGEN
#define RCC_AHB1LPENR_0_GPIOFLPEN
#define RCC_AHB1LPENR_0_GPIOGLPEN
#define RCC_AHB1RSTR_0_GPIOFRST
#define RCC_AHB1RSTR_0_GPIOGRST
#define RCC_APB1LPENR_0_TIM12LPEN
#define RCC_APB1LPENR_0_TIM13LPEN
#define RCC_APB1LPENR_0_TIM14LPEN
#define RCC_APB1LPENR_0_CAN1LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_AHB1ENR_0_GPIOIEN GPIOIEN              // 1 bits @ 8
#define RCC_AHB1LPENR_0_GPIOILPEN GPIOILPEN            // 1 bits @ 8
#define RCC_AHB1RSTR_0_GPIOIRST GPIOIRST             // 1 bits @ 8
#else
#define RCC_AHB1ENR_0_GPIOIEN
#define RCC_AHB1LPENR_0_GPIOILPEN
#define RCC_AHB1RSTR_0_GPIOIRST
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) || \
    defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx )
#define RCC_AHB1ENR_0_GPIOJEN GPIOJEN              // 1 bits @ 9
#define RCC_AHB1ENR_0_GPIOKEN GPIOKEN              // 1 bits @ 10
#define RCC_AHB1ENR_0_DMA2DEN DMA2DEN              // 1 bits @ 23
#define RCC_AHB1LPENR_0_GPIOJLPEN GPIOJLPEN            // 1 bits @ 9
#define RCC_AHB1LPENR_0_GPIOKLPEN GPIOKLPEN            // 1 bits @ 10
#define RCC_AHB1LPENR_0_DMA2DLPEN DMA2DLPEN            // 1 bits @ 23
#define RCC_AHB1RSTR_0_GPIOJRST GPIOJRST             // 1 bits @ 9
#define RCC_AHB1RSTR_0_GPIOKRST GPIOKRST             // 1 bits @ 10
#define RCC_AHB1RSTR_0_DMA2DRST DMA2DRST             // 1 bits @ 23
#define RCC_APB2ENR_1_SPI6EN SPI6EN               // 1 bits @ 21
#define RCC_APB2LPENR_0_SPI6LPEN SPI6LPEN             // 1 bits @ 21
#define RCC_APB2RSTR_1_SPI6RST SPI6RST              // 1 bits @ 21
#define RCC_PLLSAICFGR_PLLSAIR PLLSAIR              // 3 bits @ 28
#else
#define RCC_AHB1ENR_0_GPIOJEN
#define RCC_AHB1ENR_0_GPIOKEN
#define RCC_AHB1ENR_0_DMA2DEN
#define RCC_AHB1LPENR_0_GPIOJLPEN
#define RCC_AHB1LPENR_0_GPIOKLPEN
#define RCC_AHB1LPENR_0_DMA2DLPEN
#define RCC_AHB1RSTR_0_GPIOJRST
#define RCC_AHB1RSTR_0_GPIOKRST
#define RCC_AHB1RSTR_0_DMA2DRST
#define RCC_APB2ENR_1_SPI6EN
#define RCC_APB2LPENR_0_SPI6LPEN
#define RCC_APB2RSTR_1_SPI6RST
#define RCC_PLLSAICFGR_PLLSAIR
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )
#define RCC_AHB1ENR_0_CRCEN  CRCEN                // 1 bits @ 12
#define RCC_AHB1RSTR_0_CRCRST CRCRST               // 1 bits @ 12
#else
#define RCC_AHB1ENR_0_CRCEN
#define RCC_AHB1RSTR_0_CRCRST
#endif

#if defined(STM32H7     )
#define RCC_AHB1ENR_0_ETH1MACEN ETH1MACEN            // 1 bits @ 15
#define RCC_AHB1ENR_0_ETH1TXEN ETH1TXEN             // 1 bits @ 16
#define RCC_AHB1ENR_0_ETH1RXEN ETH1RXEN             // 1 bits @ 17
#define RCC_AHB1ENR_1_ADC12EN ADC12EN              // 1 bits @ 5
#define RCC_AHB1ENR_1_USB1OTGHSEN USB1OTGHSEN          // 1 bits @ 25
#define RCC_AHB1ENR_1_USB1OTGHSULPIEN USB1OTGHSULPIEN      // 1 bits @ 26
#define RCC_AHB1ENR_1_USB2OTGHSEN USB2OTGHSEN          // 1 bits @ 27
#define RCC_AHB1ENR_1_USB2OTGHSULPIEN USB2OTGHSULPIEN      // 1 bits @ 28
#define RCC_AHB1LPENR_1
#define RCC_AHB1RSTR_0_ETH1MACRST ETH1MACRST           // 1 bits @ 15
#define RCC_AHB1RSTR_0_USB2OTGHSRST USB2OTGHSRST         // 1 bits @ 27
#define RCC_AHB1RSTR_1_ADC12RST ADC12RST             // 1 bits @ 5
#define RCC_AHB1RSTR_1_USB1OTGHSRST USB1OTGHSRST         // 1 bits @ 25
#define RCC_AHB2ENR_0_SDMMC2EN SDMMC2EN             // 1 bits @ 9
#define RCC_AHB2ENR_0_D2SRAM1EN D2SRAM1EN            // 1 bits @ 29
#define RCC_AHB2ENR_0_D2SRAM2EN D2SRAM2EN            // 1 bits @ 30
#define RCC_AHB2ENR_0_D2SRAM3EN D2SRAM3EN            // 1 bits @ 31
#define RCC_AHB2LPENR_0_SDMMC2LPEN SDMMC2LPEN           // 1 bits @ 9
#define RCC_AHB2LPENR_0_D2SRAM1LPEN D2SRAM1LPEN          // 1 bits @ 30
#define RCC_AHB2LPENR_0_D2SRAM3LPEN D2SRAM3LPEN          // 1 bits @ 31
#define RCC_AHB2LPENR_1_D2SRAM2LPEN D2SRAM2LPEN          // 1 bits @ 30
#define RCC_AHB2RSTR_0_SDMMC2RST SDMMC2RST            // 1 bits @ 9
#define RCC_AHB3ENR_0_DMA2DEN DMA2DEN              // 1 bits @ 4
#define RCC_AHB3ENR_0_JPGDECEN JPGDECEN             // 1 bits @ 5
#define RCC_AHB3ENR_0_FMCEN  FMCEN                // 1 bits @ 12
#define RCC_AHB3ENR_0_SDMMC1EN SDMMC1EN             // 1 bits @ 16
#define RCC_AHB3ENR_1_QSPIEN QSPIEN               // 1 bits @ 14
#define RCC_AHB3ENR_2_MDMAEN MDMAEN               // 1 bits @ 0
#define RCC_AHB3LPENR_0_DMA2DLPEN DMA2DLPEN            // 1 bits @ 4
#define RCC_AHB3LPENR_0_JPGDECLPEN JPGDECLPEN           // 1 bits @ 5
#define RCC_AHB3LPENR_0_FLASHLPEN FLASHLPEN            // 1 bits @ 8
#define RCC_AHB3LPENR_0_FMCLPEN FMCLPEN              // 1 bits @ 12
#define RCC_AHB3LPENR_0_SDMMC1LPEN SDMMC1LPEN           // 1 bits @ 16
#define RCC_AHB3LPENR_0_DTCM1LPEN DTCM1LPEN            // 1 bits @ 28
#define RCC_AHB3LPENR_0_DTCM2LPEN DTCM2LPEN            // 1 bits @ 29
#define RCC_AHB3LPENR_0_ITCMLPEN ITCMLPEN             // 1 bits @ 30
#define RCC_AHB3LPENR_0_AXISRAMLPEN AXISRAMLPEN          // 1 bits @ 31
#define RCC_AHB3LPENR_1_QSPILPEN QSPILPEN             // 1 bits @ 14
#define RCC_AHB3LPENR_2
#define RCC_AHB3RSTR_0_DMA2DRST DMA2DRST             // 1 bits @ 4
#define RCC_AHB3RSTR_0_JPGDECRST JPGDECRST            // 1 bits @ 5
#define RCC_AHB3RSTR_0_FMCRST FMCRST               // 1 bits @ 12
#define RCC_AHB3RSTR_0_SDMMC1RST SDMMC1RST            // 1 bits @ 16
#define RCC_AHB3RSTR_0_CPURST CPURST               // 1 bits @ 31
#define RCC_AHB3RSTR_1_QSPIRST QSPIRST              // 1 bits @ 14
#define RCC_AHB3RSTR_2_MDMARST MDMARST              // 1 bits @ 0
#define RCC_AHB4ENR
#define RCC_AHB4LPENR
#define RCC_AHB4RSTR
#define RCC_APB1HENR
#define RCC_APB1HLPENR
#define RCC_APB1HRSTR
#define RCC_APB1LENR
#define RCC_APB1LLPENR
#define RCC_APB1LRSTR
#define RCC_APB2ENR_0_DFSDM1EN DFSDM1EN             // 1 bits @ 28
#define RCC_APB2ENR_1_HRTIMEN HRTIMEN              // 1 bits @ 29
#define RCC_APB2ENR_2_SAI3EN SAI3EN               // 1 bits @ 24
#define RCC_APB2LPENR_0_HRTIMLPEN HRTIMLPEN            // 1 bits @ 29
#define RCC_APB2LPENR_1_TIM15LPEN TIM15LPEN            // 1 bits @ 16
#define RCC_APB2LPENR_1_TIM16LPEN TIM16LPEN            // 1 bits @ 17
#define RCC_APB2LPENR_1_TIM17LPEN TIM17LPEN            // 1 bits @ 18
#define RCC_APB2LPENR_1_SAI3LPEN SAI3LPEN             // 1 bits @ 24
#define RCC_APB2LPENR_2
#define RCC_APB2RSTR_0_DFSDM1RST DFSDM1RST            // 1 bits @ 28
#define RCC_APB2RSTR_1_HRTIMRST HRTIMRST             // 1 bits @ 29
#define RCC_APB2RSTR_2_SAI3RST SAI3RST              // 1 bits @ 24
#define RCC_APB3ENR
#define RCC_APB3LPENR
#define RCC_APB3RSTR
#define RCC_APB4ENR
#define RCC_APB4LPENR
#define RCC_APB4RSTR
#define RCC_CFGR_0_TIMPRE    TIMPRE               // 1 bits @ 15
#define RCC_CFGR_1_SW        SW                   // 3 bits @ 0
#define RCC_CFGR_1_SWS       SWS                  // 3 bits @ 3
#define RCC_CFGR_1_STOPWUCK  STOPWUCK             // 1 bits @ 6
#define RCC_CFGR_1_STOPKERWUCK STOPKERWUCK          // 1 bits @ 7
#define RCC_CFGR_1_HRTIMSEL  HRTIMSEL             // 1 bits @ 14
#define RCC_CFGR_1_MCO1PRE   MCO1PRE              // 4 bits @ 18
#define RCC_CFGR_4_RTCPRE    RTCPRE               // 6 bits @ 8
#define RCC_CFGR_4_MCO1      MCO1                 // 3 bits @ 22
#define RCC_CFGR_5
#define RCC_CICR_0_CSIRDYC   CSIRDYC              // 1 bits @ 4
#define RCC_CICR_0_HSI48RDYC HSI48RDYC            // 1 bits @ 5
#define RCC_CICR_0_PLLRDYC   PLLRDYC              // 1 bits @ 6
#define RCC_CICR_0_PLL2RDYC  PLL2RDYC             // 1 bits @ 7
#define RCC_CICR_0_PLL3RDYC  PLL3RDYC             // 1 bits @ 8
#define RCC_CICR_0_HSECSSC   HSECSSC              // 1 bits @ 10
#define RCC_CIER_0_CSIRDYIE  CSIRDYIE             // 1 bits @ 4
#define RCC_CIER_0_HSI48RDYIE HSI48RDYIE           // 1 bits @ 5
#define RCC_CIER_0_PLL1RDYIE PLL1RDYIE            // 1 bits @ 6
#define RCC_CIER_0_PLL2RDYIE PLL2RDYIE            // 1 bits @ 7
#define RCC_CIER_0_PLL3RDYIE PLL3RDYIE            // 1 bits @ 8
#define RCC_CIFR_0_CSIRDYF   CSIRDYF              // 1 bits @ 4
#define RCC_CIFR_0_HSI48RDYF HSI48RDYF            // 1 bits @ 5
#define RCC_CIFR_0_PLLRDYF   PLLRDYF              // 1 bits @ 6
#define RCC_CIFR_0_PLL2RDYF  PLL2RDYF             // 1 bits @ 7
#define RCC_CIFR_0_PLL3RDYF  PLL3RDYF             // 1 bits @ 8
#define RCC_CIFR_0_HSECSSF   HSECSSF              // 1 bits @ 10
#define RCC_CR_1_HSIDIV      HSIDIV               // 2 bits @ 3
#define RCC_CR_1_HSIDIVF     HSIDIVF              // 1 bits @ 5
#define RCC_CR_1_CSION       CSION                // 1 bits @ 7
#define RCC_CR_1_CSIRDY      CSIRDY               // 1 bits @ 8
#define RCC_CR_1_CSIKERON    CSIKERON             // 1 bits @ 9
#define RCC_CR_1_HSI48ON     HSI48ON              // 1 bits @ 12
#define RCC_CR_1_HSI48RDY    HSI48RDY             // 1 bits @ 13
#define RCC_CR_1_D1CKRDY     D1CKRDY              // 1 bits @ 14
#define RCC_CR_1_D2CKRDY     D2CKRDY              // 1 bits @ 15
#define RCC_CR_1_PLL1ON      PLL1ON               // 1 bits @ 24
#define RCC_CR_1_PLL1RDY     PLL1RDY              // 1 bits @ 25
#define RCC_CRRCR_0
#define RCC_D1CCIPR
#define RCC_D1CFGR
#define RCC_D2CCIP1R
#define RCC_D2CCIP2R
#define RCC_D2CFGR
#define RCC_D3AMR
#define RCC_D3CCIPR
#define RCC_D3CFGR
#define RCC_GCR
#define RCC_ICSCR_0
#define RCC_PLL1DIVR
#define RCC_PLL1FRACR
#define RCC_PLL2DIVR
#define RCC_PLL2FRACR
#define RCC_PLL3DIVR
#define RCC_PLL3FRACR
#define RCC_PLLCFGR_0_DIVR1EN DIVR1EN              // 1 bits @ 18
#define RCC_PLLCFGR_0_DIVP2EN DIVP2EN              // 1 bits @ 19
#define RCC_PLLCFGR_0_DIVQ2EN DIVQ2EN              // 1 bits @ 20
#define RCC_PLLCFGR_0_DIVR2EN DIVR2EN              // 1 bits @ 21
#define RCC_PLLCFGR_0_DIVQ3EN DIVQ3EN              // 1 bits @ 23
#define RCC_PLLCFGR_1_PLL1FRACEN PLL1FRACEN           // 1 bits @ 0
#define RCC_PLLCFGR_1_PLL1VCOSEL PLL1VCOSEL           // 1 bits @ 1
#define RCC_PLLCFGR_1_PLL1RGE PLL1RGE              // 2 bits @ 2
#define RCC_PLLCFGR_1_PLL2FRACEN PLL2FRACEN           // 1 bits @ 4
#define RCC_PLLCFGR_1_PLL2VCOSEL PLL2VCOSEL           // 1 bits @ 5
#define RCC_PLLCFGR_1_PLL2RGE PLL2RGE              // 2 bits @ 6
#define RCC_PLLCFGR_1_PLL3FRACEN PLL3FRACEN           // 1 bits @ 8
#define RCC_PLLCFGR_1_PLL3VCOSEL PLL3VCOSEL           // 1 bits @ 9
#define RCC_PLLCFGR_1_PLL3RGE PLL3RGE              // 2 bits @ 10
#define RCC_PLLCFGR_1_DIVP1EN DIVP1EN              // 1 bits @ 16
#define RCC_PLLCFGR_1_DIVQ1EN DIVQ1EN              // 1 bits @ 17
#define RCC_PLLCFGR_1_DIVP3EN DIVP3EN              // 1 bits @ 22
#define RCC_PLLCFGR_1_DIVR3EN DIVR3EN              // 1 bits @ 24
#define RCC_PLLCKSELR
#define RCC_RSR
#define RCC_MAP3_CFGR        CFGR_TypeDef CFGR
#define RCC_MAP2_D1CFGR      D1CFGR_TypeDef D1CFGR
#define RCC_MAP1_D2CFGR      D2CFGR_TypeDef D2CFGR
#define RCC_MAP2_D3CFGR      D3CFGR_TypeDef D3CFGR
#define RCC_MAP1_PLLCKSELR   PLLCKSELR_TypeDef PLLCKSELR
#define RCC_MAP2_PLLCFGR     PLLCFGR_TypeDef PLLCFGR
#define RCC_MAP2_PLL1DIVR    PLL1DIVR_TypeDef PLL1DIVR
#define RCC_MAP2_PLL1FRACR   PLL1FRACR_TypeDef PLL1FRACR
#define RCC_MAP1_PLL2DIVR    PLL2DIVR_TypeDef PLL2DIVR
#define RCC_MAP0_PLL2FRACR   PLL2FRACR_TypeDef PLL2FRACR
#define RCC_MAP0_PLL3DIVR    PLL3DIVR_TypeDef PLL3DIVR
#define RCC_MAP0_PLL3FRACR   PLL3FRACR_TypeDef PLL3FRACR
#define RCC_MAP0_D1CCIPR     D1CCIPR_TypeDef D1CCIPR
#define RCC_MAP1_D2CCIP1R    D2CCIP1R_TypeDef D2CCIP1R
#define RCC_MAP1_D2CCIP2R    D2CCIP2R_TypeDef D2CCIP2R
#define RCC_MAP1_D3CCIPR     D3CCIPR_TypeDef D3CCIPR
#define RCC_MAP1_CIER        CIER_TypeDef CIER
#define RCC_MAP1_CIFR        CIFR_TypeDef CIFR
#define RCC_MAP0_CICR        CICR_TypeDef CICR
#define RCC_MAP0_AHB3RSTR    AHB3RSTR_TypeDef AHB3RSTR
#define RCC_MAP2_AHB1RSTR    AHB1RSTR_TypeDef AHB1RSTR
#define RCC_MAP2_AHB2RSTR    AHB2RSTR_TypeDef AHB2RSTR
#define RCC_MAP1_AHB4RSTR    AHB4RSTR_TypeDef AHB4RSTR
#define RCC_MAP2_APB3RSTR    APB3RSTR_TypeDef APB3RSTR
#define RCC_MAP2_APB1LRSTR   APB1LRSTR_TypeDef APB1LRSTR
#define RCC_MAP1_APB1HRSTR   APB1HRSTR_TypeDef APB1HRSTR
#define RCC_MAP2_APB2RSTR    APB2RSTR_TypeDef APB2RSTR
#define RCC_MAP0_APB4RSTR    APB4RSTR_TypeDef APB4RSTR
#define RCC_MAP0_GCR         GCR_TypeDef GCR
#define RCC_MAP0_D3AMR       D3AMR_TypeDef D3AMR
#define RCC_MAP0_RSR         RSR_TypeDef RSR
#define RCC_MAP1_AHB3ENR     AHB3ENR_TypeDef AHB3ENR
#define RCC_MAP0_AHB1ENR     AHB1ENR_TypeDef AHB1ENR
#define RCC_MAP0_AHB2ENR     AHB2ENR_TypeDef AHB2ENR
#define RCC_MAP0_AHB4ENR     AHB4ENR_TypeDef AHB4ENR
#define RCC_MAP0_APB3ENR     APB3ENR_TypeDef APB3ENR
#define RCC_MAP0_APB1LENR    APB1LENR_TypeDef APB1LENR
#define RCC_MAP0_APB1HENR    APB1HENR_TypeDef APB1HENR
#define RCC_MAP5_APB2ENR     APB2ENR_TypeDef APB2ENR
#define RCC_MAP0_APB4ENR     APB4ENR_TypeDef APB4ENR
#define RCC_MAP1_AHB3LPENR   AHB3LPENR_TypeDef AHB3LPENR
#define RCC_MAP1_AHB1LPENR   AHB1LPENR_TypeDef AHB1LPENR
#define RCC_MAP1_AHB2LPENR   AHB2LPENR_TypeDef AHB2LPENR
#define RCC_MAP0_AHB4LPENR   AHB4LPENR_TypeDef AHB4LPENR
#define RCC_MAP0_APB3LPENR   APB3LPENR_TypeDef APB3LPENR
#define RCC_MAP0_APB1LLPENR  APB1LLPENR_TypeDef APB1LLPENR
#define RCC_MAP0_APB1HLPENR  APB1HLPENR_TypeDef APB1HLPENR
#define RCC_MAP1_APB2LPENR   APB2LPENR_TypeDef APB2LPENR
#define RCC_MAP0_APB4LPENR   APB4LPENR_TypeDef APB4LPENR
#else
#define RCC_AHB1ENR_0_ETH1MACEN
#define RCC_AHB1ENR_0_ETH1TXEN
#define RCC_AHB1ENR_0_ETH1RXEN
#define RCC_AHB1ENR_1_ADC12EN
#define RCC_AHB1ENR_1_USB1OTGHSEN
#define RCC_AHB1ENR_1_USB1OTGHSULPIEN
#define RCC_AHB1ENR_1_USB2OTGHSEN
#define RCC_AHB1ENR_1_USB2OTGHSULPIEN
#define RCC_AHB1RSTR_0_ETH1MACRST
#define RCC_AHB1RSTR_0_USB2OTGHSRST
#define RCC_AHB1RSTR_1_ADC12RST
#define RCC_AHB1RSTR_1_USB1OTGHSRST
#define RCC_AHB2ENR_0_SDMMC2EN
#define RCC_AHB2ENR_0_D2SRAM1EN
#define RCC_AHB2ENR_0_D2SRAM2EN
#define RCC_AHB2ENR_0_D2SRAM3EN
#define RCC_AHB2LPENR_0_SDMMC2LPEN
#define RCC_AHB2LPENR_0_D2SRAM1LPEN
#define RCC_AHB2LPENR_0_D2SRAM3LPEN
#define RCC_AHB2LPENR_1_D2SRAM2LPEN
#define RCC_AHB2RSTR_0_SDMMC2RST
#define RCC_AHB3ENR_0_DMA2DEN
#define RCC_AHB3ENR_0_JPGDECEN
#define RCC_AHB3ENR_0_FMCEN
#define RCC_AHB3ENR_0_SDMMC1EN
#define RCC_AHB3ENR_1_QSPIEN
#define RCC_AHB3ENR_2_MDMAEN
#define RCC_AHB3LPENR_0_DMA2DLPEN
#define RCC_AHB3LPENR_0_JPGDECLPEN
#define RCC_AHB3LPENR_0_FLASHLPEN
#define RCC_AHB3LPENR_0_FMCLPEN
#define RCC_AHB3LPENR_0_SDMMC1LPEN
#define RCC_AHB3LPENR_0_DTCM1LPEN
#define RCC_AHB3LPENR_0_DTCM2LPEN
#define RCC_AHB3LPENR_0_ITCMLPEN
#define RCC_AHB3LPENR_0_AXISRAMLPEN
#define RCC_AHB3LPENR_1_QSPILPEN
#define RCC_AHB3RSTR_0_DMA2DRST
#define RCC_AHB3RSTR_0_JPGDECRST
#define RCC_AHB3RSTR_0_FMCRST
#define RCC_AHB3RSTR_0_SDMMC1RST
#define RCC_AHB3RSTR_0_CPURST
#define RCC_AHB3RSTR_1_QSPIRST
#define RCC_AHB3RSTR_2_MDMARST
#define RCC_APB2ENR_0_DFSDM1EN
#define RCC_APB2ENR_1_HRTIMEN
#define RCC_APB2ENR_2_SAI3EN
#define RCC_APB2LPENR_0_HRTIMLPEN
#define RCC_APB2LPENR_1_TIM15LPEN
#define RCC_APB2LPENR_1_TIM16LPEN
#define RCC_APB2LPENR_1_TIM17LPEN
#define RCC_APB2LPENR_1_SAI3LPEN
#define RCC_APB2RSTR_0_DFSDM1RST
#define RCC_APB2RSTR_1_HRTIMRST
#define RCC_APB2RSTR_2_SAI3RST
#define RCC_CFGR_0_TIMPRE
#define RCC_CFGR_1_SW
#define RCC_CFGR_1_SWS
#define RCC_CFGR_1_STOPWUCK
#define RCC_CFGR_1_STOPKERWUCK
#define RCC_CFGR_1_HRTIMSEL
#define RCC_CFGR_1_MCO1PRE
#define RCC_CFGR_4_RTCPRE
#define RCC_CFGR_4_MCO1
#define RCC_CICR_0_CSIRDYC
#define RCC_CICR_0_HSI48RDYC
#define RCC_CICR_0_PLLRDYC
#define RCC_CICR_0_PLL2RDYC
#define RCC_CICR_0_PLL3RDYC
#define RCC_CICR_0_HSECSSC
#define RCC_CIER_0_CSIRDYIE
#define RCC_CIER_0_HSI48RDYIE
#define RCC_CIER_0_PLL1RDYIE
#define RCC_CIER_0_PLL2RDYIE
#define RCC_CIER_0_PLL3RDYIE
#define RCC_CIFR_0_CSIRDYF
#define RCC_CIFR_0_HSI48RDYF
#define RCC_CIFR_0_PLLRDYF
#define RCC_CIFR_0_PLL2RDYF
#define RCC_CIFR_0_PLL3RDYF
#define RCC_CIFR_0_HSECSSF
#define RCC_CR_1_HSIDIV
#define RCC_CR_1_HSIDIVF
#define RCC_CR_1_CSION
#define RCC_CR_1_CSIRDY
#define RCC_CR_1_CSIKERON
#define RCC_CR_1_HSI48ON
#define RCC_CR_1_HSI48RDY
#define RCC_CR_1_D1CKRDY
#define RCC_CR_1_D2CKRDY
#define RCC_CR_1_PLL1ON
#define RCC_CR_1_PLL1RDY
#define RCC_PLLCFGR_0_DIVR1EN
#define RCC_PLLCFGR_0_DIVP2EN
#define RCC_PLLCFGR_0_DIVQ2EN
#define RCC_PLLCFGR_0_DIVR2EN
#define RCC_PLLCFGR_0_DIVQ3EN
#define RCC_PLLCFGR_1_PLL1FRACEN
#define RCC_PLLCFGR_1_PLL1VCOSEL
#define RCC_PLLCFGR_1_PLL1RGE
#define RCC_PLLCFGR_1_PLL2FRACEN
#define RCC_PLLCFGR_1_PLL2VCOSEL
#define RCC_PLLCFGR_1_PLL2RGE
#define RCC_PLLCFGR_1_PLL3FRACEN
#define RCC_PLLCFGR_1_PLL3VCOSEL
#define RCC_PLLCFGR_1_PLL3RGE
#define RCC_PLLCFGR_1_DIVP1EN
#define RCC_PLLCFGR_1_DIVQ1EN
#define RCC_PLLCFGR_1_DIVP3EN
#define RCC_PLLCFGR_1_DIVR3EN
#define RCC_MAP3_CFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_D1CFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_D2CFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_D3CFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_PLLCKSELR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_PLLCFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_PLL1DIVR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_PLL1FRACR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_PLL2DIVR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_PLL2FRACR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_PLL3DIVR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_PLL3FRACR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_D1CCIPR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_D2CCIP1R __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_D2CCIP2R __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_D3CCIPR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_CIER __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_CIFR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_CICR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB3RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_AHB1RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_AHB2RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_AHB4RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB3RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB1LRSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_APB1HRSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB2RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB4RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_GCR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_D3AMR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_RSR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_AHB3ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB1ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB2ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB4ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB3ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1LENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1HENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP5_APB2ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB4ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_AHB3LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_AHB1LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_AHB2LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB4LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB3LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1LLPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1HLPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_APB2LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB4LPENR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     )
#define RCC_AHB1ENR_0_BKPSRAMEN BKPSRAMEN            // 1 bits @ 18
#define RCC_AHB1ENR_0_OTGHSEN OTGHSEN              // 1 bits @ 29
#define RCC_AHB1ENR_0_OTGHSULPIEN OTGHSULPIEN          // 1 bits @ 30
#define RCC_AHB1LPENR_0_BKPSRAMLPEN BKPSRAMLPEN          // 1 bits @ 18
#define RCC_AHB1LPENR_0_OTGHSLPEN OTGHSLPEN            // 1 bits @ 29
#define RCC_AHB1LPENR_0_OTGHSULPILPEN OTGHSULPILPEN        // 1 bits @ 30
#define RCC_AHB1RSTR_0_OTGHRST OTGHRST              // 1 bits @ 29
#define RCC_APB2ENR_1_ADC3EN ADC3EN               // 1 bits @ 10
#define RCC_APB2ENR_2_ADC2EN ADC2EN               // 1 bits @ 9
#define RCC_APB2LPENR_0_ADC2LPEN ADC2LPEN             // 1 bits @ 9
#define RCC_APB2LPENR_0_ADC3LPEN ADC3LPEN             // 1 bits @ 10
#else
#define RCC_AHB1ENR_0_BKPSRAMEN
#define RCC_AHB1ENR_0_OTGHSEN
#define RCC_AHB1ENR_0_OTGHSULPIEN
#define RCC_AHB1LPENR_0_BKPSRAMLPEN
#define RCC_AHB1LPENR_0_OTGHSLPEN
#define RCC_AHB1LPENR_0_OTGHSULPILPEN
#define RCC_AHB1RSTR_0_OTGHRST
#define RCC_APB2ENR_1_ADC3EN
#define RCC_APB2ENR_2_ADC2EN
#define RCC_APB2LPENR_0_ADC2LPEN
#define RCC_APB2LPENR_0_ADC3LPEN
#endif

#if defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx )
#define RCC_AHB1ENR_0_CCMDATARAMEN CCMDATARAMEN         // 1 bits @ 20
#else
#define RCC_AHB1ENR_0_CCMDATARAMEN
#endif

#if defined(STM32F207xx ) || defined(STM32F217xx ) || defined(STM32F407xx ) || defined(STM32F417xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) || \
    defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx )
#define RCC_AHB1ENR_0_ETHMACEN ETHMACEN             // 1 bits @ 25
#define RCC_AHB1ENR_0_ETHMACTXEN ETHMACTXEN           // 1 bits @ 26
#define RCC_AHB1ENR_0_ETHMACRXEN ETHMACRXEN           // 1 bits @ 27
#define RCC_AHB1ENR_0_ETHMACPTPEN ETHMACPTPEN          // 1 bits @ 28
#define RCC_AHB1LPENR_0_ETHMACLPEN ETHMACLPEN           // 1 bits @ 25
#define RCC_AHB1LPENR_0_ETHMACTXLPEN ETHMACTXLPEN         // 1 bits @ 26
#define RCC_AHB1LPENR_0_ETHMACRXLPEN ETHMACRXLPEN         // 1 bits @ 27
#define RCC_AHB1LPENR_0_ETHMACPTPLPEN ETHMACPTPLPEN        // 1 bits @ 28
#define RCC_AHB1RSTR_0_ETHMACRST ETHMACRST            // 1 bits @ 25
#else
#define RCC_AHB1ENR_0_ETHMACEN
#define RCC_AHB1ENR_0_ETHMACTXEN
#define RCC_AHB1ENR_0_ETHMACRXEN
#define RCC_AHB1ENR_0_ETHMACPTPEN
#define RCC_AHB1LPENR_0_ETHMACLPEN
#define RCC_AHB1LPENR_0_ETHMACTXLPEN
#define RCC_AHB1LPENR_0_ETHMACRXLPEN
#define RCC_AHB1LPENR_0_ETHMACPTPLPEN
#define RCC_AHB1RSTR_0_ETHMACRST
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx )
#define RCC_AHB1ENR_0_RNGEN  RNGEN                // 1 bits @ 31
#define RCC_AHB1LPENR_0_RNGLPEN RNGLPEN              // 1 bits @ 31
#define RCC_AHB1RSTR_0_RNGRST RNGRST               // 1 bits @ 31
#define RCC_CFGR_2_MCO1EN    MCO1EN               // 1 bits @ 8
#define RCC_DCKCFGR_0_I2SSRC I2SSRC               // 2 bits @ 25
#else
#define RCC_AHB1ENR_0_RNGEN
#define RCC_AHB1LPENR_0_RNGLPEN
#define RCC_AHB1RSTR_0_RNGRST
#define RCC_CFGR_2_MCO1EN
#define RCC_DCKCFGR_0_I2SSRC
#endif

#if defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_AHB1ENR_1
#endif

#if defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_AHB1ENR_1_DMA1EN DMA1EN               // 1 bits @ 0
#define RCC_AHB1ENR_1_DMA2EN DMA2EN               // 1 bits @ 1
#define RCC_AHB1RSTR_1
#define RCC_BDCR_0_LSECSSON  LSECSSON             // 1 bits @ 5
#define RCC_BDCR_0_LSECSSD   LSECSSD              // 1 bits @ 6
#define RCC_CICR_0_LSECSSC   LSECSSC              // 1 bits @ 9
#define RCC_CIER_0_LSECSSIE  LSECSSIE             // 1 bits @ 9
#define RCC_CIFR_0_LSECSSF   LSECSSF              // 1 bits @ 9
#define RCC_PLLCFGR_1
#else
#define RCC_AHB1ENR_1_DMA1EN
#define RCC_AHB1ENR_1_DMA2EN
#define RCC_BDCR_0_LSECSSON
#define RCC_BDCR_0_LSECSSD
#define RCC_CICR_0_LSECSSC
#define RCC_CIER_0_LSECSSIE
#define RCC_CIFR_0_LSECSSF
#endif

#if defined(STM32L4P    )
#define RCC_AHB1ENR_1_DMAMUX1EN DMAMUX1EN            // 1 bits @ 2
#define RCC_AHB1RSTR_1_DMAMUX1RST DMAMUX1RST           // 1 bits @ 2
#define RCC_AHB1SMENR_DMAMUX1SMEN DMAMUX1SMEN          // 1 bits @ 2
#define RCC_AHB2ENR_0_OSPIMEN OSPIMEN              // 1 bits @ 20
#define RCC_AHB2ENR_0_SDMMC1EN SDMMC1EN             // 1 bits @ 22
#define RCC_AHB2RSTR_0_OSPIMRST OSPIMRST             // 1 bits @ 20
#define RCC_AHB2RSTR_0_SDMMC1RST SDMMC1RST            // 1 bits @ 22
#define RCC_AHB2SMENR_SRAM3SMEN SRAM3SMEN            // 1 bits @ 10
#define RCC_AHB2SMENR_OSPIMSMEN OSPIMSMEN            // 1 bits @ 20
#define RCC_AHB2SMENR_SDMMC1SMEN SDMMC1SMEN           // 1 bits @ 22
#define RCC_AHB3ENR_0_OSPI1EN OSPI1EN              // 1 bits @ 8
#define RCC_AHB3ENR_0_OSPI2EN OSPI2EN              // 1 bits @ 9
#define RCC_AHB3RSTR_0_OSPI1RST OSPI1RST             // 1 bits @ 8
#define RCC_AHB3RSTR_0_OSPI2RST OSPI2RST             // 1 bits @ 9
#define RCC_AHB3SMENR_0_OSPI2SMEN OSPI2SMEN            // 1 bits @ 9
#define RCC_AHB3SMENR_1
#define RCC_CCIPR2_DFSDM1SEL DFSDM1SEL            // 1 bits @ 2
#define RCC_CCIPR2_ADFSDM1SEL ADFSDM1SEL           // 2 bits @ 3
#define RCC_CCIPR2_SAI1SEL   SAI1SEL              // 3 bits @ 5
#define RCC_CCIPR2_SAI2SEL   SAI2SEL              // 3 bits @ 8
#define RCC_CCIPR2_SDMMCSEL  SDMMCSEL             // 1 bits @ 14
#define RCC_CCIPR2_PLLSAI2DIVR PLLSAI2DIVR          // 2 bits @ 16
#define RCC_CCIPR2_OSPISEL   OSPISEL              // 2 bits @ 20
#define RCC_PLLCFGR_3
#define RCC_PLLSAI1CFGR_PLLSAI1M PLLSAI1M             // 4 bits @ 4
#define RCC_PLLSAI2CFGR_PLLSAI2M PLLSAI2M             // 4 bits @ 4
#define RCC_PLLSAI2CFGR_PLLSAI2QEN PLLSAI2QEN           // 1 bits @ 20
#define RCC_PLLSAI2CFGR_PLLSAI2Q PLLSAI2Q             // 2 bits @ 21
#else
#define RCC_AHB1ENR_1_DMAMUX1EN
#define RCC_AHB1RSTR_1_DMAMUX1RST
#define RCC_AHB1SMENR_DMAMUX1SMEN
#define RCC_AHB2ENR_0_OSPIMEN
#define RCC_AHB2ENR_0_SDMMC1EN
#define RCC_AHB2RSTR_0_OSPIMRST
#define RCC_AHB2RSTR_0_SDMMC1RST
#define RCC_AHB2SMENR_SRAM3SMEN
#define RCC_AHB2SMENR_OSPIMSMEN
#define RCC_AHB2SMENR_SDMMC1SMEN
#define RCC_AHB3ENR_0_OSPI1EN
#define RCC_AHB3ENR_0_OSPI2EN
#define RCC_AHB3RSTR_0_OSPI1RST
#define RCC_AHB3RSTR_0_OSPI2RST
#define RCC_AHB3SMENR_0_OSPI2SMEN
#define RCC_CCIPR2_DFSDM1SEL
#define RCC_CCIPR2_ADFSDM1SEL
#define RCC_CCIPR2_SAI1SEL
#define RCC_CCIPR2_SAI2SEL
#define RCC_CCIPR2_SDMMCSEL
#define RCC_CCIPR2_PLLSAI2DIVR
#define RCC_CCIPR2_OSPISEL
#define RCC_PLLSAI1CFGR_PLLSAI1M
#define RCC_PLLSAI2CFGR_PLLSAI2M
#define RCC_PLLSAI2CFGR_PLLSAI2QEN
#define RCC_PLLSAI2CFGR_PLLSAI2Q
#endif

#if defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_AHB1ENR_1_FLASHEN FLASHEN              // 1 bits @ 8
#define RCC_AHB1ENR_1_TSCEN  TSCEN                // 1 bits @ 16
#define RCC_AHB1RSTR_0_TSCRST TSCRST               // 1 bits @ 16
#define RCC_AHB1RSTR_1_FLASHRST FLASHRST             // 1 bits @ 8
#define RCC_AHB1SMENR
#define RCC_AHB2ENR_0_GPIOCEN GPIOCEN              // 1 bits @ 2
#define RCC_AHB2ENR_0_ADCEN  ADCEN                // 1 bits @ 13
#define RCC_AHB2ENR_1_GPIOAEN GPIOAEN              // 1 bits @ 0
#define RCC_AHB2ENR_1_GPIOBEN GPIOBEN              // 1 bits @ 1
#define RCC_AHB2ENR_1_GPIOHEN GPIOHEN              // 1 bits @ 7
#define RCC_AHB2ENR_1_RNGEN  RNGEN                // 1 bits @ 18
#define RCC_AHB2RSTR_0_GPIOCRST GPIOCRST             // 1 bits @ 2
#define RCC_AHB2RSTR_0_ADCRST ADCRST               // 1 bits @ 13
#define RCC_AHB2RSTR_1_GPIOARST GPIOARST             // 1 bits @ 0
#define RCC_AHB2RSTR_1_GPIOBRST GPIOBRST             // 1 bits @ 1
#define RCC_AHB2RSTR_1_GPIOHRST GPIOHRST             // 1 bits @ 7
#define RCC_AHB2RSTR_1_RNGRST RNGRST               // 1 bits @ 18
#define RCC_AHB2SMENR
#define RCC_AHB3SMENR
#define RCC_APB1ENR1
#define RCC_APB1ENR2
#define RCC_APB1RSTR1
#define RCC_APB1RSTR2
#define RCC_APB1SMENR1
#define RCC_APB1SMENR2
#define RCC_APB2ENR_2_SAI1EN SAI1EN               // 1 bits @ 21
#define RCC_APB2RSTR_2_SAI1RST SAI1RST              // 1 bits @ 21
#define RCC_APB2SMENR_0_TIM1SMEN TIM1SMEN             // 1 bits @ 11
#define RCC_APB2SMENR_0_TIM15SMEN TIM15SMEN            // 1 bits @ 16
#define RCC_APB2SMENR_0_TIM16SMEN TIM16SMEN            // 1 bits @ 17
#define RCC_APB2SMENR_0_SAI1SMEN SAI1SMEN             // 1 bits @ 21
#define RCC_BDCR_0_LSCOEN    LSCOEN               // 1 bits @ 24
#define RCC_BDCR_0_LSCOSEL   LSCOSEL              // 1 bits @ 25
#define RCC_CCIPR_0_LPTIM2SEL LPTIM2SEL            // 2 bits @ 20
#define RCC_CCIPR_0_ADCSEL   ADCSEL               // 2 bits @ 28
#define RCC_CCIPR_2
#define RCC_CICR_1_HSIRDYC   HSIRDYC              // 1 bits @ 3
#define RCC_CICR_2_MSIRDYC   MSIRDYC              // 1 bits @ 2
#define RCC_CICR_2_HSERDYC   HSERDYC              // 1 bits @ 4
#define RCC_CICR_2_PLLRDYC   PLLRDYC              // 1 bits @ 5
#define RCC_CICR_2_PLLSAI1RDYC PLLSAI1RDYC          // 1 bits @ 6
#define RCC_CIER_1_HSIRDYIE  HSIRDYIE             // 1 bits @ 3
#define RCC_CIER_2_MSIRDYIE  MSIRDYIE             // 1 bits @ 2
#define RCC_CIER_2_HSERDYIE  HSERDYIE             // 1 bits @ 4
#define RCC_CIER_2_PLLRDYIE  PLLRDYIE             // 1 bits @ 5
#define RCC_CIER_2_PLLSAI1RDYIE PLLSAI1RDYIE         // 1 bits @ 6
#define RCC_CIFR_1_HSIRDYF   HSIRDYF              // 1 bits @ 3
#define RCC_CIFR_2_MSIRDYF   MSIRDYF              // 1 bits @ 2
#define RCC_CIFR_2_HSERDYF   HSERDYF              // 1 bits @ 4
#define RCC_CIFR_2_PLLRDYF   PLLRDYF              // 1 bits @ 5
#define RCC_CIFR_2_PLLSAI1RDYF PLLSAI1RDYF          // 1 bits @ 6
#define RCC_CR_0_MSIPLLEN    MSIPLLEN             // 1 bits @ 2
#define RCC_CR_1_MSION       MSION                // 1 bits @ 0
#define RCC_CR_1_HSIASFS     HSIASFS              // 1 bits @ 11
#define RCC_CR_2_HSIRDY      HSIRDY               // 1 bits @ 10
#define RCC_CR_2_PLLSAI1ON   PLLSAI1ON            // 1 bits @ 26
#define RCC_CR_2_PLLSAI1RDY  PLLSAI1RDY           // 1 bits @ 27
#define RCC_CR_3
#define RCC_CSR_2_MSISRANGE  MSISRANGE            // 4 bits @ 8
#define RCC_CSR_2_BORRSTF    BORRSTF              // 1 bits @ 27
#define RCC_ICSCR_2
#define RCC_PLLCFGR_1_PLLQEN PLLQEN               // 1 bits @ 20
#define RCC_PLLCFGR_1_PLLR   PLLR                 // 2 bits @ 25
#define RCC_PLLCFGR_2
#define RCC_PLLSAI1CFGR
#define RCC_MAP3_PLLCFGR     PLLCFGR_TypeDef PLLCFGR
#define RCC_MAP5_PLLSAI1CFGR PLLSAI1CFGR_TypeDef PLLSAI1CFGR
#define RCC_MAP5_CIER        CIER_TypeDef CIER
#define RCC_MAP4_CIFR        CIFR_TypeDef CIFR
#define RCC_MAP5_CICR        CICR_TypeDef CICR
#define RCC_MAP4_AHB1RSTR    AHB1RSTR_TypeDef AHB1RSTR
#define RCC_MAP4_AHB2RSTR    AHB2RSTR_TypeDef AHB2RSTR
#define RCC_MAP5_AHB3RSTR    AHB3RSTR_TypeDef AHB3RSTR
#define RCC_MAP2_APB1RSTR1   APB1RSTR1_TypeDef APB1RSTR1
#define RCC_MAP2_APB1RSTR2   APB1RSTR2_TypeDef APB1RSTR2
#define RCC_MAP4_APB2RSTR    APB2RSTR_TypeDef APB2RSTR
#define RCC_MAP2_AHB1ENR     AHB1ENR_TypeDef AHB1ENR
#define RCC_MAP2_AHB2ENR     AHB2ENR_TypeDef AHB2ENR
#define RCC_MAP3_AHB3ENR     AHB3ENR_TypeDef AHB3ENR
#define RCC_MAP2_APB1ENR1    APB1ENR1_TypeDef APB1ENR1
#define RCC_MAP0_APB1ENR2    APB1ENR2_TypeDef APB1ENR2
#define RCC_MAP2_APB2ENR     APB2ENR_TypeDef APB2ENR
#define RCC_MAP1_AHB1SMENR   AHB1SMENR_TypeDef AHB1SMENR
#define RCC_MAP0_AHB2SMENR   AHB2SMENR_TypeDef AHB2SMENR
#define RCC_MAP0_AHB3SMENR   AHB3SMENR_TypeDef AHB3SMENR
#define RCC_MAP0_APB1SMENR1  APB1SMENR1_TypeDef APB1SMENR1
#define RCC_MAP1_APB1SMENR2  APB1SMENR2_TypeDef APB1SMENR2
#define RCC_MAP1_APB2SMENR   APB2SMENR_TypeDef APB2SMENR
#define RCC_MAP2_CCIPR       CCIPR_TypeDef CCIPR
#define RCC_MAP3_BDCR        BDCR_TypeDef BDCR
#define RCC_MAP3_CSR         CSR_TypeDef CSR
#else
#define RCC_AHB1ENR_1_FLASHEN
#define RCC_AHB1ENR_1_TSCEN
#define RCC_AHB1RSTR_0_TSCRST
#define RCC_AHB1RSTR_1_FLASHRST
#define RCC_AHB2ENR_0_GPIOCEN
#define RCC_AHB2ENR_0_ADCEN
#define RCC_AHB2ENR_1_GPIOAEN
#define RCC_AHB2ENR_1_GPIOBEN
#define RCC_AHB2ENR_1_GPIOHEN
#define RCC_AHB2ENR_1_RNGEN
#define RCC_AHB2RSTR_0_GPIOCRST
#define RCC_AHB2RSTR_0_ADCRST
#define RCC_AHB2RSTR_1_GPIOARST
#define RCC_AHB2RSTR_1_GPIOBRST
#define RCC_AHB2RSTR_1_GPIOHRST
#define RCC_AHB2RSTR_1_RNGRST
#define RCC_APB2ENR_2_SAI1EN
#define RCC_APB2RSTR_2_SAI1RST
#define RCC_APB2SMENR_0_TIM1SMEN
#define RCC_APB2SMENR_0_TIM15SMEN
#define RCC_APB2SMENR_0_TIM16SMEN
#define RCC_APB2SMENR_0_SAI1SMEN
#define RCC_BDCR_0_LSCOEN
#define RCC_BDCR_0_LSCOSEL
#define RCC_CCIPR_0_LPTIM2SEL
#define RCC_CCIPR_0_ADCSEL
#define RCC_CICR_1_HSIRDYC
#define RCC_CICR_2_MSIRDYC
#define RCC_CICR_2_HSERDYC
#define RCC_CICR_2_PLLRDYC
#define RCC_CICR_2_PLLSAI1RDYC
#define RCC_CIER_1_HSIRDYIE
#define RCC_CIER_2_MSIRDYIE
#define RCC_CIER_2_HSERDYIE
#define RCC_CIER_2_PLLRDYIE
#define RCC_CIER_2_PLLSAI1RDYIE
#define RCC_CIFR_1_HSIRDYF
#define RCC_CIFR_2_MSIRDYF
#define RCC_CIFR_2_HSERDYF
#define RCC_CIFR_2_PLLRDYF
#define RCC_CIFR_2_PLLSAI1RDYF
#define RCC_CR_0_MSIPLLEN
#define RCC_CR_1_MSION
#define RCC_CR_1_HSIASFS
#define RCC_CR_2_HSIRDY
#define RCC_CR_2_PLLSAI1ON
#define RCC_CR_2_PLLSAI1RDY
#define RCC_CSR_2_MSISRANGE
#define RCC_CSR_2_BORRSTF
#define RCC_PLLCFGR_1_PLLQEN
#define RCC_PLLCFGR_1_PLLR
#define RCC_MAP3_PLLCFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP5_PLLSAI1CFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP5_CIER __SOOL_PERIPH_PADDING_4
#define RCC_MAP4_CIFR __SOOL_PERIPH_PADDING_4
#define RCC_MAP5_CICR __SOOL_PERIPH_PADDING_4
#define RCC_MAP4_AHB1RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP4_AHB2RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP5_AHB3RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB1RSTR1 __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB1RSTR2 __SOOL_PERIPH_PADDING_4
#define RCC_MAP4_APB2RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_AHB1ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_AHB2ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_AHB3ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB1ENR1 __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1ENR2 __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB2ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_AHB1SMENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB2SMENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB3SMENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1SMENR1 __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_APB1SMENR2 __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_APB2SMENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_CCIPR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_BDCR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_CSR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_AHB1ENR_1_DMA2DEN DMA2DEN              // 1 bits @ 17
#define RCC_AHB1RSTR_1_DMA2DRST DMA2DRST             // 1 bits @ 17
#define RCC_AHB1SMENR_DMA2DSMEN DMA2DSMEN            // 1 bits @ 17
#define RCC_AHB2ENR_0_GPIOIEN GPIOIEN              // 1 bits @ 8
#define RCC_AHB2ENR_1_DCMIEN DCMIEN               // 1 bits @ 14
#define RCC_AHB2RSTR_0_GPIOIRST GPIOIRST             // 1 bits @ 8
#define RCC_AHB2RSTR_1_DCMIRST DCMIRST              // 1 bits @ 14
#define RCC_AHB2SMENR_GPIOISMEN GPIOISMEN            // 1 bits @ 8
#define RCC_AHB2SMENR_DCMISMEN DCMISMEN             // 1 bits @ 14
#define RCC_PLLSAI2CFGR_PLLSAI2PDIV PLLSAI2PDIV          // 5 bits @ 27
#else
#define RCC_AHB1ENR_1_DMA2DEN
#define RCC_AHB1RSTR_1_DMA2DRST
#define RCC_AHB1SMENR_DMA2DSMEN
#define RCC_AHB2ENR_0_GPIOIEN
#define RCC_AHB2ENR_1_DCMIEN
#define RCC_AHB2RSTR_0_GPIOIRST
#define RCC_AHB2RSTR_1_DCMIRST
#define RCC_AHB2SMENR_GPIOISMEN
#define RCC_AHB2SMENR_DCMISMEN
#define RCC_PLLSAI2CFGR_PLLSAI2PDIV
#endif

#if defined(STM32L4R7xx ) || defined(STM32L4R9xx ) || defined(STM32L4S7xx ) || defined(STM32L4S9xx )
#define RCC_AHB1ENR_1_GFXMMUEN GFXMMUEN             // 1 bits @ 18
#define RCC_AHB1RSTR_0_GFXMMURST GFXMMURST            // 1 bits @ 18
#define RCC_AHB1SMENR_GFXMMUSMEN GFXMMUSMEN           // 1 bits @ 18
#define RCC_APB2SMENR_0_LTDCSMEN LTDCSMEN             // 1 bits @ 26
#else
#define RCC_AHB1ENR_1_GFXMMUEN
#define RCC_AHB1RSTR_0_GFXMMURST
#define RCC_AHB1SMENR_GFXMMUSMEN
#define RCC_APB2SMENR_0_LTDCSMEN
#endif

#if defined(STM32F7     )
#define RCC_AHB1ENR_1_DTCMRAMEN DTCMRAMEN            // 1 bits @ 20
#define RCC_AHB1LPENR_0_AXILPEN AXILPEN              // 1 bits @ 13
#define RCC_AHB1LPENR_0_DTCMLPEN DTCMLPEN             // 1 bits @ 20
#define RCC_APB2ENR_2_SDMMC1EN SDMMC1EN             // 1 bits @ 11
#define RCC_APB2LPENR_1_SDMMC1LPEN SDMMC1LPEN           // 1 bits @ 11
#define RCC_APB2RSTR_2_SDMMC1RST SDMMC1RST            // 1 bits @ 11
#define RCC_DCKCFGR1
#define RCC_DCKCFGR2_0_USART1SEL USART1SEL            // 2 bits @ 0
#define RCC_DCKCFGR2_0_USART2SEL USART2SEL            // 2 bits @ 2
#define RCC_DCKCFGR2_0_USART3SEL USART3SEL            // 2 bits @ 4
#define RCC_DCKCFGR2_0_UART4SEL UART4SEL             // 2 bits @ 6
#define RCC_DCKCFGR2_0_UART5SEL UART5SEL             // 2 bits @ 8
#define RCC_DCKCFGR2_0_USART6SEL USART6SEL            // 2 bits @ 10
#define RCC_DCKCFGR2_0_UART7SEL UART7SEL             // 2 bits @ 12
#define RCC_DCKCFGR2_0_UART8SEL UART8SEL             // 2 bits @ 14
#define RCC_DCKCFGR2_0_I2C1SEL I2C1SEL              // 2 bits @ 16
#define RCC_DCKCFGR2_0_I2C2SEL I2C2SEL              // 2 bits @ 18
#define RCC_DCKCFGR2_0_I2C3SEL I2C3SEL              // 2 bits @ 20
#define RCC_DCKCFGR2_1
#define RCC_MAP1_DCKCFGR1    DCKCFGR1_TypeDef DCKCFGR1
#define RCC_MAP1_DCKCFGR2    DCKCFGR2_TypeDef DCKCFGR2
#else
#define RCC_AHB1ENR_1_DTCMRAMEN
#define RCC_AHB1LPENR_0_AXILPEN
#define RCC_AHB1LPENR_0_DTCMLPEN
#define RCC_APB2ENR_2_SDMMC1EN
#define RCC_APB2LPENR_1_SDMMC1LPEN
#define RCC_APB2RSTR_2_SDMMC1RST
#define RCC_DCKCFGR2_0_USART1SEL
#define RCC_DCKCFGR2_0_USART2SEL
#define RCC_DCKCFGR2_0_USART3SEL
#define RCC_DCKCFGR2_0_UART4SEL
#define RCC_DCKCFGR2_0_UART5SEL
#define RCC_DCKCFGR2_0_USART6SEL
#define RCC_DCKCFGR2_0_UART7SEL
#define RCC_DCKCFGR2_0_UART8SEL
#define RCC_DCKCFGR2_0_I2C1SEL
#define RCC_DCKCFGR2_0_I2C2SEL
#define RCC_DCKCFGR2_0_I2C3SEL
#define RCC_MAP1_DCKCFGR1 __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_DCKCFGR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     )
#define RCC_AHB1LPENR
#define RCC_APB2ENR_1_USART1EN USART1EN             // 1 bits @ 4
#define RCC_APB2ENR_2_TIM1EN TIM1EN               // 1 bits @ 0
#define RCC_APB2LPENR_0_TIM1LPEN TIM1LPEN             // 1 bits @ 0
#define RCC_APB2LPENR_0_USART1LPEN USART1LPEN           // 1 bits @ 4
#define RCC_APB2RSTR_1_USART1RST USART1RST            // 1 bits @ 4
#define RCC_APB2RSTR_2_TIM1RST TIM1RST              // 1 bits @ 0
#define RCC_PLLCFGR_0
#define RCC_MAP1_BDCR        BDCR_TypeDef BDCR
#define RCC_MAP1_CSR         CSR_TypeDef CSR
#else
#define RCC_APB2ENR_1_USART1EN
#define RCC_APB2ENR_2_TIM1EN
#define RCC_APB2LPENR_0_TIM1LPEN
#define RCC_APB2LPENR_0_USART1LPEN
#define RCC_APB2RSTR_1_USART1RST
#define RCC_APB2RSTR_2_TIM1RST
#define RCC_MAP1_BDCR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_CSR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_AHB1LPENR_0_SRAM2LPEN SRAM2LPEN            // 1 bits @ 17
#else
#define RCC_AHB1LPENR_0_SRAM2LPEN
#endif

#if defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx )
#define RCC_AHB1LPENR_0_SRAM3LPEN SRAM3LPEN            // 1 bits @ 19
#else
#define RCC_AHB1LPENR_0_SRAM3LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )
#define RCC_AHB2ENR
#define RCC_AHB2RSTR
#endif

#if defined(STM32F207xx ) || defined(STM32F217xx ) || defined(STM32F407xx ) || defined(STM32F417xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || \
    defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || \
    defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32H7     )
#define RCC_AHB2ENR_0_DCMIEN DCMIEN               // 1 bits @ 0
#define RCC_AHB2LPENR_0_DCMILPEN DCMILPEN             // 1 bits @ 0
#define RCC_AHB2RSTR_0_DCMIRST DCMIRST              // 1 bits @ 0
#else
#define RCC_AHB2ENR_0_DCMIEN
#define RCC_AHB2LPENR_0_DCMILPEN
#define RCC_AHB2RSTR_0_DCMIRST
#endif

#if defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx )
#define RCC_AHB2ENR_0_JPEGEN JPEGEN               // 1 bits @ 1
#define RCC_AHB2LPENR_0_JPEGLPEN JPEGLPEN             // 1 bits @ 1
#define RCC_AHB2RSTR_0_JPEGRST JPEGRST              // 1 bits @ 1
#else
#define RCC_AHB2ENR_0_JPEGEN
#define RCC_AHB2LPENR_0_JPEGLPEN
#define RCC_AHB2RSTR_0_JPEGRST
#endif

#if defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || \
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_AHB2ENR_0_GPIODEN GPIODEN              // 1 bits @ 3
#define RCC_AHB2ENR_2
#define RCC_AHB2RSTR_0_GPIODRST GPIODRST             // 1 bits @ 3
#define RCC_AHB2RSTR_2
#define RCC_AHB2SMENR_GPIODSMEN GPIODSMEN            // 1 bits @ 3
#define RCC_AHB2SMENR_GPIOESMEN GPIOESMEN            // 1 bits @ 4
#define RCC_APB1ENR1_0_SPI2EN SPI2EN               // 1 bits @ 14
#define RCC_APB1ENR1_0_USART3EN USART3EN             // 1 bits @ 18
#define RCC_APB1ENR1_0_I2C2EN I2C2EN               // 1 bits @ 22
#define RCC_APB1RSTR1_0_SPI2RST SPI2RST              // 1 bits @ 14
#define RCC_APB1RSTR1_0_USART3RST USART3RST            // 1 bits @ 18
#define RCC_APB1RSTR1_0_I2C2RST I2C2RST              // 1 bits @ 22
#define RCC_APB1SMENR1_0_SPI2SMEN SPI2SMEN             // 1 bits @ 14
#define RCC_APB1SMENR1_0_USART3SMEN USART3SMEN           // 1 bits @ 18
#define RCC_APB1SMENR1_0_I2C2SMEN I2C2SMEN             // 1 bits @ 22
#define RCC_CCIPR_0_USART3SEL USART3SEL            // 2 bits @ 4
#define RCC_CCIPR_0_I2C2SEL  I2C2SEL              // 2 bits @ 14
#else
#define RCC_AHB2ENR_0_GPIODEN
#define RCC_AHB2RSTR_0_GPIODRST
#define RCC_AHB2SMENR_GPIODSMEN
#define RCC_AHB2SMENR_GPIOESMEN
#define RCC_APB1ENR1_0_SPI2EN
#define RCC_APB1ENR1_0_USART3EN
#define RCC_APB1ENR1_0_I2C2EN
#define RCC_APB1RSTR1_0_SPI2RST
#define RCC_APB1RSTR1_0_USART3RST
#define RCC_APB1RSTR1_0_I2C2RST
#define RCC_APB1SMENR1_0_SPI2SMEN
#define RCC_APB1SMENR1_0_USART3SMEN
#define RCC_APB1SMENR1_0_I2C2SMEN
#define RCC_CCIPR_0_USART3SEL
#define RCC_CCIPR_0_I2C2SEL
#endif

#if defined(STM32F215xx ) || defined(STM32F217xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F479xx ) || defined(STM32F756xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32H7     )
#define RCC_AHB2ENR_0_CRYPEN CRYPEN               // 1 bits @ 4
#define RCC_AHB2ENR_0_HASHEN HASHEN               // 1 bits @ 5
#define RCC_AHB2LPENR_0_CRYPLPEN CRYPLPEN             // 1 bits @ 4
#define RCC_AHB2LPENR_0_HASHLPEN HASHLPEN             // 1 bits @ 5
#define RCC_AHB2RSTR_0_CRYPRST CRYPRST              // 1 bits @ 4
#define RCC_AHB2RSTR_0_HASHRST HASHRST              // 1 bits @ 5
#else
#define RCC_AHB2ENR_0_CRYPEN
#define RCC_AHB2ENR_0_HASHEN
#define RCC_AHB2LPENR_0_CRYPLPEN
#define RCC_AHB2LPENR_0_HASHLPEN
#define RCC_AHB2RSTR_0_CRYPRST
#define RCC_AHB2RSTR_0_HASHRST
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     )
#define RCC_AHB2ENR_0_RNGEN  RNGEN                // 1 bits @ 6
#define RCC_AHB2LPENR_0_RNGLPEN RNGLPEN              // 1 bits @ 6
#define RCC_AHB2RSTR_0_RNGRST RNGRST               // 1 bits @ 6
#else
#define RCC_AHB2ENR_0_RNGEN
#define RCC_AHB2LPENR_0_RNGLPEN
#define RCC_AHB2RSTR_0_RNGRST
#endif

#if defined(STM32L442xx ) || defined(STM32L443xx ) || defined(STM32L462xx ) || defined(STM32L485xx ) || \
    defined(STM32L486xx ) || defined(STM32L4A6xx ) || defined(STM32L4S5xx ) || defined(STM32L4S7xx ) || \
    defined(STM32L4S9xx )
#define RCC_AHB2ENR_0_AESEN  AESEN                // 1 bits @ 16
#define RCC_AHB2RSTR_0_AESRST AESRST               // 1 bits @ 16
#define RCC_AHB2SMENR_AESSMEN AESSMEN              // 1 bits @ 16
#else
#define RCC_AHB2ENR_0_AESEN
#define RCC_AHB2RSTR_0_AESRST
#define RCC_AHB2SMENR_AESSMEN
#endif

#if defined(STM32F423xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) || defined(STM32L4     ) || \
    defined(STM32L4P    )
#define RCC_AHB2ENR_1
#define RCC_AHB2RSTR_1
#endif

#if defined(STM32F423xx ) || defined(STM32F732xx ) || defined(STM32F733xx )
#define RCC_AHB2ENR_1_AESEN  AESEN                // 1 bits @ 4
#define RCC_AHB2LPENR_1_AESLPEN AESLPEN              // 1 bits @ 4
#define RCC_AHB2RSTR_1_AESRST AESRST               // 1 bits @ 4
#else
#define RCC_AHB2ENR_1_AESEN
#define RCC_AHB2LPENR_1_AESLPEN
#define RCC_AHB2RSTR_1_AESRST
#endif

#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || \
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_AHB2ENR_1_GPIOFEN GPIOFEN              // 1 bits @ 5
#define RCC_AHB2ENR_1_GPIOGEN GPIOGEN              // 1 bits @ 6
#define RCC_AHB2ENR_1_OTGFSEN OTGFSEN              // 1 bits @ 12
#define RCC_AHB2RSTR_1_GPIOFRST GPIOFRST             // 1 bits @ 5
#define RCC_AHB2RSTR_1_GPIOGRST GPIOGRST             // 1 bits @ 6
#define RCC_AHB2RSTR_1_OTGFSRST OTGFSRST             // 1 bits @ 12
#define RCC_AHB2SMENR_GPIOFSMEN GPIOFSMEN            // 1 bits @ 5
#define RCC_AHB2SMENR_GPIOGSMEN GPIOGSMEN            // 1 bits @ 6
#define RCC_AHB2SMENR_OTGFSSMEN OTGFSSMEN            // 1 bits @ 12
#define RCC_AHB3SMENR_0_FMCSMEN FMCSMEN              // 1 bits @ 0
#define RCC_APB1ENR1_0_TIM4EN TIM4EN               // 1 bits @ 2
#define RCC_APB1ENR1_0_TIM5EN TIM5EN               // 1 bits @ 3
#define RCC_APB1ENR1_0_UART5EN UART5EN              // 1 bits @ 20
#define RCC_APB1RSTR1_0_TIM4RST TIM4RST              // 1 bits @ 2
#define RCC_APB1RSTR1_0_TIM5RST TIM5RST              // 1 bits @ 3
#define RCC_APB1RSTR1_0_UART5RST UART5RST             // 1 bits @ 20
#define RCC_APB1SMENR1_0_TIM4SMEN TIM4SMEN             // 1 bits @ 2
#define RCC_APB1SMENR1_0_TIM5SMEN TIM5SMEN             // 1 bits @ 3
#define RCC_APB1SMENR1_0_UART5SMEN UART5SMEN            // 1 bits @ 20
#define RCC_APB2ENR_3_SAI2EN SAI2EN               // 1 bits @ 22
#define RCC_APB2RSTR_3_SAI2RST SAI2RST              // 1 bits @ 22
#define RCC_APB2SMENR_0_TIM8SMEN TIM8SMEN             // 1 bits @ 13
#define RCC_APB2SMENR_0_TIM17SMEN TIM17SMEN            // 1 bits @ 18
#define RCC_APB2SMENR_2
#define RCC_CCIPR_0_UART5SEL UART5SEL             // 2 bits @ 8
#define RCC_CICR_3
#define RCC_CIER_3
#define RCC_CIFR_3
#define RCC_CR_3_PLLSAI2ON   PLLSAI2ON            // 1 bits @ 28
#define RCC_CR_3_PLLSAI2RDY  PLLSAI2RDY           // 1 bits @ 29
#define RCC_PLLSAI2CFGR
#define RCC_MAP4_PLLSAI2CFGR PLLSAI2CFGR_TypeDef PLLSAI2CFGR
#else
#define RCC_AHB2ENR_1_GPIOFEN
#define RCC_AHB2ENR_1_GPIOGEN
#define RCC_AHB2ENR_1_OTGFSEN
#define RCC_AHB2RSTR_1_GPIOFRST
#define RCC_AHB2RSTR_1_GPIOGRST
#define RCC_AHB2RSTR_1_OTGFSRST
#define RCC_AHB2SMENR_GPIOFSMEN
#define RCC_AHB2SMENR_GPIOGSMEN
#define RCC_AHB2SMENR_OTGFSSMEN
#define RCC_AHB3SMENR_0_FMCSMEN
#define RCC_APB1ENR1_0_TIM4EN
#define RCC_APB1ENR1_0_TIM5EN
#define RCC_APB1ENR1_0_UART5EN
#define RCC_APB1RSTR1_0_TIM4RST
#define RCC_APB1RSTR1_0_TIM5RST
#define RCC_APB1RSTR1_0_UART5RST
#define RCC_APB1SMENR1_0_TIM4SMEN
#define RCC_APB1SMENR1_0_TIM5SMEN
#define RCC_APB1SMENR1_0_UART5SMEN
#define RCC_APB2ENR_3_SAI2EN
#define RCC_APB2RSTR_3_SAI2RST
#define RCC_APB2SMENR_0_TIM8SMEN
#define RCC_APB2SMENR_0_TIM17SMEN
#define RCC_CCIPR_0_UART5SEL
#define RCC_CR_3_PLLSAI2ON
#define RCC_CR_3_PLLSAI2RDY
#define RCC_MAP4_PLLSAI2CFGR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L4A6xx ) || defined(STM32L4S5xx ) || defined(STM32L4S7xx ) || defined(STM32L4S9xx )
#define RCC_AHB2ENR_1_HASHEN HASHEN               // 1 bits @ 17
#define RCC_AHB2RSTR_1_HASHRST HASHRST              // 1 bits @ 17
#define RCC_AHB2SMENR_HASHSMEN HASHSMEN             // 1 bits @ 17
#else
#define RCC_AHB2ENR_1_HASHEN
#define RCC_AHB2RSTR_1_HASHRST
#define RCC_AHB2SMENR_HASHSMEN
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     )
#define RCC_AHB2LPENR
#endif

#if defined(STM32F423xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) || defined(STM32H7     )
#define RCC_AHB2LPENR_1
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_AHB3ENR
#define RCC_AHB3RSTR
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4P    )
#define RCC_AHB3ENR_0
#define RCC_AHB3RSTR_0
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx )
#define RCC_AHB3ENR_0_FSMCEN FSMCEN               // 1 bits @ 0
#define RCC_AHB3LPENR_0_FSMCLPEN FSMCLPEN             // 1 bits @ 0
#define RCC_AHB3RSTR_0_FSMCRST FSMCRST              // 1 bits @ 0
#else
#define RCC_AHB3ENR_0_FSMCEN
#define RCC_AHB3LPENR_0_FSMCLPEN
#define RCC_AHB3RSTR_0_FSMCRST
#endif

#if defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     )
#define RCC_AHB3ENR_0_QSPIEN QSPIEN               // 1 bits @ 1
#define RCC_AHB3LPENR_0_QSPILPEN QSPILPEN             // 1 bits @ 1
#define RCC_AHB3RSTR_0_QSPIRST QSPIRST              // 1 bits @ 1
#else
#define RCC_AHB3ENR_0_QSPIEN
#define RCC_AHB3LPENR_0_QSPILPEN
#define RCC_AHB3RSTR_0_QSPIRST
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )
#define RCC_AHB3ENR_1
#define RCC_AHB3RSTR_1
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || \
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_AHB3ENR_1_FMCEN  FMCEN                // 1 bits @ 0
#define RCC_AHB3RSTR_1_FMCRST FMCRST               // 1 bits @ 0
#else
#define RCC_AHB3ENR_1_FMCEN
#define RCC_AHB3RSTR_1_FMCRST
#endif

#if defined(STM32H7     ) || defined(STM32L4     )
#define RCC_AHB3ENR_2
#define RCC_AHB3RSTR_2
#endif

#if defined(STM32L4     )
#define RCC_AHB3ENR_2_QSPIEN QSPIEN               // 1 bits @ 8
#define RCC_AHB3RSTR_2_QSPIRST QSPIRST              // 1 bits @ 8
#define RCC_AHB3SMENR_0_QSPISMEN QSPISMEN             // 1 bits @ 8
#define RCC_CCIPR_0_SAI1SEL  SAI1SEL              // 2 bits @ 22
#define RCC_PLLCFGR_2_PLLM   PLLM                 // 3 bits @ 4
#else
#define RCC_AHB3ENR_2_QSPIEN
#define RCC_AHB3RSTR_2_QSPIRST
#define RCC_AHB3SMENR_0_QSPISMEN
#define RCC_CCIPR_0_SAI1SEL
#define RCC_PLLCFGR_2_PLLM
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32H7     )
#define RCC_AHB3LPENR
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     )
#define RCC_AHB3LPENR_0
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     )
#define RCC_AHB3LPENR_1
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_AHB3LPENR_1_FMCLPEN FMCLPEN              // 1 bits @ 0
#define RCC_CIR_2_PLLSAIRDYF PLLSAIRDYF           // 1 bits @ 6
#define RCC_CIR_2_PLLSAIRDYIE PLLSAIRDYIE          // 1 bits @ 14
#define RCC_CIR_2_PLLSAIRDYC PLLSAIRDYC           // 1 bits @ 22
#define RCC_CR_1_PLLSAION    PLLSAION             // 1 bits @ 28
#define RCC_CR_1_PLLSAIRDY   PLLSAIRDY            // 1 bits @ 29
#define RCC_PLLSAICFGR
#define RCC_MAP0_PLLSAICFGR  PLLSAICFGR_TypeDef PLLSAICFGR
#else
#define RCC_AHB3LPENR_1_FMCLPEN
#define RCC_CIR_2_PLLSAIRDYF
#define RCC_CIR_2_PLLSAIRDYIE
#define RCC_CIR_2_PLLSAIRDYC
#define RCC_CR_1_PLLSAION
#define RCC_CR_1_PLLSAIRDY
#define RCC_MAP0_PLLSAICFGR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) || \
    defined(STM32L1     )
#define RCC_AHBENR
#define RCC_CFGR_0_PLLMUL    PLLMUL               // 4 bits @ 18
#else
#define RCC_CFGR_0_PLLMUL
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) || \
    defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || \
    defined(STM32L162xE )
#define RCC_AHBENR_0
#endif

#if defined(STM32F0     ) || defined(STM32L0     )
#define RCC_AHBENR_0_DMAEN   DMAEN                // 1 bits @ 0
#define RCC_APB2ENR_0_ADCEN  ADCEN                // 1 bits @ 9
#define RCC_APB2ENR_0_DBGMCUEN DBGMCUEN             // 1 bits @ 22
#define RCC_APB2RSTR_0_ADCRST ADCRST               // 1 bits @ 9
#define RCC_APB2RSTR_0_DBGMCURST DBGMCURST            // 1 bits @ 22
#else
#define RCC_AHBENR_0_DMAEN
#define RCC_APB2ENR_0_ADCEN
#define RCC_APB2ENR_0_DBGMCUEN
#define RCC_APB2RSTR_0_ADCRST
#define RCC_APB2RSTR_0_DBGMCURST
#endif

#if defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xE ) || defined(STM32F101xE ) || \
    defined(STM32F101xG ) || defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || \
    defined(STM32F107xC ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || \
    defined(STM32F398xx )
#define RCC_AHBENR_0_DMA2EN  DMA2EN               // 1 bits @ 1
#else
#define RCC_AHBENR_0_DMA2EN
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     )
#define RCC_AHBENR_0_SRAMEN  SRAMEN               // 1 bits @ 2
#define RCC_AHBENR_0_FLITFEN FLITFEN              // 1 bits @ 4
#define RCC_AHBENR_0_CRCEN   CRCEN                // 1 bits @ 6
#define RCC_CFGR_0_PLLXTPRE  PLLXTPRE             // 1 bits @ 17
#define RCC_MAP0_CFGR        CFGR_TypeDef CFGR
#define RCC_MAP0_CIR         CIR_TypeDef CIR
#define RCC_MAP0_APB2RSTR    APB2RSTR_TypeDef APB2RSTR
#define RCC_MAP0_APB1RSTR    APB1RSTR_TypeDef APB1RSTR
#define RCC_MAP0_AHBENR      AHBENR_TypeDef AHBENR
#define RCC_MAP0_APB2ENR     APB2ENR_TypeDef APB2ENR
#define RCC_MAP0_APB1ENR     APB1ENR_TypeDef APB1ENR
#define RCC_MAP0_BDCR        BDCR_TypeDef BDCR
#define RCC_MAP0_CSR         CSR_TypeDef CSR
#else
#define RCC_AHBENR_0_SRAMEN
#define RCC_AHBENR_0_FLITFEN
#define RCC_AHBENR_0_CRCEN
#define RCC_CFGR_0_PLLXTPRE
#define RCC_MAP0_CFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_CIR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB2RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHBENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB2ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_BDCR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_CSR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F302xE ) || defined(STM32F303xE ) || defined(STM32F398xx )
#define RCC_AHBENR_0_FMCEN   FMCEN                // 1 bits @ 5
#define RCC_AHBENR_0_GPIOGEN GPIOGEN              // 1 bits @ 23
#define RCC_AHBENR_1_GPIOHEN GPIOHEN              // 1 bits @ 16
#define RCC_AHBRSTR_0_FMCRST FMCRST               // 1 bits @ 5
#define RCC_AHBRSTR_0_GPIOHRST GPIOHRST             // 1 bits @ 16
#define RCC_AHBRSTR_0_GPIOGRST GPIOGRST             // 1 bits @ 23
#define RCC_APB2ENR_1_SPI4EN SPI4EN               // 1 bits @ 15
#define RCC_APB2RSTR_1_SPI4RST SPI4RST              // 1 bits @ 15
#define RCC_CFGR3_0_TIM2SW   TIM2SW               // 1 bits @ 24
#define RCC_CFGR3_0_TIM34SW  TIM34SW              // 1 bits @ 25
#else
#define RCC_AHBENR_0_FMCEN
#define RCC_AHBENR_0_GPIOGEN
#define RCC_AHBENR_1_GPIOHEN
#define RCC_AHBRSTR_0_FMCRST
#define RCC_AHBRSTR_0_GPIOHRST
#define RCC_AHBRSTR_0_GPIOGRST
#define RCC_APB2ENR_1_SPI4EN
#define RCC_APB2RSTR_1_SPI4RST
#define RCC_CFGR3_0_TIM2SW
#define RCC_CFGR3_0_TIM34SW
#endif

#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG )
#define RCC_AHBENR_0_FSMCEN  FSMCEN               // 1 bits @ 8
#define RCC_APB2ENR_0_IOPGEN IOPGEN               // 1 bits @ 8
#define RCC_APB2ENR_1_IOPFEN IOPFEN               // 1 bits @ 7
#define RCC_APB2RSTR_0_IOPGRST IOPGRST              // 1 bits @ 8
#define RCC_APB2RSTR_1_IOPFRST IOPFRST              // 1 bits @ 7
#else
#define RCC_AHBENR_0_FSMCEN
#define RCC_APB2ENR_0_IOPGEN
#define RCC_APB2ENR_1_IOPFEN
#define RCC_APB2RSTR_0_IOPGRST
#define RCC_APB2RSTR_1_IOPFRST
#endif

#if defined(STM32F103xE ) || defined(STM32F103xG )
#define RCC_AHBENR_0_SDIOEN  SDIOEN               // 1 bits @ 10
#define RCC_APB2ENR_0_ADC3EN ADC3EN               // 1 bits @ 15
#define RCC_APB2RSTR_0_ADC3RST ADC3RST              // 1 bits @ 15
#else
#define RCC_AHBENR_0_SDIOEN
#define RCC_APB2ENR_0_ADC3EN
#define RCC_APB2RSTR_0_ADC3RST
#endif

#if defined(STM32F105xC ) || defined(STM32F107xC )
#define RCC_AHBENR_0_OTGFSEN OTGFSEN              // 1 bits @ 12
#define RCC_AHBRSTR_0_OTGFSRST OTGFSRST             // 1 bits @ 12
#define RCC_CFGR_1_OTGFSPRE  OTGFSPRE             // 1 bits @ 22
#define RCC_CFGR2_0_PREDIV2  PREDIV2              // 4 bits @ 4
#define RCC_CFGR2_0_PLL2MUL  PLL2MUL              // 4 bits @ 8
#define RCC_CFGR2_0_PLL3MUL  PLL3MUL              // 4 bits @ 12
#define RCC_CFGR2_0_PREDIV1SRC PREDIV1SRC           // 1 bits @ 16
#define RCC_CFGR2_0_I2S2SRC  I2S2SRC              // 1 bits @ 17
#define RCC_CFGR2_0_I2S3SRC  I2S3SRC              // 1 bits @ 18
#define RCC_CIR_1
#else
#define RCC_AHBENR_0_OTGFSEN
#define RCC_AHBRSTR_0_OTGFSRST
#define RCC_CFGR_1_OTGFSPRE
#define RCC_CFGR2_0_PREDIV2
#define RCC_CFGR2_0_PLL2MUL
#define RCC_CFGR2_0_PLL3MUL
#define RCC_CFGR2_0_PREDIV1SRC
#define RCC_CFGR2_0_I2S2SRC
#define RCC_CFGR2_0_I2S3SRC
#endif

#if defined(STM32F107xC )
#define RCC_AHBENR_0_ETHMACEN ETHMACEN             // 1 bits @ 14
#define RCC_AHBENR_0_ETHMACTXEN ETHMACTXEN           // 1 bits @ 15
#define RCC_AHBENR_0_ETHMACRXEN ETHMACRXEN           // 1 bits @ 16
#define RCC_AHBRSTR_0_ETHMACRST ETHMACRST            // 1 bits @ 14
#else
#define RCC_AHBENR_0_ETHMACEN
#define RCC_AHBENR_0_ETHMACTXEN
#define RCC_AHBENR_0_ETHMACRXEN
#define RCC_AHBRSTR_0_ETHMACRST
#endif

#if defined(STM32F0     ) || defined(STM32F3     )
#define RCC_AHBENR_0_GPIOAEN GPIOAEN              // 1 bits @ 17
#define RCC_AHBENR_0_GPIOBEN GPIOBEN              // 1 bits @ 18
#define RCC_AHBENR_0_GPIOCEN GPIOCEN              // 1 bits @ 19
#define RCC_AHBENR_0_GPIOFEN GPIOFEN              // 1 bits @ 22
#define RCC_AHBRSTR_0_GPIOARST GPIOARST             // 1 bits @ 17
#define RCC_AHBRSTR_0_GPIOBRST GPIOBRST             // 1 bits @ 18
#define RCC_AHBRSTR_0_GPIOCRST GPIOCRST             // 1 bits @ 19
#define RCC_AHBRSTR_0_GPIOFRST GPIOFRST             // 1 bits @ 22
#define RCC_CFGR2_0_PREDIV   PREDIV               // 4 bits @ 0
#define RCC_CFGR3
#define RCC_MAP0_CFGR3       CFGR3_TypeDef CFGR3
#else
#define RCC_AHBENR_0_GPIOAEN
#define RCC_AHBENR_0_GPIOBEN
#define RCC_AHBENR_0_GPIOCEN
#define RCC_AHBENR_0_GPIOFEN
#define RCC_AHBRSTR_0_GPIOARST
#define RCC_AHBRSTR_0_GPIOBRST
#define RCC_AHBRSTR_0_GPIOCRST
#define RCC_AHBRSTR_0_GPIOFRST
#define RCC_CFGR2_0_PREDIV
#define RCC_MAP0_CFGR3 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) || \
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) || \
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || \
    defined(STM32F3     )
#define RCC_AHBENR_0_GPIODEN GPIODEN              // 1 bits @ 20
#define RCC_AHBRSTR_0_GPIODRST GPIODRST             // 1 bits @ 20
#else
#define RCC_AHBENR_0_GPIODEN
#define RCC_AHBRSTR_0_GPIODRST
#endif

#if defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || \
    defined(STM32F398xx )
#define RCC_AHBENR_0_GPIOEEN GPIOEEN              // 1 bits @ 21
#define RCC_AHBRSTR_0_GPIOERST GPIOERST             // 1 bits @ 21
#define RCC_CFGR3_0_USART2SW USART2SW             // 2 bits @ 16
#else
#define RCC_AHBENR_0_GPIOEEN
#define RCC_AHBRSTR_0_GPIOERST
#define RCC_CFGR3_0_USART2SW
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32F3     )
#define RCC_AHBENR_0_TSCEN   TSCEN                // 1 bits @ 24
#define RCC_AHBRSTR_0_TSCRST TSCRST               // 1 bits @ 24
#else
#define RCC_AHBENR_0_TSCEN
#define RCC_AHBRSTR_0_TSCRST
#endif

#if defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || \
    defined(STM32L162xE )
#define RCC_AHBENR_0_AESEN   AESEN                // 1 bits @ 27
#define RCC_AHBLPENR_AESLPEN AESLPEN              // 1 bits @ 27
#define RCC_AHBRSTR_0_AESRST AESRST               // 1 bits @ 27
#else
#define RCC_AHBENR_0_AESEN
#define RCC_AHBLPENR_AESLPEN
#define RCC_AHBRSTR_0_AESRST
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F318xx )
#define RCC_AHBENR_0_ADC1EN  ADC1EN               // 1 bits @ 28
#define RCC_AHBRSTR_0_ADC1RST ADC1RST              // 1 bits @ 28
#define RCC_CFGR2_1_ADC1PRES ADC1PRES             // 5 bits @ 4
#else
#define RCC_AHBENR_0_ADC1EN
#define RCC_AHBRSTR_0_ADC1RST
#define RCC_CFGR2_1_ADC1PRES
#endif

#if defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || \
    defined(STM32F398xx )
#define RCC_AHBENR_0_ADC34EN ADC34EN              // 1 bits @ 29
#define RCC_AHBRSTR_0_ADC34RST ADC34RST             // 1 bits @ 29
#else
#define RCC_AHBENR_0_ADC34EN
#define RCC_AHBRSTR_0_ADC34RST
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) || \
    defined(STM32L1     )
#define RCC_AHBENR_1
#endif

#if defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     )
#define RCC_AHBENR_1_DMA1EN  DMA1EN               // 1 bits @ 0
#else
#define RCC_AHBENR_1_DMA1EN
#endif

#if defined(STM32L1     )
#define RCC_AHBENR_1_GPIOBEN GPIOBEN              // 1 bits @ 1
#define RCC_AHBENR_1_GPIOCEN GPIOCEN              // 1 bits @ 2
#define RCC_AHBENR_1_GPIODEN GPIODEN              // 1 bits @ 3
#define RCC_AHBENR_1_FLITFEN FLITFEN              // 1 bits @ 15
#define RCC_AHBENR_2_GPIOAEN GPIOAEN              // 1 bits @ 0
#define RCC_AHBENR_2_GPIOHEN GPIOHEN              // 1 bits @ 5
#define RCC_AHBENR_3
#define RCC_AHBLPENR
#define RCC_AHBRSTR_0_FLITFRST FLITFRST             // 1 bits @ 15
#define RCC_AHBRSTR_1_GPIOBRST GPIOBRST             // 1 bits @ 1
#define RCC_AHBRSTR_1_GPIOCRST GPIOCRST             // 1 bits @ 2
#define RCC_AHBRSTR_1_GPIODRST GPIODRST             // 1 bits @ 3
#define RCC_AHBRSTR_1_GPIOHRST GPIOHRST             // 1 bits @ 5
#define RCC_AHBRSTR_2
#define RCC_APB1ENR_1_COMPEN COMPEN               // 1 bits @ 31
#define RCC_APB1LPENR_1_USBLPEN USBLPEN              // 1 bits @ 23
#define RCC_APB1LPENR_1_COMPLPEN COMPLPEN             // 1 bits @ 31
#define RCC_APB1RSTR_1_COMPRST COMPRST              // 1 bits @ 31
#define RCC_APB2ENR_2_TIM9EN TIM9EN               // 1 bits @ 2
#define RCC_APB2ENR_2_TIM10EN TIM10EN              // 1 bits @ 3
#define RCC_APB2ENR_2_TIM11EN TIM11EN              // 1 bits @ 4
#define RCC_APB2LPENR_1_SYSCFGLPEN SYSCFGLPEN           // 1 bits @ 0
#define RCC_APB2LPENR_1_TIM9LPEN TIM9LPEN             // 1 bits @ 2
#define RCC_APB2LPENR_1_TIM10LPEN TIM10LPEN            // 1 bits @ 3
#define RCC_APB2LPENR_1_TIM11LPEN TIM11LPEN            // 1 bits @ 4
#define RCC_APB2LPENR_1_ADC1LPEN ADC1LPEN             // 1 bits @ 9
#define RCC_APB2LPENR_1_USART1LPEN USART1LPEN           // 1 bits @ 14
#define RCC_APB2RSTR_2_TIM9RST TIM9RST              // 1 bits @ 2
#define RCC_APB2RSTR_2_TIM10RST TIM10RST             // 1 bits @ 3
#define RCC_APB2RSTR_2_TIM11RST TIM11RST             // 1 bits @ 4
#define RCC_CIR_3
#define RCC_CR_2_CSSON       CSSON                // 1 bits @ 28
#define RCC_CR_2_RTCPRE      RTCPRE               // 2 bits @ 29
#define RCC_CSR_1_RTCEN      RTCEN                // 1 bits @ 22
#define RCC_CSR_3
#define RCC_MAP4_AHBRSTR     AHBRSTR_TypeDef AHBRSTR
#define RCC_MAP3_APB2RSTR    APB2RSTR_TypeDef APB2RSTR
#define RCC_MAP4_APB1RSTR    APB1RSTR_TypeDef APB1RSTR
#define RCC_MAP3_AHBENR      AHBENR_TypeDef AHBENR
#define RCC_MAP4_APB2ENR     APB2ENR_TypeDef APB2ENR
#define RCC_MAP2_APB1ENR     APB1ENR_TypeDef APB1ENR
#define RCC_MAP3_AHBLPENR    AHBLPENR_TypeDef AHBLPENR
#define RCC_MAP3_APB2LPENR   APB2LPENR_TypeDef APB2LPENR
#define RCC_MAP3_APB1LPENR   APB1LPENR_TypeDef APB1LPENR
#define RCC_MAP4_CSR         CSR_TypeDef CSR
#else
#define RCC_AHBENR_1_GPIOBEN
#define RCC_AHBENR_1_GPIOCEN
#define RCC_AHBENR_1_GPIODEN
#define RCC_AHBENR_1_FLITFEN
#define RCC_AHBENR_2_GPIOAEN
#define RCC_AHBENR_2_GPIOHEN
#define RCC_AHBRSTR_0_FLITFRST
#define RCC_AHBRSTR_1_GPIOBRST
#define RCC_AHBRSTR_1_GPIOCRST
#define RCC_AHBRSTR_1_GPIODRST
#define RCC_AHBRSTR_1_GPIOHRST
#define RCC_APB1ENR_1_COMPEN
#define RCC_APB1LPENR_1_USBLPEN
#define RCC_APB1LPENR_1_COMPLPEN
#define RCC_APB1RSTR_1_COMPRST
#define RCC_APB2ENR_2_TIM9EN
#define RCC_APB2ENR_2_TIM10EN
#define RCC_APB2ENR_2_TIM11EN
#define RCC_APB2LPENR_1_SYSCFGLPEN
#define RCC_APB2LPENR_1_TIM9LPEN
#define RCC_APB2LPENR_1_TIM10LPEN
#define RCC_APB2LPENR_1_TIM11LPEN
#define RCC_APB2LPENR_1_ADC1LPEN
#define RCC_APB2LPENR_1_USART1LPEN
#define RCC_APB2RSTR_2_TIM9RST
#define RCC_APB2RSTR_2_TIM10RST
#define RCC_APB2RSTR_2_TIM11RST
#define RCC_CR_2_CSSON
#define RCC_CR_2_RTCPRE
#define RCC_CSR_1_RTCEN
#define RCC_MAP4_AHBRSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_APB2RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP4_APB1RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_AHBENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP4_APB2ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB1ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_AHBLPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_APB2LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_APB1LPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP4_CSR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L151xB ) || defined(STM32L151xBA) || defined(STM32L151xC ) || defined(STM32L151xCA) || \
    defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xB ) || \
    defined(STM32L152xBA) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || \
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || \
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_AHBENR_1_GPIOEEN GPIOEEN              // 1 bits @ 4
#define RCC_AHBLPENR_GPIOELPEN GPIOELPEN            // 1 bits @ 4
#define RCC_AHBRSTR_1_GPIOERST GPIOERST             // 1 bits @ 4
#else
#define RCC_AHBENR_1_GPIOEEN
#define RCC_AHBLPENR_GPIOELPEN
#define RCC_AHBRSTR_1_GPIOERST
#endif

#if defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) || \
    defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || \
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_AHBENR_1_GPIOFEN GPIOFEN              // 1 bits @ 6
#define RCC_AHBENR_1_GPIOGEN GPIOGEN              // 1 bits @ 7
#define RCC_AHBLPENR_GPIOFLPEN GPIOFLPEN            // 1 bits @ 6
#define RCC_AHBLPENR_GPIOGLPEN GPIOGLPEN            // 1 bits @ 7
#define RCC_AHBRSTR_1_GPIOFRST GPIOFRST             // 1 bits @ 6
#define RCC_AHBRSTR_1_GPIOGRST GPIOGRST             // 1 bits @ 7
#else
#define RCC_AHBENR_1_GPIOFEN
#define RCC_AHBENR_1_GPIOGEN
#define RCC_AHBLPENR_GPIOFLPEN
#define RCC_AHBLPENR_GPIOGLPEN
#define RCC_AHBRSTR_1_GPIOFRST
#define RCC_AHBRSTR_1_GPIOGRST
#endif

#if defined(STM32L0     )
#define RCC_AHBENR_1_MIFEN   MIFEN                // 1 bits @ 8
#define RCC_AHBRSTR_0_DMARST DMARST               // 1 bits @ 0
#define RCC_AHBRSTR_0_MIFRST MIFRST               // 1 bits @ 8
#define RCC_AHBRSTR_1_DMA1RST DMA1RST              // 1 bits @ 0
#define RCC_AHBSMENR
#define RCC_APB1ENR_1_LPUART1EN LPUART1EN            // 1 bits @ 18
#define RCC_APB1ENR_2_LPTIM1EN LPTIM1EN             // 1 bits @ 31
#define RCC_APB1RSTR_1_LPUART1RST LPUART1RST           // 1 bits @ 18
#define RCC_APB1RSTR_2_LPTIM1RST LPTIM1RST            // 1 bits @ 31
#define RCC_APB1SMENR
#define RCC_APB2ENR_1_TIM21EN TIM21EN              // 1 bits @ 2
#define RCC_APB2ENR_2_DBGEN  DBGEN                // 1 bits @ 22
#define RCC_APB2ENR_5
#define RCC_APB2RSTR_1_TIM21RST TIM21RST             // 1 bits @ 2
#define RCC_APB2RSTR_2_DBGRST DBGRST               // 1 bits @ 22
#define RCC_APB2SMENR_0_TIM21SMEN TIM21SMEN            // 1 bits @ 2
#define RCC_APB2SMENR_0_ADCSMEN ADCSMEN              // 1 bits @ 9
#define RCC_APB2SMENR_0_DBGSMEN DBGSMEN              // 1 bits @ 22
#define RCC_APB2SMENR_1
#define RCC_CICR_1_PLLRDYC   PLLRDYC              // 1 bits @ 4
#define RCC_CICR_1_MSIRDYC   MSIRDYC              // 1 bits @ 5
#define RCC_CICR_1_CSSLSEC   CSSLSEC              // 1 bits @ 7
#define RCC_CICR_2_LSECSSC   LSECSSC              // 1 bits @ 7
#define RCC_CIER_1_PLLRDYIE  PLLRDYIE             // 1 bits @ 4
#define RCC_CIER_1_MSIRDYIE  MSIRDYIE             // 1 bits @ 5
#define RCC_CIER_1_CSSLSE    CSSLSE               // 1 bits @ 7
#define RCC_CIER_2_LSECSSIE  LSECSSIE             // 1 bits @ 7
#define RCC_CIFR_1_PLLRDYF   PLLRDYF              // 1 bits @ 4
#define RCC_CIFR_1_MSIRDYF   MSIRDYF              // 1 bits @ 5
#define RCC_CIFR_1_CSSLSEF   CSSLSEF              // 1 bits @ 7
#define RCC_CIFR_2_LSECSSF   LSECSSF              // 1 bits @ 7
#define RCC_CR_0_RTCPRE      RTCPRE               // 2 bits @ 20
#define RCC_CR_2_HSIDIVEN    HSIDIVEN             // 1 bits @ 3
#define RCC_CR_2_HSIDIVF     HSIDIVF              // 1 bits @ 4
#define RCC_CSR_0_LSEDRV     LSEDRV               // 2 bits @ 11
#define RCC_CSR_0_LSECSSON   LSECSSON             // 1 bits @ 13
#define RCC_CSR_0_LSECSSD    LSECSSD              // 1 bits @ 14
#define RCC_CSR_0_RTCEN      RTCEN                // 1 bits @ 18
#define RCC_CSR_0_RTCRST     RTCRST               // 1 bits @ 19
#define RCC_CSR_2_OBL        OBL                  // 1 bits @ 25
#define RCC_IOPENR
#define RCC_IOPRSTR
#define RCC_IOPSMENR
#define RCC_MAP2_CFGR        CFGR_TypeDef CFGR
#define RCC_MAP2_CIER        CIER_TypeDef CIER
#define RCC_MAP2_CIFR        CIFR_TypeDef CIFR
#define RCC_MAP3_CICR        CICR_TypeDef CICR
#define RCC_MAP2_IOPRSTR     IOPRSTR_TypeDef IOPRSTR
#define RCC_MAP3_AHBRSTR     AHBRSTR_TypeDef AHBRSTR
#define RCC_MAP2_APB1RSTR    APB1RSTR_TypeDef APB1RSTR
#define RCC_MAP1_IOPENR      IOPENR_TypeDef IOPENR
#define RCC_MAP4_AHBENR      AHBENR_TypeDef AHBENR
#define RCC_MAP3_APB2ENR     APB2ENR_TypeDef APB2ENR
#define RCC_MAP3_APB1ENR     APB1ENR_TypeDef APB1ENR
#define RCC_MAP1_IOPSMENR    IOPSMENR_TypeDef IOPSMENR
#define RCC_MAP2_AHBSMENR    AHBSMENR_TypeDef AHBSMENR
#define RCC_MAP2_APB2SMENR   APB2SMENR_TypeDef APB2SMENR
#define RCC_MAP0_APB1SMENR   APB1SMENR_TypeDef APB1SMENR
#define RCC_MAP1_CCIPR       CCIPR_TypeDef CCIPR
#define RCC_MAP2_CSR         CSR_TypeDef CSR
#else
#define RCC_AHBENR_1_MIFEN
#define RCC_AHBRSTR_0_DMARST
#define RCC_AHBRSTR_0_MIFRST
#define RCC_AHBRSTR_1_DMA1RST
#define RCC_APB1ENR_1_LPUART1EN
#define RCC_APB1ENR_2_LPTIM1EN
#define RCC_APB1RSTR_1_LPUART1RST
#define RCC_APB1RSTR_2_LPTIM1RST
#define RCC_APB2ENR_1_TIM21EN
#define RCC_APB2ENR_2_DBGEN
#define RCC_APB2RSTR_1_TIM21RST
#define RCC_APB2RSTR_2_DBGRST
#define RCC_APB2SMENR_0_TIM21SMEN
#define RCC_APB2SMENR_0_ADCSMEN
#define RCC_APB2SMENR_0_DBGSMEN
#define RCC_CICR_1_PLLRDYC
#define RCC_CICR_1_MSIRDYC
#define RCC_CICR_1_CSSLSEC
#define RCC_CICR_2_LSECSSC
#define RCC_CIER_1_PLLRDYIE
#define RCC_CIER_1_MSIRDYIE
#define RCC_CIER_1_CSSLSE
#define RCC_CIER_2_LSECSSIE
#define RCC_CIFR_1_PLLRDYF
#define RCC_CIFR_1_MSIRDYF
#define RCC_CIFR_1_CSSLSEF
#define RCC_CIFR_2_LSECSSF
#define RCC_CR_0_RTCPRE
#define RCC_CR_2_HSIDIVEN
#define RCC_CR_2_HSIDIVF
#define RCC_CSR_0_LSEDRV
#define RCC_CSR_0_LSECSSON
#define RCC_CSR_0_LSECSSD
#define RCC_CSR_0_RTCEN
#define RCC_CSR_0_RTCRST
#define RCC_CSR_2_OBL
#define RCC_MAP2_CFGR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_CIER __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_CIFR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_CICR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_IOPRSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_AHBRSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB1RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_IOPENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP4_AHBENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_APB2ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP3_APB1ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_IOPSMENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_AHBSMENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_APB2SMENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_APB1SMENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP1_CCIPR __SOOL_PERIPH_PADDING_4
#define RCC_MAP2_CSR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L0     ) || defined(STM32L1     )
#define RCC_AHBENR_1_CRCEN   CRCEN                // 1 bits @ 12
#define RCC_AHBRSTR_1_CRCRST CRCRST               // 1 bits @ 12
#define RCC_CFGR_3_PLLDIV    PLLDIV               // 2 bits @ 22
#define RCC_CR_2_MSION       MSION                // 1 bits @ 8
#define RCC_CR_2_MSIRDY      MSIRDY               // 1 bits @ 9
#define RCC_CSR_0_LSEON      LSEON                // 1 bits @ 8
#define RCC_CSR_0_LSERDY     LSERDY               // 1 bits @ 9
#define RCC_CSR_0_LSEBYP     LSEBYP               // 1 bits @ 10
#define RCC_CSR_0_RTCSEL     RTCSEL               // 2 bits @ 16
#define RCC_ICSCR_1
#else
#define RCC_AHBENR_1_CRCEN
#define RCC_AHBRSTR_1_CRCRST
#define RCC_CFGR_3_PLLDIV
#define RCC_CR_2_MSION
#define RCC_CR_2_MSIRDY
#define RCC_CSR_0_LSEON
#define RCC_CSR_0_LSERDY
#define RCC_CSR_0_LSEBYP
#define RCC_CSR_0_RTCSEL
#endif

#if defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_AHBENR_1_RNGEN   RNGEN                // 1 bits @ 20
#define RCC_AHBENR_2_TSCEN   TSCEN                // 1 bits @ 16
#define RCC_AHBRSTR_1_TSCRST TSCRST               // 1 bits @ 16
#define RCC_AHBRSTR_1_RNGRST RNGRST               // 1 bits @ 20
#define RCC_AHBSMENR_0_TSCSMEN TSCSMEN              // 1 bits @ 16
#define RCC_AHBSMENR_0_RNGSMEN RNGSMEN              // 1 bits @ 20
#define RCC_APB1SMENR_USBSMEN USBSMEN              // 1 bits @ 23
#define RCC_APB1SMENR_CRSSMEN CRSSMEN              // 1 bits @ 27
#define RCC_APB1SMENR_DACSMEN DACSMEN              // 1 bits @ 29
#define RCC_CCIPR_0_HSI48SEL HSI48SEL             // 1 bits @ 26
#define RCC_CCIPR_1
#define RCC_CICR_1_HSI48RDYC HSI48RDYC            // 1 bits @ 6
#define RCC_CIER_1_HSI48RDYIE HSI48RDYIE           // 1 bits @ 6
#define RCC_CIFR_1_HSI48RDYF HSI48RDYF            // 1 bits @ 6
#define RCC_CRRCR_1_HSI48CAL HSI48CAL             // 8 bits @ 8
#else
#define RCC_AHBENR_1_RNGEN
#define RCC_AHBENR_2_TSCEN
#define RCC_AHBRSTR_1_TSCRST
#define RCC_AHBRSTR_1_RNGRST
#define RCC_AHBSMENR_0_TSCSMEN
#define RCC_AHBSMENR_0_RNGSMEN
#define RCC_APB1SMENR_USBSMEN
#define RCC_APB1SMENR_CRSSMEN
#define RCC_APB1SMENR_DACSMEN
#define RCC_CCIPR_0_HSI48SEL
#define RCC_CICR_1_HSI48RDYC
#define RCC_CIER_1_HSI48RDYIE
#define RCC_CIFR_1_HSI48RDYF
#define RCC_CRRCR_1_HSI48CAL
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx )
#define RCC_AHBENR_1_TSEN    TSEN                 // 1 bits @ 24
#else
#define RCC_AHBENR_1_TSEN
#endif

#if defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || \
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || \
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || \
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_AHBENR_1_DMA2EN  DMA2EN               // 1 bits @ 25
#define RCC_AHBLPENR_DMA2LPEN DMA2LPEN             // 1 bits @ 25
#define RCC_AHBRSTR_0_DMA2RST DMA2RST              // 1 bits @ 25
#else
#define RCC_AHBENR_1_DMA2EN
#define RCC_AHBLPENR_DMA2LPEN
#define RCC_AHBRSTR_0_DMA2RST
#endif

#if defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || \
    defined(STM32F398xx )
#define RCC_AHBENR_1_ADC12EN ADC12EN              // 1 bits @ 28
#define RCC_AHBRSTR_1_ADC12RST ADC12RST             // 1 bits @ 28
#define RCC_CFGR2_2
#else
#define RCC_AHBENR_1_ADC12EN
#define RCC_AHBRSTR_1_ADC12RST
#endif

#if defined(STM32L151xD ) || defined(STM32L152xD ) || defined(STM32L162xD )
#define RCC_AHBENR_1_FSMCEN  FSMCEN               // 1 bits @ 30
#define RCC_AHBLPENR_FSMCLPEN FSMCLPEN             // 1 bits @ 30
#define RCC_AHBRSTR_0_FSMCRST FSMCRST              // 1 bits @ 30
#else
#define RCC_AHBENR_1_FSMCEN
#define RCC_AHBLPENR_FSMCLPEN
#define RCC_AHBRSTR_0_FSMCRST
#endif

#if defined(STM32L021xx ) || defined(STM32L041xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || \
    defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L072xx ) || \
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || \
    defined(STM32L1     )
#define RCC_AHBENR_2
#endif

#if defined(STM32L021xx ) || defined(STM32L041xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || \
    defined(STM32L063xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_AHBENR_2_CRYPEN  CRYPEN               // 1 bits @ 24
#define RCC_AHBRSTR_1_CRYPRST CRYPRST              // 1 bits @ 24
#define RCC_AHBSMENR_0_CRYPSMEN CRYPSMEN             // 1 bits @ 24
#else
#define RCC_AHBENR_2_CRYPEN
#define RCC_AHBRSTR_1_CRYPRST
#define RCC_AHBSMENR_0_CRYPSMEN
#endif

#if defined(STM32F0     ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F3     ) || \
    defined(STM32L0     ) || defined(STM32L1     )
#define RCC_AHBRSTR
#endif

#if defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || \
    defined(STM32F398xx ) || defined(STM32L0     ) || defined(STM32L1     )
#define RCC_AHBRSTR_1
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     )
#define RCC_APB1ENR
#define RCC_APB1RSTR
#define RCC_CSR_0_PORRSTF    PORRSTF              // 1 bits @ 27
#else
#define RCC_CSR_0_PORRSTF
#endif

#if defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || \
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F1     ) || \
    defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || \
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L0     ) || \
    defined(STM32L1     )
#define RCC_APB1ENR_0_TIM2EN TIM2EN               // 1 bits @ 0
#define RCC_APB1RSTR_0_TIM2RST TIM2RST              // 1 bits @ 0
#else
#define RCC_APB1ENR_0_TIM2EN
#define RCC_APB1RSTR_0_TIM2RST
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F302xC ) || \
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || \
    defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F401xC ) || defined(STM32F401xE ) || \
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L071xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx ) || defined(STM32L1     )
#define RCC_APB1ENR_0_TIM3EN TIM3EN               // 1 bits @ 1
#define RCC_APB1RSTR_0_TIM3RST TIM3RST              // 1 bits @ 1
#else
#define RCC_APB1ENR_0_TIM3EN
#define RCC_APB1RSTR_0_TIM3RST
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
    defined(STM32F7     ) || defined(STM32L1     )
#define RCC_APB1ENR_0_TIM4EN TIM4EN               // 1 bits @ 2
#define RCC_APB1RSTR_0_TIM4RST TIM4RST              // 1 bits @ 2
#else
#define RCC_APB1ENR_0_TIM4EN
#define RCC_APB1RSTR_0_TIM4RST
#endif

#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F4     ) || defined(STM32F7     ) || \
    defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || \
    defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || \
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || \
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_APB1ENR_0_TIM5EN TIM5EN               // 1 bits @ 3
#define RCC_APB1RSTR_0_TIM5RST TIM5RST              // 1 bits @ 3
#else
#define RCC_APB1ENR_0_TIM5EN
#define RCC_APB1RSTR_0_TIM5RST
#endif

#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || \
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) || defined(STM32F100xE ) || \
    defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || \
    defined(STM32F410Tx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || \
    defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx ) || defined(STM32L1     )
#define RCC_APB1ENR_0_TIM6EN TIM6EN               // 1 bits @ 4
#define RCC_APB1RSTR_0_TIM6RST TIM6RST              // 1 bits @ 4
#else
#define RCC_APB1ENR_0_TIM6EN
#define RCC_APB1RSTR_0_TIM6RST
#endif

#if defined(STM32F030xC ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) || \
    defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) || \
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || \
    defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L071xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx ) || defined(STM32L1     )
#define RCC_APB1ENR_0_TIM7EN TIM7EN               // 1 bits @ 5
#define RCC_APB1RSTR_0_TIM7RST TIM7RST              // 1 bits @ 5
#else
#define RCC_APB1ENR_0_TIM7EN
#define RCC_APB1RSTR_0_TIM7RST
#endif

#if defined(STM32F100xE ) || defined(STM32F101xG ) || defined(STM32F103xG ) || defined(STM32F2     ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_APB1ENR_0_TIM12EN TIM12EN              // 1 bits @ 6
#define RCC_APB1ENR_0_TIM13EN TIM13EN              // 1 bits @ 7
#define RCC_APB1RSTR_0_TIM12RST TIM12RST             // 1 bits @ 6
#define RCC_APB1RSTR_0_TIM13RST TIM13RST             // 1 bits @ 7
#else
#define RCC_APB1ENR_0_TIM12EN
#define RCC_APB1ENR_0_TIM13EN
#define RCC_APB1RSTR_0_TIM12RST
#define RCC_APB1RSTR_0_TIM13RST
#endif

#if defined(STM32F0     ) || defined(STM32F100xE ) || defined(STM32F101xG ) || defined(STM32F103xG ) || \
    defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     )
#define RCC_APB1ENR_0_TIM14EN TIM14EN              // 1 bits @ 8
#define RCC_APB1RSTR_0_TIM14RST TIM14RST             // 1 bits @ 8
#else
#define RCC_APB1ENR_0_TIM14EN
#define RCC_APB1RSTR_0_TIM14RST
#endif

#if defined(STM32F373xC ) || defined(STM32F378xx )
#define RCC_APB1ENR_0_TIM18EN TIM18EN              // 1 bits @ 9
#define RCC_APB1RSTR_0_TIM18RST TIM18RST             // 1 bits @ 9
#define RCC_APB2ENR_0_SDADC1EN SDADC1EN             // 1 bits @ 24
#define RCC_APB2ENR_0_SDADC2EN SDADC2EN             // 1 bits @ 25
#define RCC_APB2ENR_0_SDADC3EN SDADC3EN             // 1 bits @ 26
#define RCC_APB2ENR_1_TIM19EN TIM19EN              // 1 bits @ 19
#define RCC_APB2RSTR_0_SDADC1RST SDADC1RST            // 1 bits @ 24
#define RCC_APB2RSTR_0_SDADC2RST SDADC2RST            // 1 bits @ 25
#define RCC_APB2RSTR_0_SDADC3RST SDADC3RST            // 1 bits @ 26
#define RCC_APB2RSTR_1_TIM19RST TIM19RST             // 1 bits @ 19
#define RCC_CFGR_3_SDPRE     SDPRE                // 5 bits @ 27
#define RCC_CFGR_4_SDADCPRE  SDADCPRE             // 5 bits @ 27
#else
#define RCC_APB1ENR_0_TIM18EN
#define RCC_APB1RSTR_0_TIM18RST
#define RCC_APB2ENR_0_SDADC1EN
#define RCC_APB2ENR_0_SDADC2EN
#define RCC_APB2ENR_0_SDADC3EN
#define RCC_APB2ENR_1_TIM19EN
#define RCC_APB2RSTR_0_SDADC1RST
#define RCC_APB2RSTR_0_SDADC2RST
#define RCC_APB2RSTR_0_SDADC3RST
#define RCC_APB2RSTR_1_TIM19RST
#define RCC_CFGR_3_SDPRE
#define RCC_CFGR_4_SDADCPRE
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx )
#define RCC_APB1ENR_0_RTCAPBEN RTCAPBEN             // 1 bits @ 10
#define RCC_APB1LPENR_0_RTCAPBLPEN RTCAPBLPEN           // 1 bits @ 10
#define RCC_APB2ENR_2_EXTITEN EXTITEN              // 1 bits @ 15
#define RCC_APB2LPENR_0_EXTITLPEN EXTITLPEN            // 1 bits @ 15
#else
#define RCC_APB1ENR_0_RTCAPBEN
#define RCC_APB1LPENR_0_RTCAPBLPEN
#define RCC_APB2ENR_2_EXTITEN
#define RCC_APB2LPENR_0_EXTITLPEN
#endif

#if defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || \
    defined(STM32F779xx )
#define RCC_APB1ENR_0_CAN3EN CAN3EN               // 1 bits @ 13
#define RCC_APB1LPENR_1_CAN3LPEN CAN3LPEN             // 1 bits @ 13
#define RCC_APB1RSTR_0_CAN3RST CAN3RST              // 1 bits @ 13
#define RCC_APB2ENR_0_MDIOEN MDIOEN               // 1 bits @ 30
#define RCC_APB2ENR_2_DFSDM1EN DFSDM1EN             // 1 bits @ 29
#define RCC_APB2LPENR_0_MDIOLPEN MDIOLPEN             // 1 bits @ 30
#define RCC_APB2LPENR_1_DFSDM1LPEN DFSDM1LPEN           // 1 bits @ 29
#define RCC_APB2RSTR_0_MDIORST MDIORST              // 1 bits @ 30
#define RCC_APB2RSTR_2_DFSDM1RST DFSDM1RST            // 1 bits @ 29
#define RCC_DCKCFGR1_DFSDM1SEL DFSDM1SEL            // 1 bits @ 25
#define RCC_DCKCFGR1_ADFSDM1SEL ADFSDM1SEL           // 1 bits @ 26
#else
#define RCC_APB1ENR_0_CAN3EN
#define RCC_APB1LPENR_1_CAN3LPEN
#define RCC_APB1RSTR_0_CAN3RST
#define RCC_APB2ENR_0_MDIOEN
#define RCC_APB2ENR_2_DFSDM1EN
#define RCC_APB2LPENR_0_MDIOLPEN
#define RCC_APB2LPENR_1_DFSDM1LPEN
#define RCC_APB2RSTR_0_MDIORST
#define RCC_APB2RSTR_2_DFSDM1RST
#define RCC_DCKCFGR1_DFSDM1SEL
#define RCC_DCKCFGR1_ADFSDM1SEL
#endif

#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || \
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F070xB ) || defined(STM32F071xB ) || \
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || \
    defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) || \
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
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L051xx ) || defined(STM32L052xx ) || \
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || \
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L1     )
#define RCC_APB1ENR_0_SPI2EN SPI2EN               // 1 bits @ 14
#define RCC_APB1RSTR_0_SPI2RST SPI2RST              // 1 bits @ 14
#else
#define RCC_APB1ENR_0_SPI2EN
#define RCC_APB1RSTR_0_SPI2RST
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
    defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || \
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || \
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || \
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_APB1ENR_0_SPI3EN SPI3EN               // 1 bits @ 15
#define RCC_APB1RSTR_0_SPI3RST SPI3RST              // 1 bits @ 15
#else
#define RCC_APB1ENR_0_SPI3EN
#define RCC_APB1RSTR_0_SPI3RST
#endif

#if defined(STM32F446xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || \
    defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || \
    defined(STM32F779xx )
#define RCC_APB1ENR_0_SPDIFRXEN SPDIFRXEN            // 1 bits @ 16
#define RCC_APB1ENR_3
#define RCC_APB1LPENR_0_SPDIFRXLPEN SPDIFRXLPEN          // 1 bits @ 16
#define RCC_APB1LPENR_1_CECLPEN CECLPEN              // 1 bits @ 27
#define RCC_APB1RSTR_0_SPDIFRXRST SPDIFRXRST           // 1 bits @ 16
#define RCC_APB1RSTR_3
#define RCC_DCKCFGR2_0_CECSEL CECSEL               // 1 bits @ 26
#define RCC_PLLI2SCFGR_PLLI2SP PLLI2SP              // 2 bits @ 16
#else
#define RCC_APB1ENR_0_SPDIFRXEN
#define RCC_APB1LPENR_0_SPDIFRXLPEN
#define RCC_APB1LPENR_1_CECLPEN
#define RCC_APB1RSTR_0_SPDIFRXRST
#define RCC_DCKCFGR2_0_CECSEL
#define RCC_PLLI2SCFGR_PLLI2SP
#endif

#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || \
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     )
#define RCC_APB1ENR_0_USART2EN USART2EN             // 1 bits @ 17
#define RCC_APB1RSTR_0_USART2RST USART2RST            // 1 bits @ 17
#else
#define RCC_APB1ENR_0_USART2EN
#define RCC_APB1RSTR_0_USART2RST
#endif

#if defined(STM32F030xC ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) || \
    defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) || defined(STM32F101xG ) || \
    defined(STM32F102xB ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32L1     )
#define RCC_APB1ENR_0_USART3EN USART3EN             // 1 bits @ 18
#define RCC_APB1RSTR_0_USART3RST USART3RST            // 1 bits @ 18
#else
#define RCC_APB1ENR_0_USART3EN
#define RCC_APB1RSTR_0_USART3RST
#endif

#if defined(STM32F030xC ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L071xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx )
#define RCC_APB1ENR_0_USART4EN USART4EN             // 1 bits @ 19
#define RCC_APB1RSTR_0_USART4RST USART4RST            // 1 bits @ 19
#else
#define RCC_APB1ENR_0_USART4EN
#define RCC_APB1RSTR_0_USART4RST
#endif

#if defined(STM32F030xC ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L071xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx )
#define RCC_APB1ENR_0_USART5EN USART5EN             // 1 bits @ 20
#define RCC_APB1RSTR_0_USART5RST USART5RST            // 1 bits @ 20
#else
#define RCC_APB1ENR_0_USART5EN
#define RCC_APB1RSTR_0_USART5RST
#endif

#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || \
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) || defined(STM32F100xE ) || \
    defined(STM32F101xB ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F102xB ) || \
    defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || \
    defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || \
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F318xx ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || \
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L051xx ) || \
    defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || \
    defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || \
    defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L1     )
#define RCC_APB1ENR_0_I2C2EN I2C2EN               // 1 bits @ 22
#define RCC_APB1RSTR_0_I2C2RST I2C2RST              // 1 bits @ 22
#else
#define RCC_APB1ENR_0_I2C2EN
#define RCC_APB1RSTR_0_I2C2RST
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || \
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F102x6 ) || defined(STM32F102xB ) || \
    defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F373xC ) || defined(STM32L052xx ) || defined(STM32L053xx ) || \
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L1     )
#define RCC_APB1ENR_0_USBEN  USBEN                // 1 bits @ 23
#define RCC_APB1RSTR_0_USBRST USBRST               // 1 bits @ 23
#else
#define RCC_APB1ENR_0_USBEN
#define RCC_APB1RSTR_0_USBRST
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F446xx )
#define RCC_APB1ENR_0_FMPI2C1EN FMPI2C1EN            // 1 bits @ 24
#define RCC_APB1RSTR_0_FMPI2C1RST FMPI2C1RST           // 1 bits @ 24
#define RCC_CKGATENR
#define RCC_DCKCFGR2_0_FMPI2C1SEL FMPI2C1SEL           // 2 bits @ 22
#define RCC_MAP0_CKGATENR    CKGATENR_TypeDef CKGATENR
#define RCC_MAP0_DCKCFGR2    DCKCFGR2_TypeDef DCKCFGR2
#else
#define RCC_APB1ENR_0_FMPI2C1EN
#define RCC_APB1RSTR_0_FMPI2C1RST
#define RCC_DCKCFGR2_0_FMPI2C1SEL
#define RCC_MAP0_CKGATENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_DCKCFGR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F072xB ) || defined(STM32F078xx ) || \
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || \
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || \
    defined(STM32F378xx ) || defined(STM32F398xx )
#define RCC_APB1ENR_0_CANEN  CANEN                // 1 bits @ 25
#define RCC_APB1RSTR_0_CANRST CANRST               // 1 bits @ 25
#else
#define RCC_APB1ENR_0_CANEN
#define RCC_APB1RSTR_0_CANRST
#endif

#if defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F765xx ) || \
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx )
#define RCC_APB1ENR_0_CAN2EN CAN2EN               // 1 bits @ 26
#define RCC_APB1RSTR_0_CAN2RST CAN2RST              // 1 bits @ 26
#else
#define RCC_APB1ENR_0_CAN2EN
#define RCC_APB1RSTR_0_CAN2RST
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L052xx ) || \
    defined(STM32L053xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L072xx ) || \
    defined(STM32L073xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_APB1ENR_0_CRSEN  CRSEN                // 1 bits @ 27
#define RCC_APB1RSTR_0_CRSRST CRSRST               // 1 bits @ 27
#else
#define RCC_APB1ENR_0_CRSEN
#define RCC_APB1RSTR_0_CRSRST
#endif

#if defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) || \
    defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || \
    defined(STM32F410Tx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L062xx ) || \
    defined(STM32L063xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx ) || defined(STM32L1     )
#define RCC_APB1ENR_0_DACEN  DACEN                // 1 bits @ 29
#define RCC_APB1RSTR_0_DACRST DACRST               // 1 bits @ 29
#else
#define RCC_APB1ENR_0_DACEN
#define RCC_APB1RSTR_0_DACRST
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F373xC ) || \
    defined(STM32F378xx )
#define RCC_APB1ENR_0_CECEN  CECEN                // 1 bits @ 30
#define RCC_APB1RSTR_0_CECRST CECRST               // 1 bits @ 30
#else
#define RCC_APB1ENR_0_CECEN
#define RCC_APB1RSTR_0_CECRST
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     )
#define RCC_APB1ENR_0_UART8EN UART8EN              // 1 bits @ 31
#define RCC_APB1ENR_1_UART7EN UART7EN              // 1 bits @ 30
#define RCC_APB1LPENR_0_UART7LPEN UART7LPEN            // 1 bits @ 30
#define RCC_APB1LPENR_0_UART8LPEN UART8LPEN            // 1 bits @ 31
#define RCC_APB1RSTR_0_UART8RST UART8RST             // 1 bits @ 31
#define RCC_APB1RSTR_1_UART7RST UART7RST             // 1 bits @ 30
#else
#define RCC_APB1ENR_0_UART8EN
#define RCC_APB1ENR_1_UART7EN
#define RCC_APB1LPENR_0_UART7LPEN
#define RCC_APB1LPENR_0_UART8LPEN
#define RCC_APB1RSTR_0_UART8RST
#define RCC_APB1RSTR_1_UART7RST
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) || \
    defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     )
#define RCC_APB1ENR_1
#define RCC_APB1RSTR_1
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F7     )
#define RCC_APB1ENR_1_LPTIM1EN LPTIM1EN             // 1 bits @ 9
#define RCC_APB1LPENR_0_LPTIM1LPEN LPTIM1LPEN           // 1 bits @ 9
#define RCC_APB1RSTR_1_LPTIM1RST LPTIM1RST            // 1 bits @ 9
#else
#define RCC_APB1ENR_1_LPTIM1EN
#define RCC_APB1LPENR_0_LPTIM1LPEN
#define RCC_APB1RSTR_1_LPTIM1RST
#endif

#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) || \
    defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || \
    defined(STM32F779xx )
#define RCC_APB1ENR_1_RTCEN  RTCEN                // 1 bits @ 10
#define RCC_APB1LPENR_1_RTCLPEN RTCLPEN              // 1 bits @ 10
#define RCC_APB2ENR_3_SDMMC2EN SDMMC2EN             // 1 bits @ 7
#define RCC_APB2LPENR_1_SDMMC2LPEN SDMMC2LPEN           // 1 bits @ 7
#define RCC_APB2RSTR_3_SDMMC2RST SDMMC2RST            // 1 bits @ 7
#define RCC_DCKCFGR2_1_SDMMC2SEL SDMMC2SEL            // 1 bits @ 29
#else
#define RCC_APB1ENR_1_RTCEN
#define RCC_APB1LPENR_1_RTCLPEN
#define RCC_APB2ENR_3_SDMMC2EN
#define RCC_APB2LPENR_1_SDMMC2LPEN
#define RCC_APB2RSTR_3_SDMMC2RST
#define RCC_DCKCFGR2_1_SDMMC2SEL
#endif

#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) || \
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || \
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xD ) || \
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xD ) || defined(STM32L162xDx) || \
    defined(STM32L162xE )
#define RCC_APB1ENR_1_UART4EN UART4EN              // 1 bits @ 19
#define RCC_APB1ENR_1_UART5EN UART5EN              // 1 bits @ 20
#define RCC_APB1RSTR_1_UART4RST UART4RST             // 1 bits @ 19
#define RCC_APB1RSTR_1_UART5RST UART5RST             // 1 bits @ 20
#else
#define RCC_APB1ENR_1_UART4EN
#define RCC_APB1ENR_1_UART5EN
#define RCC_APB1RSTR_1_UART4RST
#define RCC_APB1RSTR_1_UART5RST
#endif

#if defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F765xx ) || \
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx )
#define RCC_APB1ENR_1_I2C4EN I2C4EN               // 1 bits @ 24
#define RCC_APB1LPENR_1_I2C4LPEN I2C4LPEN             // 1 bits @ 24
#define RCC_APB1RSTR_1_I2C4RST I2C4RST              // 1 bits @ 24
#define RCC_DCKCFGR1_PLLSAIDIVR PLLSAIDIVR           // 2 bits @ 16
#define RCC_DCKCFGR2_1_I2C4SEL I2C4SEL              // 2 bits @ 22
#else
#define RCC_APB1ENR_1_I2C4EN
#define RCC_APB1LPENR_1_I2C4LPEN
#define RCC_APB1RSTR_1_I2C4RST
#define RCC_DCKCFGR1_PLLSAIDIVR
#define RCC_DCKCFGR2_1_I2C4SEL
#endif

#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     )
#define RCC_APB1ENR_1_CAN1EN CAN1EN               // 1 bits @ 25
#define RCC_APB1RSTR_1_CAN1RST CAN1RST              // 1 bits @ 25
#else
#define RCC_APB1ENR_1_CAN1EN
#define RCC_APB1RSTR_1_CAN1RST
#endif

#if defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F373xC ) || \
    defined(STM32F378xx )
#define RCC_APB1ENR_1_DAC2EN DAC2EN               // 1 bits @ 26
#define RCC_APB1RSTR_1_DAC2RST DAC2RST              // 1 bits @ 26
#else
#define RCC_APB1ENR_1_DAC2EN
#define RCC_APB1RSTR_1_DAC2RST
#endif

#if defined(STM32F1     )
#define RCC_APB1ENR_1_BKPEN  BKPEN                // 1 bits @ 27
#define RCC_APB1RSTR_1_BKPRST BKPRST               // 1 bits @ 27
#define RCC_APB2ENR_0_IOPAEN IOPAEN               // 1 bits @ 2
#define RCC_APB2ENR_0_IOPBEN IOPBEN               // 1 bits @ 3
#define RCC_APB2ENR_0_IOPCEN IOPCEN               // 1 bits @ 4
#define RCC_APB2ENR_1_AFIOEN AFIOEN               // 1 bits @ 0
#define RCC_APB2ENR_1_IOPDEN IOPDEN               // 1 bits @ 5
#define RCC_APB2RSTR_0_IOPARST IOPARST              // 1 bits @ 2
#define RCC_APB2RSTR_0_IOPBRST IOPBRST              // 1 bits @ 3
#define RCC_APB2RSTR_0_IOPCRST IOPCRST              // 1 bits @ 4
#define RCC_APB2RSTR_1_AFIORST AFIORST              // 1 bits @ 0
#define RCC_APB2RSTR_1_IOPDRST IOPDRST              // 1 bits @ 5
#else
#define RCC_APB1ENR_1_BKPEN
#define RCC_APB1RSTR_1_BKPRST
#define RCC_APB2ENR_0_IOPAEN
#define RCC_APB2ENR_0_IOPBEN
#define RCC_APB2ENR_0_IOPCEN
#define RCC_APB2ENR_1_AFIOEN
#define RCC_APB2ENR_1_IOPDEN
#define RCC_APB2RSTR_0_IOPARST
#define RCC_APB2RSTR_0_IOPBRST
#define RCC_APB2RSTR_0_IOPCRST
#define RCC_APB2RSTR_1_AFIORST
#define RCC_APB2RSTR_1_IOPDRST
#endif

#if defined(STM32F3     )
#define RCC_APB1ENR_1_DAC1EN DAC1EN               // 1 bits @ 29
#define RCC_APB1RSTR_1_DAC1RST DAC1RST              // 1 bits @ 29
#define RCC_BDCR_1_LSE       LSE                  // 3 bits @ 0
#define RCC_CFGR3_2
#else
#define RCC_APB1ENR_1_DAC1EN
#define RCC_APB1RSTR_1_DAC1RST
#define RCC_BDCR_1_LSE
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || defined(STM32F303xE ) || \
    defined(STM32F318xx ) || defined(STM32F398xx ) || defined(STM32F413xx ) || defined(STM32F423xx ) || \
    defined(STM32L0     ) || defined(STM32L100xB ) || defined(STM32L100xBA) || defined(STM32L100xC ) || \
    defined(STM32L152xB ) || defined(STM32L152xBA) || defined(STM32L152xC ) || defined(STM32L152xCA) || \
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || \
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_APB1ENR_2
#define RCC_APB1RSTR_2
#endif

#if defined(STM32L053xx ) || defined(STM32L063xx ) || defined(STM32L073xx ) || defined(STM32L083xx ) || \
    defined(STM32L100xB ) || defined(STM32L100xBA) || defined(STM32L100xC ) || defined(STM32L152xB ) || \
    defined(STM32L152xBA) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || \
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || \
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_APB1ENR_2_LCDEN  LCDEN                // 1 bits @ 9
#define RCC_APB1RSTR_2_LCDRST LCDRST               // 1 bits @ 9
#else
#define RCC_APB1ENR_2_LCDEN
#define RCC_APB1RSTR_2_LCDRST
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx )
#define RCC_APB1ENR_2_CAN3EN CAN3EN               // 1 bits @ 27
#define RCC_APB1LPENR_0_CAN3LPEN CAN3LPEN             // 1 bits @ 27
#define RCC_APB1RSTR_2_CAN3RST CAN3RST              // 1 bits @ 27
#define RCC_APB2ENR_1_DFSDM2EN DFSDM2EN             // 1 bits @ 25
#define RCC_APB2ENR_2_UART9EN UART9EN              // 1 bits @ 6
#define RCC_APB2ENR_2_UART10EN UART10EN             // 1 bits @ 7
#define RCC_APB2LPENR_0_UART9LPEN UART9LPEN            // 1 bits @ 6
#define RCC_APB2LPENR_0_UART10LPEN UART10LPEN           // 1 bits @ 7
#define RCC_APB2LPENR_0_DFSDM2LPEN DFSDM2LPEN           // 1 bits @ 25
#define RCC_APB2RSTR_1_DFSDM2RST DFSDM2RST            // 1 bits @ 25
#define RCC_APB2RSTR_2_UART9RST UART9RST             // 1 bits @ 6
#define RCC_APB2RSTR_2_UART10RST UART10RST            // 1 bits @ 7
#define RCC_DCKCFGR_0_PLLI2SDIVR PLLI2SDIVR           // 5 bits @ 0
#define RCC_DCKCFGR_0_PLLDIVR PLLDIVR              // 5 bits @ 8
#define RCC_DCKCFGR_0_CKDFSDM2ASEL CKDFSDM2ASEL         // 1 bits @ 14
#else
#define RCC_APB1ENR_2_CAN3EN
#define RCC_APB1LPENR_0_CAN3LPEN
#define RCC_APB1RSTR_2_CAN3RST
#define RCC_APB2ENR_1_DFSDM2EN
#define RCC_APB2ENR_2_UART9EN
#define RCC_APB2ENR_2_UART10EN
#define RCC_APB2LPENR_0_UART9LPEN
#define RCC_APB2LPENR_0_UART10LPEN
#define RCC_APB2LPENR_0_DFSDM2LPEN
#define RCC_APB2RSTR_1_DFSDM2RST
#define RCC_APB2RSTR_2_UART9RST
#define RCC_APB2RSTR_2_UART10RST
#define RCC_DCKCFGR_0_PLLI2SDIVR
#define RCC_DCKCFGR_0_PLLDIVR
#define RCC_DCKCFGR_0_CKDFSDM2ASEL
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || defined(STM32F303xE ) || \
    defined(STM32F318xx ) || defined(STM32F398xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || \
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_APB1ENR_2_I2C3EN I2C3EN               // 1 bits @ 30
#define RCC_APB1RSTR_2_I2C3RST I2C3RST              // 1 bits @ 30
#else
#define RCC_APB1ENR_2_I2C3EN
#define RCC_APB1RSTR_2_I2C3RST
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || \
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_APB1ENR1_0_TIM3EN TIM3EN               // 1 bits @ 1
#define RCC_APB1ENR1_0_UART4EN UART4EN              // 1 bits @ 19
#define RCC_APB1RSTR1_0_TIM3RST TIM3RST              // 1 bits @ 1
#define RCC_APB1RSTR1_0_UART4RST UART4RST             // 1 bits @ 19
#define RCC_APB1SMENR1_0_TIM3SMEN TIM3SMEN             // 1 bits @ 1
#define RCC_APB1SMENR1_0_UART4SMEN UART4SMEN            // 1 bits @ 19
#define RCC_APB2SMENR_0_DFSDM1SMEN DFSDM1SMEN           // 1 bits @ 24
#define RCC_CCIPR_0_UART4SEL UART4SEL             // 2 bits @ 6
#else
#define RCC_APB1ENR1_0_TIM3EN
#define RCC_APB1ENR1_0_UART4EN
#define RCC_APB1RSTR1_0_TIM3RST
#define RCC_APB1RSTR1_0_UART4RST
#define RCC_APB1SMENR1_0_TIM3SMEN
#define RCC_APB1SMENR1_0_UART4SMEN
#define RCC_APB2SMENR_0_DFSDM1SMEN
#define RCC_CCIPR_0_UART4SEL
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || \
    defined(STM32L443xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )
#define RCC_APB1ENR1_0_TIM7EN TIM7EN               // 1 bits @ 5
#define RCC_APB1RSTR1_0_TIM7RST TIM7RST              // 1 bits @ 5
#define RCC_APB1SMENR1_0_TIM7SMEN TIM7SMEN             // 1 bits @ 5
#else
#define RCC_APB1ENR1_0_TIM7EN
#define RCC_APB1RSTR1_0_TIM7RST
#define RCC_APB1SMENR1_0_TIM7SMEN
#endif

#if defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L476xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx )
#define RCC_APB1ENR1_0_LCDEN LCDEN                // 1 bits @ 9
#define RCC_APB1RSTR1_0_LCDRST LCDRST               // 1 bits @ 9
#define RCC_APB1SMENR1_0_LCDSMEN LCDSMEN              // 1 bits @ 9
#else
#define RCC_APB1ENR1_0_LCDEN
#define RCC_APB1RSTR1_0_LCDRST
#define RCC_APB1SMENR1_0_LCDSMEN
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || \
    defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_APB1ENR1_0_RTCAPBEN RTCAPBEN             // 1 bits @ 10
#define RCC_APB1ENR1_0_CRSEN CRSEN                // 1 bits @ 24
#define RCC_APB1RSTR1_0_CRSRST CRSRST               // 1 bits @ 24
#define RCC_APB1SMENR1_0_RTCAPBSMEN RTCAPBSMEN           // 1 bits @ 10
#define RCC_APB1SMENR1_0_CRSSMEN CRSSMEN              // 1 bits @ 24
#define RCC_CICR_2_HSI48RDYC HSI48RDYC            // 1 bits @ 10
#define RCC_CIER_2_HSI48RDYIE HSI48RDYIE           // 1 bits @ 10
#define RCC_CIFR_2_HSI48RDYF HSI48RDYF            // 1 bits @ 10
#define RCC_CRRCR_2
#define RCC_PLLCFGR_1_PLLPDIV PLLPDIV              // 5 bits @ 27
#define RCC_PLLSAI1CFGR_PLLSAI1PDIV PLLSAI1PDIV          // 5 bits @ 27
#define RCC_MAP0_CRRCR       CRRCR_TypeDef CRRCR
#else
#define RCC_APB1ENR1_0_RTCAPBEN
#define RCC_APB1ENR1_0_CRSEN
#define RCC_APB1RSTR1_0_CRSRST
#define RCC_APB1SMENR1_0_RTCAPBSMEN
#define RCC_APB1SMENR1_0_CRSSMEN
#define RCC_CICR_2_HSI48RDYC
#define RCC_CIER_2_HSI48RDYIE
#define RCC_CIFR_2_HSI48RDYF
#define RCC_PLLCFGR_1_PLLPDIV
#define RCC_PLLSAI1CFGR_PLLSAI1PDIV
#define RCC_MAP0_CRRCR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx )
#define RCC_APB1ENR1_0_USBFSEN USBFSEN              // 1 bits @ 26
#define RCC_APB1RSTR1_0_USBFSRST USBFSRST             // 1 bits @ 26
#define RCC_APB1SMENR1_0_USBFSSMEN USBFSSMEN            // 1 bits @ 26
#else
#define RCC_APB1ENR1_0_USBFSEN
#define RCC_APB1RSTR1_0_USBFSRST
#define RCC_APB1SMENR1_0_USBFSSMEN
#endif

#if defined(STM32L496xx ) || defined(STM32L4A6xx )
#define RCC_APB1ENR1_1
#define RCC_APB1RSTR1_1
#define RCC_APB1SMENR1_1
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_APB1ENR2_I2C4EN  I2C4EN               // 1 bits @ 1
#define RCC_APB1RSTR2_I2C4RST I2C4RST              // 1 bits @ 1
#define RCC_APB1SMENR2_I2C4SMEN I2C4SMEN             // 1 bits @ 1
#define RCC_CCIPR2
#define RCC_ICSCR_3
#define RCC_MAP1_CCIPR2      CCIPR2_TypeDef CCIPR2
#else
#define RCC_APB1ENR2_I2C4EN
#define RCC_APB1RSTR2_I2C4RST
#define RCC_APB1SMENR2_I2C4SMEN
#define RCC_MAP1_CCIPR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || \
    defined(STM32L443xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx )
#define RCC_APB1ENR2_SWPMI1EN SWPMI1EN             // 1 bits @ 2
#define RCC_APB1RSTR2_SWPMI1RST SWPMI1RST            // 1 bits @ 2
#define RCC_APB1SMENR2_SWPMI1SMEN SWPMI1SMEN           // 1 bits @ 2
#define RCC_CCIPR_0_SWPMI1SEL SWPMI1SEL            // 1 bits @ 30
#else
#define RCC_APB1ENR2_SWPMI1EN
#define RCC_APB1RSTR2_SWPMI1RST
#define RCC_APB1SMENR2_SWPMI1SMEN
#define RCC_CCIPR_0_SWPMI1SEL
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     )
#define RCC_APB1LPENR
#define RCC_MAP1_CIR         CIR_TypeDef CIR
#else
#define RCC_MAP1_CIR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L1     )
#define RCC_APB1LPENR_0_TIM2LPEN TIM2LPEN             // 1 bits @ 0
#define RCC_APB1LPENR_0_TIM3LPEN TIM3LPEN             // 1 bits @ 1
#define RCC_APB1LPENR_0_TIM4LPEN TIM4LPEN             // 1 bits @ 2
#else
#define RCC_APB1LPENR_0_TIM2LPEN
#define RCC_APB1LPENR_0_TIM3LPEN
#define RCC_APB1LPENR_0_TIM4LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L151xC ) || \
    defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) || \
    defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) || \
    defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) || \
    defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_APB1LPENR_0_TIM5LPEN TIM5LPEN             // 1 bits @ 3
#else
#define RCC_APB1LPENR_0_TIM5LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || \
    defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L1     )
#define RCC_APB1LPENR_0_TIM6LPEN TIM6LPEN             // 1 bits @ 4
#else
#define RCC_APB1LPENR_0_TIM6LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L1     )
#define RCC_APB1LPENR_0_TIM7LPEN TIM7LPEN             // 1 bits @ 5
#else
#define RCC_APB1LPENR_0_TIM7LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32L1     )
#define RCC_APB1LPENR_0_SPI2LPEN SPI2LPEN             // 1 bits @ 14
#else
#define RCC_APB1LPENR_0_SPI2LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L100xC ) || defined(STM32L151xC ) || \
    defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) || \
    defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) || \
    defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) || \
    defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_APB1LPENR_0_SPI3LPEN SPI3LPEN             // 1 bits @ 15
#else
#define RCC_APB1LPENR_0_SPI3LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L1     )
#define RCC_APB1LPENR_0_USART3LPEN USART3LPEN           // 1 bits @ 18
#else
#define RCC_APB1LPENR_0_USART3LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L151xD ) || \
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xD ) || defined(STM32L152xDx) || \
    defined(STM32L152xE ) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_APB1LPENR_0_UART4LPEN UART4LPEN            // 1 bits @ 19
#define RCC_APB1LPENR_0_UART5LPEN UART5LPEN            // 1 bits @ 20
#else
#define RCC_APB1LPENR_0_UART4LPEN
#define RCC_APB1LPENR_0_UART5LPEN
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) || \
    defined(STM32F446xx )
#define RCC_APB1LPENR_0_FMPI2C1LPEN FMPI2C1LPEN          // 1 bits @ 24
#else
#define RCC_APB1LPENR_0_FMPI2C1LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) || \
    defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx )
#define RCC_APB1LPENR_0_CAN2LPEN CAN2LPEN             // 1 bits @ 26
#else
#define RCC_APB1LPENR_0_CAN2LPEN
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || \
    defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L1     )
#define RCC_APB1LPENR_0_DACLPEN DACLPEN              // 1 bits @ 29
#else
#define RCC_APB1LPENR_0_DACLPEN
#endif

#if defined(STM32F446xx ) || defined(STM32F7     ) || defined(STM32L1     )
#define RCC_APB1LPENR_1
#endif

#if defined(STM32L100xB ) || defined(STM32L100xBA) || defined(STM32L100xC ) || defined(STM32L152xB ) || \
    defined(STM32L152xBA) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || \
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || \
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_APB1LPENR_1_LCDLPEN LCDLPEN              // 1 bits @ 9
#else
#define RCC_APB1LPENR_1_LCDLPEN
#endif

#if defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_APB1SMENR_TIM3SMEN TIM3SMEN             // 1 bits @ 1
#define RCC_APB1SMENR_TIM7SMEN TIM7SMEN             // 1 bits @ 5
#define RCC_APB1SMENR_USART4SMEN USART4SMEN           // 1 bits @ 19
#define RCC_APB1SMENR_USART5SMEN USART5SMEN           // 1 bits @ 20
#define RCC_APB1SMENR_I2C3SMEN I2C3SMEN             // 1 bits @ 30
#define RCC_IOPENR_0_IOPEEN  IOPEEN               // 1 bits @ 4
#define RCC_IOPENR_1_GPIOEEN GPIOEEN              // 1 bits @ 4
#define RCC_IOPRSTR_0_IOPERST IOPERST              // 1 bits @ 4
#define RCC_IOPRSTR_1_GPIOERST GPIOERST             // 1 bits @ 4
#define RCC_IOPSMENR_0_IOPESMEN IOPESMEN             // 1 bits @ 4
#define RCC_IOPSMENR_1_GPIOESMEN GPIOESMEN            // 1 bits @ 4
#else
#define RCC_APB1SMENR_TIM3SMEN
#define RCC_APB1SMENR_TIM7SMEN
#define RCC_APB1SMENR_USART4SMEN
#define RCC_APB1SMENR_USART5SMEN
#define RCC_APB1SMENR_I2C3SMEN
#define RCC_IOPENR_0_IOPEEN
#define RCC_IOPENR_1_GPIOEEN
#define RCC_IOPRSTR_0_IOPERST
#define RCC_IOPRSTR_1_GPIOERST
#define RCC_IOPSMENR_0_IOPESMEN
#define RCC_IOPSMENR_1_GPIOESMEN
#endif

#if defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || \
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || \
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_APB1SMENR_TIM6SMEN TIM6SMEN             // 1 bits @ 4
#define RCC_APB1SMENR_SPI2SMEN SPI2SMEN             // 1 bits @ 14
#define RCC_APB1SMENR_I2C2SMEN I2C2SMEN             // 1 bits @ 22
#define RCC_IOPENR_0_IOPDEN  IOPDEN               // 1 bits @ 3
#define RCC_IOPENR_1_GPIODEN GPIODEN              // 1 bits @ 3
#define RCC_IOPRSTR_0_IOPDRST IOPDRST              // 1 bits @ 3
#define RCC_IOPRSTR_1_GPIODRST GPIODRST             // 1 bits @ 3
#define RCC_IOPSMENR_0_IOPDSMEN IOPDSMEN             // 1 bits @ 3
#define RCC_IOPSMENR_1_GPIODSMEN GPIODSMEN            // 1 bits @ 3
#else
#define RCC_APB1SMENR_TIM6SMEN
#define RCC_APB1SMENR_SPI2SMEN
#define RCC_APB1SMENR_I2C2SMEN
#define RCC_IOPENR_0_IOPDEN
#define RCC_IOPENR_1_GPIODEN
#define RCC_IOPRSTR_0_IOPDRST
#define RCC_IOPRSTR_1_GPIODRST
#define RCC_IOPSMENR_0_IOPDSMEN
#define RCC_IOPSMENR_1_GPIODSMEN
#endif

#if defined(STM32L053xx ) || defined(STM32L063xx ) || defined(STM32L073xx ) || defined(STM32L083xx )
#define RCC_APB1SMENR_LCDSMEN LCDSMEN              // 1 bits @ 9
#else
#define RCC_APB1SMENR_LCDSMEN
#endif

#define RCC_APB2ENR
#define RCC_APB2RSTR
#define RCC_CFGR
#define RCC_CR
#define RCC_CSR

#if defined(STM32F0     )
#define RCC_APB2ENR_0_SYSCFGCOMPEN SYSCFGCOMPEN         // 1 bits @ 0
#define RCC_CFGR_0_PPRE      PPRE                 // 3 bits @ 8
#define RCC_CFGR3_3_ADCSW    ADCSW                // 1 bits @ 8
#define RCC_CIR_0_HSI14RDYF  HSI14RDYF            // 1 bits @ 5
#define RCC_CIR_0_HSI14RDYIE HSI14RDYIE           // 1 bits @ 13
#define RCC_CIR_0_HSI14RDYC  HSI14RDYC            // 1 bits @ 21
#define RCC_CR2
#define RCC_MAP0_CR2         CR2_TypeDef CR2
#else
#define RCC_APB2ENR_0_SYSCFGCOMPEN
#define RCC_CFGR_0_PPRE
#define RCC_CFGR3_3_ADCSW
#define RCC_CIR_0_HSI14RDYF
#define RCC_CIR_0_HSI14RDYIE
#define RCC_CIR_0_HSI14RDYC
#define RCC_MAP0_CR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F030xC ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F2     ) || \
    defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || \
    defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     )
#define RCC_APB2ENR_0_USART6EN USART6EN             // 1 bits @ 5
#define RCC_APB2RSTR_0_USART6RST USART6RST            // 1 bits @ 5
#else
#define RCC_APB2ENR_0_USART6EN
#define RCC_APB2RSTR_0_USART6RST
#endif

#if defined(STM32F091xC ) || defined(STM32F098xx )
#define RCC_APB2ENR_0_USART7EN USART7EN             // 1 bits @ 6
#define RCC_APB2ENR_0_USART8EN USART8EN             // 1 bits @ 7
#define RCC_APB2RSTR_0_USART7RST USART7RST            // 1 bits @ 6
#define RCC_APB2RSTR_0_USART8RST USART8RST            // 1 bits @ 7
#else
#define RCC_APB2ENR_0_USART7EN
#define RCC_APB2ENR_0_USART8EN
#define RCC_APB2RSTR_0_USART7RST
#define RCC_APB2RSTR_0_USART8RST
#endif

#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F105xC ) || defined(STM32F107xC )
#define RCC_APB2ENR_0_ADC2EN ADC2EN               // 1 bits @ 10
#define RCC_APB2RSTR_0_ADC2RST ADC2RST              // 1 bits @ 10
#else
#define RCC_APB2ENR_0_ADC2EN
#define RCC_APB2RSTR_0_ADC2RST
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || \
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || \
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_APB2ENR_0_TIM1EN TIM1EN               // 1 bits @ 11
#define RCC_APB2RSTR_0_TIM1RST TIM1RST              // 1 bits @ 11
#else
#define RCC_APB2ENR_0_TIM1EN
#define RCC_APB2RSTR_0_TIM1RST
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F302xC ) || \
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || \
    defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || \
    defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )
#define RCC_APB2ENR_0_SPI1EN SPI1EN               // 1 bits @ 12
#define RCC_APB2RSTR_0_SPI1RST SPI1RST              // 1 bits @ 12
#else
#define RCC_APB2ENR_0_SPI1EN
#define RCC_APB2RSTR_0_SPI1RST
#endif

#if defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || \
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_APB2ENR_0_TIM8EN TIM8EN               // 1 bits @ 13
#define RCC_APB2RSTR_0_TIM8RST TIM8RST              // 1 bits @ 13
#else
#define RCC_APB2ENR_0_TIM8EN
#define RCC_APB2RSTR_0_TIM8RST
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L051xx ) || \
    defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || \
    defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || \
    defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L1     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_APB2ENR_0_USART1EN USART1EN             // 1 bits @ 14
#define RCC_APB2RSTR_0_USART1RST USART1RST            // 1 bits @ 14
#else
#define RCC_APB2ENR_0_USART1EN
#define RCC_APB2RSTR_0_USART1RST
#endif

#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || \
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) || defined(STM32F100xE ) || \
    defined(STM32F3     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_APB2ENR_0_TIM15EN TIM15EN              // 1 bits @ 16
#define RCC_APB2RSTR_0_TIM15RST TIM15RST             // 1 bits @ 16
#else
#define RCC_APB2ENR_0_TIM15EN
#define RCC_APB2RSTR_0_TIM15RST
#endif

#if defined(STM32F0     ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F3     ) || \
    defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_APB2ENR_0_TIM16EN TIM16EN              // 1 bits @ 17
#define RCC_APB2RSTR_0_TIM16RST TIM16RST             // 1 bits @ 17
#else
#define RCC_APB2ENR_0_TIM16EN
#define RCC_APB2RSTR_0_TIM16RST
#endif

#if defined(STM32F0     ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F3     ) || \
    defined(STM32H7     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )
#define RCC_APB2ENR_0_TIM17EN TIM17EN              // 1 bits @ 18
#define RCC_APB2RSTR_0_TIM17RST TIM17RST             // 1 bits @ 18
#else
#define RCC_APB2ENR_0_TIM17EN
#define RCC_APB2RSTR_0_TIM17RST
#endif

#if defined(STM32F101xG ) || defined(STM32F103xG )
#define RCC_APB2ENR_0_TIM9EN TIM9EN               // 1 bits @ 19
#define RCC_APB2ENR_0_TIM10EN TIM10EN              // 1 bits @ 20
#define RCC_APB2ENR_0_TIM11EN TIM11EN              // 1 bits @ 21
#define RCC_APB2RSTR_0_TIM9RST TIM9RST              // 1 bits @ 19
#define RCC_APB2RSTR_0_TIM10RST TIM10RST             // 1 bits @ 20
#define RCC_APB2RSTR_0_TIM11RST TIM11RST             // 1 bits @ 21
#else
#define RCC_APB2ENR_0_TIM9EN
#define RCC_APB2ENR_0_TIM10EN
#define RCC_APB2ENR_0_TIM11EN
#define RCC_APB2RSTR_0_TIM9RST
#define RCC_APB2RSTR_0_TIM10RST
#define RCC_APB2RSTR_0_TIM11RST
#endif

#if defined(STM32F446xx ) || defined(STM32F7     ) || defined(STM32H7     )
#define RCC_APB2ENR_0_SAI2EN SAI2EN               // 1 bits @ 23
#define RCC_APB2LPENR_0_SAI2LPEN SAI2LPEN             // 1 bits @ 23
#define RCC_APB2RSTR_0_SAI2RST SAI2RST              // 1 bits @ 23
#else
#define RCC_APB2ENR_0_SAI2EN
#define RCC_APB2LPENR_0_SAI2LPEN
#define RCC_APB2RSTR_0_SAI2RST
#endif

#if defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F769xx ) || defined(STM32F779xx ) || \
    defined(STM32L4R9xx ) || defined(STM32L4S9xx )
#define RCC_APB2ENR_0_DSIEN  DSIEN                // 1 bits @ 27
#define RCC_APB2RSTR_0_DSIRST DSIRST               // 1 bits @ 27
#else
#define RCC_APB2ENR_0_DSIEN
#define RCC_APB2RSTR_0_DSIRST
#endif

#if defined(STM32F334x8 )
#define RCC_APB2ENR_0_HRTIM1EN HRTIM1EN             // 1 bits @ 29
#define RCC_APB2RSTR_0_HRTIM1RST HRTIM1RST            // 1 bits @ 29
#define RCC_CFGR3_0_HRTIMSW  HRTIMSW              // 1 bits @ 12
#define RCC_CFGR3_1_HRTIM1SW HRTIM1SW             // 1 bits @ 12
#else
#define RCC_APB2ENR_0_HRTIM1EN
#define RCC_APB2RSTR_0_HRTIM1RST
#define RCC_CFGR3_0_HRTIMSW
#define RCC_CFGR3_1_HRTIM1SW
#endif

#if defined(STM32F723xx ) || defined(STM32F733xx )
#define RCC_APB2ENR_0_OTGPHYCEN OTGPHYCEN            // 1 bits @ 31
#define RCC_APB2RSTR_0_OTGPHYCRST OTGPHYCRST           // 1 bits @ 31
#else
#define RCC_APB2ENR_0_OTGPHYCEN
#define RCC_APB2RSTR_0_OTGPHYCRST
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F302xE ) || \
    defined(STM32F303xE ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || \
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || \
    defined(STM32L1     ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || \
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || \
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_APB2ENR_1
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     )
#define RCC_APB2ENR_1_TIM8EN TIM8EN               // 1 bits @ 1
#define RCC_APB2LPENR_0_TIM8LPEN TIM8LPEN             // 1 bits @ 1
#define RCC_APB2RSTR_1_TIM8RST TIM8RST              // 1 bits @ 1
#else
#define RCC_APB2ENR_1_TIM8EN
#define RCC_APB2LPENR_0_TIM8LPEN
#define RCC_APB2RSTR_1_TIM8RST
#endif

#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) || \
    defined(STM32F101xG ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F105xC ) || defined(STM32F107xC )
#define RCC_APB2ENR_1_IOPEEN IOPEEN               // 1 bits @ 6
#define RCC_APB2RSTR_1_IOPERST IOPERST              // 1 bits @ 6
#else
#define RCC_APB2ENR_1_IOPEEN
#define RCC_APB2RSTR_1_IOPERST
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || \
    defined(STM32L0     ) || defined(STM32L1     )
#define RCC_APB2ENR_1_ADC1EN ADC1EN               // 1 bits @ 9
#else
#define RCC_APB2ENR_1_ADC1EN
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32L151xD ) || defined(STM32L152xD ) || defined(STM32L162xD )
#define RCC_APB2ENR_1_SDIOEN SDIOEN               // 1 bits @ 11
#define RCC_APB2LPENR_0_SDIOLPEN SDIOLPEN             // 1 bits @ 11
#define RCC_APB2RSTR_1_SDIORST SDIORST              // 1 bits @ 11
#else
#define RCC_APB2ENR_1_SDIOEN
#define RCC_APB2LPENR_0_SDIOLPEN
#define RCC_APB2RSTR_1_SDIORST
#endif

#if defined(STM32F303xE ) || defined(STM32F398xx )
#define RCC_APB2ENR_1_TIM20EN TIM20EN              // 1 bits @ 20
#define RCC_APB2RSTR_1_TIM20RST TIM20RST             // 1 bits @ 20
#define RCC_CFGR3_0_TIM20SW  TIM20SW              // 1 bits @ 15
#else
#define RCC_APB2ENR_1_TIM20EN
#define RCC_APB2RSTR_1_TIM20RST
#define RCC_CFGR3_0_TIM20SW
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     )
#define RCC_APB2ENR_1_SAI1EN SAI1EN               // 1 bits @ 22
#define RCC_APB2LPENR_0_SAI1LPEN SAI1LPEN             // 1 bits @ 22
#define RCC_APB2RSTR_1_SAI1RST SAI1RST              // 1 bits @ 22
#else
#define RCC_APB2ENR_1_SAI1EN
#define RCC_APB2LPENR_0_SAI1LPEN
#define RCC_APB2RSTR_1_SAI1RST
#endif

#if defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || \
    defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )
#define RCC_APB2ENR_1_DFSDM1EN DFSDM1EN             // 1 bits @ 24
#define RCC_APB2RSTR_1_DFSDM1RST DFSDM1RST            // 1 bits @ 24
#else
#define RCC_APB2ENR_1_DFSDM1EN
#define RCC_APB2RSTR_1_DFSDM1RST
#endif

#if defined(STM32F429xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32L4R7xx ) || defined(STM32L4R9xx ) || \
    defined(STM32L4S7xx ) || defined(STM32L4S9xx )
#define RCC_APB2ENR_1_LTDCEN LTDCEN               // 1 bits @ 26
#define RCC_APB2RSTR_1_LTDCRST LTDCRST              // 1 bits @ 26
#else
#define RCC_APB2ENR_1_LTDCEN
#define RCC_APB2RSTR_1_LTDCRST
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || \
    defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_APB2ENR_2
#define RCC_APB2RSTR_2
#endif

#if defined(STM32L031xx ) || defined(STM32L041xx ) || defined(STM32L051xx ) || defined(STM32L052xx ) || \
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || \
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_APB2ENR_2_TIM22EN TIM22EN              // 1 bits @ 5
#define RCC_APB2RSTR_2_TIM22RST TIM22RST             // 1 bits @ 5
#define RCC_APB2SMENR_0_TIM22SMEN TIM22SMEN            // 1 bits @ 5
#define RCC_CICR_1_CSSHSEC   CSSHSEC              // 1 bits @ 8
#define RCC_CIFR_1_CSSHSEF   CSSHSEF              // 1 bits @ 8
#define RCC_IOPENR_0_IOPHEN  IOPHEN               // 1 bits @ 7
#define RCC_IOPENR_1_GPIOHEN GPIOHEN              // 1 bits @ 7
#define RCC_IOPRSTR_0_IOPHRST IOPHRST              // 1 bits @ 7
#define RCC_IOPRSTR_1_GPIOHRST GPIOHRST             // 1 bits @ 7
#define RCC_IOPSMENR_0_IOPHSMEN IOPHSMEN             // 1 bits @ 7
#define RCC_IOPSMENR_1_GPIOHSMEN GPIOHSMEN            // 1 bits @ 7
#else
#define RCC_APB2ENR_2_TIM22EN
#define RCC_APB2RSTR_2_TIM22RST
#define RCC_APB2SMENR_0_TIM22SMEN
#define RCC_CICR_1_CSSHSEC
#define RCC_CIFR_1_CSSHSEF
#define RCC_IOPENR_0_IOPHEN
#define RCC_IOPENR_1_GPIOHEN
#define RCC_IOPRSTR_0_IOPHRST
#define RCC_IOPRSTR_1_GPIOHRST
#define RCC_IOPSMENR_0_IOPHSMEN
#define RCC_IOPSMENR_1_GPIOHSMEN
#endif

#if defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     ) || defined(STM32H7     )
#define RCC_APB2ENR_2_SPI4EN SPI4EN               // 1 bits @ 13
#define RCC_APB2LPENR_0_SPI4LPEN SPI4LPEN             // 1 bits @ 13
#define RCC_APB2RSTR_2_SPI4RST SPI4RST              // 1 bits @ 13
#else
#define RCC_APB2ENR_2_SPI4EN
#define RCC_APB2LPENR_0_SPI4LPEN
#define RCC_APB2RSTR_2_SPI4RST
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     )
#define RCC_APB2ENR_2_SPI5EN SPI5EN               // 1 bits @ 20
#define RCC_APB2LPENR_0_SPI5LPEN SPI5LPEN             // 1 bits @ 20
#define RCC_APB2RSTR_2_SPI5RST SPI5RST              // 1 bits @ 20
#else
#define RCC_APB2ENR_2_SPI5EN
#define RCC_APB2LPENR_0_SPI5LPEN
#define RCC_APB2RSTR_2_SPI5RST
#endif

#if defined(STM32F3     ) || defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || \
    defined(STM32F733xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32L0     ) || defined(STM32L1     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_APB2ENR_3
#endif

#if defined(STM32F3     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )
#define RCC_APB2ENR_3_SYSCFGEN SYSCFGEN             // 1 bits @ 0
#else
#define RCC_APB2ENR_3_SYSCFGEN
#endif

#if defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || \
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx )
#define RCC_APB2ENR_3_SDMMC1EN SDMMC1EN             // 1 bits @ 10
#define RCC_APB2RSTR_1_SDMMC1RST SDMMC1RST            // 1 bits @ 10
#define RCC_APB2SMENR_0_SDMMC1SMEN SDMMC1SMEN           // 1 bits @ 10
#else
#define RCC_APB2ENR_3_SDMMC1EN
#define RCC_APB2RSTR_1_SDMMC1RST
#define RCC_APB2SMENR_0_SDMMC1SMEN
#endif

#if defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_APB2ENR_4
#define RCC_APB2SMENR
#define RCC_CCIPR
#define RCC_CFGR_4_STOPWUCK  STOPWUCK             // 1 bits @ 15
#define RCC_CICR_1
#define RCC_CICR_2
#define RCC_CIER_1
#define RCC_CIER_2
#define RCC_CIFR_1
#define RCC_CIFR_2
#define RCC_CSR_2
#else
#define RCC_CFGR_4_STOPWUCK
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || \
    defined(STM32L1     )
#define RCC_APB2LPENR
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || \
    defined(STM32H7     )
#define RCC_APB2LPENR_0_USART6LPEN USART6LPEN           // 1 bits @ 5
#else
#define RCC_APB2LPENR_0_USART6LPEN
#endif

#if defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F423xx )
#define RCC_APB2LPENR_0_DFSDM1LPEN DFSDM1LPEN           // 1 bits @ 24
#define RCC_CKGATENR_RCC_EVTCTL RCC_EVTCTL           // 1 bits @ 7
#define RCC_DCKCFGR_0_CKDFSDM1ASEL CKDFSDM1ASEL         // 1 bits @ 15
#define RCC_DCKCFGR_0_CKDFSDM1SEL CKDFSDM1SEL          // 1 bits @ 31
#define RCC_PLLI2SCFGR_PLLI2SSRC PLLI2SSRC            // 1 bits @ 22
#else
#define RCC_APB2LPENR_0_DFSDM1LPEN
#define RCC_CKGATENR_RCC_EVTCTL
#define RCC_DCKCFGR_0_CKDFSDM1ASEL
#define RCC_DCKCFGR_0_CKDFSDM1SEL
#define RCC_PLLI2SCFGR_PLLI2SSRC
#endif

#if defined(STM32F429xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || \
    defined(STM32F777xx ) || defined(STM32F779xx )
#define RCC_APB2LPENR_0_LTDCLPEN LTDCLPEN             // 1 bits @ 26
#else
#define RCC_APB2LPENR_0_LTDCLPEN
#endif

#if defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F769xx ) || defined(STM32F779xx )
#define RCC_APB2LPENR_0_DSILPEN DSILPEN              // 1 bits @ 27
#else
#define RCC_APB2LPENR_0_DSILPEN
#endif

#if defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     )
#define RCC_APB2LPENR_1
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L0     ) || defined(STM32L1     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_APB2RSTR_0_SYSCFGRST SYSCFGRST            // 1 bits @ 0
#define RCC_CSR_0_OBLRSTF    OBLRSTF              // 1 bits @ 25
#else
#define RCC_APB2RSTR_0_SYSCFGRST
#define RCC_CSR_0_OBLRSTF
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F302xE ) || defined(STM32F303xE ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F4     ) || \
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) || \
    defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || \
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || \
    defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_APB2RSTR_1
#endif

#if defined(STM32F1     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32L0     ) || \
    defined(STM32L1     )
#define RCC_APB2RSTR_1_ADC1RST ADC1RST              // 1 bits @ 9
#else
#define RCC_APB2RSTR_1_ADC1RST
#endif

#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) || \
    defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || \
    defined(STM32F779xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )
#define RCC_APB2RSTR_3
#endif

#if defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || \
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || \
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_APB2SMENR_0_USART1SMEN USART1SMEN           // 1 bits @ 14
#define RCC_CCIPR_0_USART1SEL USART1SEL            // 2 bits @ 0
#else
#define RCC_APB2SMENR_0_USART1SMEN
#define RCC_CCIPR_0_USART1SEL
#endif

#if defined(STM32L4R9xx ) || defined(STM32L4S9xx )
#define RCC_APB2SMENR_0_DSISMEN DSISMEN              // 1 bits @ 27
#define RCC_CCIPR2_DSISEL    DSISEL               // 1 bits @ 12
#else
#define RCC_APB2SMENR_0_DSISMEN
#define RCC_CCIPR2_DSISEL
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )
#define RCC_BDCR
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F7     ) || defined(STM32H7     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_BDCR_0_LSEDRV    LSEDRV               // 2 bits @ 3
#else
#define RCC_BDCR_0_LSEDRV
#endif

#if defined(STM32F3     ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || \
    defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx )
#define RCC_BDCR_1
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F411xE ) || \
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx )
#define RCC_BDCR_1_LSEMOD    LSEMOD               // 1 bits @ 3
#else
#define RCC_BDCR_1_LSEMOD
#endif

#if defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CCIPR_0_I2C3SEL  I2C3SEL              // 2 bits @ 16
#else
#define RCC_CCIPR_0_I2C3SEL
#endif

#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || \
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx )
#define RCC_CCIPR_0_SAI2SEL  SAI2SEL              // 2 bits @ 24
#else
#define RCC_CCIPR_0_SAI2SEL
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || \
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx )
#define RCC_CCIPR_0_DFSDM1SEL DFSDM1SEL            // 1 bits @ 31
#else
#define RCC_CCIPR_0_DFSDM1SEL
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CFGR_0_SW        SW                   // 2 bits @ 0
#define RCC_CFGR_0_SWS       SWS                  // 2 bits @ 2
#define RCC_CFGR_0_HPRE      HPRE                 // 4 bits @ 4
#define RCC_CSR_0_PINRSTF    PINRSTF              // 1 bits @ 26
#define RCC_CSR_0_SFTRSTF    SFTRSTF              // 1 bits @ 28
#define RCC_CSR_0_IWDGRSTF   IWDGRSTF             // 1 bits @ 29
#define RCC_CSR_0_WWDGRSTF   WWDGRSTF             // 1 bits @ 30
#define RCC_CSR_0_LPWRRSTF   LPWRRSTF             // 1 bits @ 31
#else
#define RCC_CFGR_0_SW
#define RCC_CFGR_0_SWS
#define RCC_CFGR_0_HPRE
#define RCC_CSR_0_PINRSTF
#define RCC_CSR_0_SFTRSTF
#define RCC_CSR_0_IWDGRSTF
#define RCC_CSR_0_WWDGRSTF
#define RCC_CSR_0_LPWRRSTF
#endif

#if defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) || defined(STM32L1     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CFGR_0_PPRE2     PPRE2                // 3 bits @ 11
#define RCC_CFGR_1_PPRE1     PPRE1                // 3 bits @ 8
#else
#define RCC_CFGR_0_PPRE2
#define RCC_CFGR_1_PPRE1
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F031x6 ) || defined(STM32F038xx ) || \
    defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx )
#define RCC_CFGR_0_ADCPRE    ADCPRE               // 1 bits @ 14
#else
#define RCC_CFGR_0_ADCPRE
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F031x6 ) || defined(STM32F038xx ) || \
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F1     ) || defined(STM32F301x8 ) || \
    defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || \
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32L0     ) || defined(STM32L1     )
#define RCC_CFGR_0_PLLSRC    PLLSRC               // 1 bits @ 16
#else
#define RCC_CFGR_0_PLLSRC
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || \
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F102x6 ) || defined(STM32F102xB ) || \
    defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || \
    defined(STM32F303xE ) || defined(STM32F373xC )
#define RCC_CFGR_0_USBPRE    USBPRE               // 1 bits @ 22
#else
#define RCC_CFGR_0_USBPRE
#endif

#if defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || \
    defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || \
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F401xC ) || defined(STM32F401xE ) || \
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_CFGR_0_I2SSRC    I2SSRC               // 1 bits @ 23
#else
#define RCC_CFGR_0_I2SSRC
#endif

#if defined(STM32F0     ) || defined(STM32F105xC ) || defined(STM32F107xC )
#define RCC_CFGR_0_MCO       MCO                  // 4 bits @ 24
#else
#define RCC_CFGR_0_MCO
#endif

#if defined(STM32F030x6 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) || defined(STM32F038xx ) || \
    defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || \
    defined(STM32F303x8 ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F328xx ) || \
    defined(STM32F334x8 ) || defined(STM32F398xx ) || defined(STM32L0     ) || defined(STM32L1     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CFGR_0_MCOPRE    MCOPRE               // 3 bits @ 28
#else
#define RCC_CFGR_0_MCOPRE
#endif

#if defined(STM32F030x6 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) || defined(STM32F038xx ) || \
    defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || \
    defined(STM32F303x8 ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F328xx ) || \
    defined(STM32F334x8 ) || defined(STM32F398xx )
#define RCC_CFGR_0_PLLNODIV  PLLNODIV             // 1 bits @ 31
#else
#define RCC_CFGR_0_PLLNODIV
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || \
    defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F411xE ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) || \
    defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CFGR_1
#endif

#if defined(STM32F030xC ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || \
    defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || \
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F302xE ) || defined(STM32F303xE ) || \
    defined(STM32F398xx )
#define RCC_CFGR_1_PLLSRC    PLLSRC               // 2 bits @ 15
#else
#define RCC_CFGR_1_PLLSRC
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) || \
    defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || \
    defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_CFGR_1_MCOSEL    MCOSEL               // 4 bits @ 24
#else
#define RCC_CFGR_1_MCOSEL
#endif

#if defined(STM32F302xC ) || defined(STM32F303xC ) || defined(STM32F358xx )
#define RCC_CFGR_1_MCOF      MCOF                 // 1 bits @ 28
#define RCC_CFGR3_1_TIMSW    TIMSW                // 2 bits @ 8
#else
#define RCC_CFGR_1_MCOF
#define RCC_CFGR3_1_TIMSW
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || \
    defined(STM32F411xE ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_CFGR_1_MCO2      MCO2                 // 2 bits @ 30
#define RCC_CFGR_2_MCO2PRE   MCO2PRE              // 3 bits @ 27
#else
#define RCC_CFGR_1_MCO2
#define RCC_CFGR_2_MCO2PRE
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) || \
    defined(STM32F7     )
#define RCC_CFGR_2
#endif

#if defined(STM32F410Rx )
#define RCC_CFGR_2_MCO2EN    MCO2EN               // 1 bits @ 9
#else
#define RCC_CFGR_2_MCO2EN
#endif

#if defined(STM32F1     ) || defined(STM32F373xC ) || defined(STM32F378xx )
#define RCC_CFGR_2_ADCPRE    ADCPRE               // 2 bits @ 14
#else
#define RCC_CFGR_2_ADCPRE
#endif

#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101x6 ) || defined(STM32F101xB ) || \
    defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F102x6 ) || defined(STM32F102xB ) || \
    defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || \
    defined(STM32F3     )
#define RCC_CFGR_2_MCO       MCO                  // 3 bits @ 24
#else
#define RCC_CFGR_2_MCO
#endif

#if defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F4     ) || \
    defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     )
#define RCC_CFGR_3
#endif

#if defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32H7     ) || defined(STM32L0     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CFGR_4
#endif

#if defined(STM32L1     ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx )
#define RCC_CFGR_6
#endif

#if defined(STM32F0     ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F105xC ) || \
    defined(STM32F107xC ) || defined(STM32F3     )
#define RCC_CFGR2
#define RCC_MAP0_CFGR2       CFGR2_TypeDef CFGR2
#else
#define RCC_MAP0_CFGR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F3     )
#define RCC_CFGR2_0
#define RCC_MAP0_AHBRSTR     AHBRSTR_TypeDef AHBRSTR
#else
#define RCC_MAP0_AHBRSTR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F105xC ) || defined(STM32F107xC ) || \
    defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F318xx ) || defined(STM32F358xx ) || defined(STM32F398xx )
#define RCC_CFGR2_1
#endif

#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F105xC ) || defined(STM32F107xC )
#define RCC_CFGR2_1_PREDIV1  PREDIV1              // 4 bits @ 0
#else
#define RCC_CFGR2_1_PREDIV1
#endif

#if defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F398xx )
#define RCC_CFGR2_1_ADCPRE34 ADCPRE34             // 5 bits @ 9
#define RCC_CFGR3_0_TIM8SW   TIM8SW               // 1 bits @ 9
#else
#define RCC_CFGR2_1_ADCPRE34
#define RCC_CFGR3_0_TIM8SW
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx )
#define RCC_CFGR3_0_I2C2SW   I2C2SW               // 1 bits @ 5
#else
#define RCC_CFGR3_0_I2C2SW
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || \
    defined(STM32F098xx ) || defined(STM32F373xC ) || defined(STM32F378xx )
#define RCC_CFGR3_0_CECSW    CECSW                // 1 bits @ 6
#else
#define RCC_CFGR3_0_CECSW
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || \
    defined(STM32F072xB ) || defined(STM32F078xx )
#define RCC_CFGR3_0_USBSW    USBSW                // 1 bits @ 7
#else
#define RCC_CFGR3_0_USBSW
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || \
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx )
#define RCC_CFGR3_0_TIM1SW   TIM1SW               // 1 bits @ 8
#else
#define RCC_CFGR3_0_TIM1SW
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || defined(STM32F303xE ) || \
    defined(STM32F318xx ) || defined(STM32F398xx )
#define RCC_CFGR3_0_TIM15SW  TIM15SW              // 1 bits @ 10
#define RCC_CFGR3_0_TIM16SW  TIM16SW              // 1 bits @ 11
#define RCC_CFGR3_0_TIM17SW  TIM17SW              // 1 bits @ 13
#define RCC_CFGR3_1_I2CSW    I2CSW                // 3 bits @ 4
#define RCC_CFGR3_2_I2C3SW   I2C3SW               // 1 bits @ 6
#else
#define RCC_CFGR3_0_TIM15SW
#define RCC_CFGR3_0_TIM16SW
#define RCC_CFGR3_0_TIM17SW
#define RCC_CFGR3_1_I2CSW
#define RCC_CFGR3_2_I2C3SW
#endif

#if defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F373xC ) || \
    defined(STM32F378xx ) || defined(STM32F398xx )
#define RCC_CFGR3_0_USART3SW USART3SW             // 2 bits @ 18
#else
#define RCC_CFGR3_0_USART3SW
#endif

#if defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || \
    defined(STM32F358xx ) || defined(STM32F398xx )
#define RCC_CFGR3_0_UART4SW  UART4SW              // 2 bits @ 20
#define RCC_CFGR3_0_UART5SW  UART5SW              // 2 bits @ 22
#else
#define RCC_CFGR3_0_UART4SW
#define RCC_CFGR3_0_UART5SW
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || \
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F334x8 ) || \
    defined(STM32F358xx ) || defined(STM32F398xx )
#define RCC_CFGR3_1
#endif

#if defined(STM32F302xC ) || defined(STM32F303xC ) || defined(STM32F358xx ) || defined(STM32F373xC ) || \
    defined(STM32F378xx )
#define RCC_CFGR3_2_I2CSW    I2CSW                // 2 bits @ 4
#else
#define RCC_CFGR3_2_I2CSW
#endif

#if defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 )
#define RCC_CFGR3_2_TIMSW    TIMSW                // 1 bits @ 8
#define RCC_CFGR3_3_I2CSW    I2CSW                // 1 bits @ 4
#else
#define RCC_CFGR3_2_TIMSW
#define RCC_CFGR3_3_I2CSW
#endif

#if defined(STM32F0     ) || defined(STM32F303x8 ) || defined(STM32F328xx ) || defined(STM32F334x8 )
#define RCC_CFGR3_3
#endif

#if defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CICR
#define RCC_CIER
#define RCC_CIFR
#endif

#if defined(STM32H7     ) || defined(STM32L0     )
#define RCC_CICR_0_HSIRDYC   HSIRDYC              // 1 bits @ 2
#define RCC_CICR_0_HSERDYC   HSERDYC              // 1 bits @ 3
#define RCC_CIER_0_HSIRDYIE  HSIRDYIE             // 1 bits @ 2
#define RCC_CIER_0_HSERDYIE  HSERDYIE             // 1 bits @ 3
#define RCC_CIFR_0_HSIRDYF   HSIRDYF              // 1 bits @ 2
#define RCC_CIFR_0_HSERDYF   HSERDYF              // 1 bits @ 3
#define RCC_CR_1_HSIKERON    HSIKERON             // 1 bits @ 1
#define RCC_CR_1_HSIRDY      HSIRDY               // 1 bits @ 2
#define RCC_MAP2_CRRCR       CRRCR_TypeDef CRRCR
#else
#define RCC_CICR_0_HSIRDYC
#define RCC_CICR_0_HSERDYC
#define RCC_CIER_0_HSIRDYIE
#define RCC_CIER_0_HSERDYIE
#define RCC_CIFR_0_HSIRDYF
#define RCC_CIFR_0_HSERDYF
#define RCC_CR_1_HSIKERON
#define RCC_CR_1_HSIRDY
#define RCC_MAP2_CRRCR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L031xx ) || defined(STM32L041xx ) || defined(STM32L051xx ) || defined(STM32L052xx ) || \
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || \
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CICR_2_CSSC      CSSC                 // 1 bits @ 8
#define RCC_CIFR_2_CSSF      CSSF                 // 1 bits @ 8
#define RCC_CSR_1_FWRSTF     FWRSTF               // 1 bits @ 24
#else
#define RCC_CICR_2_CSSC
#define RCC_CIFR_2_CSSF
#define RCC_CSR_1_FWRSTF
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     )
#define RCC_CIR
#define RCC_CR_0_HSIRDY      HSIRDY               // 1 bits @ 1
#define RCC_CSR_0_RMVF       RMVF                 // 1 bits @ 24
#else
#define RCC_CR_0_HSIRDY
#define RCC_CSR_0_RMVF
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) || \
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx )
#define RCC_CIR_0_HSI48RDYF  HSI48RDYF            // 1 bits @ 6
#define RCC_CIR_0_HSI48RDYIE HSI48RDYIE           // 1 bits @ 14
#define RCC_CIR_0_HSI48RDYC  HSI48RDYC            // 1 bits @ 22
#define RCC_CR2_HSI48ON      HSI48ON              // 1 bits @ 16
#define RCC_CR2_HSI48RDY     HSI48RDY             // 1 bits @ 17
#define RCC_CR2_HSI48CAL     HSI48CAL             // 8 bits @ 24
#else
#define RCC_CIR_0_HSI48RDYF
#define RCC_CIR_0_HSI48RDYIE
#define RCC_CIR_0_HSI48RDYC
#define RCC_CR2_HSI48ON
#define RCC_CR2_HSI48RDY
#define RCC_CR2_HSI48CAL
#endif

#if defined(STM32L100xBA) || defined(STM32L100xC ) || defined(STM32L151xBA) || defined(STM32L151xC ) || \
    defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) || \
    defined(STM32L152xBA) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || \
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || \
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define RCC_CIR_3_LSECSSF    LSECSSF              // 1 bits @ 6
#define RCC_CIR_3_LSECSSIE   LSECSSIE             // 1 bits @ 14
#define RCC_CIR_3_LSECSSC    LSECSSC              // 1 bits @ 22
#define RCC_CSR_1_LSECSSON   LSECSSON             // 1 bits @ 11
#define RCC_CSR_1_LSECSSD    LSECSSD              // 1 bits @ 12
#else
#define RCC_CIR_3_LSECSSF
#define RCC_CIR_3_LSECSSIE
#define RCC_CIR_3_LSECSSC
#define RCC_CSR_1_LSECSSON
#define RCC_CSR_1_LSECSSD
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || \
    defined(STM32L1     )
#define RCC_CR_0_HSION       HSION                // 1 bits @ 0
#else
#define RCC_CR_0_HSION
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F4     ) || defined(STM32F7     )
#define RCC_CR_0_HSITRIM     HSITRIM              // 5 bits @ 3
#define RCC_CR_0_HSICAL      HSICAL               // 8 bits @ 8
#else
#define RCC_CR_0_HSITRIM
#define RCC_CR_0_HSICAL
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L031xx ) || defined(STM32L041xx ) || \
    defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || \
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || \
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CR_0_CSSON       CSSON                // 1 bits @ 19
#else
#define RCC_CR_0_CSSON
#endif

#if defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32H7     )
#define RCC_CR_0_PLL2ON      PLL2ON               // 1 bits @ 26
#define RCC_CR_0_PLL2RDY     PLL2RDY              // 1 bits @ 27
#define RCC_CR_0_PLL3ON      PLL3ON               // 1 bits @ 28
#define RCC_CR_0_PLL3RDY     PLL3RDY              // 1 bits @ 29
#else
#define RCC_CR_0_PLL2ON
#define RCC_CR_0_PLL2RDY
#define RCC_CR_0_PLL3ON
#define RCC_CR_0_PLL3RDY
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || \
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CR_1
#endif

#if defined(STM32H7     ) || defined(STM32L031xx ) || defined(STM32L041xx ) || defined(STM32L051xx ) || \
    defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || \
    defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || \
    defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_CR_1_CSSHSEON    CSSHSEON             // 1 bits @ 19
#else
#define RCC_CR_1_CSSHSEON
#endif

#if defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CR_2
#endif

#if defined(STM32L011xx ) || defined(STM32L021xx ) || defined(STM32L031xx ) || defined(STM32L041xx ) || \
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || \
    defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_CR_2_HSIOUTEN    HSIOUTEN             // 1 bits @ 5
#else
#define RCC_CR_2_HSIOUTEN
#endif

#if defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L431xx ) || defined(STM32L432xx ) || \
    defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || \
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || \
    defined(STM32L4P    )
#define RCC_CRRCR
#endif

#if defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || \
    defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || \
    defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || \
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define RCC_CRRCR_1
#endif

#if defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define RCC_CRRCR_1_HSI48DIV6OUTEN HSI48DIV6OUTEN       // 1 bits @ 2
#else
#define RCC_CRRCR_1_HSI48DIV6OUTEN
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) || \
    defined(STM32F042x6 ) || defined(STM32F051x8 ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || \
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F091xC ) || defined(STM32F301x8 ) || \
    defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303x8 ) || \
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F334x8 ) || defined(STM32F373xC )
#define RCC_CSR_0_V18PWRRSTF V18PWRRSTF           // 1 bits @ 23
#else
#define RCC_CSR_0_V18PWRRSTF
#endif

#if defined(STM32F2     ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F4     ) || \
    defined(STM32F7     ) || defined(STM32L031xx ) || defined(STM32L041xx ) || defined(STM32L051xx ) || \
    defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || \
    defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || \
    defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L1     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_CSR_1
#endif

#if defined(STM32F303xC ) || defined(STM32F303xE )
#define RCC_CSR_1_VREGRSTF   VREGRSTF             // 1 bits @ 23
#else
#define RCC_CSR_1_VREGRSTF
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || \
    defined(STM32F411xE ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F427xx ) || \
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_CSR_1_BORRSTF    BORRSTF              // 1 bits @ 25
#else
#define RCC_CSR_1_BORRSTF
#endif

#if defined(STM32F2     ) || defined(STM32F4     )
#define RCC_CSR_1_PADRSTF    PADRSTF              // 1 bits @ 26
#define RCC_CSR_1_WDGRSTF    WDGRSTF              // 1 bits @ 29
#else
#define RCC_CSR_1_PADRSTF
#define RCC_CSR_1_WDGRSTF
#endif

#if defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || \
    defined(STM32F410Tx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || \
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) || \
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
#define RCC_DCKCFGR
#define RCC_MAP0_DCKCFGR     DCKCFGR_TypeDef DCKCFGR
#else
#define RCC_MAP0_DCKCFGR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F469xx ) || defined(STM32F479xx )
#define RCC_DCKCFGR_0_PLLSAIDIVR PLLSAIDIVR           // 2 bits @ 16
#else
#define RCC_DCKCFGR_0_PLLSAIDIVR
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
#define RCC_DCKCFGR_0_SAI1ASRC SAI1ASRC             // 2 bits @ 20
#define RCC_DCKCFGR_0_SAI1BSRC SAI1BSRC             // 2 bits @ 22
#else
#define RCC_DCKCFGR_0_SAI1ASRC
#define RCC_DCKCFGR_0_SAI1BSRC
#endif

#if defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F446xx )
#define RCC_DCKCFGR_0_I2S2SRC I2S2SRC              // 2 bits @ 27
#define RCC_DCKCFGR_1_I2S1SRC I2S1SRC              // 2 bits @ 25
#define RCC_DCKCFGR2_0_SDIOSEL SDIOSEL              // 1 bits @ 28
#else
#define RCC_DCKCFGR_0_I2S2SRC
#define RCC_DCKCFGR_1_I2S1SRC
#define RCC_DCKCFGR2_0_SDIOSEL
#endif

#if defined(STM32F469xx ) || defined(STM32F479xx )
#define RCC_DCKCFGR_0_DSISEL DSISEL               // 1 bits @ 29
#define RCC_DCKCFGR_1_CK48MSEL CK48MSEL             // 1 bits @ 27
#define RCC_DCKCFGR_1_SDIOSEL SDIOSEL              // 1 bits @ 28
#else
#define RCC_DCKCFGR_0_DSISEL
#define RCC_DCKCFGR_1_CK48MSEL
#define RCC_DCKCFGR_1_SDIOSEL
#endif

#if defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx )
#define RCC_DCKCFGR_1
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || \
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
#define RCC_DCKCFGR_1_PLLI2SDIVQ PLLI2SDIVQ           // 5 bits @ 0
#define RCC_DCKCFGR_1_PLLSAIDIVQ PLLSAIDIVQ           // 5 bits @ 8
#else
#define RCC_DCKCFGR_1_PLLI2SDIVQ
#define RCC_DCKCFGR_1_PLLSAIDIVQ
#endif

#if defined(STM32F446xx )
#define RCC_DCKCFGR_1_SAI1SRC SAI1SRC              // 2 bits @ 20
#define RCC_DCKCFGR_1_SAI2SRC SAI2SRC              // 2 bits @ 22
#define RCC_DCKCFGR2_0_SPDIFRXSEL SPDIFRXSEL           // 1 bits @ 29
#define RCC_PLLSAICFGR_PLLSAIM PLLSAIM              // 6 bits @ 0
#else
#define RCC_DCKCFGR_1_SAI1SRC
#define RCC_DCKCFGR_1_SAI2SRC
#define RCC_DCKCFGR2_0_SPDIFRXSEL
#define RCC_PLLSAICFGR_PLLSAIM
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F446xx ) || defined(STM32F7     )
#define RCC_DCKCFGR2
#endif

#if defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F446xx ) || defined(STM32F7     )
#define RCC_DCKCFGR2_0_CK48MSEL CK48MSEL             // 1 bits @ 27
#else
#define RCC_DCKCFGR2_0_CK48MSEL
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx )
#define RCC_DCKCFGR2_0_LPTIM1SEL LPTIM1SEL            // 2 bits @ 30
#else
#define RCC_DCKCFGR2_0_LPTIM1SEL
#endif

#if defined(STM32F769xx ) || defined(STM32F779xx )
#define RCC_DCKCFGR2_1_DSISEL DSISEL               // 1 bits @ 30
#else
#define RCC_DCKCFGR2_1_DSISEL
#endif

#if defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )
#define RCC_ICSCR
#define RCC_MAP2_ICSCR       ICSCR_TypeDef ICSCR
#else
#define RCC_MAP2_ICSCR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || \
    defined(STM32L443xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || \
    defined(STM32L485xx ) || defined(STM32L486xx )
#define RCC_ICSCR_2_HSITRIM  HSITRIM              // 5 bits @ 24
#else
#define RCC_ICSCR_2_HSITRIM
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F412Cx ) || \
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || \
    defined(STM32F423xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || \
    defined(STM32F779xx )
#define RCC_PLLCFGR_0_PLLR   PLLR                 // 3 bits @ 28
#else
#define RCC_PLLCFGR_0_PLLR
#endif

#if defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F446xx )
#define RCC_PLLI2SCFGR_PLLI2SM PLLI2SM              // 6 bits @ 0
#else
#define RCC_PLLI2SCFGR_PLLI2SM
#endif

#if defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || \
    defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || \
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || \
    defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_PLLI2SCFGR_PLLI2SQ PLLI2SQ              // 4 bits @ 24
#else
#define RCC_PLLI2SCFGR_PLLI2SQ
#endif

#if defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define RCC_PLLSAICFGR_PLLSAIP PLLSAIP              // 2 bits @ 16
#else
#define RCC_PLLSAICFGR_PLLSAIP
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_MAP1_CFGR        CFGR_TypeDef CFGR
#else
#define RCC_MAP1_CFGR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || \
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || \
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || \
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || \
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || \
    defined(STM32F7     )
#define RCC_MAP1_AHB3RSTR    AHB3RSTR_TypeDef AHB3RSTR
#define RCC_MAP0_AHB3ENR     AHB3ENR_TypeDef AHB3ENR
#define RCC_MAP0_AHB3LPENR   AHB3LPENR_TypeDef AHB3LPENR
#else
#define RCC_MAP1_AHB3RSTR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB3ENR __SOOL_PERIPH_PADDING_4
#define RCC_MAP0_AHB3LPENR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     )
#define RCC_MAP1_APB2RSTR    APB2RSTR_TypeDef APB2RSTR
#else
#define RCC_MAP1_APB2RSTR __SOOL_PERIPH_PADDING_4
#endif

//endregion

namespace sool
{
	namespace ll
	{

		class RCC
		{


		public :

#ifdef RCC_AHB1ENR
			struct AHB1ENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_AHB1ENR_0_GPIOAEN :1;
						uint32_t RCC_AHB1ENR_0_GPIOBEN :1;
						uint32_t RCC_AHB1ENR_0_GPIOCEN :1;
						uint32_t RCC_AHB1ENR_0_GPIODEN :1;
						uint32_t RCC_AHB1ENR_0_GPIOEEN :1;
						uint32_t RCC_AHB1ENR_0_GPIOFEN :1;
						uint32_t RCC_AHB1ENR_0_GPIOGEN :1;
						uint32_t RCC_AHB1ENR_0_GPIOHEN :1;
						uint32_t RCC_AHB1ENR_0_GPIOIEN :1;
						uint32_t RCC_AHB1ENR_0_GPIOJEN :1;
						uint32_t RCC_AHB1ENR_0_GPIOKEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1ENR_0_CRCEN  :1;
						uint32_t                      :2;
						uint32_t RCC_AHB1ENR_0_ETH1MACEN :1;
						uint32_t RCC_AHB1ENR_0_ETH1TXEN :1;
						uint32_t RCC_AHB1ENR_0_ETH1RXEN :1;
						uint32_t RCC_AHB1ENR_0_BKPSRAMEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1ENR_0_CCMDATARAMEN :1;
						uint32_t RCC_AHB1ENR_0_DMA1EN :1;
						uint32_t RCC_AHB1ENR_0_DMA2EN :1;
						uint32_t RCC_AHB1ENR_0_DMA2DEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1ENR_0_ETHMACEN :1;
						uint32_t RCC_AHB1ENR_0_ETHMACTXEN :1;
						uint32_t RCC_AHB1ENR_0_ETHMACRXEN :1;
						uint32_t RCC_AHB1ENR_0_ETHMACPTPEN :1;
						uint32_t RCC_AHB1ENR_0_OTGHSEN :1;
						uint32_t RCC_AHB1ENR_0_OTGHSULPIEN :1;
						uint32_t RCC_AHB1ENR_0_RNGEN  :1;
					};
#ifdef RCC_AHB1ENR_1
					struct
					{
						uint32_t RCC_AHB1ENR_1_DMA1EN :1;
						uint32_t RCC_AHB1ENR_1_DMA2EN :1;
						uint32_t RCC_AHB1ENR_1_DMAMUX1EN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB1ENR_1_ADC12EN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB1ENR_1_FLASHEN :1;
						uint32_t                      :7;
						uint32_t RCC_AHB1ENR_1_TSCEN  :1;
						uint32_t RCC_AHB1ENR_1_DMA2DEN :1;
						uint32_t RCC_AHB1ENR_1_GFXMMUEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1ENR_1_DTCMRAMEN :1;
						uint32_t                      :4;
						uint32_t RCC_AHB1ENR_1_USB1OTGHSEN :1;
						uint32_t RCC_AHB1ENR_1_USB1OTGHSULPIEN :1;
						uint32_t RCC_AHB1ENR_1_USB2OTGHSEN :1;
						uint32_t RCC_AHB1ENR_1_USB2OTGHSULPIEN :1;
						uint32_t                      :3;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB1LPENR
			struct AHB1LPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef RCC_AHB1LPENR_0
					struct
					{
						uint32_t GPIOALPEN            :1;
						uint32_t GPIOBLPEN            :1;
						uint32_t GPIOCLPEN            :1;
						uint32_t RCC_AHB1LPENR_0_GPIODLPEN :1;
						uint32_t RCC_AHB1LPENR_0_GPIOELPEN :1;
						uint32_t RCC_AHB1LPENR_0_GPIOFLPEN :1;
						uint32_t RCC_AHB1LPENR_0_GPIOGLPEN :1;
						uint32_t GPIOHLPEN            :1;
						uint32_t RCC_AHB1LPENR_0_GPIOILPEN :1;
						uint32_t RCC_AHB1LPENR_0_GPIOJLPEN :1;
						uint32_t RCC_AHB1LPENR_0_GPIOKLPEN :1;
						uint32_t                      :1;
						uint32_t CRCLPEN              :1;
						uint32_t RCC_AHB1LPENR_0_AXILPEN :1;
						uint32_t                      :1;
						uint32_t FLITFLPEN            :1;
						uint32_t SRAM1LPEN            :1;
						uint32_t RCC_AHB1LPENR_0_SRAM2LPEN :1;
						uint32_t RCC_AHB1LPENR_0_BKPSRAMLPEN :1;
						uint32_t RCC_AHB1LPENR_0_SRAM3LPEN :1;
						uint32_t RCC_AHB1LPENR_0_DTCMLPEN :1;
						uint32_t DMA1LPEN             :1;
						uint32_t DMA2LPEN             :1;
						uint32_t RCC_AHB1LPENR_0_DMA2DLPEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1LPENR_0_ETHMACLPEN :1;
						uint32_t RCC_AHB1LPENR_0_ETHMACTXLPEN :1;
						uint32_t RCC_AHB1LPENR_0_ETHMACRXLPEN :1;
						uint32_t RCC_AHB1LPENR_0_ETHMACPTPLPEN :1;
						uint32_t RCC_AHB1LPENR_0_OTGHSLPEN :1;
						uint32_t RCC_AHB1LPENR_0_OTGHSULPILPEN :1;
						uint32_t RCC_AHB1LPENR_0_RNGLPEN :1;
					};
#endif
#ifdef RCC_AHB1LPENR_1
					struct
					{
						uint32_t DMA1LPEN             :1;
						uint32_t DMA2LPEN             :1;
						uint32_t                      :3;
						uint32_t ADC12LPEN            :1;
						uint32_t                      :9;
						uint32_t ETH1MACLPEN          :1;
						uint32_t ETH1TXLPEN           :1;
						uint32_t ETH1RXLPEN           :1;
						uint32_t                      :7;
						uint32_t USB1OTGHSLPEN        :1;
						uint32_t USB1OTGHSULPILPEN    :1;
						uint32_t USB2OTGHSLPEN        :1;
						uint32_t USB2OTGHSULPILPEN    :1;
						uint32_t                      :3;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB1RSTR
			struct AHB1RSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_AHB1RSTR_0_GPIOARST :1;
						uint32_t RCC_AHB1RSTR_0_GPIOBRST :1;
						uint32_t RCC_AHB1RSTR_0_GPIOCRST :1;
						uint32_t RCC_AHB1RSTR_0_GPIODRST :1;
						uint32_t RCC_AHB1RSTR_0_GPIOERST :1;
						uint32_t RCC_AHB1RSTR_0_GPIOFRST :1;
						uint32_t RCC_AHB1RSTR_0_GPIOGRST :1;
						uint32_t RCC_AHB1RSTR_0_GPIOHRST :1;
						uint32_t RCC_AHB1RSTR_0_GPIOIRST :1;
						uint32_t RCC_AHB1RSTR_0_GPIOJRST :1;
						uint32_t RCC_AHB1RSTR_0_GPIOKRST :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1RSTR_0_CRCRST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB1RSTR_0_ETH1MACRST :1;
						uint32_t RCC_AHB1RSTR_0_TSCRST :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1RSTR_0_GFXMMURST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB1RSTR_0_DMA1RST :1;
						uint32_t RCC_AHB1RSTR_0_DMA2RST :1;
						uint32_t RCC_AHB1RSTR_0_DMA2DRST :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1RSTR_0_ETHMACRST :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1RSTR_0_USB2OTGHSRST :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1RSTR_0_OTGHRST :1;
						uint32_t                      :1;
						uint32_t RCC_AHB1RSTR_0_RNGRST :1;
					};
#ifdef RCC_AHB1RSTR_1
					struct
					{
						uint32_t DMA1RST              :1;
						uint32_t DMA2RST              :1;
						uint32_t RCC_AHB1RSTR_1_DMAMUX1RST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB1RSTR_1_ADC12RST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB1RSTR_1_FLASHRST :1;
						uint32_t                      :8;
						uint32_t RCC_AHB1RSTR_1_DMA2DRST :1;
						uint32_t                      :7;
						uint32_t RCC_AHB1RSTR_1_USB1OTGHSRST :1;
						uint32_t                      :6;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB1SMENR
			struct AHB1SMENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t DMA1SMEN             :1;
					uint32_t DMA2SMEN             :1;
					uint32_t RCC_AHB1SMENR_DMAMUX1SMEN :1;
					uint32_t                      :5;
					uint32_t FLASHSMEN            :1;
					uint32_t SRAM1SMEN            :1;
					uint32_t                      :2;
					uint32_t CRCSMEN              :1;
					uint32_t                      :3;
					uint32_t TSCSMEN              :1;
					uint32_t RCC_AHB1SMENR_DMA2DSMEN :1;
					uint32_t RCC_AHB1SMENR_GFXMMUSMEN :1;
					uint32_t                      :13;


			};
#endif

#ifdef RCC_AHB2ENR
			struct AHB2ENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_AHB2ENR_0_DCMIEN :1;
						uint32_t RCC_AHB2ENR_0_JPEGEN :1;
						uint32_t RCC_AHB2ENR_0_GPIOCEN :1;
						uint32_t RCC_AHB2ENR_0_GPIODEN :1;
						uint32_t RCC_AHB2ENR_0_CRYPEN :1;
						uint32_t RCC_AHB2ENR_0_HASHEN :1;
						uint32_t RCC_AHB2ENR_0_RNGEN  :1;
						uint32_t RCC_AHB2ENR_0_OTGFSEN :1;
						uint32_t RCC_AHB2ENR_0_GPIOIEN :1;
						uint32_t RCC_AHB2ENR_0_SDMMC2EN :1;
						uint32_t                      :3;
						uint32_t RCC_AHB2ENR_0_ADCEN  :1;
						uint32_t                      :2;
						uint32_t RCC_AHB2ENR_0_AESEN  :1;
						uint32_t                      :3;
						uint32_t RCC_AHB2ENR_0_OSPIMEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHB2ENR_0_SDMMC1EN :1;
						uint32_t                      :6;
						uint32_t RCC_AHB2ENR_0_D2SRAM1EN :1;
						uint32_t RCC_AHB2ENR_0_D2SRAM2EN :1;
						uint32_t RCC_AHB2ENR_0_D2SRAM3EN :1;
					};
#ifdef RCC_AHB2ENR_1
					struct
					{
						uint32_t RCC_AHB2ENR_1_GPIOAEN :1;
						uint32_t RCC_AHB2ENR_1_GPIOBEN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB2ENR_1_AESEN  :1;
						uint32_t RCC_AHB2ENR_1_GPIOFEN :1;
						uint32_t RCC_AHB2ENR_1_GPIOGEN :1;
						uint32_t RCC_AHB2ENR_1_GPIOHEN :1;
						uint32_t                      :4;
						uint32_t RCC_AHB2ENR_1_OTGFSEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHB2ENR_1_DCMIEN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB2ENR_1_HASHEN :1;
						uint32_t RCC_AHB2ENR_1_RNGEN  :1;
						uint32_t                      :13;
					};
#endif
#ifdef RCC_AHB2ENR_2
					struct
					{
						uint32_t                      :4;
						uint32_t GPIOEEN              :1;
						uint32_t                      :27;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB2LPENR
			struct AHB2LPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_AHB2LPENR_0_DCMILPEN :1;
						uint32_t RCC_AHB2LPENR_0_JPEGLPEN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB2LPENR_0_CRYPLPEN :1;
						uint32_t RCC_AHB2LPENR_0_HASHLPEN :1;
						uint32_t RCC_AHB2LPENR_0_RNGLPEN :1;
						uint32_t RCC_AHB2LPENR_0_OTGFSLPEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHB2LPENR_0_SDMMC2LPEN :1;
						uint32_t                      :20;
						uint32_t RCC_AHB2LPENR_0_D2SRAM1LPEN :1;
						uint32_t RCC_AHB2LPENR_0_D2SRAM3LPEN :1;
					};
#ifdef RCC_AHB2LPENR_1
					struct
					{
						uint32_t                      :4;
						uint32_t RCC_AHB2LPENR_1_AESLPEN :1;
						uint32_t                      :25;
						uint32_t RCC_AHB2LPENR_1_D2SRAM2LPEN :1;
						uint32_t                      :1;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB2RSTR
			struct AHB2RSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_AHB2RSTR_0_DCMIRST :1;
						uint32_t RCC_AHB2RSTR_0_JPEGRST :1;
						uint32_t RCC_AHB2RSTR_0_GPIOCRST :1;
						uint32_t RCC_AHB2RSTR_0_GPIODRST :1;
						uint32_t RCC_AHB2RSTR_0_CRYPRST :1;
						uint32_t RCC_AHB2RSTR_0_HASHRST :1;
						uint32_t RCC_AHB2RSTR_0_RNGRST :1;
						uint32_t RCC_AHB2RSTR_0_OTGFSRST :1;
						uint32_t RCC_AHB2RSTR_0_GPIOIRST :1;
						uint32_t RCC_AHB2RSTR_0_SDMMC2RST :1;
						uint32_t                      :3;
						uint32_t RCC_AHB2RSTR_0_ADCRST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB2RSTR_0_AESRST :1;
						uint32_t                      :3;
						uint32_t RCC_AHB2RSTR_0_OSPIMRST :1;
						uint32_t                      :1;
						uint32_t RCC_AHB2RSTR_0_SDMMC1RST :1;
						uint32_t                      :9;
					};
#ifdef RCC_AHB2RSTR_1
					struct
					{
						uint32_t RCC_AHB2RSTR_1_GPIOARST :1;
						uint32_t RCC_AHB2RSTR_1_GPIOBRST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB2RSTR_1_AESRST :1;
						uint32_t RCC_AHB2RSTR_1_GPIOFRST :1;
						uint32_t RCC_AHB2RSTR_1_GPIOGRST :1;
						uint32_t RCC_AHB2RSTR_1_GPIOHRST :1;
						uint32_t                      :4;
						uint32_t RCC_AHB2RSTR_1_OTGFSRST :1;
						uint32_t                      :1;
						uint32_t RCC_AHB2RSTR_1_DCMIRST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB2RSTR_1_HASHRST :1;
						uint32_t RCC_AHB2RSTR_1_RNGRST :1;
						uint32_t                      :13;
					};
#endif
#ifdef RCC_AHB2RSTR_2
					struct
					{
						uint32_t                      :4;
						uint32_t GPIOERST             :1;
						uint32_t                      :27;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB2SMENR
			struct AHB2SMENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t GPIOASMEN            :1;
					uint32_t GPIOBSMEN            :1;
					uint32_t GPIOCSMEN            :1;
					uint32_t RCC_AHB2SMENR_GPIODSMEN :1;
					uint32_t RCC_AHB2SMENR_GPIOESMEN :1;
					uint32_t RCC_AHB2SMENR_GPIOFSMEN :1;
					uint32_t RCC_AHB2SMENR_GPIOGSMEN :1;
					uint32_t GPIOHSMEN            :1;
					uint32_t RCC_AHB2SMENR_GPIOISMEN :1;
					uint32_t SRAM2SMEN            :1;
					uint32_t RCC_AHB2SMENR_SRAM3SMEN :1;
					uint32_t                      :1;
					uint32_t RCC_AHB2SMENR_OTGFSSMEN :1;
					uint32_t ADCSMEN              :1;
					uint32_t RCC_AHB2SMENR_DCMISMEN :1;
					uint32_t                      :1;
					uint32_t RCC_AHB2SMENR_AESSMEN :1;
					uint32_t RCC_AHB2SMENR_HASHSMEN :1;
					uint32_t RNGSMEN              :1;
					uint32_t                      :1;
					uint32_t RCC_AHB2SMENR_OSPIMSMEN :1;
					uint32_t                      :1;
					uint32_t RCC_AHB2SMENR_SDMMC1SMEN :1;
					uint32_t                      :9;


			};
#endif

#ifdef RCC_AHB3ENR
			struct AHB3ENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef RCC_AHB3ENR_0
					struct
					{
						uint32_t RCC_AHB3ENR_0_FSMCEN :1;
						uint32_t RCC_AHB3ENR_0_QSPIEN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB3ENR_0_DMA2DEN :1;
						uint32_t RCC_AHB3ENR_0_JPGDECEN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB3ENR_0_OSPI1EN :1;
						uint32_t RCC_AHB3ENR_0_OSPI2EN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB3ENR_0_FMCEN  :1;
						uint32_t                      :3;
						uint32_t RCC_AHB3ENR_0_SDMMC1EN :1;
						uint32_t                      :15;
					};
#endif
#ifdef RCC_AHB3ENR_1
					struct
					{
						uint32_t RCC_AHB3ENR_1_FMCEN  :1;
						uint32_t                      :13;
						uint32_t RCC_AHB3ENR_1_QSPIEN :1;
						uint32_t                      :17;
					};
#endif
#ifdef RCC_AHB3ENR_2
					struct
					{
						uint32_t RCC_AHB3ENR_2_MDMAEN :1;
						uint32_t                      :7;
						uint32_t RCC_AHB3ENR_2_QSPIEN :1;
						uint32_t                      :23;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB3LPENR
			struct AHB3LPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef RCC_AHB3LPENR_0
					struct
					{
						uint32_t RCC_AHB3LPENR_0_FSMCLPEN :1;
						uint32_t RCC_AHB3LPENR_0_QSPILPEN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB3LPENR_0_DMA2DLPEN :1;
						uint32_t RCC_AHB3LPENR_0_JPGDECLPEN :1;
						uint32_t                      :2;
						uint32_t RCC_AHB3LPENR_0_FLASHLPEN :1;
						uint32_t                      :3;
						uint32_t RCC_AHB3LPENR_0_FMCLPEN :1;
						uint32_t                      :3;
						uint32_t RCC_AHB3LPENR_0_SDMMC1LPEN :1;
						uint32_t                      :11;
						uint32_t RCC_AHB3LPENR_0_DTCM1LPEN :1;
						uint32_t RCC_AHB3LPENR_0_DTCM2LPEN :1;
						uint32_t RCC_AHB3LPENR_0_ITCMLPEN :1;
						uint32_t RCC_AHB3LPENR_0_AXISRAMLPEN :1;
					};
#endif
#ifdef RCC_AHB3LPENR_1
					struct
					{
						uint32_t RCC_AHB3LPENR_1_FMCLPEN :1;
						uint32_t                      :13;
						uint32_t RCC_AHB3LPENR_1_QSPILPEN :1;
						uint32_t                      :17;
					};
#endif
#ifdef RCC_AHB3LPENR_2
					struct
					{
						uint32_t MDMALPEN             :1;
						uint32_t                      :31;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB3RSTR
			struct AHB3RSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef RCC_AHB3RSTR_0
					struct
					{
						uint32_t RCC_AHB3RSTR_0_FSMCRST :1;
						uint32_t RCC_AHB3RSTR_0_QSPIRST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB3RSTR_0_DMA2DRST :1;
						uint32_t RCC_AHB3RSTR_0_JPGDECRST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB3RSTR_0_OSPI1RST :1;
						uint32_t RCC_AHB3RSTR_0_OSPI2RST :1;
						uint32_t                      :2;
						uint32_t RCC_AHB3RSTR_0_FMCRST :1;
						uint32_t                      :3;
						uint32_t RCC_AHB3RSTR_0_SDMMC1RST :1;
						uint32_t                      :14;
						uint32_t RCC_AHB3RSTR_0_CPURST :1;
					};
#endif
#ifdef RCC_AHB3RSTR_1
					struct
					{
						uint32_t RCC_AHB3RSTR_1_FMCRST :1;
						uint32_t                      :13;
						uint32_t RCC_AHB3RSTR_1_QSPIRST :1;
						uint32_t                      :17;
					};
#endif
#ifdef RCC_AHB3RSTR_2
					struct
					{
						uint32_t RCC_AHB3RSTR_2_MDMARST :1;
						uint32_t                      :7;
						uint32_t RCC_AHB3RSTR_2_QSPIRST :1;
						uint32_t                      :23;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB3SMENR
			struct AHB3SMENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_AHB3SMENR_0_FMCSMEN :1;
						uint32_t                      :7;
						uint32_t RCC_AHB3SMENR_0_QSPISMEN :1;
						uint32_t RCC_AHB3SMENR_0_OSPI2SMEN :1;
						uint32_t                      :22;
					};
#ifdef RCC_AHB3SMENR_1
					struct
					{
						uint32_t                      :8;
						uint32_t OSPI1SMEN            :1;
						uint32_t                      :23;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHB4ENR
			struct AHB4ENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t GPIOAEN              :1;
					uint32_t GPIOBEN              :1;
					uint32_t GPIOCEN              :1;
					uint32_t GPIODEN              :1;
					uint32_t GPIOEEN              :1;
					uint32_t GPIOFEN              :1;
					uint32_t GPIOGEN              :1;
					uint32_t GPIOHEN              :1;
					uint32_t GPIOIEN              :1;
					uint32_t GPIOJEN              :1;
					uint32_t GPIOKEN              :1;
					uint32_t                      :8;
					uint32_t CRCEN                :1;
					uint32_t                      :1;
					uint32_t BDMAEN               :1;
					uint32_t                      :2;
					uint32_t ADC3EN               :1;
					uint32_t HSEMEN               :1;
					uint32_t                      :2;
					uint32_t BKPRAMEN             :1;
					uint32_t D3SRAM1EN            :1;
					uint32_t                      :2;


			};
#endif

#ifdef RCC_AHB4LPENR
			struct AHB4LPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t GPIOALPEN            :1;
					uint32_t GPIOBLPEN            :1;
					uint32_t GPIOCLPEN            :1;
					uint32_t GPIODLPEN            :1;
					uint32_t GPIOELPEN            :1;
					uint32_t GPIOFLPEN            :1;
					uint32_t GPIOGLPEN            :1;
					uint32_t GPIOHLPEN            :1;
					uint32_t GPIOILPEN            :1;
					uint32_t GPIOJLPEN            :1;
					uint32_t GPIOKLPEN            :1;
					uint32_t                      :8;
					uint32_t CRCLPEN              :1;
					uint32_t                      :1;
					uint32_t BDMALPEN             :1;
					uint32_t                      :2;
					uint32_t ADC3LPEN             :1;
					uint32_t                      :3;
					uint32_t BKPRAMLPEN           :1;
					uint32_t D3SRAM1LPEN          :1;
					uint32_t                      :2;


			};
#endif

#ifdef RCC_AHB4RSTR
			struct AHB4RSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t GPIOARST             :1;
					uint32_t GPIOBRST             :1;
					uint32_t GPIOCRST             :1;
					uint32_t GPIODRST             :1;
					uint32_t GPIOERST             :1;
					uint32_t GPIOFRST             :1;
					uint32_t GPIOGRST             :1;
					uint32_t GPIOHRST             :1;
					uint32_t GPIOIRST             :1;
					uint32_t GPIOJRST             :1;
					uint32_t GPIOKRST             :1;
					uint32_t                      :8;
					uint32_t CRCRST               :1;
					uint32_t                      :1;
					uint32_t BDMARST              :1;
					uint32_t                      :2;
					uint32_t ADC3RST              :1;
					uint32_t HSEMRST              :1;
					uint32_t                      :6;


			};
#endif

#ifdef RCC_AHBENR
			struct AHBENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef RCC_AHBENR_0
					struct
					{
						uint32_t RCC_AHBENR_0_DMAEN   :1;
						uint32_t RCC_AHBENR_0_DMA2EN  :1;
						uint32_t RCC_AHBENR_0_SRAMEN  :1;
						uint32_t                      :1;
						uint32_t RCC_AHBENR_0_FLITFEN :1;
						uint32_t RCC_AHBENR_0_FMCEN   :1;
						uint32_t RCC_AHBENR_0_CRCEN   :1;
						uint32_t                      :1;
						uint32_t RCC_AHBENR_0_FSMCEN  :1;
						uint32_t                      :1;
						uint32_t RCC_AHBENR_0_SDIOEN  :1;
						uint32_t                      :1;
						uint32_t RCC_AHBENR_0_OTGFSEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHBENR_0_ETHMACEN :1;
						uint32_t RCC_AHBENR_0_ETHMACTXEN :1;
						uint32_t RCC_AHBENR_0_ETHMACRXEN :1;
						uint32_t RCC_AHBENR_0_GPIOAEN :1;
						uint32_t RCC_AHBENR_0_GPIOBEN :1;
						uint32_t RCC_AHBENR_0_GPIOCEN :1;
						uint32_t RCC_AHBENR_0_GPIODEN :1;
						uint32_t RCC_AHBENR_0_GPIOEEN :1;
						uint32_t RCC_AHBENR_0_GPIOFEN :1;
						uint32_t RCC_AHBENR_0_GPIOGEN :1;
						uint32_t RCC_AHBENR_0_TSCEN   :1;
						uint32_t                      :2;
						uint32_t RCC_AHBENR_0_AESEN   :1;
						uint32_t RCC_AHBENR_0_ADC1EN  :1;
						uint32_t RCC_AHBENR_0_ADC34EN :1;
						uint32_t                      :2;
					};
#endif
#ifdef RCC_AHBENR_1
					struct
					{
						uint32_t RCC_AHBENR_1_DMA1EN  :1;
						uint32_t RCC_AHBENR_1_GPIOBEN :1;
						uint32_t RCC_AHBENR_1_GPIOCEN :1;
						uint32_t RCC_AHBENR_1_GPIODEN :1;
						uint32_t RCC_AHBENR_1_GPIOEEN :1;
						uint32_t                      :1;
						uint32_t RCC_AHBENR_1_GPIOFEN :1;
						uint32_t RCC_AHBENR_1_GPIOGEN :1;
						uint32_t RCC_AHBENR_1_MIFEN   :1;
						uint32_t                      :3;
						uint32_t RCC_AHBENR_1_CRCEN   :1;
						uint32_t                      :2;
						uint32_t RCC_AHBENR_1_FLITFEN :1;
						uint32_t RCC_AHBENR_1_GPIOHEN :1;
						uint32_t                      :3;
						uint32_t RCC_AHBENR_1_RNGEN   :1;
						uint32_t                      :3;
						uint32_t RCC_AHBENR_1_TSEN    :1;
						uint32_t RCC_AHBENR_1_DMA2EN  :1;
						uint32_t                      :2;
						uint32_t RCC_AHBENR_1_ADC12EN :1;
						uint32_t                      :1;
						uint32_t RCC_AHBENR_1_FSMCEN  :1;
						uint32_t                      :1;
					};
#endif
#ifdef RCC_AHBENR_2
					struct
					{
						uint32_t RCC_AHBENR_2_GPIOAEN :1;
						uint32_t                      :4;
						uint32_t RCC_AHBENR_2_GPIOHEN :1;
						uint32_t                      :10;
						uint32_t RCC_AHBENR_2_TSCEN   :1;
						uint32_t                      :7;
						uint32_t RCC_AHBENR_2_CRYPEN  :1;
						uint32_t                      :7;
					};
#endif
#ifdef RCC_AHBENR_3
					struct
					{
						uint32_t                      :24;
						uint32_t DMA1EN               :1;
						uint32_t                      :7;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHBLPENR
			struct AHBLPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t GPIOALPEN            :1;
					uint32_t GPIOBLPEN            :1;
					uint32_t GPIOCLPEN            :1;
					uint32_t GPIODLPEN            :1;
					uint32_t RCC_AHBLPENR_GPIOELPEN :1;
					uint32_t GPIOHLPEN            :1;
					uint32_t RCC_AHBLPENR_GPIOFLPEN :1;
					uint32_t RCC_AHBLPENR_GPIOGLPEN :1;
					uint32_t                      :4;
					uint32_t CRCLPEN              :1;
					uint32_t                      :2;
					uint32_t FLITFLPEN            :1;
					uint32_t SRAMLPEN             :1;
					uint32_t                      :7;
					uint32_t DMA1LPEN             :1;
					uint32_t RCC_AHBLPENR_DMA2LPEN :1;
					uint32_t                      :1;
					uint32_t RCC_AHBLPENR_AESLPEN :1;
					uint32_t                      :2;
					uint32_t RCC_AHBLPENR_FSMCLPEN :1;
					uint32_t                      :1;


			};
#endif

#ifdef RCC_AHBRSTR
			struct AHBRSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_AHBRSTR_0_DMARST :1;
						uint32_t                      :4;
						uint32_t RCC_AHBRSTR_0_FMCRST :1;
						uint32_t                      :2;
						uint32_t RCC_AHBRSTR_0_MIFRST :1;
						uint32_t                      :3;
						uint32_t RCC_AHBRSTR_0_OTGFSRST :1;
						uint32_t                      :1;
						uint32_t RCC_AHBRSTR_0_ETHMACRST :1;
						uint32_t RCC_AHBRSTR_0_FLITFRST :1;
						uint32_t RCC_AHBRSTR_0_GPIOHRST :1;
						uint32_t RCC_AHBRSTR_0_GPIOARST :1;
						uint32_t RCC_AHBRSTR_0_GPIOBRST :1;
						uint32_t RCC_AHBRSTR_0_GPIOCRST :1;
						uint32_t RCC_AHBRSTR_0_GPIODRST :1;
						uint32_t RCC_AHBRSTR_0_GPIOERST :1;
						uint32_t RCC_AHBRSTR_0_GPIOFRST :1;
						uint32_t RCC_AHBRSTR_0_GPIOGRST :1;
						uint32_t RCC_AHBRSTR_0_TSCRST :1;
						uint32_t RCC_AHBRSTR_0_DMA2RST :1;
						uint32_t                      :1;
						uint32_t RCC_AHBRSTR_0_AESRST :1;
						uint32_t RCC_AHBRSTR_0_ADC1RST :1;
						uint32_t RCC_AHBRSTR_0_ADC34RST :1;
						uint32_t RCC_AHBRSTR_0_FSMCRST :1;
						uint32_t                      :1;
					};
#ifdef RCC_AHBRSTR_1
					struct
					{
						uint32_t RCC_AHBRSTR_1_DMA1RST :1;
						uint32_t RCC_AHBRSTR_1_GPIOBRST :1;
						uint32_t RCC_AHBRSTR_1_GPIOCRST :1;
						uint32_t RCC_AHBRSTR_1_GPIODRST :1;
						uint32_t RCC_AHBRSTR_1_GPIOERST :1;
						uint32_t RCC_AHBRSTR_1_GPIOHRST :1;
						uint32_t RCC_AHBRSTR_1_GPIOFRST :1;
						uint32_t RCC_AHBRSTR_1_GPIOGRST :1;
						uint32_t                      :4;
						uint32_t RCC_AHBRSTR_1_CRCRST :1;
						uint32_t                      :3;
						uint32_t RCC_AHBRSTR_1_TSCRST :1;
						uint32_t                      :3;
						uint32_t RCC_AHBRSTR_1_RNGRST :1;
						uint32_t                      :3;
						uint32_t RCC_AHBRSTR_1_CRYPRST :1;
						uint32_t                      :3;
						uint32_t RCC_AHBRSTR_1_ADC12RST :1;
						uint32_t                      :3;
					};
#endif
#ifdef RCC_AHBRSTR_2
					struct
					{
						uint32_t GPIOARST             :1;
						uint32_t                      :23;
						uint32_t DMA1RST              :1;
						uint32_t                      :7;
					};
#endif
				};

			};
#endif

#ifdef RCC_AHBSMENR
			struct AHBSMENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t DMASMEN              :1;
						uint32_t                      :7;
						uint32_t MIFSMEN              :1;
						uint32_t SRAMSMEN             :1;
						uint32_t                      :2;
						uint32_t CRCSMEN              :1;
						uint32_t                      :3;
						uint32_t RCC_AHBSMENR_0_TSCSMEN :1;
						uint32_t                      :3;
						uint32_t RCC_AHBSMENR_0_RNGSMEN :1;
						uint32_t                      :3;
						uint32_t RCC_AHBSMENR_0_CRYPSMEN :1;
						uint32_t                      :7;
					};
					struct
					{
						uint32_t DMA1SMEN             :1;
						uint32_t                      :31;
					};
				};

			};
#endif

#ifdef RCC_APB1ENR
			struct APB1ENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_APB1ENR_0_TIM2EN :1;
						uint32_t RCC_APB1ENR_0_TIM3EN :1;
						uint32_t RCC_APB1ENR_0_TIM4EN :1;
						uint32_t RCC_APB1ENR_0_TIM5EN :1;
						uint32_t RCC_APB1ENR_0_TIM6EN :1;
						uint32_t RCC_APB1ENR_0_TIM7EN :1;
						uint32_t RCC_APB1ENR_0_TIM12EN :1;
						uint32_t RCC_APB1ENR_0_TIM13EN :1;
						uint32_t RCC_APB1ENR_0_TIM14EN :1;
						uint32_t RCC_APB1ENR_0_TIM18EN :1;
						uint32_t RCC_APB1ENR_0_RTCAPBEN :1;
						uint32_t WWDGEN               :1;
						uint32_t                      :1;
						uint32_t RCC_APB1ENR_0_CAN3EN :1;
						uint32_t RCC_APB1ENR_0_SPI2EN :1;
						uint32_t RCC_APB1ENR_0_SPI3EN :1;
						uint32_t RCC_APB1ENR_0_SPDIFRXEN :1;
						uint32_t RCC_APB1ENR_0_USART2EN :1;
						uint32_t RCC_APB1ENR_0_USART3EN :1;
						uint32_t RCC_APB1ENR_0_USART4EN :1;
						uint32_t RCC_APB1ENR_0_USART5EN :1;
						uint32_t I2C1EN               :1;
						uint32_t RCC_APB1ENR_0_I2C2EN :1;
						uint32_t RCC_APB1ENR_0_USBEN  :1;
						uint32_t RCC_APB1ENR_0_FMPI2C1EN :1;
						uint32_t RCC_APB1ENR_0_CANEN  :1;
						uint32_t RCC_APB1ENR_0_CAN2EN :1;
						uint32_t RCC_APB1ENR_0_CRSEN  :1;
						uint32_t PWREN                :1;
						uint32_t RCC_APB1ENR_0_DACEN  :1;
						uint32_t RCC_APB1ENR_0_CECEN  :1;
						uint32_t RCC_APB1ENR_0_UART8EN :1;
					};
#ifdef RCC_APB1ENR_1
					struct
					{
						uint32_t                      :9;
						uint32_t RCC_APB1ENR_1_LPTIM1EN :1;
						uint32_t RCC_APB1ENR_1_RTCEN  :1;
						uint32_t                      :7;
						uint32_t RCC_APB1ENR_1_LPUART1EN :1;
						uint32_t RCC_APB1ENR_1_UART4EN :1;
						uint32_t RCC_APB1ENR_1_UART5EN :1;
						uint32_t                      :2;
						uint32_t RCC_APB1ENR_1_I2C3EN :1;
						uint32_t RCC_APB1ENR_1_I2C4EN :1;
						uint32_t RCC_APB1ENR_1_CAN1EN :1;
						uint32_t RCC_APB1ENR_1_DAC2EN :1;
						uint32_t RCC_APB1ENR_1_BKPEN  :1;
						uint32_t                      :1;
						uint32_t RCC_APB1ENR_1_DAC1EN :1;
						uint32_t RCC_APB1ENR_1_UART7EN :1;
						uint32_t RCC_APB1ENR_1_COMPEN :1;
					};
#endif
#ifdef RCC_APB1ENR_2
					struct
					{
						uint32_t                      :9;
						uint32_t RCC_APB1ENR_2_LCDEN  :1;
						uint32_t                      :17;
						uint32_t RCC_APB1ENR_2_CAN3EN :1;
						uint32_t                      :2;
						uint32_t RCC_APB1ENR_2_I2C3EN :1;
						uint32_t RCC_APB1ENR_2_LPTIM1EN :1;
					};
#endif
#ifdef RCC_APB1ENR_3
					struct
					{
						uint32_t                      :27;
						uint32_t CECEN                :1;
						uint32_t                      :4;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB1ENR1
			struct APB1ENR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t TIM2EN               :1;
						uint32_t RCC_APB1ENR1_0_TIM3EN :1;
						uint32_t RCC_APB1ENR1_0_TIM4EN :1;
						uint32_t RCC_APB1ENR1_0_TIM5EN :1;
						uint32_t TIM6EN               :1;
						uint32_t RCC_APB1ENR1_0_TIM7EN :1;
						uint32_t                      :3;
						uint32_t RCC_APB1ENR1_0_LCDEN :1;
						uint32_t RCC_APB1ENR1_0_RTCAPBEN :1;
						uint32_t WWDGEN               :1;
						uint32_t                      :2;
						uint32_t RCC_APB1ENR1_0_SPI2EN :1;
						uint32_t SPI3EN               :1;
						uint32_t                      :1;
						uint32_t USART2EN             :1;
						uint32_t RCC_APB1ENR1_0_USART3EN :1;
						uint32_t RCC_APB1ENR1_0_UART4EN :1;
						uint32_t RCC_APB1ENR1_0_UART5EN :1;
						uint32_t I2C1EN               :1;
						uint32_t RCC_APB1ENR1_0_I2C2EN :1;
						uint32_t I2C3EN               :1;
						uint32_t RCC_APB1ENR1_0_CRSEN :1;
						uint32_t CAN1EN               :1;
						uint32_t RCC_APB1ENR1_0_USBFSEN :1;
						uint32_t                      :1;
						uint32_t PWREN                :1;
						uint32_t DAC1EN               :1;
						uint32_t OPAMPEN              :1;
						uint32_t LPTIM1EN             :1;
					};
#ifdef RCC_APB1ENR1_1
					struct
					{
						uint32_t                      :26;
						uint32_t CAN2EN               :1;
						uint32_t                      :5;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB1ENR2
			struct APB1ENR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t LPUART1EN            :1;
					uint32_t RCC_APB1ENR2_I2C4EN  :1;
					uint32_t RCC_APB1ENR2_SWPMI1EN :1;
					uint32_t                      :2;
					uint32_t LPTIM2EN             :1;
					uint32_t                      :26;


			};
#endif

#ifdef RCC_APB1HENR
			struct APB1HENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :1;
					uint32_t CRSEN                :1;
					uint32_t SWPMIEN              :1;
					uint32_t                      :1;
					uint32_t OPAMPEN              :1;
					uint32_t MDIOSEN              :1;
					uint32_t                      :2;
					uint32_t FDCANEN              :1;
					uint32_t                      :23;


			};
#endif

#ifdef RCC_APB1HLPENR
			struct APB1HLPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :1;
					uint32_t CRSLPEN              :1;
					uint32_t SWPMILPEN            :1;
					uint32_t                      :1;
					uint32_t OPAMPLPEN            :1;
					uint32_t MDIOSLPEN            :1;
					uint32_t                      :2;
					uint32_t FDCANLPEN            :1;
					uint32_t                      :23;


			};
#endif

#ifdef RCC_APB1HRSTR
			struct APB1HRSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :1;
					uint32_t CRSRST               :1;
					uint32_t SWPMIRST             :1;
					uint32_t                      :1;
					uint32_t OPAMPRST             :1;
					uint32_t MDIOSRST             :1;
					uint32_t                      :2;
					uint32_t FDCANRST             :1;
					uint32_t                      :23;


			};
#endif

#ifdef RCC_APB1LENR
			struct APB1LENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TIM2EN               :1;
					uint32_t TIM3EN               :1;
					uint32_t TIM4EN               :1;
					uint32_t TIM5EN               :1;
					uint32_t TIM6EN               :1;
					uint32_t TIM7EN               :1;
					uint32_t TIM12EN              :1;
					uint32_t TIM13EN              :1;
					uint32_t TIM14EN              :1;
					uint32_t LPTIM1EN             :1;
					uint32_t                      :4;
					uint32_t SPI2EN               :1;
					uint32_t SPI3EN               :1;
					uint32_t SPDIFRXEN            :1;
					uint32_t USART2EN             :1;
					uint32_t USART3EN             :1;
					uint32_t UART4EN              :1;
					uint32_t UART5EN              :1;
					uint32_t I2C1EN               :1;
					uint32_t I2C2EN               :1;
					uint32_t I2C3EN               :1;
					uint32_t                      :3;
					uint32_t CECEN                :1;
					uint32_t                      :1;
					uint32_t DAC12EN              :1;
					uint32_t UART7EN              :1;
					uint32_t UART8EN              :1;


			};
#endif

#ifdef RCC_APB1LLPENR
			struct APB1LLPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TIM2LPEN             :1;
					uint32_t TIM3LPEN             :1;
					uint32_t TIM4LPEN             :1;
					uint32_t TIM5LPEN             :1;
					uint32_t TIM6LPEN             :1;
					uint32_t TIM7LPEN             :1;
					uint32_t TIM12LPEN            :1;
					uint32_t TIM13LPEN            :1;
					uint32_t TIM14LPEN            :1;
					uint32_t LPTIM1LPEN           :1;
					uint32_t                      :4;
					uint32_t SPI2LPEN             :1;
					uint32_t SPI3LPEN             :1;
					uint32_t SPDIFRXLPEN          :1;
					uint32_t USART2LPEN           :1;
					uint32_t USART3LPEN           :1;
					uint32_t UART4LPEN            :1;
					uint32_t UART5LPEN            :1;
					uint32_t I2C1LPEN             :1;
					uint32_t I2C2LPEN             :1;
					uint32_t I2C3LPEN             :1;
					uint32_t                      :3;
					uint32_t CECLPEN              :1;
					uint32_t                      :1;
					uint32_t DAC12LPEN            :1;
					uint32_t UART7LPEN            :1;
					uint32_t UART8LPEN            :1;


			};
#endif

#ifdef RCC_APB1LPENR
			struct APB1LPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_APB1LPENR_0_TIM2LPEN :1;
						uint32_t RCC_APB1LPENR_0_TIM3LPEN :1;
						uint32_t RCC_APB1LPENR_0_TIM4LPEN :1;
						uint32_t RCC_APB1LPENR_0_TIM5LPEN :1;
						uint32_t RCC_APB1LPENR_0_TIM6LPEN :1;
						uint32_t RCC_APB1LPENR_0_TIM7LPEN :1;
						uint32_t RCC_APB1LPENR_0_TIM12LPEN :1;
						uint32_t RCC_APB1LPENR_0_TIM13LPEN :1;
						uint32_t RCC_APB1LPENR_0_TIM14LPEN :1;
						uint32_t RCC_APB1LPENR_0_LPTIM1LPEN :1;
						uint32_t RCC_APB1LPENR_0_RTCAPBLPEN :1;
						uint32_t WWDGLPEN             :1;
						uint32_t                      :2;
						uint32_t RCC_APB1LPENR_0_SPI2LPEN :1;
						uint32_t RCC_APB1LPENR_0_SPI3LPEN :1;
						uint32_t RCC_APB1LPENR_0_SPDIFRXLPEN :1;
						uint32_t USART2LPEN           :1;
						uint32_t RCC_APB1LPENR_0_USART3LPEN :1;
						uint32_t RCC_APB1LPENR_0_UART4LPEN :1;
						uint32_t RCC_APB1LPENR_0_UART5LPEN :1;
						uint32_t I2C1LPEN             :1;
						uint32_t I2C2LPEN             :1;
						uint32_t RCC_APB1LPENR_0_I2C3LPEN :1;
						uint32_t RCC_APB1LPENR_0_FMPI2C1LPEN :1;
						uint32_t RCC_APB1LPENR_0_CAN1LPEN :1;
						uint32_t RCC_APB1LPENR_0_CAN2LPEN :1;
						uint32_t RCC_APB1LPENR_0_CAN3LPEN :1;
						uint32_t PWRLPEN              :1;
						uint32_t RCC_APB1LPENR_0_DACLPEN :1;
						uint32_t RCC_APB1LPENR_0_UART7LPEN :1;
						uint32_t RCC_APB1LPENR_0_UART8LPEN :1;
					};
#ifdef RCC_APB1LPENR_1
					struct
					{
						uint32_t                      :9;
						uint32_t RCC_APB1LPENR_1_LCDLPEN :1;
						uint32_t RCC_APB1LPENR_1_RTCLPEN :1;
						uint32_t                      :2;
						uint32_t RCC_APB1LPENR_1_CAN3LPEN :1;
						uint32_t                      :9;
						uint32_t RCC_APB1LPENR_1_USBLPEN :1;
						uint32_t RCC_APB1LPENR_1_I2C4LPEN :1;
						uint32_t                      :2;
						uint32_t RCC_APB1LPENR_1_CECLPEN :1;
						uint32_t                      :3;
						uint32_t RCC_APB1LPENR_1_COMPLPEN :1;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB1LRSTR
			struct APB1LRSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TIM2RST              :1;
					uint32_t TIM3RST              :1;
					uint32_t TIM4RST              :1;
					uint32_t TIM5RST              :1;
					uint32_t TIM6RST              :1;
					uint32_t TIM7RST              :1;
					uint32_t TIM12RST             :1;
					uint32_t TIM13RST             :1;
					uint32_t TIM14RST             :1;
					uint32_t LPTIM1RST            :1;
					uint32_t                      :4;
					uint32_t SPI2RST              :1;
					uint32_t SPI3RST              :1;
					uint32_t SPDIFRXRST           :1;
					uint32_t USART2RST            :1;
					uint32_t USART3RST            :1;
					uint32_t UART4RST             :1;
					uint32_t UART5RST             :1;
					uint32_t I2C1RST              :1;
					uint32_t I2C2RST              :1;
					uint32_t I2C3RST              :1;
					uint32_t                      :3;
					uint32_t CECRST               :1;
					uint32_t                      :1;
					uint32_t DAC12RST             :1;
					uint32_t UART7RST             :1;
					uint32_t UART8RST             :1;


			};
#endif

#ifdef RCC_APB1RSTR
			struct APB1RSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_APB1RSTR_0_TIM2RST :1;
						uint32_t RCC_APB1RSTR_0_TIM3RST :1;
						uint32_t RCC_APB1RSTR_0_TIM4RST :1;
						uint32_t RCC_APB1RSTR_0_TIM5RST :1;
						uint32_t RCC_APB1RSTR_0_TIM6RST :1;
						uint32_t RCC_APB1RSTR_0_TIM7RST :1;
						uint32_t RCC_APB1RSTR_0_TIM12RST :1;
						uint32_t RCC_APB1RSTR_0_TIM13RST :1;
						uint32_t RCC_APB1RSTR_0_TIM14RST :1;
						uint32_t RCC_APB1RSTR_0_TIM18RST :1;
						uint32_t                      :1;
						uint32_t WWDGRST              :1;
						uint32_t                      :1;
						uint32_t RCC_APB1RSTR_0_CAN3RST :1;
						uint32_t RCC_APB1RSTR_0_SPI2RST :1;
						uint32_t RCC_APB1RSTR_0_SPI3RST :1;
						uint32_t RCC_APB1RSTR_0_SPDIFRXRST :1;
						uint32_t RCC_APB1RSTR_0_USART2RST :1;
						uint32_t RCC_APB1RSTR_0_USART3RST :1;
						uint32_t RCC_APB1RSTR_0_USART4RST :1;
						uint32_t RCC_APB1RSTR_0_USART5RST :1;
						uint32_t I2C1RST              :1;
						uint32_t RCC_APB1RSTR_0_I2C2RST :1;
						uint32_t RCC_APB1RSTR_0_USBRST :1;
						uint32_t RCC_APB1RSTR_0_FMPI2C1RST :1;
						uint32_t RCC_APB1RSTR_0_CANRST :1;
						uint32_t RCC_APB1RSTR_0_CAN2RST :1;
						uint32_t RCC_APB1RSTR_0_CRSRST :1;
						uint32_t PWRRST               :1;
						uint32_t RCC_APB1RSTR_0_DACRST :1;
						uint32_t RCC_APB1RSTR_0_CECRST :1;
						uint32_t RCC_APB1RSTR_0_UART8RST :1;
					};
#ifdef RCC_APB1RSTR_1
					struct
					{
						uint32_t                      :9;
						uint32_t RCC_APB1RSTR_1_LPTIM1RST :1;
						uint32_t                      :8;
						uint32_t RCC_APB1RSTR_1_LPUART1RST :1;
						uint32_t RCC_APB1RSTR_1_UART4RST :1;
						uint32_t RCC_APB1RSTR_1_UART5RST :1;
						uint32_t                      :2;
						uint32_t RCC_APB1RSTR_1_I2C3RST :1;
						uint32_t RCC_APB1RSTR_1_I2C4RST :1;
						uint32_t RCC_APB1RSTR_1_CAN1RST :1;
						uint32_t RCC_APB1RSTR_1_DAC2RST :1;
						uint32_t RCC_APB1RSTR_1_BKPRST :1;
						uint32_t                      :1;
						uint32_t RCC_APB1RSTR_1_DAC1RST :1;
						uint32_t RCC_APB1RSTR_1_UART7RST :1;
						uint32_t RCC_APB1RSTR_1_COMPRST :1;
					};
#endif
#ifdef RCC_APB1RSTR_2
					struct
					{
						uint32_t                      :9;
						uint32_t RCC_APB1RSTR_2_LCDRST :1;
						uint32_t                      :17;
						uint32_t RCC_APB1RSTR_2_CAN3RST :1;
						uint32_t                      :2;
						uint32_t RCC_APB1RSTR_2_I2C3RST :1;
						uint32_t RCC_APB1RSTR_2_LPTIM1RST :1;
					};
#endif
#ifdef RCC_APB1RSTR_3
					struct
					{
						uint32_t                      :27;
						uint32_t CECRST               :1;
						uint32_t                      :4;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB1RSTR1
			struct APB1RSTR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t TIM2RST              :1;
						uint32_t RCC_APB1RSTR1_0_TIM3RST :1;
						uint32_t RCC_APB1RSTR1_0_TIM4RST :1;
						uint32_t RCC_APB1RSTR1_0_TIM5RST :1;
						uint32_t TIM6RST              :1;
						uint32_t RCC_APB1RSTR1_0_TIM7RST :1;
						uint32_t                      :3;
						uint32_t RCC_APB1RSTR1_0_LCDRST :1;
						uint32_t                      :4;
						uint32_t RCC_APB1RSTR1_0_SPI2RST :1;
						uint32_t SPI3RST              :1;
						uint32_t                      :1;
						uint32_t USART2RST            :1;
						uint32_t RCC_APB1RSTR1_0_USART3RST :1;
						uint32_t RCC_APB1RSTR1_0_UART4RST :1;
						uint32_t RCC_APB1RSTR1_0_UART5RST :1;
						uint32_t I2C1RST              :1;
						uint32_t RCC_APB1RSTR1_0_I2C2RST :1;
						uint32_t I2C3RST              :1;
						uint32_t RCC_APB1RSTR1_0_CRSRST :1;
						uint32_t CAN1RST              :1;
						uint32_t RCC_APB1RSTR1_0_USBFSRST :1;
						uint32_t                      :1;
						uint32_t PWRRST               :1;
						uint32_t DAC1RST              :1;
						uint32_t OPAMPRST             :1;
						uint32_t LPTIM1RST            :1;
					};
#ifdef RCC_APB1RSTR1_1
					struct
					{
						uint32_t                      :26;
						uint32_t CAN2RST              :1;
						uint32_t                      :5;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB1RSTR2
			struct APB1RSTR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t LPUART1RST           :1;
					uint32_t RCC_APB1RSTR2_I2C4RST :1;
					uint32_t RCC_APB1RSTR2_SWPMI1RST :1;
					uint32_t                      :2;
					uint32_t LPTIM2RST            :1;
					uint32_t                      :26;


			};
#endif

#ifdef RCC_APB1SMENR
			struct APB1SMENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TIM2SMEN             :1;
					uint32_t RCC_APB1SMENR_TIM3SMEN :1;
					uint32_t                      :2;
					uint32_t RCC_APB1SMENR_TIM6SMEN :1;
					uint32_t RCC_APB1SMENR_TIM7SMEN :1;
					uint32_t                      :3;
					uint32_t RCC_APB1SMENR_LCDSMEN :1;
					uint32_t                      :1;
					uint32_t WWDGSMEN             :1;
					uint32_t                      :2;
					uint32_t RCC_APB1SMENR_SPI2SMEN :1;
					uint32_t                      :2;
					uint32_t USART2SMEN           :1;
					uint32_t LPUART1SMEN          :1;
					uint32_t RCC_APB1SMENR_USART4SMEN :1;
					uint32_t RCC_APB1SMENR_USART5SMEN :1;
					uint32_t I2C1SMEN             :1;
					uint32_t RCC_APB1SMENR_I2C2SMEN :1;
					uint32_t RCC_APB1SMENR_USBSMEN :1;
					uint32_t                      :3;
					uint32_t RCC_APB1SMENR_CRSSMEN :1;
					uint32_t PWRSMEN              :1;
					uint32_t RCC_APB1SMENR_DACSMEN :1;
					uint32_t RCC_APB1SMENR_I2C3SMEN :1;
					uint32_t LPTIM1SMEN           :1;


			};
#endif

#ifdef RCC_APB1SMENR1
			struct APB1SMENR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t TIM2SMEN             :1;
						uint32_t RCC_APB1SMENR1_0_TIM3SMEN :1;
						uint32_t RCC_APB1SMENR1_0_TIM4SMEN :1;
						uint32_t RCC_APB1SMENR1_0_TIM5SMEN :1;
						uint32_t TIM6SMEN             :1;
						uint32_t RCC_APB1SMENR1_0_TIM7SMEN :1;
						uint32_t                      :3;
						uint32_t RCC_APB1SMENR1_0_LCDSMEN :1;
						uint32_t RCC_APB1SMENR1_0_RTCAPBSMEN :1;
						uint32_t WWDGSMEN             :1;
						uint32_t                      :2;
						uint32_t RCC_APB1SMENR1_0_SPI2SMEN :1;
						uint32_t SPI3SMEN             :1;
						uint32_t                      :1;
						uint32_t USART2SMEN           :1;
						uint32_t RCC_APB1SMENR1_0_USART3SMEN :1;
						uint32_t RCC_APB1SMENR1_0_UART4SMEN :1;
						uint32_t RCC_APB1SMENR1_0_UART5SMEN :1;
						uint32_t I2C1SMEN             :1;
						uint32_t RCC_APB1SMENR1_0_I2C2SMEN :1;
						uint32_t I2C3SMEN             :1;
						uint32_t RCC_APB1SMENR1_0_CRSSMEN :1;
						uint32_t CAN1SMEN             :1;
						uint32_t RCC_APB1SMENR1_0_USBFSSMEN :1;
						uint32_t                      :1;
						uint32_t PWRSMEN              :1;
						uint32_t DAC1SMEN             :1;
						uint32_t OPAMPSMEN            :1;
						uint32_t LPTIM1SMEN           :1;
					};
#ifdef RCC_APB1SMENR1_1
					struct
					{
						uint32_t                      :26;
						uint32_t CAN2SMEN             :1;
						uint32_t                      :5;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB1SMENR2
			struct APB1SMENR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t LPUART1SMEN          :1;
					uint32_t RCC_APB1SMENR2_I2C4SMEN :1;
					uint32_t RCC_APB1SMENR2_SWPMI1SMEN :1;
					uint32_t                      :2;
					uint32_t LPTIM2SMEN           :1;
					uint32_t                      :26;


			};
#endif

#ifdef RCC_APB2ENR
			struct APB2ENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_APB2ENR_0_SYSCFGCOMPEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2ENR_0_IOPAEN :1;
						uint32_t RCC_APB2ENR_0_IOPBEN :1;
						uint32_t RCC_APB2ENR_0_IOPCEN :1;
						uint32_t RCC_APB2ENR_0_USART6EN :1;
						uint32_t RCC_APB2ENR_0_USART7EN :1;
						uint32_t RCC_APB2ENR_0_USART8EN :1;
						uint32_t RCC_APB2ENR_0_IOPGEN :1;
						uint32_t RCC_APB2ENR_0_ADCEN  :1;
						uint32_t RCC_APB2ENR_0_ADC2EN :1;
						uint32_t RCC_APB2ENR_0_TIM1EN :1;
						uint32_t RCC_APB2ENR_0_SPI1EN :1;
						uint32_t RCC_APB2ENR_0_TIM8EN :1;
						uint32_t RCC_APB2ENR_0_USART1EN :1;
						uint32_t RCC_APB2ENR_0_ADC3EN :1;
						uint32_t RCC_APB2ENR_0_TIM15EN :1;
						uint32_t RCC_APB2ENR_0_TIM16EN :1;
						uint32_t RCC_APB2ENR_0_TIM17EN :1;
						uint32_t RCC_APB2ENR_0_TIM9EN :1;
						uint32_t RCC_APB2ENR_0_TIM10EN :1;
						uint32_t RCC_APB2ENR_0_TIM11EN :1;
						uint32_t RCC_APB2ENR_0_DBGMCUEN :1;
						uint32_t RCC_APB2ENR_0_SAI2EN :1;
						uint32_t RCC_APB2ENR_0_SDADC1EN :1;
						uint32_t RCC_APB2ENR_0_SDADC2EN :1;
						uint32_t RCC_APB2ENR_0_SDADC3EN :1;
						uint32_t RCC_APB2ENR_0_DSIEN  :1;
						uint32_t RCC_APB2ENR_0_DFSDM1EN :1;
						uint32_t RCC_APB2ENR_0_HRTIM1EN :1;
						uint32_t RCC_APB2ENR_0_MDIOEN :1;
						uint32_t RCC_APB2ENR_0_OTGPHYCEN :1;
					};
#ifdef RCC_APB2ENR_1
					struct
					{
						uint32_t RCC_APB2ENR_1_AFIOEN :1;
						uint32_t RCC_APB2ENR_1_TIM8EN :1;
						uint32_t RCC_APB2ENR_1_TIM21EN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2ENR_1_USART1EN :1;
						uint32_t RCC_APB2ENR_1_IOPDEN :1;
						uint32_t RCC_APB2ENR_1_IOPEEN :1;
						uint32_t RCC_APB2ENR_1_IOPFEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2ENR_1_ADC1EN :1;
						uint32_t RCC_APB2ENR_1_ADC3EN :1;
						uint32_t RCC_APB2ENR_1_SDIOEN :1;
						uint32_t                      :2;
						uint32_t RCC_APB2ENR_1_SYSCFGEN :1;
						uint32_t RCC_APB2ENR_1_SPI4EN :1;
						uint32_t RCC_APB2ENR_1_TIM9EN :1;
						uint32_t RCC_APB2ENR_1_TIM10EN :1;
						uint32_t RCC_APB2ENR_1_TIM11EN :1;
						uint32_t RCC_APB2ENR_1_TIM19EN :1;
						uint32_t RCC_APB2ENR_1_TIM20EN :1;
						uint32_t RCC_APB2ENR_1_SPI6EN :1;
						uint32_t RCC_APB2ENR_1_SAI1EN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2ENR_1_DFSDM1EN :1;
						uint32_t RCC_APB2ENR_1_DFSDM2EN :1;
						uint32_t RCC_APB2ENR_1_LTDCEN :1;
						uint32_t                      :2;
						uint32_t RCC_APB2ENR_1_HRTIMEN :1;
						uint32_t                      :2;
					};
#endif
#ifdef RCC_APB2ENR_2
					struct
					{
						uint32_t RCC_APB2ENR_2_TIM1EN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2ENR_2_TIM9EN :1;
						uint32_t RCC_APB2ENR_2_TIM10EN :1;
						uint32_t RCC_APB2ENR_2_TIM11EN :1;
						uint32_t RCC_APB2ENR_2_TIM22EN :1;
						uint32_t RCC_APB2ENR_2_UART9EN :1;
						uint32_t RCC_APB2ENR_2_UART10EN :1;
						uint32_t RCC_APB2ENR_2_ADC1EN :1;
						uint32_t RCC_APB2ENR_2_ADC2EN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2ENR_2_SDMMC1EN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2ENR_2_SPI4EN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2ENR_2_EXTITEN :1;
						uint32_t                      :4;
						uint32_t RCC_APB2ENR_2_SPI5EN :1;
						uint32_t RCC_APB2ENR_2_SAI1EN :1;
						uint32_t RCC_APB2ENR_2_DBGEN  :1;
						uint32_t                      :1;
						uint32_t RCC_APB2ENR_2_SAI3EN :1;
						uint32_t                      :4;
						uint32_t RCC_APB2ENR_2_DFSDM1EN :1;
						uint32_t                      :2;
					};
#endif
#ifdef RCC_APB2ENR_3
					struct
					{
						uint32_t RCC_APB2ENR_3_SYSCFGEN :1;
						uint32_t                      :6;
						uint32_t RCC_APB2ENR_3_SDMMC2EN :1;
						uint32_t                      :2;
						uint32_t RCC_APB2ENR_3_SDMMC1EN :1;
						uint32_t                      :11;
						uint32_t RCC_APB2ENR_3_SAI2EN :1;
						uint32_t                      :9;
					};
#endif
#ifdef RCC_APB2ENR_4
					struct
					{
						uint32_t                      :7;
						uint32_t FWEN                 :1;
						uint32_t                      :24;
					};
#endif
#ifdef RCC_APB2ENR_5
					struct
					{
						uint32_t                      :7;
						uint32_t MIFIEN               :1;
						uint32_t                      :24;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB2LPENR
			struct APB2LPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_APB2LPENR_0_TIM1LPEN :1;
						uint32_t RCC_APB2LPENR_0_TIM8LPEN :1;
						uint32_t                      :2;
						uint32_t RCC_APB2LPENR_0_USART1LPEN :1;
						uint32_t RCC_APB2LPENR_0_USART6LPEN :1;
						uint32_t RCC_APB2LPENR_0_UART9LPEN :1;
						uint32_t RCC_APB2LPENR_0_UART10LPEN :1;
						uint32_t RCC_APB2LPENR_0_ADC1LPEN :1;
						uint32_t RCC_APB2LPENR_0_ADC2LPEN :1;
						uint32_t RCC_APB2LPENR_0_ADC3LPEN :1;
						uint32_t RCC_APB2LPENR_0_SDIOLPEN :1;
						uint32_t SPI1LPEN             :1;
						uint32_t RCC_APB2LPENR_0_SPI4LPEN :1;
						uint32_t RCC_APB2LPENR_0_SYSCFGLPEN :1;
						uint32_t RCC_APB2LPENR_0_EXTITLPEN :1;
						uint32_t RCC_APB2LPENR_0_TIM9LPEN :1;
						uint32_t RCC_APB2LPENR_0_TIM10LPEN :1;
						uint32_t RCC_APB2LPENR_0_TIM11LPEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2LPENR_0_SPI5LPEN :1;
						uint32_t RCC_APB2LPENR_0_SPI6LPEN :1;
						uint32_t RCC_APB2LPENR_0_SAI1LPEN :1;
						uint32_t RCC_APB2LPENR_0_SAI2LPEN :1;
						uint32_t RCC_APB2LPENR_0_DFSDM1LPEN :1;
						uint32_t RCC_APB2LPENR_0_DFSDM2LPEN :1;
						uint32_t RCC_APB2LPENR_0_LTDCLPEN :1;
						uint32_t RCC_APB2LPENR_0_DSILPEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2LPENR_0_HRTIMLPEN :1;
						uint32_t RCC_APB2LPENR_0_MDIOLPEN :1;
						uint32_t                      :1;
					};
#ifdef RCC_APB2LPENR_1
					struct
					{
						uint32_t RCC_APB2LPENR_1_SYSCFGLPEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2LPENR_1_TIM9LPEN :1;
						uint32_t RCC_APB2LPENR_1_TIM10LPEN :1;
						uint32_t RCC_APB2LPENR_1_TIM11LPEN :1;
						uint32_t                      :2;
						uint32_t RCC_APB2LPENR_1_SDMMC2LPEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2LPENR_1_ADC1LPEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2LPENR_1_SDMMC1LPEN :1;
						uint32_t                      :2;
						uint32_t RCC_APB2LPENR_1_USART1LPEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2LPENR_1_TIM15LPEN :1;
						uint32_t RCC_APB2LPENR_1_TIM16LPEN :1;
						uint32_t RCC_APB2LPENR_1_TIM17LPEN :1;
						uint32_t                      :5;
						uint32_t RCC_APB2LPENR_1_SAI3LPEN :1;
						uint32_t                      :4;
						uint32_t RCC_APB2LPENR_1_DFSDM1LPEN :1;
						uint32_t                      :2;
					};
#endif
#ifdef RCC_APB2LPENR_2
					struct
					{
						uint32_t                      :28;
						uint32_t DFSDM1LPEN           :1;
						uint32_t                      :3;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB2RSTR
			struct APB2RSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_APB2RSTR_0_SYSCFGRST :1;
						uint32_t                      :1;
						uint32_t RCC_APB2RSTR_0_IOPARST :1;
						uint32_t RCC_APB2RSTR_0_IOPBRST :1;
						uint32_t RCC_APB2RSTR_0_IOPCRST :1;
						uint32_t RCC_APB2RSTR_0_USART6RST :1;
						uint32_t RCC_APB2RSTR_0_USART7RST :1;
						uint32_t RCC_APB2RSTR_0_USART8RST :1;
						uint32_t RCC_APB2RSTR_0_IOPGRST :1;
						uint32_t RCC_APB2RSTR_0_ADCRST :1;
						uint32_t RCC_APB2RSTR_0_ADC2RST :1;
						uint32_t RCC_APB2RSTR_0_TIM1RST :1;
						uint32_t RCC_APB2RSTR_0_SPI1RST :1;
						uint32_t RCC_APB2RSTR_0_TIM8RST :1;
						uint32_t RCC_APB2RSTR_0_USART1RST :1;
						uint32_t RCC_APB2RSTR_0_ADC3RST :1;
						uint32_t RCC_APB2RSTR_0_TIM15RST :1;
						uint32_t RCC_APB2RSTR_0_TIM16RST :1;
						uint32_t RCC_APB2RSTR_0_TIM17RST :1;
						uint32_t RCC_APB2RSTR_0_TIM9RST :1;
						uint32_t RCC_APB2RSTR_0_TIM10RST :1;
						uint32_t RCC_APB2RSTR_0_TIM11RST :1;
						uint32_t RCC_APB2RSTR_0_DBGMCURST :1;
						uint32_t RCC_APB2RSTR_0_SAI2RST :1;
						uint32_t RCC_APB2RSTR_0_SDADC1RST :1;
						uint32_t RCC_APB2RSTR_0_SDADC2RST :1;
						uint32_t RCC_APB2RSTR_0_SDADC3RST :1;
						uint32_t RCC_APB2RSTR_0_DSIRST :1;
						uint32_t RCC_APB2RSTR_0_DFSDM1RST :1;
						uint32_t RCC_APB2RSTR_0_HRTIM1RST :1;
						uint32_t RCC_APB2RSTR_0_MDIORST :1;
						uint32_t RCC_APB2RSTR_0_OTGPHYCRST :1;
					};
#ifdef RCC_APB2RSTR_1
					struct
					{
						uint32_t RCC_APB2RSTR_1_AFIORST :1;
						uint32_t RCC_APB2RSTR_1_TIM8RST :1;
						uint32_t RCC_APB2RSTR_1_TIM21RST :1;
						uint32_t                      :1;
						uint32_t RCC_APB2RSTR_1_USART1RST :1;
						uint32_t RCC_APB2RSTR_1_IOPDRST :1;
						uint32_t RCC_APB2RSTR_1_IOPERST :1;
						uint32_t RCC_APB2RSTR_1_IOPFRST :1;
						uint32_t RCC_APB2RSTR_1_ADCRST :1;
						uint32_t RCC_APB2RSTR_1_ADC1RST :1;
						uint32_t RCC_APB2RSTR_1_SDMMC1RST :1;
						uint32_t RCC_APB2RSTR_1_SDIORST :1;
						uint32_t                      :2;
						uint32_t RCC_APB2RSTR_1_SYSCFGRST :1;
						uint32_t RCC_APB2RSTR_1_SPI4RST :1;
						uint32_t RCC_APB2RSTR_1_TIM9RST :1;
						uint32_t RCC_APB2RSTR_1_TIM10RST :1;
						uint32_t RCC_APB2RSTR_1_TIM11RST :1;
						uint32_t RCC_APB2RSTR_1_TIM19RST :1;
						uint32_t RCC_APB2RSTR_1_TIM20RST :1;
						uint32_t RCC_APB2RSTR_1_SPI6RST :1;
						uint32_t RCC_APB2RSTR_1_SAI1RST :1;
						uint32_t                      :1;
						uint32_t RCC_APB2RSTR_1_DFSDM1RST :1;
						uint32_t RCC_APB2RSTR_1_DFSDM2RST :1;
						uint32_t RCC_APB2RSTR_1_LTDCRST :1;
						uint32_t                      :2;
						uint32_t RCC_APB2RSTR_1_HRTIMRST :1;
						uint32_t                      :2;
					};
#endif
#ifdef RCC_APB2RSTR_2
					struct
					{
						uint32_t RCC_APB2RSTR_2_TIM1RST :1;
						uint32_t                      :1;
						uint32_t RCC_APB2RSTR_2_TIM9RST :1;
						uint32_t RCC_APB2RSTR_2_TIM10RST :1;
						uint32_t RCC_APB2RSTR_2_TIM11RST :1;
						uint32_t RCC_APB2RSTR_2_TIM22RST :1;
						uint32_t RCC_APB2RSTR_2_UART9RST :1;
						uint32_t RCC_APB2RSTR_2_UART10RST :1;
						uint32_t                      :3;
						uint32_t RCC_APB2RSTR_2_SDMMC1RST :1;
						uint32_t                      :1;
						uint32_t RCC_APB2RSTR_2_SPI4RST :1;
						uint32_t                      :6;
						uint32_t RCC_APB2RSTR_2_SPI5RST :1;
						uint32_t RCC_APB2RSTR_2_SAI1RST :1;
						uint32_t RCC_APB2RSTR_2_DBGRST :1;
						uint32_t                      :1;
						uint32_t RCC_APB2RSTR_2_SAI3RST :1;
						uint32_t                      :4;
						uint32_t RCC_APB2RSTR_2_DFSDM1RST :1;
						uint32_t                      :2;
					};
#endif
#ifdef RCC_APB2RSTR_3
					struct
					{
						uint32_t                      :7;
						uint32_t RCC_APB2RSTR_3_SDMMC2RST :1;
						uint32_t                      :14;
						uint32_t RCC_APB2RSTR_3_SAI2RST :1;
						uint32_t                      :9;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB2SMENR
			struct APB2SMENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t SYSCFGSMEN           :1;
						uint32_t                      :1;
						uint32_t RCC_APB2SMENR_0_TIM21SMEN :1;
						uint32_t                      :2;
						uint32_t RCC_APB2SMENR_0_TIM22SMEN :1;
						uint32_t                      :3;
						uint32_t RCC_APB2SMENR_0_ADCSMEN :1;
						uint32_t RCC_APB2SMENR_0_SDMMC1SMEN :1;
						uint32_t RCC_APB2SMENR_0_TIM1SMEN :1;
						uint32_t SPI1SMEN             :1;
						uint32_t RCC_APB2SMENR_0_TIM8SMEN :1;
						uint32_t RCC_APB2SMENR_0_USART1SMEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2SMENR_0_TIM15SMEN :1;
						uint32_t RCC_APB2SMENR_0_TIM16SMEN :1;
						uint32_t RCC_APB2SMENR_0_TIM17SMEN :1;
						uint32_t                      :2;
						uint32_t RCC_APB2SMENR_0_SAI1SMEN :1;
						uint32_t RCC_APB2SMENR_0_DBGSMEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2SMENR_0_DFSDM1SMEN :1;
						uint32_t                      :1;
						uint32_t RCC_APB2SMENR_0_LTDCSMEN :1;
						uint32_t RCC_APB2SMENR_0_DSISMEN :1;
						uint32_t                      :4;
					};
#ifdef RCC_APB2SMENR_1
					struct
					{
						uint32_t                      :9;
						uint32_t ADC1SMEN             :1;
						uint32_t                      :12;
						uint32_t DBGMCUSMEN           :1;
						uint32_t                      :9;
					};
#endif
#ifdef RCC_APB2SMENR_2
					struct
					{
						uint32_t                      :22;
						uint32_t SAI2SMEN             :1;
						uint32_t                      :9;
					};
#endif
				};

			};
#endif

#ifdef RCC_APB3ENR
			struct APB3ENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :3;
					uint32_t LTDCEN               :1;
					uint32_t                      :2;
					uint32_t WWDG1EN              :1;
					uint32_t                      :25;


			};
#endif

#ifdef RCC_APB3LPENR
			struct APB3LPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :3;
					uint32_t LTDCLPEN             :1;
					uint32_t                      :2;
					uint32_t WWDG1LPEN            :1;
					uint32_t                      :25;


			};
#endif

#ifdef RCC_APB3RSTR
			struct APB3RSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :3;
					uint32_t LTDCRST              :1;
					uint32_t                      :28;


			};
#endif

#ifdef RCC_APB4ENR
			struct APB4ENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :1;
					uint32_t SYSCFGEN             :1;
					uint32_t                      :1;
					uint32_t LPUART1EN            :1;
					uint32_t                      :1;
					uint32_t SPI6EN               :1;
					uint32_t                      :1;
					uint32_t I2C4EN               :1;
					uint32_t                      :1;
					uint32_t LPTIM2EN             :1;
					uint32_t LPTIM3EN             :1;
					uint32_t LPTIM4EN             :1;
					uint32_t LPTIM5EN             :1;
					uint32_t                      :1;
					uint32_t COMP12EN             :1;
					uint32_t VREFEN               :1;
					uint32_t RTCAPBEN             :1;
					uint32_t                      :4;
					uint32_t SAI4EN               :1;
					uint32_t                      :10;


			};
#endif

#ifdef RCC_APB4LPENR
			struct APB4LPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :1;
					uint32_t SYSCFGLPEN           :1;
					uint32_t                      :1;
					uint32_t LPUART1LPEN          :1;
					uint32_t                      :1;
					uint32_t SPI6LPEN             :1;
					uint32_t                      :1;
					uint32_t I2C4LPEN             :1;
					uint32_t                      :1;
					uint32_t LPTIM2LPEN           :1;
					uint32_t LPTIM3LPEN           :1;
					uint32_t LPTIM4LPEN           :1;
					uint32_t LPTIM5LPEN           :1;
					uint32_t                      :1;
					uint32_t COMP12LPEN           :1;
					uint32_t VREFLPEN             :1;
					uint32_t RTCAPBLPEN           :1;
					uint32_t                      :4;
					uint32_t SAI4LPEN             :1;
					uint32_t                      :10;


			};
#endif

#ifdef RCC_APB4RSTR
			struct APB4RSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :1;
					uint32_t SYSCFGRST            :1;
					uint32_t                      :1;
					uint32_t LPUART1RST           :1;
					uint32_t                      :1;
					uint32_t SPI6RST              :1;
					uint32_t                      :1;
					uint32_t I2C4RST              :1;
					uint32_t                      :1;
					uint32_t LPTIM2RST            :1;
					uint32_t LPTIM3RST            :1;
					uint32_t LPTIM4RST            :1;
					uint32_t LPTIM5RST            :1;
					uint32_t                      :1;
					uint32_t COMP12RST            :1;
					uint32_t VREFRST              :1;
					uint32_t                      :5;
					uint32_t SAI4RST              :1;
					uint32_t                      :10;


			};
#endif

#ifdef RCC_BDCR
			struct BDCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t LSEON                :1;
						uint32_t LSERDY               :1;
						uint32_t LSEBYP               :1;
						uint32_t RCC_BDCR_0_LSEDRV    :2;
						uint32_t RCC_BDCR_0_LSECSSON  :1;
						uint32_t RCC_BDCR_0_LSECSSD   :1;
						uint32_t                      :1;
						uint32_t RTCSEL               :2;
						uint32_t                      :5;
						uint32_t RTCEN                :1;
						uint32_t BDRST                :1;
						uint32_t                      :7;
						uint32_t RCC_BDCR_0_LSCOEN    :1;
						uint32_t RCC_BDCR_0_LSCOSEL   :1;
						uint32_t                      :6;
					};
#ifdef RCC_BDCR_1
					struct
					{
						uint32_t RCC_BDCR_1_LSE       :3;
						uint32_t RCC_BDCR_1_LSEMOD    :1;
						uint32_t                      :28;
					};
#endif
				};

			};
#endif

#ifdef RCC_CCIPR
			struct CCIPR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_CCIPR_0_USART1SEL :2;
						uint32_t USART2SEL            :2;
						uint32_t RCC_CCIPR_0_USART3SEL :2;
						uint32_t RCC_CCIPR_0_UART4SEL :2;
						uint32_t RCC_CCIPR_0_UART5SEL :2;
						uint32_t LPUART1SEL           :2;
						uint32_t I2C1SEL              :2;
						uint32_t RCC_CCIPR_0_I2C2SEL  :2;
						uint32_t RCC_CCIPR_0_I2C3SEL  :2;
						uint32_t LPTIM1SEL            :2;
						uint32_t RCC_CCIPR_0_LPTIM2SEL :2;
						uint32_t RCC_CCIPR_0_SAI1SEL  :2;
						uint32_t RCC_CCIPR_0_SAI2SEL  :2;
						uint32_t RCC_CCIPR_0_HSI48SEL :1;
						uint32_t                      :1;
						uint32_t RCC_CCIPR_0_ADCSEL   :2;
						uint32_t RCC_CCIPR_0_SWPMI1SEL :1;
						uint32_t RCC_CCIPR_0_DFSDM1SEL :1;
					};
#ifdef RCC_CCIPR_1
					struct
					{
						uint32_t                      :26;
						uint32_t HSI48MSEL            :1;
						uint32_t                      :5;
					};
#endif
#ifdef RCC_CCIPR_2
					struct
					{
						uint32_t                      :26;
						uint32_t CLK48SEL             :2;
						uint32_t                      :4;
					};
#endif
				};

			};
#endif

#ifdef RCC_CCIPR2
			struct CCIPR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t I2C4SEL              :2;
					uint32_t RCC_CCIPR2_DFSDM1SEL :1;
					uint32_t RCC_CCIPR2_ADFSDM1SEL :2;
					uint32_t RCC_CCIPR2_SAI1SEL   :3;
					uint32_t RCC_CCIPR2_SAI2SEL   :3;
					uint32_t                      :1;
					uint32_t RCC_CCIPR2_DSISEL    :1;
					uint32_t                      :1;
					uint32_t RCC_CCIPR2_SDMMCSEL  :1;
					uint32_t                      :1;
					uint32_t RCC_CCIPR2_PLLSAI2DIVR :2;
					uint32_t                      :2;
					uint32_t RCC_CCIPR2_OSPISEL   :2;
					uint32_t                      :10;


			};
#endif

#ifdef RCC_CFGR
			struct CFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_CFGR_0_SW        :2;
						uint32_t RCC_CFGR_0_SWS       :2;
						uint32_t RCC_CFGR_0_HPRE      :4;
						uint32_t RCC_CFGR_0_PPRE      :3;
						uint32_t RCC_CFGR_0_PPRE2     :3;
						uint32_t RCC_CFGR_0_ADCPRE    :1;
						uint32_t RCC_CFGR_0_TIMPRE    :1;
						uint32_t RCC_CFGR_0_PLLSRC    :1;
						uint32_t RCC_CFGR_0_PLLXTPRE  :1;
						uint32_t RCC_CFGR_0_PLLMUL    :4;
						uint32_t RCC_CFGR_0_USBPRE    :1;
						uint32_t RCC_CFGR_0_I2SSRC    :1;
						uint32_t RCC_CFGR_0_MCO       :4;
						uint32_t RCC_CFGR_0_MCOPRE    :3;
						uint32_t RCC_CFGR_0_PLLNODIV  :1;
					};
#ifdef RCC_CFGR_1
					struct
					{
						uint32_t RCC_CFGR_1_SW        :3;
						uint32_t RCC_CFGR_1_SWS       :3;
						uint32_t RCC_CFGR_1_STOPWUCK  :1;
						uint32_t RCC_CFGR_1_STOPKERWUCK :1;
						uint32_t RCC_CFGR_1_PPRE1     :3;
						uint32_t                      :3;
						uint32_t RCC_CFGR_1_HRTIMSEL  :1;
						uint32_t RCC_CFGR_1_PLLSRC    :2;
						uint32_t                      :1;
						uint32_t RCC_CFGR_1_MCO1PRE   :4;
						uint32_t RCC_CFGR_1_OTGFSPRE  :1;
						uint32_t                      :1;
						uint32_t RCC_CFGR_1_MCOSEL    :4;
						uint32_t RCC_CFGR_1_MCOF      :1;
						uint32_t                      :1;
						uint32_t RCC_CFGR_1_MCO2      :2;
					};
#endif
#ifdef RCC_CFGR_2
					struct
					{
						uint32_t                      :8;
						uint32_t RCC_CFGR_2_MCO1EN    :1;
						uint32_t RCC_CFGR_2_MCO2EN    :1;
						uint32_t RCC_CFGR_2_PPRE1     :3;
						uint32_t                      :1;
						uint32_t RCC_CFGR_2_ADCPRE    :2;
						uint32_t RCC_CFGR_2_RTCPRE    :5;
						uint32_t RCC_CFGR_2_MCO1      :2;
						uint32_t                      :1;
						uint32_t RCC_CFGR_2_MCO       :3;
						uint32_t RCC_CFGR_2_MCO2PRE   :3;
						uint32_t                      :2;
					};
#endif
#ifdef RCC_CFGR_3
					struct
					{
						uint32_t                      :13;
						uint32_t RCC_CFGR_3_PPRE2     :3;
						uint32_t                      :6;
						uint32_t RCC_CFGR_3_PLLDIV    :2;
						uint32_t RCC_CFGR_3_MCO1PRE   :3;
						uint32_t RCC_CFGR_3_SDPRE     :5;
					};
#endif
#ifdef RCC_CFGR_4
					struct
					{
						uint32_t                      :8;
						uint32_t RCC_CFGR_4_RTCPRE    :6;
						uint32_t                      :1;
						uint32_t RCC_CFGR_4_STOPWUCK  :1;
						uint32_t                      :6;
						uint32_t RCC_CFGR_4_MCO1      :3;
						uint32_t                      :2;
						uint32_t RCC_CFGR_4_SDADCPRE  :5;
					};
#endif
#ifdef RCC_CFGR_5
					struct
					{
						uint32_t                      :25;
						uint32_t MCO2PRE              :4;
						uint32_t MCO2                 :3;
					};
#endif
#ifdef RCC_CFGR_6
					struct
					{
						uint32_t                      :24;
						uint32_t MCOSEL               :3;
						uint32_t                      :5;
					};
#endif
				};

			};
#endif

#ifdef RCC_CFGR2
			struct CFGR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef RCC_CFGR2_0
					struct
					{
						uint32_t RCC_CFGR2_0_PREDIV   :4;
						uint32_t RCC_CFGR2_0_PREDIV2  :4;
						uint32_t RCC_CFGR2_0_PLL2MUL  :4;
						uint32_t RCC_CFGR2_0_PLL3MUL  :4;
						uint32_t RCC_CFGR2_0_PREDIV1SRC :1;
						uint32_t RCC_CFGR2_0_I2S2SRC  :1;
						uint32_t RCC_CFGR2_0_I2S3SRC  :1;
						uint32_t                      :13;
					};
#endif
#ifdef RCC_CFGR2_1
					struct
					{
						uint32_t RCC_CFGR2_1_PREDIV1  :4;
						uint32_t RCC_CFGR2_1_ADC1PRES :5;
						uint32_t RCC_CFGR2_1_ADCPRE34 :5;
						uint32_t                      :18;
					};
#endif
#ifdef RCC_CFGR2_2
					struct
					{
						uint32_t                      :4;
						uint32_t ADCPRE12             :5;
						uint32_t                      :23;
					};
#endif
				};

			};
#endif

#ifdef RCC_CFGR3
			struct CFGR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t USART1SW             :2;
						uint32_t                      :2;
						uint32_t I2C1SW               :1;
						uint32_t RCC_CFGR3_0_I2C2SW   :1;
						uint32_t RCC_CFGR3_0_CECSW    :1;
						uint32_t RCC_CFGR3_0_USBSW    :1;
						uint32_t RCC_CFGR3_0_TIM1SW   :1;
						uint32_t RCC_CFGR3_0_TIM8SW   :1;
						uint32_t RCC_CFGR3_0_TIM15SW  :1;
						uint32_t RCC_CFGR3_0_TIM16SW  :1;
						uint32_t RCC_CFGR3_0_HRTIMSW  :1;
						uint32_t RCC_CFGR3_0_TIM17SW  :1;
						uint32_t                      :1;
						uint32_t RCC_CFGR3_0_TIM20SW  :1;
						uint32_t RCC_CFGR3_0_USART2SW :2;
						uint32_t RCC_CFGR3_0_USART3SW :2;
						uint32_t RCC_CFGR3_0_UART4SW  :2;
						uint32_t RCC_CFGR3_0_UART5SW  :2;
						uint32_t RCC_CFGR3_0_TIM2SW   :1;
						uint32_t RCC_CFGR3_0_TIM34SW  :1;
						uint32_t                      :6;
					};
#ifdef RCC_CFGR3_1
					struct
					{
						uint32_t                      :4;
						uint32_t RCC_CFGR3_1_I2CSW    :3;
						uint32_t                      :1;
						uint32_t RCC_CFGR3_1_TIMSW    :2;
						uint32_t                      :2;
						uint32_t RCC_CFGR3_1_HRTIM1SW :1;
						uint32_t                      :19;
					};
#endif
#ifdef RCC_CFGR3_2
					struct
					{
						uint32_t                      :4;
						uint32_t RCC_CFGR3_2_I2CSW    :2;
						uint32_t RCC_CFGR3_2_I2C3SW   :1;
						uint32_t                      :1;
						uint32_t RCC_CFGR3_2_TIMSW    :1;
						uint32_t                      :23;
					};
#endif
#ifdef RCC_CFGR3_3
					struct
					{
						uint32_t                      :4;
						uint32_t RCC_CFGR3_3_I2CSW    :1;
						uint32_t                      :3;
						uint32_t RCC_CFGR3_3_ADCSW    :1;
						uint32_t                      :23;
					};
#endif
				};

			};
#endif

#ifdef RCC_CICR
			struct CICR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t LSIRDYC              :1;
						uint32_t LSERDYC              :1;
						uint32_t RCC_CICR_0_HSIRDYC   :1;
						uint32_t RCC_CICR_0_HSERDYC   :1;
						uint32_t RCC_CICR_0_CSIRDYC   :1;
						uint32_t RCC_CICR_0_HSI48RDYC :1;
						uint32_t RCC_CICR_0_PLLRDYC   :1;
						uint32_t RCC_CICR_0_PLL2RDYC  :1;
						uint32_t RCC_CICR_0_PLL3RDYC  :1;
						uint32_t RCC_CICR_0_LSECSSC   :1;
						uint32_t RCC_CICR_0_HSECSSC   :1;
						uint32_t                      :21;
					};
#ifdef RCC_CICR_1
					struct
					{
						uint32_t                      :3;
						uint32_t RCC_CICR_1_HSIRDYC   :1;
						uint32_t RCC_CICR_1_PLLRDYC   :1;
						uint32_t RCC_CICR_1_MSIRDYC   :1;
						uint32_t RCC_CICR_1_HSI48RDYC :1;
						uint32_t RCC_CICR_1_CSSLSEC   :1;
						uint32_t RCC_CICR_1_CSSHSEC   :1;
						uint32_t                      :23;
					};
#endif
#ifdef RCC_CICR_2
					struct
					{
						uint32_t                      :2;
						uint32_t RCC_CICR_2_MSIRDYC   :1;
						uint32_t                      :1;
						uint32_t RCC_CICR_2_HSERDYC   :1;
						uint32_t RCC_CICR_2_PLLRDYC   :1;
						uint32_t RCC_CICR_2_PLLSAI1RDYC :1;
						uint32_t RCC_CICR_2_LSECSSC   :1;
						uint32_t RCC_CICR_2_CSSC      :1;
						uint32_t                      :1;
						uint32_t RCC_CICR_2_HSI48RDYC :1;
						uint32_t                      :21;
					};
#endif
#ifdef RCC_CICR_3
					struct
					{
						uint32_t                      :7;
						uint32_t PLLSAI2RDYC          :1;
						uint32_t                      :24;
					};
#endif
				};

			};
#endif

#ifdef RCC_CIER
			struct CIER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t LSIRDYIE             :1;
						uint32_t LSERDYIE             :1;
						uint32_t RCC_CIER_0_HSIRDYIE  :1;
						uint32_t RCC_CIER_0_HSERDYIE  :1;
						uint32_t RCC_CIER_0_CSIRDYIE  :1;
						uint32_t RCC_CIER_0_HSI48RDYIE :1;
						uint32_t RCC_CIER_0_PLL1RDYIE :1;
						uint32_t RCC_CIER_0_PLL2RDYIE :1;
						uint32_t RCC_CIER_0_PLL3RDYIE :1;
						uint32_t RCC_CIER_0_LSECSSIE  :1;
						uint32_t                      :22;
					};
#ifdef RCC_CIER_1
					struct
					{
						uint32_t                      :3;
						uint32_t RCC_CIER_1_HSIRDYIE  :1;
						uint32_t RCC_CIER_1_PLLRDYIE  :1;
						uint32_t RCC_CIER_1_MSIRDYIE  :1;
						uint32_t RCC_CIER_1_HSI48RDYIE :1;
						uint32_t RCC_CIER_1_CSSLSE    :1;
						uint32_t                      :24;
					};
#endif
#ifdef RCC_CIER_2
					struct
					{
						uint32_t                      :2;
						uint32_t RCC_CIER_2_MSIRDYIE  :1;
						uint32_t                      :1;
						uint32_t RCC_CIER_2_HSERDYIE  :1;
						uint32_t RCC_CIER_2_PLLRDYIE  :1;
						uint32_t RCC_CIER_2_PLLSAI1RDYIE :1;
						uint32_t RCC_CIER_2_LSECSSIE  :1;
						uint32_t                      :2;
						uint32_t RCC_CIER_2_HSI48RDYIE :1;
						uint32_t                      :21;
					};
#endif
#ifdef RCC_CIER_3
					struct
					{
						uint32_t                      :7;
						uint32_t PLLSAI2RDYIE         :1;
						uint32_t                      :24;
					};
#endif
				};

			};
#endif

#ifdef RCC_CIFR
			struct CIFR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t LSIRDYF              :1;
						uint32_t LSERDYF              :1;
						uint32_t RCC_CIFR_0_HSIRDYF   :1;
						uint32_t RCC_CIFR_0_HSERDYF   :1;
						uint32_t RCC_CIFR_0_CSIRDYF   :1;
						uint32_t RCC_CIFR_0_HSI48RDYF :1;
						uint32_t RCC_CIFR_0_PLLRDYF   :1;
						uint32_t RCC_CIFR_0_PLL2RDYF  :1;
						uint32_t RCC_CIFR_0_PLL3RDYF  :1;
						uint32_t RCC_CIFR_0_LSECSSF   :1;
						uint32_t RCC_CIFR_0_HSECSSF   :1;
						uint32_t                      :21;
					};
#ifdef RCC_CIFR_1
					struct
					{
						uint32_t                      :3;
						uint32_t RCC_CIFR_1_HSIRDYF   :1;
						uint32_t RCC_CIFR_1_PLLRDYF   :1;
						uint32_t RCC_CIFR_1_MSIRDYF   :1;
						uint32_t RCC_CIFR_1_HSI48RDYF :1;
						uint32_t RCC_CIFR_1_CSSLSEF   :1;
						uint32_t RCC_CIFR_1_CSSHSEF   :1;
						uint32_t                      :23;
					};
#endif
#ifdef RCC_CIFR_2
					struct
					{
						uint32_t                      :2;
						uint32_t RCC_CIFR_2_MSIRDYF   :1;
						uint32_t                      :1;
						uint32_t RCC_CIFR_2_HSERDYF   :1;
						uint32_t RCC_CIFR_2_PLLRDYF   :1;
						uint32_t RCC_CIFR_2_PLLSAI1RDYF :1;
						uint32_t RCC_CIFR_2_LSECSSF   :1;
						uint32_t RCC_CIFR_2_CSSF      :1;
						uint32_t                      :1;
						uint32_t RCC_CIFR_2_HSI48RDYF :1;
						uint32_t                      :21;
					};
#endif
#ifdef RCC_CIFR_3
					struct
					{
						uint32_t                      :7;
						uint32_t PLLSAI2RDYF          :1;
						uint32_t                      :24;
					};
#endif
				};

			};
#endif

#ifdef RCC_CIR
			struct CIR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t LSIRDYF              :1;
						uint32_t LSERDYF              :1;
						uint32_t HSIRDYF              :1;
						uint32_t HSERDYF              :1;
						uint32_t PLLRDYF              :1;
						uint32_t RCC_CIR_0_HSI14RDYF  :1;
						uint32_t RCC_CIR_0_HSI48RDYF  :1;
						uint32_t CSSF                 :1;
						uint32_t LSIRDYIE             :1;
						uint32_t LSERDYIE             :1;
						uint32_t HSIRDYIE             :1;
						uint32_t HSERDYIE             :1;
						uint32_t PLLRDYIE             :1;
						uint32_t RCC_CIR_0_HSI14RDYIE :1;
						uint32_t RCC_CIR_0_HSI48RDYIE :1;
						uint32_t                      :1;
						uint32_t LSIRDYC              :1;
						uint32_t LSERDYC              :1;
						uint32_t HSIRDYC              :1;
						uint32_t HSERDYC              :1;
						uint32_t PLLRDYC              :1;
						uint32_t RCC_CIR_0_HSI14RDYC  :1;
						uint32_t RCC_CIR_0_HSI48RDYC  :1;
						uint32_t CSSC                 :1;
						uint32_t                      :8;
					};
#ifdef RCC_CIR_1
					struct
					{
						uint32_t                      :5;
						uint32_t PLL2RDYF             :1;
						uint32_t PLL3RDYF             :1;
						uint32_t                      :6;
						uint32_t PLL2RDYIE            :1;
						uint32_t PLL3RDYIE            :1;
						uint32_t                      :6;
						uint32_t PLL2RDYC             :1;
						uint32_t PLL3RDYC             :1;
						uint32_t                      :9;
					};
#endif
#ifdef RCC_CIR_2
					struct
					{
						uint32_t                      :5;
						uint32_t PLLI2SRDYF           :1;
						uint32_t RCC_CIR_2_PLLSAIRDYF :1;
						uint32_t                      :6;
						uint32_t PLLI2SRDYIE          :1;
						uint32_t RCC_CIR_2_PLLSAIRDYIE :1;
						uint32_t                      :6;
						uint32_t PLLI2SRDYC           :1;
						uint32_t RCC_CIR_2_PLLSAIRDYC :1;
						uint32_t                      :9;
					};
#endif
#ifdef RCC_CIR_3
					struct
					{
						uint32_t                      :5;
						uint32_t MSIRDYF              :1;
						uint32_t RCC_CIR_3_LSECSSF    :1;
						uint32_t                      :6;
						uint32_t MSIRDYIE             :1;
						uint32_t RCC_CIR_3_LSECSSIE   :1;
						uint32_t                      :6;
						uint32_t MSIRDYC              :1;
						uint32_t RCC_CIR_3_LSECSSC    :1;
						uint32_t                      :9;
					};
#endif
				};

			};
#endif

#ifdef RCC_CKGATENR
			struct CKGATENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t AHB2APB1_CKEN        :1;
					uint32_t AHB2APB2_CKEN        :1;
					uint32_t CM4DBG_CKEN          :1;
					uint32_t SPARE_CKEN           :1;
					uint32_t SRAM_CKEN            :1;
					uint32_t FLITF_CKEN           :1;
					uint32_t RCC_CKEN             :1;
					uint32_t RCC_CKGATENR_RCC_EVTCTL :1;
					uint32_t                      :24;


			};
#endif

#ifdef RCC_CR
			struct CR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_CR_0_HSION       :1;
						uint32_t RCC_CR_0_HSIRDY      :1;
						uint32_t RCC_CR_0_MSIPLLEN    :1;
						uint32_t RCC_CR_0_HSITRIM     :5;
						uint32_t RCC_CR_0_HSICAL      :8;
						uint32_t HSEON                :1;
						uint32_t HSERDY               :1;
						uint32_t HSEBYP               :1;
						uint32_t RCC_CR_0_CSSON       :1;
						uint32_t RCC_CR_0_RTCPRE      :2;
						uint32_t                      :2;
						uint32_t PLLON                :1;
						uint32_t PLLRDY               :1;
						uint32_t RCC_CR_0_PLL2ON      :1;
						uint32_t RCC_CR_0_PLL2RDY     :1;
						uint32_t RCC_CR_0_PLL3ON      :1;
						uint32_t RCC_CR_0_PLL3RDY     :1;
						uint32_t                      :2;
					};
#ifdef RCC_CR_1
					struct
					{
						uint32_t RCC_CR_1_MSION       :1;
						uint32_t RCC_CR_1_HSIKERON    :1;
						uint32_t RCC_CR_1_HSIRDY      :1;
						uint32_t RCC_CR_1_HSIDIV      :2;
						uint32_t RCC_CR_1_HSIDIVF     :1;
						uint32_t                      :1;
						uint32_t RCC_CR_1_CSION       :1;
						uint32_t RCC_CR_1_CSIRDY      :1;
						uint32_t RCC_CR_1_CSIKERON    :1;
						uint32_t                      :1;
						uint32_t RCC_CR_1_HSIASFS     :1;
						uint32_t RCC_CR_1_HSI48ON     :1;
						uint32_t RCC_CR_1_HSI48RDY    :1;
						uint32_t RCC_CR_1_D1CKRDY     :1;
						uint32_t RCC_CR_1_D2CKRDY     :1;
						uint32_t                      :3;
						uint32_t RCC_CR_1_CSSHSEON    :1;
						uint32_t                      :4;
						uint32_t RCC_CR_1_PLL1ON      :1;
						uint32_t RCC_CR_1_PLL1RDY     :1;
						uint32_t RCC_CR_1_PLLI2SON    :1;
						uint32_t RCC_CR_1_PLLI2SRDY   :1;
						uint32_t RCC_CR_1_PLLSAION    :1;
						uint32_t RCC_CR_1_PLLSAIRDY   :1;
						uint32_t                      :2;
					};
#endif
#ifdef RCC_CR_2
					struct
					{
						uint32_t                      :3;
						uint32_t RCC_CR_2_HSIDIVEN    :1;
						uint32_t RCC_CR_2_HSIDIVF     :1;
						uint32_t RCC_CR_2_HSIOUTEN    :1;
						uint32_t                      :2;
						uint32_t RCC_CR_2_MSION       :1;
						uint32_t RCC_CR_2_MSIRDY      :1;
						uint32_t RCC_CR_2_HSIRDY      :1;
						uint32_t                      :15;
						uint32_t RCC_CR_2_PLLSAI1ON   :1;
						uint32_t RCC_CR_2_PLLSAI1RDY  :1;
						uint32_t RCC_CR_2_CSSON       :1;
						uint32_t RCC_CR_2_RTCPRE      :2;
						uint32_t                      :1;
					};
#endif
#ifdef RCC_CR_3
					struct
					{
						uint32_t                      :1;
						uint32_t MSIRDY               :1;
						uint32_t                      :1;
						uint32_t MSIRGSEL             :1;
						uint32_t MSIRANGE             :4;
						uint32_t HSION                :1;
						uint32_t HSIKERON             :1;
						uint32_t                      :18;
						uint32_t RCC_CR_3_PLLSAI2ON   :1;
						uint32_t RCC_CR_3_PLLSAI2RDY  :1;
						uint32_t                      :2;
					};
#endif
				};

			};
#endif

#ifdef RCC_CR2
			struct CR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t HSI14ON              :1;
					uint32_t HSI14RDY             :1;
					uint32_t HSI14DIS             :1;
					uint32_t HSI14TRIM            :5;
					uint32_t HSI14CAL             :8;
					uint32_t RCC_CR2_HSI48ON      :1;
					uint32_t RCC_CR2_HSI48RDY     :1;
					uint32_t                      :6;
					uint32_t RCC_CR2_HSI48CAL     :8;


			};
#endif

#ifdef RCC_CRRCR
			struct CRRCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef RCC_CRRCR_0
					struct
					{
						uint32_t HSI48CAL             :10;
						uint32_t                      :22;
					};
#endif
#ifdef RCC_CRRCR_1
					struct
					{
						uint32_t HSI48ON              :1;
						uint32_t HSI48RDY             :1;
						uint32_t RCC_CRRCR_1_HSI48DIV6OUTEN :1;
						uint32_t                      :5;
						uint32_t RCC_CRRCR_1_HSI48CAL :8;
						uint32_t                      :16;
					};
#endif
#ifdef RCC_CRRCR_2
					struct
					{
						uint32_t                      :7;
						uint32_t HSI48CAL             :9;
						uint32_t                      :16;
					};
#endif
				};

			};
#endif

#ifdef RCC_CSR
			struct CSR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t LSION                :1;
						uint32_t LSIRDY               :1;
						uint32_t                      :6;
						uint32_t RCC_CSR_0_LSEON      :1;
						uint32_t RCC_CSR_0_LSERDY     :1;
						uint32_t RCC_CSR_0_LSEBYP     :1;
						uint32_t RCC_CSR_0_LSEDRV     :2;
						uint32_t RCC_CSR_0_LSECSSON   :1;
						uint32_t RCC_CSR_0_LSECSSD    :1;
						uint32_t                      :1;
						uint32_t RCC_CSR_0_RTCSEL     :2;
						uint32_t RCC_CSR_0_RTCEN      :1;
						uint32_t RCC_CSR_0_RTCRST     :1;
						uint32_t                      :3;
						uint32_t RCC_CSR_0_V18PWRRSTF :1;
						uint32_t RCC_CSR_0_RMVF       :1;
						uint32_t RCC_CSR_0_OBLRSTF    :1;
						uint32_t RCC_CSR_0_PINRSTF    :1;
						uint32_t RCC_CSR_0_PORRSTF    :1;
						uint32_t RCC_CSR_0_SFTRSTF    :1;
						uint32_t RCC_CSR_0_IWDGRSTF   :1;
						uint32_t RCC_CSR_0_WWDGRSTF   :1;
						uint32_t RCC_CSR_0_LPWRRSTF   :1;
					};
#ifdef RCC_CSR_1
					struct
					{
						uint32_t                      :11;
						uint32_t RCC_CSR_1_LSECSSON   :1;
						uint32_t RCC_CSR_1_LSECSSD    :1;
						uint32_t                      :9;
						uint32_t RCC_CSR_1_RTCEN      :1;
						uint32_t RCC_CSR_1_VREGRSTF   :1;
						uint32_t RCC_CSR_1_FWRSTF     :1;
						uint32_t RCC_CSR_1_BORRSTF    :1;
						uint32_t RCC_CSR_1_PADRSTF    :1;
						uint32_t                      :2;
						uint32_t RCC_CSR_1_WDGRSTF    :1;
						uint32_t                      :2;
					};
#endif
#ifdef RCC_CSR_2
					struct
					{
						uint32_t                      :8;
						uint32_t RCC_CSR_2_MSISRANGE  :4;
						uint32_t                      :11;
						uint32_t RMVF                 :1;
						uint32_t                      :1;
						uint32_t RCC_CSR_2_OBL        :1;
						uint32_t                      :1;
						uint32_t RCC_CSR_2_BORRSTF    :1;
						uint32_t                      :4;
					};
#endif
#ifdef RCC_CSR_3
					struct
					{
						uint32_t                      :23;
						uint32_t RTCRST               :1;
						uint32_t                      :8;
					};
#endif
				};

			};
#endif

#ifdef RCC_D1CCIPR
			struct D1CCIPR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t FMCSEL               :2;
					uint32_t                      :2;
					uint32_t QSPISEL              :2;
					uint32_t                      :10;
					uint32_t SDMMCSEL             :1;
					uint32_t                      :11;
					uint32_t CKPERSEL             :2;
					uint32_t                      :2;


			};
#endif

#ifdef RCC_D1CFGR
			struct D1CFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t HPRE                 :4;
					uint32_t D1PPRE               :3;
					uint32_t                      :1;
					uint32_t D1CPRE               :4;
					uint32_t                      :20;


			};
#endif

#ifdef RCC_D2CCIP1R
			struct D2CCIP1R_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t SAI1SEL              :3;
					uint32_t                      :3;
					uint32_t SAI23SEL             :3;
					uint32_t                      :3;
					uint32_t SPI123SEL            :3;
					uint32_t                      :1;
					uint32_t SPI45SEL             :3;
					uint32_t                      :1;
					uint32_t SPDIFSEL             :2;
					uint32_t                      :2;
					uint32_t DFSDM1SEL            :1;
					uint32_t                      :3;
					uint32_t FDCANSEL             :2;
					uint32_t                      :1;
					uint32_t SWPSEL               :1;


			};
#endif

#ifdef RCC_D2CCIP2R
			struct D2CCIP2R_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t USART28SEL           :3;
					uint32_t USART16SEL           :3;
					uint32_t                      :2;
					uint32_t RNGSEL               :2;
					uint32_t                      :2;
					uint32_t I2C123SEL            :2;
					uint32_t                      :6;
					uint32_t USBSEL               :2;
					uint32_t CECSEL               :2;
					uint32_t                      :4;
					uint32_t LPTIM1SEL            :3;
					uint32_t                      :1;


			};
#endif

#ifdef RCC_D2CFGR
			struct D2CFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :4;
					uint32_t D2PPRE1              :3;
					uint32_t                      :1;
					uint32_t D2PPRE2              :3;
					uint32_t                      :21;


			};
#endif

#ifdef RCC_D3AMR
			struct D3AMR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t BDMAAMEN             :1;
					uint32_t                      :2;
					uint32_t LPUART1AMEN          :1;
					uint32_t                      :1;
					uint32_t SPI6AMEN             :1;
					uint32_t                      :1;
					uint32_t I2C4AMEN             :1;
					uint32_t                      :1;
					uint32_t LPTIM2AMEN           :1;
					uint32_t LPTIM3AMEN           :1;
					uint32_t LPTIM4AMEN           :1;
					uint32_t LPTIM5AMEN           :1;
					uint32_t                      :1;
					uint32_t COMP12AMEN           :1;
					uint32_t VREFAMEN             :1;
					uint32_t RTCAMEN              :1;
					uint32_t                      :2;
					uint32_t CRCAMEN              :1;
					uint32_t                      :1;
					uint32_t SAI4AMEN             :1;
					uint32_t                      :2;
					uint32_t ADC3AMEN             :1;
					uint32_t                      :3;
					uint32_t BKPRAMAMEN           :1;
					uint32_t SRAM4AMEN            :1;
					uint32_t                      :2;


			};
#endif

#ifdef RCC_D3CCIPR
			struct D3CCIPR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t LPUART1SEL           :3;
					uint32_t                      :5;
					uint32_t I2C4SEL              :2;
					uint32_t LPTIM2SEL            :3;
					uint32_t LPTIM345SEL          :3;
					uint32_t ADCSEL               :2;
					uint32_t                      :3;
					uint32_t SAI4ASEL             :3;
					uint32_t SAI4BSEL             :3;
					uint32_t                      :1;
					uint32_t SPI6SEL              :3;
					uint32_t                      :1;


			};
#endif

#ifdef RCC_D3CFGR
			struct D3CFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :4;
					uint32_t D3PPRE               :3;
					uint32_t                      :25;


			};
#endif

#ifdef RCC_DCKCFGR
			struct DCKCFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_DCKCFGR_0_PLLI2SDIVR :5;
						uint32_t                      :3;
						uint32_t RCC_DCKCFGR_0_PLLDIVR :5;
						uint32_t                      :1;
						uint32_t RCC_DCKCFGR_0_CKDFSDM2ASEL :1;
						uint32_t RCC_DCKCFGR_0_CKDFSDM1ASEL :1;
						uint32_t RCC_DCKCFGR_0_PLLSAIDIVR :2;
						uint32_t                      :2;
						uint32_t RCC_DCKCFGR_0_SAI1ASRC :2;
						uint32_t RCC_DCKCFGR_0_SAI1BSRC :2;
						uint32_t TIMPRE               :1;
						uint32_t RCC_DCKCFGR_0_I2SSRC :2;
						uint32_t RCC_DCKCFGR_0_I2S2SRC :2;
						uint32_t RCC_DCKCFGR_0_DSISEL :1;
						uint32_t                      :1;
						uint32_t RCC_DCKCFGR_0_CKDFSDM1SEL :1;
					};
#ifdef RCC_DCKCFGR_1
					struct
					{
						uint32_t RCC_DCKCFGR_1_PLLI2SDIVQ :5;
						uint32_t                      :3;
						uint32_t RCC_DCKCFGR_1_PLLSAIDIVQ :5;
						uint32_t                      :7;
						uint32_t RCC_DCKCFGR_1_SAI1SRC :2;
						uint32_t RCC_DCKCFGR_1_SAI2SRC :2;
						uint32_t                      :1;
						uint32_t RCC_DCKCFGR_1_I2S1SRC :2;
						uint32_t RCC_DCKCFGR_1_CK48MSEL :1;
						uint32_t RCC_DCKCFGR_1_SDIOSEL :1;
						uint32_t                      :3;
					};
#endif
				};

			};
#endif

#ifdef RCC_DCKCFGR1
			struct DCKCFGR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PLLI2SDIVQ           :5;
					uint32_t                      :3;
					uint32_t PLLSAIDIVQ           :5;
					uint32_t                      :3;
					uint32_t RCC_DCKCFGR1_PLLSAIDIVR :2;
					uint32_t                      :2;
					uint32_t SAI1SEL              :2;
					uint32_t SAI2SEL              :2;
					uint32_t TIMPRE               :1;
					uint32_t RCC_DCKCFGR1_DFSDM1SEL :1;
					uint32_t RCC_DCKCFGR1_ADFSDM1SEL :1;
					uint32_t                      :5;


			};
#endif

#ifdef RCC_DCKCFGR2
			struct DCKCFGR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RCC_DCKCFGR2_0_USART1SEL :2;
						uint32_t RCC_DCKCFGR2_0_USART2SEL :2;
						uint32_t RCC_DCKCFGR2_0_USART3SEL :2;
						uint32_t RCC_DCKCFGR2_0_UART4SEL :2;
						uint32_t RCC_DCKCFGR2_0_UART5SEL :2;
						uint32_t RCC_DCKCFGR2_0_USART6SEL :2;
						uint32_t RCC_DCKCFGR2_0_UART7SEL :2;
						uint32_t RCC_DCKCFGR2_0_UART8SEL :2;
						uint32_t RCC_DCKCFGR2_0_I2C1SEL :2;
						uint32_t RCC_DCKCFGR2_0_I2C2SEL :2;
						uint32_t RCC_DCKCFGR2_0_I2C3SEL :2;
						uint32_t RCC_DCKCFGR2_0_FMPI2C1SEL :2;
						uint32_t                      :2;
						uint32_t RCC_DCKCFGR2_0_CECSEL :1;
						uint32_t RCC_DCKCFGR2_0_CK48MSEL :1;
						uint32_t RCC_DCKCFGR2_0_SDIOSEL :1;
						uint32_t RCC_DCKCFGR2_0_SPDIFRXSEL :1;
						uint32_t RCC_DCKCFGR2_0_LPTIM1SEL :2;
					};
#ifdef RCC_DCKCFGR2_1
					struct
					{
						uint32_t                      :22;
						uint32_t RCC_DCKCFGR2_1_I2C4SEL :2;
						uint32_t LPTIM1SEL            :2;
						uint32_t                      :2;
						uint32_t SDMMC1SEL            :1;
						uint32_t RCC_DCKCFGR2_1_SDMMC2SEL :1;
						uint32_t RCC_DCKCFGR2_1_DSISEL :1;
						uint32_t                      :1;
					};
#endif
				};

			};
#endif

#ifdef RCC_GCR
			struct GCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t WW1RSC               :1;
					uint32_t                      :31;


			};
#endif

#ifdef RCC_ICSCR
			struct ICSCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef RCC_ICSCR_0
					struct
					{
						uint32_t HSICAL               :12;
						uint32_t HSITRIM              :6;
						uint32_t CSICAL               :8;
						uint32_t CSITRIM              :5;
						uint32_t                      :1;
					};
#endif
#ifdef RCC_ICSCR_1
					struct
					{
						uint32_t HSICAL               :8;
						uint32_t HSITRIM              :5;
						uint32_t MSIRANGE             :3;
						uint32_t MSICAL               :8;
						uint32_t MSITRIM              :8;
					};
#endif
#ifdef RCC_ICSCR_2
					struct
					{
						uint32_t MSICAL               :8;
						uint32_t MSITRIM              :8;
						uint32_t HSICAL               :8;
						uint32_t RCC_ICSCR_2_HSITRIM  :5;
						uint32_t                      :3;
					};
#endif
#ifdef RCC_ICSCR_3
					struct
					{
						uint32_t                      :24;
						uint32_t HSITRIM              :7;
						uint32_t                      :1;
					};
#endif
				};

			};
#endif

#ifdef RCC_IOPENR
			struct IOPENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t IOPAEN               :1;
						uint32_t IOPBEN               :1;
						uint32_t IOPCEN               :1;
						uint32_t RCC_IOPENR_0_IOPDEN  :1;
						uint32_t RCC_IOPENR_0_IOPEEN  :1;
						uint32_t                      :2;
						uint32_t RCC_IOPENR_0_IOPHEN  :1;
						uint32_t                      :24;
					};
					struct
					{
						uint32_t GPIOAEN              :1;
						uint32_t GPIOBEN              :1;
						uint32_t GPIOCEN              :1;
						uint32_t RCC_IOPENR_1_GPIODEN :1;
						uint32_t RCC_IOPENR_1_GPIOEEN :1;
						uint32_t                      :2;
						uint32_t RCC_IOPENR_1_GPIOHEN :1;
						uint32_t                      :24;
					};
				};

			};
#endif

#ifdef RCC_IOPRSTR
			struct IOPRSTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t IOPARST              :1;
						uint32_t IOPBRST              :1;
						uint32_t IOPCRST              :1;
						uint32_t RCC_IOPRSTR_0_IOPDRST :1;
						uint32_t RCC_IOPRSTR_0_IOPERST :1;
						uint32_t                      :2;
						uint32_t RCC_IOPRSTR_0_IOPHRST :1;
						uint32_t                      :24;
					};
					struct
					{
						uint32_t GPIOARST             :1;
						uint32_t GPIOBRST             :1;
						uint32_t GPIOCRST             :1;
						uint32_t RCC_IOPRSTR_1_GPIODRST :1;
						uint32_t RCC_IOPRSTR_1_GPIOERST :1;
						uint32_t                      :2;
						uint32_t RCC_IOPRSTR_1_GPIOHRST :1;
						uint32_t                      :24;
					};
				};

			};
#endif

#ifdef RCC_IOPSMENR
			struct IOPSMENR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t IOPASMEN             :1;
						uint32_t IOPBSMEN             :1;
						uint32_t IOPCSMEN             :1;
						uint32_t RCC_IOPSMENR_0_IOPDSMEN :1;
						uint32_t RCC_IOPSMENR_0_IOPESMEN :1;
						uint32_t                      :2;
						uint32_t RCC_IOPSMENR_0_IOPHSMEN :1;
						uint32_t                      :24;
					};
					struct
					{
						uint32_t GPIOASMEN            :1;
						uint32_t GPIOBSMEN            :1;
						uint32_t GPIOCSMEN            :1;
						uint32_t RCC_IOPSMENR_1_GPIODSMEN :1;
						uint32_t RCC_IOPSMENR_1_GPIOESMEN :1;
						uint32_t                      :2;
						uint32_t RCC_IOPSMENR_1_GPIOHSMEN :1;
						uint32_t                      :24;
					};
				};

			};
#endif

#ifdef RCC_PLL1DIVR
			struct PLL1DIVR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t N1                   :9;
					uint32_t P1                   :7;
					uint32_t Q1                   :7;
					uint32_t                      :1;
					uint32_t R1                   :7;
					uint32_t                      :1;


			};
#endif

#ifdef RCC_PLL1FRACR
			struct PLL1FRACR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :3;
					uint32_t FRACN1               :13;
					uint32_t                      :16;


			};
#endif

#ifdef RCC_PLL2DIVR
			struct PLL2DIVR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t N2                   :9;
					uint32_t P2                   :7;
					uint32_t Q2                   :7;
					uint32_t                      :1;
					uint32_t R2                   :7;
					uint32_t                      :1;


			};
#endif

#ifdef RCC_PLL2FRACR
			struct PLL2FRACR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :3;
					uint32_t FRACN2               :13;
					uint32_t                      :16;


			};
#endif

#ifdef RCC_PLL3DIVR
			struct PLL3DIVR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t N3                   :9;
					uint32_t P3                   :7;
					uint32_t Q3                   :7;
					uint32_t                      :1;
					uint32_t R3                   :7;
					uint32_t                      :1;


			};
#endif

#ifdef RCC_PLL3FRACR
			struct PLL3FRACR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :3;
					uint32_t FRACN3               :13;
					uint32_t                      :16;


			};
#endif

#ifdef RCC_PLLCFGR
			struct PLLCFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef RCC_PLLCFGR_0
					struct
					{
						uint32_t RCC_PLLCFGR_0_PLLM   :6;
						uint32_t RCC_PLLCFGR_0_PLLN   :9;
						uint32_t                      :1;
						uint32_t RCC_PLLCFGR_0_PLLP   :2;
						uint32_t RCC_PLLCFGR_0_DIVR1EN :1;
						uint32_t RCC_PLLCFGR_0_DIVP2EN :1;
						uint32_t RCC_PLLCFGR_0_DIVQ2EN :1;
						uint32_t RCC_PLLCFGR_0_DIVR2EN :1;
						uint32_t RCC_PLLCFGR_0_PLLSRC :1;
						uint32_t RCC_PLLCFGR_0_DIVQ3EN :1;
						uint32_t RCC_PLLCFGR_0_PLLQ   :4;
						uint32_t RCC_PLLCFGR_0_PLLR   :3;
						uint32_t                      :1;
					};
#endif
#ifdef RCC_PLLCFGR_1
					struct
					{
						uint32_t RCC_PLLCFGR_1_PLL1FRACEN :1;
						uint32_t RCC_PLLCFGR_1_PLL1VCOSEL :1;
						uint32_t RCC_PLLCFGR_1_PLL1RGE :2;
						uint32_t RCC_PLLCFGR_1_PLL2FRACEN :1;
						uint32_t RCC_PLLCFGR_1_PLL2VCOSEL :1;
						uint32_t RCC_PLLCFGR_1_PLL2RGE :2;
						uint32_t RCC_PLLCFGR_1_PLL3FRACEN :1;
						uint32_t RCC_PLLCFGR_1_PLL3VCOSEL :1;
						uint32_t RCC_PLLCFGR_1_PLL3RGE :2;
						uint32_t                      :4;
						uint32_t RCC_PLLCFGR_1_DIVP1EN :1;
						uint32_t RCC_PLLCFGR_1_DIVQ1EN :1;
						uint32_t                      :2;
						uint32_t RCC_PLLCFGR_1_PLLQEN :1;
						uint32_t                      :1;
						uint32_t RCC_PLLCFGR_1_DIVP3EN :1;
						uint32_t                      :1;
						uint32_t RCC_PLLCFGR_1_DIVR3EN :1;
						uint32_t RCC_PLLCFGR_1_PLLR   :2;
						uint32_t RCC_PLLCFGR_1_PLLPDIV :5;
					};
#endif
#ifdef RCC_PLLCFGR_2
					struct
					{
						uint32_t PLLSRC               :2;
						uint32_t                      :2;
						uint32_t RCC_PLLCFGR_2_PLLM   :3;
						uint32_t                      :1;
						uint32_t PLLN                 :7;
						uint32_t                      :1;
						uint32_t PLLPEN               :1;
						uint32_t PLLP                 :1;
						uint32_t                      :3;
						uint32_t PLLQ                 :2;
						uint32_t                      :1;
						uint32_t PLLREN               :1;
						uint32_t                      :7;
					};
#endif
#ifdef RCC_PLLCFGR_3
					struct
					{
						uint32_t                      :4;
						uint32_t PLLM                 :4;
						uint32_t                      :24;
					};
#endif
				};

			};
#endif

#ifdef RCC_PLLCKSELR
			struct PLLCKSELR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PLLSRC               :2;
					uint32_t                      :2;
					uint32_t DIVM1                :6;
					uint32_t                      :2;
					uint32_t DIVM2                :6;
					uint32_t                      :2;
					uint32_t DIVM3                :6;
					uint32_t                      :6;


			};
#endif

#ifdef RCC_PLLI2SCFGR
			struct PLLI2SCFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t RCC_PLLI2SCFGR_PLLI2SM :6;
					uint32_t PLLI2SN              :9;
					uint32_t                      :1;
					uint32_t RCC_PLLI2SCFGR_PLLI2SP :2;
					uint32_t                      :4;
					uint32_t RCC_PLLI2SCFGR_PLLI2SSRC :1;
					uint32_t                      :1;
					uint32_t RCC_PLLI2SCFGR_PLLI2SQ :4;
					uint32_t PLLI2SR              :3;
					uint32_t                      :1;


			};
#endif

#ifdef RCC_PLLSAI1CFGR
			struct PLLSAI1CFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :4;
					uint32_t RCC_PLLSAI1CFGR_PLLSAI1M :4;
					uint32_t PLLSAI1N             :7;
					uint32_t                      :1;
					uint32_t PLLSAI1PEN           :1;
					uint32_t PLLSAI1P             :1;
					uint32_t                      :2;
					uint32_t PLLSAI1QEN           :1;
					uint32_t PLLSAI1Q             :2;
					uint32_t                      :1;
					uint32_t PLLSAI1REN           :1;
					uint32_t PLLSAI1R             :2;
					uint32_t RCC_PLLSAI1CFGR_PLLSAI1PDIV :5;


			};
#endif

#ifdef RCC_PLLSAI2CFGR
			struct PLLSAI2CFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :4;
					uint32_t RCC_PLLSAI2CFGR_PLLSAI2M :4;
					uint32_t PLLSAI2N             :7;
					uint32_t                      :1;
					uint32_t PLLSAI2PEN           :1;
					uint32_t PLLSAI2P             :1;
					uint32_t                      :2;
					uint32_t RCC_PLLSAI2CFGR_PLLSAI2QEN :1;
					uint32_t RCC_PLLSAI2CFGR_PLLSAI2Q :2;
					uint32_t                      :1;
					uint32_t PLLSAI2REN           :1;
					uint32_t PLLSAI2R             :2;
					uint32_t RCC_PLLSAI2CFGR_PLLSAI2PDIV :5;


			};
#endif

#ifdef RCC_PLLSAICFGR
			struct PLLSAICFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t RCC_PLLSAICFGR_PLLSAIM :6;
					uint32_t PLLSAIN              :9;
					uint32_t                      :1;
					uint32_t RCC_PLLSAICFGR_PLLSAIP :2;
					uint32_t                      :6;
					uint32_t PLLSAIQ              :4;
					uint32_t RCC_PLLSAICFGR_PLLSAIR :3;
					uint32_t                      :1;


			};
#endif

#ifdef RCC_RSR
			struct RSR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :16;
					uint32_t RMVF                 :1;
					uint32_t CPURSTF              :1;
					uint32_t                      :1;
					uint32_t D1RSTF               :1;
					uint32_t D2RSTF               :1;
					uint32_t BORRSTF              :1;
					uint32_t PINRSTF              :1;
					uint32_t PORRSTF              :1;
					uint32_t SFTRSTF              :1;
					uint32_t                      :1;
					uint32_t IWDG1RSTF            :1;
					uint32_t                      :1;
					uint32_t WWDG1RSTF            :1;
					uint32_t                      :1;
					uint32_t LPWRRSTF             :1;
					uint32_t                      :1;


			};
#endif

#ifdef RCC_SSCGR
			struct SSCGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t MODPER               :13;
					uint32_t INCSTEP              :15;
					uint32_t                      :2;
					uint32_t SPREADSEL            :1;
					uint32_t SSCGEN               :1;


			};
#endif

			union
			{

				struct
				{
					CR_TypeDef CR;       // @0x000
					RCC_MAP0_CFGR;       // @0x004
					RCC_MAP0_CIR;        // @0x008
					RCC_MAP0_APB2RSTR;   // @0x00c
					RCC_MAP0_APB1RSTR;   // @0x010
					RCC_MAP0_AHBENR;     // @0x014
					RCC_MAP0_APB2ENR;    // @0x018
					RCC_MAP0_APB1ENR;    // @0x01c
					RCC_MAP0_BDCR;       // @0x020
					RCC_MAP0_CSR;        // @0x024
					RCC_MAP0_AHBRSTR;    // @0x028
					RCC_MAP0_CFGR2;      // @0x02c
					RCC_MAP0_CFGR3;      // @0x030
					RCC_MAP0_CR2;        // @0x034
					RCC_MAP0_AHB3ENR;    // @0x038
					RCC_MAP0_PLL2FRACR;  // @0x03c
					RCC_MAP0_PLL3DIVR;   // @0x040
					RCC_MAP0_PLL3FRACR;  // @0x044
					RCC_MAP0_APB1SMENR;  // @0x048
					RCC_MAP0_D1CCIPR;    // @0x04c
					RCC_MAP0_AHB1LPENR;  // @0x050
					RCC_MAP0_AHB2LPENR;  // @0x054
					RCC_MAP0_AHB3LPENR;  // @0x058
					RCC_MAP0_APB1ENR2;   // @0x05c
					RCC_MAP0_APB1LPENR;  // @0x060
					RCC_MAP0_APB2LPENR;  // @0x064
					RCC_MAP0_CICR;       // @0x068
					RCC_MAP0_AHB2SMENR;  // @0x06c
					RCC_MAP0_AHB3SMENR;  // @0x070
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP0_APB1SMENR1; // @0x078
					RCC_MAP0_AHB3RSTR;   // @0x07c
					RCC_MAP0_SSCGR;      // @0x080
					RCC_MAP0_PLLI2SCFGR; // @0x084
					RCC_MAP0_PLLSAICFGR; // @0x088
					RCC_MAP0_DCKCFGR;    // @0x08c
					RCC_MAP0_CKGATENR;   // @0x090
					RCC_MAP0_DCKCFGR2;   // @0x094
					RCC_MAP0_CRRCR;      // @0x098
					RCC_MAP0_APB4RSTR;   // @0x09c
					RCC_MAP0_GCR;        // @0x0a0
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP0_D3AMR;      // @0x0a8
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP0_RSR;        // @0x0d0
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP0_AHB1ENR;    // @0x0d8
					RCC_MAP0_AHB2ENR;    // @0x0dc
					RCC_MAP0_AHB4ENR;    // @0x0e0
					RCC_MAP0_APB3ENR;    // @0x0e4
					RCC_MAP0_APB1LENR;   // @0x0e8
					RCC_MAP0_APB1HENR;   // @0x0ec
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP0_APB4ENR;    // @0x0f4
					__SOOL_PERIPH_PADDING_16;
					RCC_MAP0_AHB4LPENR;  // @0x108
					RCC_MAP0_APB3LPENR;  // @0x10c
					RCC_MAP0_APB1LLPENR; // @0x110
					RCC_MAP0_APB1HLPENR; // @0x114
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP0_APB4LPENR;  // @0x11c
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP1_PLLCFGR;    // @0x004
					RCC_MAP1_CFGR;       // @0x008
					RCC_MAP1_CIR;        // @0x00c
					RCC_MAP1_AHB1RSTR;   // @0x010
					RCC_MAP1_AHB2RSTR;   // @0x014
					RCC_MAP1_AHB3RSTR;   // @0x018
					RCC_MAP1_D2CFGR;     // @0x01c
					RCC_MAP1_APB1RSTR;   // @0x020
					RCC_MAP1_APB2RSTR;   // @0x024
					RCC_MAP1_PLLCKSELR;  // @0x028
					RCC_MAP1_IOPENR;     // @0x02c
					RCC_MAP1_AHB1ENR;    // @0x030
					RCC_MAP1_AHB2ENR;    // @0x034
					RCC_MAP1_PLL2DIVR;   // @0x038
					RCC_MAP1_IOPSMENR;   // @0x03c
					RCC_MAP1_APB1ENR;    // @0x040
					RCC_MAP1_APB2ENR;    // @0x044
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP1_CCIPR;      // @0x04c
					RCC_MAP1_D2CCIP1R;   // @0x050
					RCC_MAP1_D2CCIP2R;   // @0x054
					RCC_MAP1_D3CCIPR;    // @0x058
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP1_CIER;       // @0x060
					RCC_MAP1_CIFR;       // @0x064
					RCC_MAP1_AHB1SMENR;  // @0x068
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP1_BDCR;       // @0x070
					RCC_MAP1_CSR;        // @0x074
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP1_APB1SMENR2; // @0x07c
					RCC_MAP1_APB2SMENR;  // @0x080
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP1_AHB4RSTR;   // @0x088
					RCC_MAP1_DCKCFGR1;   // @0x08c
					RCC_MAP1_DCKCFGR2;   // @0x090
					RCC_MAP1_APB1HRSTR;  // @0x094
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP1_CCIPR2;     // @0x09c
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP1_AHB3ENR;    // @0x0d4
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP1_AHB3LPENR;  // @0x0fc
					RCC_MAP1_AHB1LPENR;  // @0x100
					RCC_MAP1_AHB2LPENR;  // @0x104
					__SOOL_PERIPH_PADDING_16;
					RCC_MAP1_APB2LPENR;  // @0x118
					__SOOL_PERIPH_PADDING_4;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP2_ICSCR;      // @0x004
					RCC_MAP2_CRRCR;      // @0x008
					RCC_MAP2_CFGR;       // @0x00c
					RCC_MAP2_CIER;       // @0x010
					RCC_MAP2_CIFR;       // @0x014
					RCC_MAP2_D1CFGR;     // @0x018
					RCC_MAP2_IOPRSTR;    // @0x01c
					RCC_MAP2_D3CFGR;     // @0x020
					RCC_MAP2_APB1ENR;    // @0x024
					RCC_MAP2_APB1RSTR;   // @0x028
					RCC_MAP2_PLLCFGR;    // @0x02c
					RCC_MAP2_PLL1DIVR;   // @0x030
					RCC_MAP2_PLL1FRACR;  // @0x034
					RCC_MAP2_APB1RSTR1;  // @0x038
					RCC_MAP2_APB1RSTR2;  // @0x03c
					RCC_MAP2_AHBSMENR;   // @0x040
					RCC_MAP2_APB2SMENR;  // @0x044
					RCC_MAP2_AHB1ENR;    // @0x048
					RCC_MAP2_AHB2ENR;    // @0x04c
					RCC_MAP2_CSR;        // @0x050
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP2_APB1ENR1;   // @0x058
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP2_APB2ENR;    // @0x060
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP2_AHB1RSTR;   // @0x080
					RCC_MAP2_AHB2RSTR;   // @0x084
					RCC_MAP2_CCIPR;      // @0x088
					RCC_MAP2_APB3RSTR;   // @0x08c
					RCC_MAP2_APB1LRSTR;  // @0x090
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP2_APB2RSTR;   // @0x098
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_4;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP3_PLLCFGR;    // @0x00c
					RCC_MAP3_CFGR;       // @0x010
					RCC_MAP3_APB2RSTR;   // @0x014
					RCC_MAP3_CICR;       // @0x018
					RCC_MAP3_AHBENR;     // @0x01c
					RCC_MAP3_AHBRSTR;    // @0x020
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP3_AHBLPENR;   // @0x028
					RCC_MAP3_APB2LPENR;  // @0x02c
					RCC_MAP3_APB1LPENR;  // @0x030
					RCC_MAP3_APB2ENR;    // @0x034
					RCC_MAP3_APB1ENR;    // @0x038
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP3_AHB3ENR;    // @0x050
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP3_BDCR;       // @0x090
					RCC_MAP3_CSR;        // @0x094
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_8;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_16;
					RCC_MAP4_AHBRSTR;    // @0x010
					RCC_MAP4_PLLSAI2CFGR; // @0x014
					RCC_MAP4_APB1RSTR;   // @0x018
					RCC_MAP4_CIFR;       // @0x01c
					RCC_MAP4_APB2ENR;    // @0x020
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP4_AHB1RSTR;   // @0x028
					RCC_MAP4_AHB2RSTR;   // @0x02c
					RCC_MAP4_AHBENR;     // @0x030
					RCC_MAP4_CSR;        // @0x034
					__SOOL_PERIPH_PADDING_8;
					RCC_MAP4_APB2RSTR;   // @0x040
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_16;
					RCC_MAP5_PLLSAI1CFGR; // @0x010
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP5_CIER;       // @0x018
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP5_CICR;       // @0x020
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP5_AHB3RSTR;   // @0x030
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					RCC_MAP5_APB2ENR;    // @0x0f0
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
				};
			};
		private:
			RCC() = delete;

		};

		//region instances
#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define RCC_BASE_ADDR ((uint32_t)0x40021000U)
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     )
#define RCC_BASE_ADDR ((uint32_t)0x40023800U)
#endif

#if defined(STM32H7     )
#define RCC_BASE_ADDR ((uint32_t)0x58024400U)
#endif

#ifdef RCC_BASE_ADDR
		volatile class RCC * const RCC = reinterpret_cast<class RCC* const>(RCC_BASE_ADDR);
#endif
//endregion



	};
};
//region undef
#undef RCC_AHB1ENR_0_GPIOAEN
#undef RCC_AHB1ENR_0_GPIOBEN
#undef RCC_AHB1ENR_0_GPIOCEN
#undef RCC_AHB1ENR_0_GPIOHEN
#undef RCC_AHB1ENR_0_DMA1EN
#undef RCC_AHB1ENR_0_DMA2EN
#undef RCC_AHB1RSTR_0_GPIOARST
#undef RCC_AHB1RSTR_0_GPIOBRST
#undef RCC_AHB1RSTR_0_GPIOCRST
#undef RCC_AHB1RSTR_0_GPIOHRST
#undef RCC_AHB1RSTR_0_DMA1RST
#undef RCC_AHB1RSTR_0_DMA2RST
#undef RCC_APB2ENR_1_SYSCFGEN
#undef RCC_APB2ENR_1_TIM9EN
#undef RCC_APB2ENR_1_TIM11EN
#undef RCC_APB2ENR_2_ADC1EN
#undef RCC_APB2LPENR_0_ADC1LPEN
#undef RCC_APB2LPENR_0_SYSCFGLPEN
#undef RCC_APB2LPENR_0_TIM9LPEN
#undef RCC_APB2LPENR_0_TIM11LPEN
#undef RCC_APB2RSTR_1_ADCRST
#undef RCC_APB2RSTR_1_SYSCFGRST
#undef RCC_APB2RSTR_1_TIM9RST
#undef RCC_APB2RSTR_1_TIM11RST
#undef RCC_CFGR_2_PPRE1
#undef RCC_CFGR_2_RTCPRE
#undef RCC_CFGR_2_MCO1
#undef RCC_CFGR_3_PPRE2
#undef RCC_CFGR_3_MCO1PRE
#undef RCC_PLLCFGR_0_PLLM
#undef RCC_PLLCFGR_0_PLLN
#undef RCC_PLLCFGR_0_PLLP
#undef RCC_PLLCFGR_0_PLLSRC
#undef RCC_PLLCFGR_0_PLLQ
#undef RCC_MAP1_PLLCFGR
#undef RCC_MAP1_AHB1RSTR
#undef RCC_MAP1_APB1RSTR
#undef RCC_MAP1_AHB1ENR
#undef RCC_MAP1_APB1ENR
#undef RCC_MAP1_APB2ENR
#undef RCC_MAP0_AHB1LPENR
#undef RCC_MAP0_APB1LPENR
#undef RCC_MAP0_APB2LPENR
#undef RCC_MAP0_SSCGR
#undef RCC_AHB1ENR_0_GPIODEN
#undef RCC_AHB1ENR_0_GPIOEEN
#undef RCC_AHB1LPENR_0_GPIODLPEN
#undef RCC_AHB1LPENR_0_GPIOELPEN
#undef RCC_AHB1RSTR_0_GPIODRST
#undef RCC_AHB1RSTR_0_GPIOERST
#undef RCC_AHB2ENR_0_OTGFSEN
#undef RCC_AHB2LPENR_0_OTGFSLPEN
#undef RCC_AHB2RSTR_0_OTGFSRST
#undef RCC_APB1ENR_1_I2C3EN
#undef RCC_APB1LPENR_0_I2C3LPEN
#undef RCC_APB1RSTR_1_I2C3RST
#undef RCC_APB2ENR_1_TIM10EN
#undef RCC_APB2LPENR_0_TIM10LPEN
#undef RCC_APB2RSTR_1_TIM10RST
#undef RCC_CR_1_PLLI2SON
#undef RCC_CR_1_PLLI2SRDY
#undef RCC_MAP1_AHB2RSTR
#undef RCC_MAP1_AHB2ENR
#undef RCC_MAP0_AHB2LPENR
#undef RCC_MAP0_PLLI2SCFGR
#undef RCC_AHB1ENR_0_GPIOFEN
#undef RCC_AHB1ENR_0_GPIOGEN
#undef RCC_AHB1LPENR_0_GPIOFLPEN
#undef RCC_AHB1LPENR_0_GPIOGLPEN
#undef RCC_AHB1RSTR_0_GPIOFRST
#undef RCC_AHB1RSTR_0_GPIOGRST
#undef RCC_APB1LPENR_0_TIM12LPEN
#undef RCC_APB1LPENR_0_TIM13LPEN
#undef RCC_APB1LPENR_0_TIM14LPEN
#undef RCC_APB1LPENR_0_CAN1LPEN
#undef RCC_AHB1ENR_0_GPIOIEN
#undef RCC_AHB1LPENR_0_GPIOILPEN
#undef RCC_AHB1RSTR_0_GPIOIRST
#undef RCC_AHB1ENR_0_GPIOJEN
#undef RCC_AHB1ENR_0_GPIOKEN
#undef RCC_AHB1ENR_0_DMA2DEN
#undef RCC_AHB1LPENR_0_GPIOJLPEN
#undef RCC_AHB1LPENR_0_GPIOKLPEN
#undef RCC_AHB1LPENR_0_DMA2DLPEN
#undef RCC_AHB1RSTR_0_GPIOJRST
#undef RCC_AHB1RSTR_0_GPIOKRST
#undef RCC_AHB1RSTR_0_DMA2DRST
#undef RCC_APB2ENR_1_SPI6EN
#undef RCC_APB2LPENR_0_SPI6LPEN
#undef RCC_APB2RSTR_1_SPI6RST
#undef RCC_PLLSAICFGR_PLLSAIR
#undef RCC_AHB1ENR_0_CRCEN
#undef RCC_AHB1RSTR_0_CRCRST
#undef RCC_AHB1ENR_0_ETH1MACEN
#undef RCC_AHB1ENR_0_ETH1TXEN
#undef RCC_AHB1ENR_0_ETH1RXEN
#undef RCC_AHB1ENR_1_ADC12EN
#undef RCC_AHB1ENR_1_USB1OTGHSEN
#undef RCC_AHB1ENR_1_USB1OTGHSULPIEN
#undef RCC_AHB1ENR_1_USB2OTGHSEN
#undef RCC_AHB1ENR_1_USB2OTGHSULPIEN
#undef RCC_AHB1RSTR_0_ETH1MACRST
#undef RCC_AHB1RSTR_0_USB2OTGHSRST
#undef RCC_AHB1RSTR_1_ADC12RST
#undef RCC_AHB1RSTR_1_USB1OTGHSRST
#undef RCC_AHB2ENR_0_SDMMC2EN
#undef RCC_AHB2ENR_0_D2SRAM1EN
#undef RCC_AHB2ENR_0_D2SRAM2EN
#undef RCC_AHB2ENR_0_D2SRAM3EN
#undef RCC_AHB2LPENR_0_SDMMC2LPEN
#undef RCC_AHB2LPENR_0_D2SRAM1LPEN
#undef RCC_AHB2LPENR_0_D2SRAM3LPEN
#undef RCC_AHB2LPENR_1_D2SRAM2LPEN
#undef RCC_AHB2RSTR_0_SDMMC2RST
#undef RCC_AHB3ENR_0_DMA2DEN
#undef RCC_AHB3ENR_0_JPGDECEN
#undef RCC_AHB3ENR_0_FMCEN
#undef RCC_AHB3ENR_0_SDMMC1EN
#undef RCC_AHB3ENR_1_QSPIEN
#undef RCC_AHB3ENR_2_MDMAEN
#undef RCC_AHB3LPENR_0_DMA2DLPEN
#undef RCC_AHB3LPENR_0_JPGDECLPEN
#undef RCC_AHB3LPENR_0_FLASHLPEN
#undef RCC_AHB3LPENR_0_FMCLPEN
#undef RCC_AHB3LPENR_0_SDMMC1LPEN
#undef RCC_AHB3LPENR_0_DTCM1LPEN
#undef RCC_AHB3LPENR_0_DTCM2LPEN
#undef RCC_AHB3LPENR_0_ITCMLPEN
#undef RCC_AHB3LPENR_0_AXISRAMLPEN
#undef RCC_AHB3LPENR_1_QSPILPEN
#undef RCC_AHB3RSTR_0_DMA2DRST
#undef RCC_AHB3RSTR_0_JPGDECRST
#undef RCC_AHB3RSTR_0_FMCRST
#undef RCC_AHB3RSTR_0_SDMMC1RST
#undef RCC_AHB3RSTR_0_CPURST
#undef RCC_AHB3RSTR_1_QSPIRST
#undef RCC_AHB3RSTR_2_MDMARST
#undef RCC_APB2ENR_0_DFSDM1EN
#undef RCC_APB2ENR_1_HRTIMEN
#undef RCC_APB2ENR_2_SAI3EN
#undef RCC_APB2LPENR_0_HRTIMLPEN
#undef RCC_APB2LPENR_1_TIM15LPEN
#undef RCC_APB2LPENR_1_TIM16LPEN
#undef RCC_APB2LPENR_1_TIM17LPEN
#undef RCC_APB2LPENR_1_SAI3LPEN
#undef RCC_APB2RSTR_0_DFSDM1RST
#undef RCC_APB2RSTR_1_HRTIMRST
#undef RCC_APB2RSTR_2_SAI3RST
#undef RCC_CFGR_0_TIMPRE
#undef RCC_CFGR_1_SW
#undef RCC_CFGR_1_SWS
#undef RCC_CFGR_1_STOPWUCK
#undef RCC_CFGR_1_STOPKERWUCK
#undef RCC_CFGR_1_HRTIMSEL
#undef RCC_CFGR_1_MCO1PRE
#undef RCC_CFGR_4_RTCPRE
#undef RCC_CFGR_4_MCO1
#undef RCC_CICR_0_CSIRDYC
#undef RCC_CICR_0_HSI48RDYC
#undef RCC_CICR_0_PLLRDYC
#undef RCC_CICR_0_PLL2RDYC
#undef RCC_CICR_0_PLL3RDYC
#undef RCC_CICR_0_HSECSSC
#undef RCC_CIER_0_CSIRDYIE
#undef RCC_CIER_0_HSI48RDYIE
#undef RCC_CIER_0_PLL1RDYIE
#undef RCC_CIER_0_PLL2RDYIE
#undef RCC_CIER_0_PLL3RDYIE
#undef RCC_CIFR_0_CSIRDYF
#undef RCC_CIFR_0_HSI48RDYF
#undef RCC_CIFR_0_PLLRDYF
#undef RCC_CIFR_0_PLL2RDYF
#undef RCC_CIFR_0_PLL3RDYF
#undef RCC_CIFR_0_HSECSSF
#undef RCC_CR_1_HSIDIV
#undef RCC_CR_1_HSIDIVF
#undef RCC_CR_1_CSION
#undef RCC_CR_1_CSIRDY
#undef RCC_CR_1_CSIKERON
#undef RCC_CR_1_HSI48ON
#undef RCC_CR_1_HSI48RDY
#undef RCC_CR_1_D1CKRDY
#undef RCC_CR_1_D2CKRDY
#undef RCC_CR_1_PLL1ON
#undef RCC_CR_1_PLL1RDY
#undef RCC_PLLCFGR_0_DIVR1EN
#undef RCC_PLLCFGR_0_DIVP2EN
#undef RCC_PLLCFGR_0_DIVQ2EN
#undef RCC_PLLCFGR_0_DIVR2EN
#undef RCC_PLLCFGR_0_DIVQ3EN
#undef RCC_PLLCFGR_1_PLL1FRACEN
#undef RCC_PLLCFGR_1_PLL1VCOSEL
#undef RCC_PLLCFGR_1_PLL1RGE
#undef RCC_PLLCFGR_1_PLL2FRACEN
#undef RCC_PLLCFGR_1_PLL2VCOSEL
#undef RCC_PLLCFGR_1_PLL2RGE
#undef RCC_PLLCFGR_1_PLL3FRACEN
#undef RCC_PLLCFGR_1_PLL3VCOSEL
#undef RCC_PLLCFGR_1_PLL3RGE
#undef RCC_PLLCFGR_1_DIVP1EN
#undef RCC_PLLCFGR_1_DIVQ1EN
#undef RCC_PLLCFGR_1_DIVP3EN
#undef RCC_PLLCFGR_1_DIVR3EN
#undef RCC_MAP3_CFGR
#undef RCC_MAP2_D1CFGR
#undef RCC_MAP1_D2CFGR
#undef RCC_MAP2_D3CFGR
#undef RCC_MAP1_PLLCKSELR
#undef RCC_MAP2_PLLCFGR
#undef RCC_MAP2_PLL1DIVR
#undef RCC_MAP2_PLL1FRACR
#undef RCC_MAP1_PLL2DIVR
#undef RCC_MAP0_PLL2FRACR
#undef RCC_MAP0_PLL3DIVR
#undef RCC_MAP0_PLL3FRACR
#undef RCC_MAP0_D1CCIPR
#undef RCC_MAP1_D2CCIP1R
#undef RCC_MAP1_D2CCIP2R
#undef RCC_MAP1_D3CCIPR
#undef RCC_MAP1_CIER
#undef RCC_MAP1_CIFR
#undef RCC_MAP0_CICR
#undef RCC_MAP0_AHB3RSTR
#undef RCC_MAP2_AHB1RSTR
#undef RCC_MAP2_AHB2RSTR
#undef RCC_MAP1_AHB4RSTR
#undef RCC_MAP2_APB3RSTR
#undef RCC_MAP2_APB1LRSTR
#undef RCC_MAP1_APB1HRSTR
#undef RCC_MAP2_APB2RSTR
#undef RCC_MAP0_APB4RSTR
#undef RCC_MAP0_GCR
#undef RCC_MAP0_D3AMR
#undef RCC_MAP0_RSR
#undef RCC_MAP1_AHB3ENR
#undef RCC_MAP0_AHB1ENR
#undef RCC_MAP0_AHB2ENR
#undef RCC_MAP0_AHB4ENR
#undef RCC_MAP0_APB3ENR
#undef RCC_MAP0_APB1LENR
#undef RCC_MAP0_APB1HENR
#undef RCC_MAP5_APB2ENR
#undef RCC_MAP0_APB4ENR
#undef RCC_MAP1_AHB3LPENR
#undef RCC_MAP1_AHB1LPENR
#undef RCC_MAP1_AHB2LPENR
#undef RCC_MAP0_AHB4LPENR
#undef RCC_MAP0_APB3LPENR
#undef RCC_MAP0_APB1LLPENR
#undef RCC_MAP0_APB1HLPENR
#undef RCC_MAP1_APB2LPENR
#undef RCC_MAP0_APB4LPENR
#undef RCC_AHB1ENR_0_BKPSRAMEN
#undef RCC_AHB1ENR_0_OTGHSEN
#undef RCC_AHB1ENR_0_OTGHSULPIEN
#undef RCC_AHB1LPENR_0_BKPSRAMLPEN
#undef RCC_AHB1LPENR_0_OTGHSLPEN
#undef RCC_AHB1LPENR_0_OTGHSULPILPEN
#undef RCC_AHB1RSTR_0_OTGHRST
#undef RCC_APB2ENR_1_ADC3EN
#undef RCC_APB2ENR_2_ADC2EN
#undef RCC_APB2LPENR_0_ADC2LPEN
#undef RCC_APB2LPENR_0_ADC3LPEN
#undef RCC_AHB1ENR_0_CCMDATARAMEN
#undef RCC_AHB1ENR_0_ETHMACEN
#undef RCC_AHB1ENR_0_ETHMACTXEN
#undef RCC_AHB1ENR_0_ETHMACRXEN
#undef RCC_AHB1ENR_0_ETHMACPTPEN
#undef RCC_AHB1LPENR_0_ETHMACLPEN
#undef RCC_AHB1LPENR_0_ETHMACTXLPEN
#undef RCC_AHB1LPENR_0_ETHMACRXLPEN
#undef RCC_AHB1LPENR_0_ETHMACPTPLPEN
#undef RCC_AHB1RSTR_0_ETHMACRST
#undef RCC_AHB1ENR_0_RNGEN
#undef RCC_AHB1LPENR_0_RNGLPEN
#undef RCC_AHB1RSTR_0_RNGRST
#undef RCC_CFGR_2_MCO1EN
#undef RCC_DCKCFGR_0_I2SSRC
#undef RCC_AHB1ENR_1_DMA1EN
#undef RCC_AHB1ENR_1_DMA2EN
#undef RCC_BDCR_0_LSECSSON
#undef RCC_BDCR_0_LSECSSD
#undef RCC_CICR_0_LSECSSC
#undef RCC_CIER_0_LSECSSIE
#undef RCC_CIFR_0_LSECSSF
#undef RCC_AHB1ENR_1_DMAMUX1EN
#undef RCC_AHB1RSTR_1_DMAMUX1RST
#undef RCC_AHB1SMENR_DMAMUX1SMEN
#undef RCC_AHB2ENR_0_OSPIMEN
#undef RCC_AHB2ENR_0_SDMMC1EN
#undef RCC_AHB2RSTR_0_OSPIMRST
#undef RCC_AHB2RSTR_0_SDMMC1RST
#undef RCC_AHB2SMENR_SRAM3SMEN
#undef RCC_AHB2SMENR_OSPIMSMEN
#undef RCC_AHB2SMENR_SDMMC1SMEN
#undef RCC_AHB3ENR_0_OSPI1EN
#undef RCC_AHB3ENR_0_OSPI2EN
#undef RCC_AHB3RSTR_0_OSPI1RST
#undef RCC_AHB3RSTR_0_OSPI2RST
#undef RCC_AHB3SMENR_0_OSPI2SMEN
#undef RCC_CCIPR2_DFSDM1SEL
#undef RCC_CCIPR2_ADFSDM1SEL
#undef RCC_CCIPR2_SAI1SEL
#undef RCC_CCIPR2_SAI2SEL
#undef RCC_CCIPR2_SDMMCSEL
#undef RCC_CCIPR2_PLLSAI2DIVR
#undef RCC_CCIPR2_OSPISEL
#undef RCC_PLLSAI1CFGR_PLLSAI1M
#undef RCC_PLLSAI2CFGR_PLLSAI2M
#undef RCC_PLLSAI2CFGR_PLLSAI2QEN
#undef RCC_PLLSAI2CFGR_PLLSAI2Q
#undef RCC_AHB1ENR_1_FLASHEN
#undef RCC_AHB1ENR_1_TSCEN
#undef RCC_AHB1RSTR_0_TSCRST
#undef RCC_AHB1RSTR_1_FLASHRST
#undef RCC_AHB2ENR_0_GPIOCEN
#undef RCC_AHB2ENR_0_ADCEN
#undef RCC_AHB2ENR_1_GPIOAEN
#undef RCC_AHB2ENR_1_GPIOBEN
#undef RCC_AHB2ENR_1_GPIOHEN
#undef RCC_AHB2ENR_1_RNGEN
#undef RCC_AHB2RSTR_0_GPIOCRST
#undef RCC_AHB2RSTR_0_ADCRST
#undef RCC_AHB2RSTR_1_GPIOARST
#undef RCC_AHB2RSTR_1_GPIOBRST
#undef RCC_AHB2RSTR_1_GPIOHRST
#undef RCC_AHB2RSTR_1_RNGRST
#undef RCC_APB2ENR_2_SAI1EN
#undef RCC_APB2RSTR_2_SAI1RST
#undef RCC_APB2SMENR_0_TIM1SMEN
#undef RCC_APB2SMENR_0_TIM15SMEN
#undef RCC_APB2SMENR_0_TIM16SMEN
#undef RCC_APB2SMENR_0_SAI1SMEN
#undef RCC_BDCR_0_LSCOEN
#undef RCC_BDCR_0_LSCOSEL
#undef RCC_CCIPR_0_LPTIM2SEL
#undef RCC_CCIPR_0_ADCSEL
#undef RCC_CICR_1_HSIRDYC
#undef RCC_CICR_2_MSIRDYC
#undef RCC_CICR_2_HSERDYC
#undef RCC_CICR_2_PLLRDYC
#undef RCC_CICR_2_PLLSAI1RDYC
#undef RCC_CIER_1_HSIRDYIE
#undef RCC_CIER_2_MSIRDYIE
#undef RCC_CIER_2_HSERDYIE
#undef RCC_CIER_2_PLLRDYIE
#undef RCC_CIER_2_PLLSAI1RDYIE
#undef RCC_CIFR_1_HSIRDYF
#undef RCC_CIFR_2_MSIRDYF
#undef RCC_CIFR_2_HSERDYF
#undef RCC_CIFR_2_PLLRDYF
#undef RCC_CIFR_2_PLLSAI1RDYF
#undef RCC_CR_0_MSIPLLEN
#undef RCC_CR_1_MSION
#undef RCC_CR_1_HSIASFS
#undef RCC_CR_2_HSIRDY
#undef RCC_CR_2_PLLSAI1ON
#undef RCC_CR_2_PLLSAI1RDY
#undef RCC_CSR_2_MSISRANGE
#undef RCC_CSR_2_BORRSTF
#undef RCC_PLLCFGR_1_PLLQEN
#undef RCC_PLLCFGR_1_PLLR
#undef RCC_MAP3_PLLCFGR
#undef RCC_MAP5_PLLSAI1CFGR
#undef RCC_MAP5_CIER
#undef RCC_MAP4_CIFR
#undef RCC_MAP5_CICR
#undef RCC_MAP4_AHB1RSTR
#undef RCC_MAP4_AHB2RSTR
#undef RCC_MAP5_AHB3RSTR
#undef RCC_MAP2_APB1RSTR1
#undef RCC_MAP2_APB1RSTR2
#undef RCC_MAP4_APB2RSTR
#undef RCC_MAP2_AHB1ENR
#undef RCC_MAP2_AHB2ENR
#undef RCC_MAP3_AHB3ENR
#undef RCC_MAP2_APB1ENR1
#undef RCC_MAP0_APB1ENR2
#undef RCC_MAP2_APB2ENR
#undef RCC_MAP1_AHB1SMENR
#undef RCC_MAP0_AHB2SMENR
#undef RCC_MAP0_AHB3SMENR
#undef RCC_MAP0_APB1SMENR1
#undef RCC_MAP1_APB1SMENR2
#undef RCC_MAP1_APB2SMENR
#undef RCC_MAP2_CCIPR
#undef RCC_MAP3_BDCR
#undef RCC_MAP3_CSR
#undef RCC_AHB1ENR_1_DMA2DEN
#undef RCC_AHB1RSTR_1_DMA2DRST
#undef RCC_AHB1SMENR_DMA2DSMEN
#undef RCC_AHB2ENR_0_GPIOIEN
#undef RCC_AHB2ENR_1_DCMIEN
#undef RCC_AHB2RSTR_0_GPIOIRST
#undef RCC_AHB2RSTR_1_DCMIRST
#undef RCC_AHB2SMENR_GPIOISMEN
#undef RCC_AHB2SMENR_DCMISMEN
#undef RCC_PLLSAI2CFGR_PLLSAI2PDIV
#undef RCC_AHB1ENR_1_GFXMMUEN
#undef RCC_AHB1RSTR_0_GFXMMURST
#undef RCC_AHB1SMENR_GFXMMUSMEN
#undef RCC_APB2SMENR_0_LTDCSMEN
#undef RCC_AHB1ENR_1_DTCMRAMEN
#undef RCC_AHB1LPENR_0_AXILPEN
#undef RCC_AHB1LPENR_0_DTCMLPEN
#undef RCC_APB2ENR_2_SDMMC1EN
#undef RCC_APB2LPENR_1_SDMMC1LPEN
#undef RCC_APB2RSTR_2_SDMMC1RST
#undef RCC_DCKCFGR2_0_USART1SEL
#undef RCC_DCKCFGR2_0_USART2SEL
#undef RCC_DCKCFGR2_0_USART3SEL
#undef RCC_DCKCFGR2_0_UART4SEL
#undef RCC_DCKCFGR2_0_UART5SEL
#undef RCC_DCKCFGR2_0_USART6SEL
#undef RCC_DCKCFGR2_0_UART7SEL
#undef RCC_DCKCFGR2_0_UART8SEL
#undef RCC_DCKCFGR2_0_I2C1SEL
#undef RCC_DCKCFGR2_0_I2C2SEL
#undef RCC_DCKCFGR2_0_I2C3SEL
#undef RCC_MAP1_DCKCFGR1
#undef RCC_MAP1_DCKCFGR2
#undef RCC_APB2ENR_1_USART1EN
#undef RCC_APB2ENR_2_TIM1EN
#undef RCC_APB2LPENR_0_TIM1LPEN
#undef RCC_APB2LPENR_0_USART1LPEN
#undef RCC_APB2RSTR_1_USART1RST
#undef RCC_APB2RSTR_2_TIM1RST
#undef RCC_MAP1_BDCR
#undef RCC_MAP1_CSR
#undef RCC_AHB1LPENR_0_SRAM2LPEN
#undef RCC_AHB1LPENR_0_SRAM3LPEN
#undef RCC_AHB2ENR_0_DCMIEN
#undef RCC_AHB2LPENR_0_DCMILPEN
#undef RCC_AHB2RSTR_0_DCMIRST
#undef RCC_AHB2ENR_0_JPEGEN
#undef RCC_AHB2LPENR_0_JPEGLPEN
#undef RCC_AHB2RSTR_0_JPEGRST
#undef RCC_AHB2ENR_0_GPIODEN
#undef RCC_AHB2RSTR_0_GPIODRST
#undef RCC_AHB2SMENR_GPIODSMEN
#undef RCC_AHB2SMENR_GPIOESMEN
#undef RCC_APB1ENR1_0_SPI2EN
#undef RCC_APB1ENR1_0_USART3EN
#undef RCC_APB1ENR1_0_I2C2EN
#undef RCC_APB1RSTR1_0_SPI2RST
#undef RCC_APB1RSTR1_0_USART3RST
#undef RCC_APB1RSTR1_0_I2C2RST
#undef RCC_APB1SMENR1_0_SPI2SMEN
#undef RCC_APB1SMENR1_0_USART3SMEN
#undef RCC_APB1SMENR1_0_I2C2SMEN
#undef RCC_CCIPR_0_USART3SEL
#undef RCC_CCIPR_0_I2C2SEL
#undef RCC_AHB2ENR_0_CRYPEN
#undef RCC_AHB2ENR_0_HASHEN
#undef RCC_AHB2LPENR_0_CRYPLPEN
#undef RCC_AHB2LPENR_0_HASHLPEN
#undef RCC_AHB2RSTR_0_CRYPRST
#undef RCC_AHB2RSTR_0_HASHRST
#undef RCC_AHB2ENR_0_RNGEN
#undef RCC_AHB2LPENR_0_RNGLPEN
#undef RCC_AHB2RSTR_0_RNGRST
#undef RCC_AHB2ENR_0_AESEN
#undef RCC_AHB2RSTR_0_AESRST
#undef RCC_AHB2SMENR_AESSMEN
#undef RCC_AHB2ENR_1_AESEN
#undef RCC_AHB2LPENR_1_AESLPEN
#undef RCC_AHB2RSTR_1_AESRST
#undef RCC_AHB2ENR_1_GPIOFEN
#undef RCC_AHB2ENR_1_GPIOGEN
#undef RCC_AHB2ENR_1_OTGFSEN
#undef RCC_AHB2RSTR_1_GPIOFRST
#undef RCC_AHB2RSTR_1_GPIOGRST
#undef RCC_AHB2RSTR_1_OTGFSRST
#undef RCC_AHB2SMENR_GPIOFSMEN
#undef RCC_AHB2SMENR_GPIOGSMEN
#undef RCC_AHB2SMENR_OTGFSSMEN
#undef RCC_AHB3SMENR_0_FMCSMEN
#undef RCC_APB1ENR1_0_TIM4EN
#undef RCC_APB1ENR1_0_TIM5EN
#undef RCC_APB1ENR1_0_UART5EN
#undef RCC_APB1RSTR1_0_TIM4RST
#undef RCC_APB1RSTR1_0_TIM5RST
#undef RCC_APB1RSTR1_0_UART5RST
#undef RCC_APB1SMENR1_0_TIM4SMEN
#undef RCC_APB1SMENR1_0_TIM5SMEN
#undef RCC_APB1SMENR1_0_UART5SMEN
#undef RCC_APB2ENR_3_SAI2EN
#undef RCC_APB2RSTR_3_SAI2RST
#undef RCC_APB2SMENR_0_TIM8SMEN
#undef RCC_APB2SMENR_0_TIM17SMEN
#undef RCC_CCIPR_0_UART5SEL
#undef RCC_CR_3_PLLSAI2ON
#undef RCC_CR_3_PLLSAI2RDY
#undef RCC_MAP4_PLLSAI2CFGR
#undef RCC_AHB2ENR_1_HASHEN
#undef RCC_AHB2RSTR_1_HASHRST
#undef RCC_AHB2SMENR_HASHSMEN
#undef RCC_AHB3ENR_0_FSMCEN
#undef RCC_AHB3LPENR_0_FSMCLPEN
#undef RCC_AHB3RSTR_0_FSMCRST
#undef RCC_AHB3ENR_0_QSPIEN
#undef RCC_AHB3LPENR_0_QSPILPEN
#undef RCC_AHB3RSTR_0_QSPIRST
#undef RCC_AHB3ENR_1_FMCEN
#undef RCC_AHB3RSTR_1_FMCRST
#undef RCC_AHB3ENR_2_QSPIEN
#undef RCC_AHB3RSTR_2_QSPIRST
#undef RCC_AHB3SMENR_0_QSPISMEN
#undef RCC_CCIPR_0_SAI1SEL
#undef RCC_PLLCFGR_2_PLLM
#undef RCC_AHB3LPENR_1_FMCLPEN
#undef RCC_CIR_2_PLLSAIRDYF
#undef RCC_CIR_2_PLLSAIRDYIE
#undef RCC_CIR_2_PLLSAIRDYC
#undef RCC_CR_1_PLLSAION
#undef RCC_CR_1_PLLSAIRDY
#undef RCC_MAP0_PLLSAICFGR
#undef RCC_CFGR_0_PLLMUL
#undef RCC_AHBENR_0_DMAEN
#undef RCC_APB2ENR_0_ADCEN
#undef RCC_APB2ENR_0_DBGMCUEN
#undef RCC_APB2RSTR_0_ADCRST
#undef RCC_APB2RSTR_0_DBGMCURST
#undef RCC_AHBENR_0_DMA2EN
#undef RCC_AHBENR_0_SRAMEN
#undef RCC_AHBENR_0_FLITFEN
#undef RCC_AHBENR_0_CRCEN
#undef RCC_CFGR_0_PLLXTPRE
#undef RCC_MAP0_CFGR
#undef RCC_MAP0_CIR
#undef RCC_MAP0_APB2RSTR
#undef RCC_MAP0_APB1RSTR
#undef RCC_MAP0_AHBENR
#undef RCC_MAP0_APB2ENR
#undef RCC_MAP0_APB1ENR
#undef RCC_MAP0_BDCR
#undef RCC_MAP0_CSR
#undef RCC_AHBENR_0_FMCEN
#undef RCC_AHBENR_0_GPIOGEN
#undef RCC_AHBENR_1_GPIOHEN
#undef RCC_AHBRSTR_0_FMCRST
#undef RCC_AHBRSTR_0_GPIOHRST
#undef RCC_AHBRSTR_0_GPIOGRST
#undef RCC_APB2ENR_1_SPI4EN
#undef RCC_APB2RSTR_1_SPI4RST
#undef RCC_CFGR3_0_TIM2SW
#undef RCC_CFGR3_0_TIM34SW
#undef RCC_AHBENR_0_FSMCEN
#undef RCC_APB2ENR_0_IOPGEN
#undef RCC_APB2ENR_1_IOPFEN
#undef RCC_APB2RSTR_0_IOPGRST
#undef RCC_APB2RSTR_1_IOPFRST
#undef RCC_AHBENR_0_SDIOEN
#undef RCC_APB2ENR_0_ADC3EN
#undef RCC_APB2RSTR_0_ADC3RST
#undef RCC_AHBENR_0_OTGFSEN
#undef RCC_AHBRSTR_0_OTGFSRST
#undef RCC_CFGR_1_OTGFSPRE
#undef RCC_CFGR2_0_PREDIV2
#undef RCC_CFGR2_0_PLL2MUL
#undef RCC_CFGR2_0_PLL3MUL
#undef RCC_CFGR2_0_PREDIV1SRC
#undef RCC_CFGR2_0_I2S2SRC
#undef RCC_CFGR2_0_I2S3SRC
#undef RCC_AHBENR_0_ETHMACEN
#undef RCC_AHBENR_0_ETHMACTXEN
#undef RCC_AHBENR_0_ETHMACRXEN
#undef RCC_AHBRSTR_0_ETHMACRST
#undef RCC_AHBENR_0_GPIOAEN
#undef RCC_AHBENR_0_GPIOBEN
#undef RCC_AHBENR_0_GPIOCEN
#undef RCC_AHBENR_0_GPIOFEN
#undef RCC_AHBRSTR_0_GPIOARST
#undef RCC_AHBRSTR_0_GPIOBRST
#undef RCC_AHBRSTR_0_GPIOCRST
#undef RCC_AHBRSTR_0_GPIOFRST
#undef RCC_CFGR2_0_PREDIV
#undef RCC_MAP0_CFGR3
#undef RCC_AHBENR_0_GPIODEN
#undef RCC_AHBRSTR_0_GPIODRST
#undef RCC_AHBENR_0_GPIOEEN
#undef RCC_AHBRSTR_0_GPIOERST
#undef RCC_CFGR3_0_USART2SW
#undef RCC_AHBENR_0_TSCEN
#undef RCC_AHBRSTR_0_TSCRST
#undef RCC_AHBENR_0_AESEN
#undef RCC_AHBLPENR_AESLPEN
#undef RCC_AHBRSTR_0_AESRST
#undef RCC_AHBENR_0_ADC1EN
#undef RCC_AHBRSTR_0_ADC1RST
#undef RCC_CFGR2_1_ADC1PRES
#undef RCC_AHBENR_0_ADC34EN
#undef RCC_AHBRSTR_0_ADC34RST
#undef RCC_AHBENR_1_DMA1EN
#undef RCC_AHBENR_1_GPIOBEN
#undef RCC_AHBENR_1_GPIOCEN
#undef RCC_AHBENR_1_GPIODEN
#undef RCC_AHBENR_1_FLITFEN
#undef RCC_AHBENR_2_GPIOAEN
#undef RCC_AHBENR_2_GPIOHEN
#undef RCC_AHBRSTR_0_FLITFRST
#undef RCC_AHBRSTR_1_GPIOBRST
#undef RCC_AHBRSTR_1_GPIOCRST
#undef RCC_AHBRSTR_1_GPIODRST
#undef RCC_AHBRSTR_1_GPIOHRST
#undef RCC_APB1ENR_1_COMPEN
#undef RCC_APB1LPENR_1_USBLPEN
#undef RCC_APB1LPENR_1_COMPLPEN
#undef RCC_APB1RSTR_1_COMPRST
#undef RCC_APB2ENR_2_TIM9EN
#undef RCC_APB2ENR_2_TIM10EN
#undef RCC_APB2ENR_2_TIM11EN
#undef RCC_APB2LPENR_1_SYSCFGLPEN
#undef RCC_APB2LPENR_1_TIM9LPEN
#undef RCC_APB2LPENR_1_TIM10LPEN
#undef RCC_APB2LPENR_1_TIM11LPEN
#undef RCC_APB2LPENR_1_ADC1LPEN
#undef RCC_APB2LPENR_1_USART1LPEN
#undef RCC_APB2RSTR_2_TIM9RST
#undef RCC_APB2RSTR_2_TIM10RST
#undef RCC_APB2RSTR_2_TIM11RST
#undef RCC_CR_2_CSSON
#undef RCC_CR_2_RTCPRE
#undef RCC_CSR_1_RTCEN
#undef RCC_MAP4_AHBRSTR
#undef RCC_MAP3_APB2RSTR
#undef RCC_MAP4_APB1RSTR
#undef RCC_MAP3_AHBENR
#undef RCC_MAP4_APB2ENR
#undef RCC_MAP2_APB1ENR
#undef RCC_MAP3_AHBLPENR
#undef RCC_MAP3_APB2LPENR
#undef RCC_MAP3_APB1LPENR
#undef RCC_MAP4_CSR
#undef RCC_AHBENR_1_GPIOEEN
#undef RCC_AHBLPENR_GPIOELPEN
#undef RCC_AHBRSTR_1_GPIOERST
#undef RCC_AHBENR_1_GPIOFEN
#undef RCC_AHBENR_1_GPIOGEN
#undef RCC_AHBLPENR_GPIOFLPEN
#undef RCC_AHBLPENR_GPIOGLPEN
#undef RCC_AHBRSTR_1_GPIOFRST
#undef RCC_AHBRSTR_1_GPIOGRST
#undef RCC_AHBENR_1_MIFEN
#undef RCC_AHBRSTR_0_DMARST
#undef RCC_AHBRSTR_0_MIFRST
#undef RCC_AHBRSTR_1_DMA1RST
#undef RCC_APB1ENR_1_LPUART1EN
#undef RCC_APB1ENR_2_LPTIM1EN
#undef RCC_APB1RSTR_1_LPUART1RST
#undef RCC_APB1RSTR_2_LPTIM1RST
#undef RCC_APB2ENR_1_TIM21EN
#undef RCC_APB2ENR_2_DBGEN
#undef RCC_APB2RSTR_1_TIM21RST
#undef RCC_APB2RSTR_2_DBGRST
#undef RCC_APB2SMENR_0_TIM21SMEN
#undef RCC_APB2SMENR_0_ADCSMEN
#undef RCC_APB2SMENR_0_DBGSMEN
#undef RCC_CICR_1_PLLRDYC
#undef RCC_CICR_1_MSIRDYC
#undef RCC_CICR_1_CSSLSEC
#undef RCC_CICR_2_LSECSSC
#undef RCC_CIER_1_PLLRDYIE
#undef RCC_CIER_1_MSIRDYIE
#undef RCC_CIER_1_CSSLSE
#undef RCC_CIER_2_LSECSSIE
#undef RCC_CIFR_1_PLLRDYF
#undef RCC_CIFR_1_MSIRDYF
#undef RCC_CIFR_1_CSSLSEF
#undef RCC_CIFR_2_LSECSSF
#undef RCC_CR_0_RTCPRE
#undef RCC_CR_2_HSIDIVEN
#undef RCC_CR_2_HSIDIVF
#undef RCC_CSR_0_LSEDRV
#undef RCC_CSR_0_LSECSSON
#undef RCC_CSR_0_LSECSSD
#undef RCC_CSR_0_RTCEN
#undef RCC_CSR_0_RTCRST
#undef RCC_CSR_2_OBL
#undef RCC_MAP2_CFGR
#undef RCC_MAP2_CIER
#undef RCC_MAP2_CIFR
#undef RCC_MAP3_CICR
#undef RCC_MAP2_IOPRSTR
#undef RCC_MAP3_AHBRSTR
#undef RCC_MAP2_APB1RSTR
#undef RCC_MAP1_IOPENR
#undef RCC_MAP4_AHBENR
#undef RCC_MAP3_APB2ENR
#undef RCC_MAP3_APB1ENR
#undef RCC_MAP1_IOPSMENR
#undef RCC_MAP2_AHBSMENR
#undef RCC_MAP2_APB2SMENR
#undef RCC_MAP0_APB1SMENR
#undef RCC_MAP1_CCIPR
#undef RCC_MAP2_CSR
#undef RCC_AHBENR_1_CRCEN
#undef RCC_AHBRSTR_1_CRCRST
#undef RCC_CFGR_3_PLLDIV
#undef RCC_CR_2_MSION
#undef RCC_CR_2_MSIRDY
#undef RCC_CSR_0_LSEON
#undef RCC_CSR_0_LSERDY
#undef RCC_CSR_0_LSEBYP
#undef RCC_CSR_0_RTCSEL
#undef RCC_AHBENR_1_RNGEN
#undef RCC_AHBENR_2_TSCEN
#undef RCC_AHBRSTR_1_TSCRST
#undef RCC_AHBRSTR_1_RNGRST
#undef RCC_AHBSMENR_0_TSCSMEN
#undef RCC_AHBSMENR_0_RNGSMEN
#undef RCC_APB1SMENR_USBSMEN
#undef RCC_APB1SMENR_CRSSMEN
#undef RCC_APB1SMENR_DACSMEN
#undef RCC_CCIPR_0_HSI48SEL
#undef RCC_CICR_1_HSI48RDYC
#undef RCC_CIER_1_HSI48RDYIE
#undef RCC_CIFR_1_HSI48RDYF
#undef RCC_CRRCR_1_HSI48CAL
#undef RCC_AHBENR_1_TSEN
#undef RCC_AHBENR_1_DMA2EN
#undef RCC_AHBLPENR_DMA2LPEN
#undef RCC_AHBRSTR_0_DMA2RST
#undef RCC_AHBENR_1_ADC12EN
#undef RCC_AHBRSTR_1_ADC12RST
#undef RCC_AHBENR_1_FSMCEN
#undef RCC_AHBLPENR_FSMCLPEN
#undef RCC_AHBRSTR_0_FSMCRST
#undef RCC_AHBENR_2_CRYPEN
#undef RCC_AHBRSTR_1_CRYPRST
#undef RCC_AHBSMENR_0_CRYPSMEN
#undef RCC_CSR_0_PORRSTF
#undef RCC_APB1ENR_0_TIM2EN
#undef RCC_APB1RSTR_0_TIM2RST
#undef RCC_APB1ENR_0_TIM3EN
#undef RCC_APB1RSTR_0_TIM3RST
#undef RCC_APB1ENR_0_TIM4EN
#undef RCC_APB1RSTR_0_TIM4RST
#undef RCC_APB1ENR_0_TIM5EN
#undef RCC_APB1RSTR_0_TIM5RST
#undef RCC_APB1ENR_0_TIM6EN
#undef RCC_APB1RSTR_0_TIM6RST
#undef RCC_APB1ENR_0_TIM7EN
#undef RCC_APB1RSTR_0_TIM7RST
#undef RCC_APB1ENR_0_TIM12EN
#undef RCC_APB1ENR_0_TIM13EN
#undef RCC_APB1RSTR_0_TIM12RST
#undef RCC_APB1RSTR_0_TIM13RST
#undef RCC_APB1ENR_0_TIM14EN
#undef RCC_APB1RSTR_0_TIM14RST
#undef RCC_APB1ENR_0_TIM18EN
#undef RCC_APB1RSTR_0_TIM18RST
#undef RCC_APB2ENR_0_SDADC1EN
#undef RCC_APB2ENR_0_SDADC2EN
#undef RCC_APB2ENR_0_SDADC3EN
#undef RCC_APB2ENR_1_TIM19EN
#undef RCC_APB2RSTR_0_SDADC1RST
#undef RCC_APB2RSTR_0_SDADC2RST
#undef RCC_APB2RSTR_0_SDADC3RST
#undef RCC_APB2RSTR_1_TIM19RST
#undef RCC_CFGR_3_SDPRE
#undef RCC_CFGR_4_SDADCPRE
#undef RCC_APB1ENR_0_RTCAPBEN
#undef RCC_APB1LPENR_0_RTCAPBLPEN
#undef RCC_APB2ENR_2_EXTITEN
#undef RCC_APB2LPENR_0_EXTITLPEN
#undef RCC_APB1ENR_0_CAN3EN
#undef RCC_APB1LPENR_1_CAN3LPEN
#undef RCC_APB1RSTR_0_CAN3RST
#undef RCC_APB2ENR_0_MDIOEN
#undef RCC_APB2ENR_2_DFSDM1EN
#undef RCC_APB2LPENR_0_MDIOLPEN
#undef RCC_APB2LPENR_1_DFSDM1LPEN
#undef RCC_APB2RSTR_0_MDIORST
#undef RCC_APB2RSTR_2_DFSDM1RST
#undef RCC_DCKCFGR1_DFSDM1SEL
#undef RCC_DCKCFGR1_ADFSDM1SEL
#undef RCC_APB1ENR_0_SPI2EN
#undef RCC_APB1RSTR_0_SPI2RST
#undef RCC_APB1ENR_0_SPI3EN
#undef RCC_APB1RSTR_0_SPI3RST
#undef RCC_APB1ENR_0_SPDIFRXEN
#undef RCC_APB1LPENR_0_SPDIFRXLPEN
#undef RCC_APB1LPENR_1_CECLPEN
#undef RCC_APB1RSTR_0_SPDIFRXRST
#undef RCC_DCKCFGR2_0_CECSEL
#undef RCC_PLLI2SCFGR_PLLI2SP
#undef RCC_APB1ENR_0_USART2EN
#undef RCC_APB1RSTR_0_USART2RST
#undef RCC_APB1ENR_0_USART3EN
#undef RCC_APB1RSTR_0_USART3RST
#undef RCC_APB1ENR_0_USART4EN
#undef RCC_APB1RSTR_0_USART4RST
#undef RCC_APB1ENR_0_USART5EN
#undef RCC_APB1RSTR_0_USART5RST
#undef RCC_APB1ENR_0_I2C2EN
#undef RCC_APB1RSTR_0_I2C2RST
#undef RCC_APB1ENR_0_USBEN
#undef RCC_APB1RSTR_0_USBRST
#undef RCC_APB1ENR_0_FMPI2C1EN
#undef RCC_APB1RSTR_0_FMPI2C1RST
#undef RCC_DCKCFGR2_0_FMPI2C1SEL
#undef RCC_MAP0_CKGATENR
#undef RCC_MAP0_DCKCFGR2
#undef RCC_APB1ENR_0_CANEN
#undef RCC_APB1RSTR_0_CANRST
#undef RCC_APB1ENR_0_CAN2EN
#undef RCC_APB1RSTR_0_CAN2RST
#undef RCC_APB1ENR_0_CRSEN
#undef RCC_APB1RSTR_0_CRSRST
#undef RCC_APB1ENR_0_DACEN
#undef RCC_APB1RSTR_0_DACRST
#undef RCC_APB1ENR_0_CECEN
#undef RCC_APB1RSTR_0_CECRST
#undef RCC_APB1ENR_0_UART8EN
#undef RCC_APB1ENR_1_UART7EN
#undef RCC_APB1LPENR_0_UART7LPEN
#undef RCC_APB1LPENR_0_UART8LPEN
#undef RCC_APB1RSTR_0_UART8RST
#undef RCC_APB1RSTR_1_UART7RST
#undef RCC_APB1ENR_1_LPTIM1EN
#undef RCC_APB1LPENR_0_LPTIM1LPEN
#undef RCC_APB1RSTR_1_LPTIM1RST
#undef RCC_APB1ENR_1_RTCEN
#undef RCC_APB1LPENR_1_RTCLPEN
#undef RCC_APB2ENR_3_SDMMC2EN
#undef RCC_APB2LPENR_1_SDMMC2LPEN
#undef RCC_APB2RSTR_3_SDMMC2RST
#undef RCC_DCKCFGR2_1_SDMMC2SEL
#undef RCC_APB1ENR_1_UART4EN
#undef RCC_APB1ENR_1_UART5EN
#undef RCC_APB1RSTR_1_UART4RST
#undef RCC_APB1RSTR_1_UART5RST
#undef RCC_APB1ENR_1_I2C4EN
#undef RCC_APB1LPENR_1_I2C4LPEN
#undef RCC_APB1RSTR_1_I2C4RST
#undef RCC_DCKCFGR1_PLLSAIDIVR
#undef RCC_DCKCFGR2_1_I2C4SEL
#undef RCC_APB1ENR_1_CAN1EN
#undef RCC_APB1RSTR_1_CAN1RST
#undef RCC_APB1ENR_1_DAC2EN
#undef RCC_APB1RSTR_1_DAC2RST
#undef RCC_APB1ENR_1_BKPEN
#undef RCC_APB1RSTR_1_BKPRST
#undef RCC_APB2ENR_0_IOPAEN
#undef RCC_APB2ENR_0_IOPBEN
#undef RCC_APB2ENR_0_IOPCEN
#undef RCC_APB2ENR_1_AFIOEN
#undef RCC_APB2ENR_1_IOPDEN
#undef RCC_APB2RSTR_0_IOPARST
#undef RCC_APB2RSTR_0_IOPBRST
#undef RCC_APB2RSTR_0_IOPCRST
#undef RCC_APB2RSTR_1_AFIORST
#undef RCC_APB2RSTR_1_IOPDRST
#undef RCC_APB1ENR_1_DAC1EN
#undef RCC_APB1RSTR_1_DAC1RST
#undef RCC_BDCR_1_LSE
#undef RCC_APB1ENR_2_LCDEN
#undef RCC_APB1RSTR_2_LCDRST
#undef RCC_APB1ENR_2_CAN3EN
#undef RCC_APB1LPENR_0_CAN3LPEN
#undef RCC_APB1RSTR_2_CAN3RST
#undef RCC_APB2ENR_1_DFSDM2EN
#undef RCC_APB2ENR_2_UART9EN
#undef RCC_APB2ENR_2_UART10EN
#undef RCC_APB2LPENR_0_UART9LPEN
#undef RCC_APB2LPENR_0_UART10LPEN
#undef RCC_APB2LPENR_0_DFSDM2LPEN
#undef RCC_APB2RSTR_1_DFSDM2RST
#undef RCC_APB2RSTR_2_UART9RST
#undef RCC_APB2RSTR_2_UART10RST
#undef RCC_DCKCFGR_0_PLLI2SDIVR
#undef RCC_DCKCFGR_0_PLLDIVR
#undef RCC_DCKCFGR_0_CKDFSDM2ASEL
#undef RCC_APB1ENR_2_I2C3EN
#undef RCC_APB1RSTR_2_I2C3RST
#undef RCC_APB1ENR1_0_TIM3EN
#undef RCC_APB1ENR1_0_UART4EN
#undef RCC_APB1RSTR1_0_TIM3RST
#undef RCC_APB1RSTR1_0_UART4RST
#undef RCC_APB1SMENR1_0_TIM3SMEN
#undef RCC_APB1SMENR1_0_UART4SMEN
#undef RCC_APB2SMENR_0_DFSDM1SMEN
#undef RCC_CCIPR_0_UART4SEL
#undef RCC_APB1ENR1_0_TIM7EN
#undef RCC_APB1RSTR1_0_TIM7RST
#undef RCC_APB1SMENR1_0_TIM7SMEN
#undef RCC_APB1ENR1_0_LCDEN
#undef RCC_APB1RSTR1_0_LCDRST
#undef RCC_APB1SMENR1_0_LCDSMEN
#undef RCC_APB1ENR1_0_RTCAPBEN
#undef RCC_APB1ENR1_0_CRSEN
#undef RCC_APB1RSTR1_0_CRSRST
#undef RCC_APB1SMENR1_0_RTCAPBSMEN
#undef RCC_APB1SMENR1_0_CRSSMEN
#undef RCC_CICR_2_HSI48RDYC
#undef RCC_CIER_2_HSI48RDYIE
#undef RCC_CIFR_2_HSI48RDYF
#undef RCC_PLLCFGR_1_PLLPDIV
#undef RCC_PLLSAI1CFGR_PLLSAI1PDIV
#undef RCC_MAP0_CRRCR
#undef RCC_APB1ENR1_0_USBFSEN
#undef RCC_APB1RSTR1_0_USBFSRST
#undef RCC_APB1SMENR1_0_USBFSSMEN
#undef RCC_APB1ENR2_I2C4EN
#undef RCC_APB1RSTR2_I2C4RST
#undef RCC_APB1SMENR2_I2C4SMEN
#undef RCC_MAP1_CCIPR2
#undef RCC_APB1ENR2_SWPMI1EN
#undef RCC_APB1RSTR2_SWPMI1RST
#undef RCC_APB1SMENR2_SWPMI1SMEN
#undef RCC_CCIPR_0_SWPMI1SEL
#undef RCC_MAP1_CIR
#undef RCC_APB1LPENR_0_TIM2LPEN
#undef RCC_APB1LPENR_0_TIM3LPEN
#undef RCC_APB1LPENR_0_TIM4LPEN
#undef RCC_APB1LPENR_0_TIM5LPEN
#undef RCC_APB1LPENR_0_TIM6LPEN
#undef RCC_APB1LPENR_0_TIM7LPEN
#undef RCC_APB1LPENR_0_SPI2LPEN
#undef RCC_APB1LPENR_0_SPI3LPEN
#undef RCC_APB1LPENR_0_USART3LPEN
#undef RCC_APB1LPENR_0_UART4LPEN
#undef RCC_APB1LPENR_0_UART5LPEN
#undef RCC_APB1LPENR_0_FMPI2C1LPEN
#undef RCC_APB1LPENR_0_CAN2LPEN
#undef RCC_APB1LPENR_0_DACLPEN
#undef RCC_APB1LPENR_1_LCDLPEN
#undef RCC_APB1SMENR_TIM3SMEN
#undef RCC_APB1SMENR_TIM7SMEN
#undef RCC_APB1SMENR_USART4SMEN
#undef RCC_APB1SMENR_USART5SMEN
#undef RCC_APB1SMENR_I2C3SMEN
#undef RCC_IOPENR_0_IOPEEN
#undef RCC_IOPENR_1_GPIOEEN
#undef RCC_IOPRSTR_0_IOPERST
#undef RCC_IOPRSTR_1_GPIOERST
#undef RCC_IOPSMENR_0_IOPESMEN
#undef RCC_IOPSMENR_1_GPIOESMEN
#undef RCC_APB1SMENR_TIM6SMEN
#undef RCC_APB1SMENR_SPI2SMEN
#undef RCC_APB1SMENR_I2C2SMEN
#undef RCC_IOPENR_0_IOPDEN
#undef RCC_IOPENR_1_GPIODEN
#undef RCC_IOPRSTR_0_IOPDRST
#undef RCC_IOPRSTR_1_GPIODRST
#undef RCC_IOPSMENR_0_IOPDSMEN
#undef RCC_IOPSMENR_1_GPIODSMEN
#undef RCC_APB1SMENR_LCDSMEN
#undef RCC_APB2ENR_0_SYSCFGCOMPEN
#undef RCC_CFGR_0_PPRE
#undef RCC_CFGR3_3_ADCSW
#undef RCC_CIR_0_HSI14RDYF
#undef RCC_CIR_0_HSI14RDYIE
#undef RCC_CIR_0_HSI14RDYC
#undef RCC_MAP0_CR2
#undef RCC_APB2ENR_0_USART6EN
#undef RCC_APB2RSTR_0_USART6RST
#undef RCC_APB2ENR_0_USART7EN
#undef RCC_APB2ENR_0_USART8EN
#undef RCC_APB2RSTR_0_USART7RST
#undef RCC_APB2RSTR_0_USART8RST
#undef RCC_APB2ENR_0_ADC2EN
#undef RCC_APB2RSTR_0_ADC2RST
#undef RCC_APB2ENR_0_TIM1EN
#undef RCC_APB2RSTR_0_TIM1RST
#undef RCC_APB2ENR_0_SPI1EN
#undef RCC_APB2RSTR_0_SPI1RST
#undef RCC_APB2ENR_0_TIM8EN
#undef RCC_APB2RSTR_0_TIM8RST
#undef RCC_APB2ENR_0_USART1EN
#undef RCC_APB2RSTR_0_USART1RST
#undef RCC_APB2ENR_0_TIM15EN
#undef RCC_APB2RSTR_0_TIM15RST
#undef RCC_APB2ENR_0_TIM16EN
#undef RCC_APB2RSTR_0_TIM16RST
#undef RCC_APB2ENR_0_TIM17EN
#undef RCC_APB2RSTR_0_TIM17RST
#undef RCC_APB2ENR_0_TIM9EN
#undef RCC_APB2ENR_0_TIM10EN
#undef RCC_APB2ENR_0_TIM11EN
#undef RCC_APB2RSTR_0_TIM9RST
#undef RCC_APB2RSTR_0_TIM10RST
#undef RCC_APB2RSTR_0_TIM11RST
#undef RCC_APB2ENR_0_SAI2EN
#undef RCC_APB2LPENR_0_SAI2LPEN
#undef RCC_APB2RSTR_0_SAI2RST
#undef RCC_APB2ENR_0_DSIEN
#undef RCC_APB2RSTR_0_DSIRST
#undef RCC_APB2ENR_0_HRTIM1EN
#undef RCC_APB2RSTR_0_HRTIM1RST
#undef RCC_CFGR3_0_HRTIMSW
#undef RCC_CFGR3_1_HRTIM1SW
#undef RCC_APB2ENR_0_OTGPHYCEN
#undef RCC_APB2RSTR_0_OTGPHYCRST
#undef RCC_APB2ENR_1_TIM8EN
#undef RCC_APB2LPENR_0_TIM8LPEN
#undef RCC_APB2RSTR_1_TIM8RST
#undef RCC_APB2ENR_1_IOPEEN
#undef RCC_APB2RSTR_1_IOPERST
#undef RCC_APB2ENR_1_ADC1EN
#undef RCC_APB2ENR_1_SDIOEN
#undef RCC_APB2LPENR_0_SDIOLPEN
#undef RCC_APB2RSTR_1_SDIORST
#undef RCC_APB2ENR_1_TIM20EN
#undef RCC_APB2RSTR_1_TIM20RST
#undef RCC_CFGR3_0_TIM20SW
#undef RCC_APB2ENR_1_SAI1EN
#undef RCC_APB2LPENR_0_SAI1LPEN
#undef RCC_APB2RSTR_1_SAI1RST
#undef RCC_APB2ENR_1_DFSDM1EN
#undef RCC_APB2RSTR_1_DFSDM1RST
#undef RCC_APB2ENR_1_LTDCEN
#undef RCC_APB2RSTR_1_LTDCRST
#undef RCC_APB2ENR_2_TIM22EN
#undef RCC_APB2RSTR_2_TIM22RST
#undef RCC_APB2SMENR_0_TIM22SMEN
#undef RCC_CICR_1_CSSHSEC
#undef RCC_CIFR_1_CSSHSEF
#undef RCC_IOPENR_0_IOPHEN
#undef RCC_IOPENR_1_GPIOHEN
#undef RCC_IOPRSTR_0_IOPHRST
#undef RCC_IOPRSTR_1_GPIOHRST
#undef RCC_IOPSMENR_0_IOPHSMEN
#undef RCC_IOPSMENR_1_GPIOHSMEN
#undef RCC_APB2ENR_2_SPI4EN
#undef RCC_APB2LPENR_0_SPI4LPEN
#undef RCC_APB2RSTR_2_SPI4RST
#undef RCC_APB2ENR_2_SPI5EN
#undef RCC_APB2LPENR_0_SPI5LPEN
#undef RCC_APB2RSTR_2_SPI5RST
#undef RCC_APB2ENR_3_SYSCFGEN
#undef RCC_APB2ENR_3_SDMMC1EN
#undef RCC_APB2RSTR_1_SDMMC1RST
#undef RCC_APB2SMENR_0_SDMMC1SMEN
#undef RCC_CFGR_4_STOPWUCK
#undef RCC_APB2LPENR_0_USART6LPEN
#undef RCC_APB2LPENR_0_DFSDM1LPEN
#undef RCC_CKGATENR_RCC_EVTCTL
#undef RCC_DCKCFGR_0_CKDFSDM1ASEL
#undef RCC_DCKCFGR_0_CKDFSDM1SEL
#undef RCC_PLLI2SCFGR_PLLI2SSRC
#undef RCC_APB2LPENR_0_LTDCLPEN
#undef RCC_APB2LPENR_0_DSILPEN
#undef RCC_APB2RSTR_0_SYSCFGRST
#undef RCC_CSR_0_OBLRSTF
#undef RCC_APB2RSTR_1_ADC1RST
#undef RCC_APB2SMENR_0_USART1SMEN
#undef RCC_CCIPR_0_USART1SEL
#undef RCC_APB2SMENR_0_DSISMEN
#undef RCC_CCIPR2_DSISEL
#undef RCC_BDCR_0_LSEDRV
#undef RCC_BDCR_1_LSEMOD
#undef RCC_CCIPR_0_I2C3SEL
#undef RCC_CCIPR_0_SAI2SEL
#undef RCC_CCIPR_0_DFSDM1SEL
#undef RCC_CFGR_0_SW
#undef RCC_CFGR_0_SWS
#undef RCC_CFGR_0_HPRE
#undef RCC_CSR_0_PINRSTF
#undef RCC_CSR_0_SFTRSTF
#undef RCC_CSR_0_IWDGRSTF
#undef RCC_CSR_0_WWDGRSTF
#undef RCC_CSR_0_LPWRRSTF
#undef RCC_CFGR_0_PPRE2
#undef RCC_CFGR_1_PPRE1
#undef RCC_CFGR_0_ADCPRE
#undef RCC_CFGR_0_PLLSRC
#undef RCC_CFGR_0_USBPRE
#undef RCC_CFGR_0_I2SSRC
#undef RCC_CFGR_0_MCO
#undef RCC_CFGR_0_MCOPRE
#undef RCC_CFGR_0_PLLNODIV
#undef RCC_CFGR_1_PLLSRC
#undef RCC_CFGR_1_MCOSEL
#undef RCC_CFGR_1_MCOF
#undef RCC_CFGR3_1_TIMSW
#undef RCC_CFGR_1_MCO2
#undef RCC_CFGR_2_MCO2PRE
#undef RCC_CFGR_2_MCO2EN
#undef RCC_CFGR_2_ADCPRE
#undef RCC_CFGR_2_MCO
#undef RCC_MAP0_CFGR2
#undef RCC_MAP0_AHBRSTR
#undef RCC_CFGR2_1_PREDIV1
#undef RCC_CFGR2_1_ADCPRE34
#undef RCC_CFGR3_0_TIM8SW
#undef RCC_CFGR3_0_I2C2SW
#undef RCC_CFGR3_0_CECSW
#undef RCC_CFGR3_0_USBSW
#undef RCC_CFGR3_0_TIM1SW
#undef RCC_CFGR3_0_TIM15SW
#undef RCC_CFGR3_0_TIM16SW
#undef RCC_CFGR3_0_TIM17SW
#undef RCC_CFGR3_1_I2CSW
#undef RCC_CFGR3_2_I2C3SW
#undef RCC_CFGR3_0_USART3SW
#undef RCC_CFGR3_0_UART4SW
#undef RCC_CFGR3_0_UART5SW
#undef RCC_CFGR3_2_I2CSW
#undef RCC_CFGR3_2_TIMSW
#undef RCC_CFGR3_3_I2CSW
#undef RCC_CICR_0_HSIRDYC
#undef RCC_CICR_0_HSERDYC
#undef RCC_CIER_0_HSIRDYIE
#undef RCC_CIER_0_HSERDYIE
#undef RCC_CIFR_0_HSIRDYF
#undef RCC_CIFR_0_HSERDYF
#undef RCC_CR_1_HSIKERON
#undef RCC_CR_1_HSIRDY
#undef RCC_MAP2_CRRCR
#undef RCC_CICR_2_CSSC
#undef RCC_CIFR_2_CSSF
#undef RCC_CSR_1_FWRSTF
#undef RCC_CR_0_HSIRDY
#undef RCC_CSR_0_RMVF
#undef RCC_CIR_0_HSI48RDYF
#undef RCC_CIR_0_HSI48RDYIE
#undef RCC_CIR_0_HSI48RDYC
#undef RCC_CR2_HSI48ON
#undef RCC_CR2_HSI48RDY
#undef RCC_CR2_HSI48CAL
#undef RCC_CIR_3_LSECSSF
#undef RCC_CIR_3_LSECSSIE
#undef RCC_CIR_3_LSECSSC
#undef RCC_CSR_1_LSECSSON
#undef RCC_CSR_1_LSECSSD
#undef RCC_CR_0_HSION
#undef RCC_CR_0_HSITRIM
#undef RCC_CR_0_HSICAL
#undef RCC_CR_0_CSSON
#undef RCC_CR_0_PLL2ON
#undef RCC_CR_0_PLL2RDY
#undef RCC_CR_0_PLL3ON
#undef RCC_CR_0_PLL3RDY
#undef RCC_CR_1_CSSHSEON
#undef RCC_CR_2_HSIOUTEN
#undef RCC_CRRCR_1_HSI48DIV6OUTEN
#undef RCC_CSR_0_V18PWRRSTF
#undef RCC_CSR_1_VREGRSTF
#undef RCC_CSR_1_BORRSTF
#undef RCC_CSR_1_PADRSTF
#undef RCC_CSR_1_WDGRSTF
#undef RCC_MAP0_DCKCFGR
#undef RCC_DCKCFGR_0_PLLSAIDIVR
#undef RCC_DCKCFGR_0_SAI1ASRC
#undef RCC_DCKCFGR_0_SAI1BSRC
#undef RCC_DCKCFGR_0_I2S2SRC
#undef RCC_DCKCFGR_1_I2S1SRC
#undef RCC_DCKCFGR2_0_SDIOSEL
#undef RCC_DCKCFGR_0_DSISEL
#undef RCC_DCKCFGR_1_CK48MSEL
#undef RCC_DCKCFGR_1_SDIOSEL
#undef RCC_DCKCFGR_1_PLLI2SDIVQ
#undef RCC_DCKCFGR_1_PLLSAIDIVQ
#undef RCC_DCKCFGR_1_SAI1SRC
#undef RCC_DCKCFGR_1_SAI2SRC
#undef RCC_DCKCFGR2_0_SPDIFRXSEL
#undef RCC_PLLSAICFGR_PLLSAIM
#undef RCC_DCKCFGR2_0_CK48MSEL
#undef RCC_DCKCFGR2_0_LPTIM1SEL
#undef RCC_DCKCFGR2_1_DSISEL
#undef RCC_MAP2_ICSCR
#undef RCC_ICSCR_2_HSITRIM
#undef RCC_PLLCFGR_0_PLLR
#undef RCC_PLLI2SCFGR_PLLI2SM
#undef RCC_PLLI2SCFGR_PLLI2SQ
#undef RCC_PLLSAICFGR_PLLSAIP
#undef RCC_MAP1_CFGR
#undef RCC_MAP1_AHB3RSTR
#undef RCC_MAP0_AHB3ENR
#undef RCC_MAP0_AHB3LPENR
#undef RCC_MAP1_APB2RSTR
//endregion
#endif
