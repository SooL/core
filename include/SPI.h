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
#ifndef __SOOL_SPI_H
#define __SOOL_SPI_H



#include "lib_utils/peripheral_include.h"
#include "RCC.h"

//region defines

#if defined(STM32H7     )
#define SPI_CFG1
#define SPI_CFG2
#define SPI_CR1_0_IOLOCK     IOLOCK               // 1 bits @ 16
#define SPI_CR1_1_SPE        SPE                  // 1 bits @ 0
#define SPI_CR1_1_MASRX      MASRX                // 1 bits @ 8
#define SPI_CR1_1_CSTART     CSTART               // 1 bits @ 9
#define SPI_CR1_1_CSUSP      CSUSP                // 1 bits @ 10
#define SPI_CR1_1_SSI        SSI                  // 1 bits @ 12
#define SPI_CR1_1_CRC3317    CRC3317              // 1 bits @ 13
#define SPI_CR1_1_RCRCINI    RCRCINI              // 1 bits @ 14
#define SPI_CR1_1_TCRCINI    TCRCINI              // 1 bits @ 15
#define SPI_CR1_2
#define SPI_CR2_0_TSER       TSER                 // 16 bits @ 16
#define SPI_CR2_1
#define SPI_CRCPOLY
#define SPI_I2SCFGR_0_FIXCH  FIXCH                // 1 bits @ 13
#define SPI_I2SCFGR_0_I2SDIV I2SDIV               // 8 bits @ 16
#define SPI_I2SCFGR_0_ODD    ODD                  // 1 bits @ 24
#define SPI_I2SCFGR_0_MCKOE  MCKOE                // 1 bits @ 25
#define SPI_I2SCFGR_1
#define SPI_I2SCFGR_2
#define SPI_IER
#define SPI_IFCR
#define SPI_RXCRC
#define SPI_RXDR
#define SPI_SR_0_RXPLVL      RXPLVL               // 2 bits @ 13
#define SPI_SR_0_RXWNE       RXWNE                // 1 bits @ 15
#define SPI_SR_0_CTSIZE      CTSIZE               // 16 bits @ 16
#define SPI_SR_1
#define SPI_TXCRC
#define SPI_TXDR
#define SPI_UDRDR
#define SPI_MAP1_CFG1        CFG1_TypeDef CFG1
#define SPI_MAP1_CFG2        CFG2_TypeDef CFG2
#define SPI_MAP1_IER         IER_TypeDef IER
#define SPI_MAP1_SR          SR_TypeDef SR
#define SPI_MAP1_IFCR        IFCR_TypeDef IFCR
#define SPI_MAP1_TXDR        TXDR_TypeDef TXDR
#define SPI_MAP0_RXDR        RXDR_TypeDef RXDR
#define SPI_MAP0_CRCPOLY     CRCPOLY_TypeDef CRCPOLY
#define SPI_MAP0_TXCRC       TXCRC_TypeDef TXCRC
#define SPI_MAP0_RXCRC       uint32_t RXCRC
#define SPI_MAP0_UDRDR       UDRDR_TypeDef UDRDR
#define SPI_MAP1_I2SCFGR     I2SCFGR_TypeDef I2SCFGR
#else
#define SPI_CR1_0_IOLOCK
#define SPI_CR1_1_SPE
#define SPI_CR1_1_MASRX
#define SPI_CR1_1_CSTART
#define SPI_CR1_1_CSUSP
#define SPI_CR1_1_SSI
#define SPI_CR1_1_CRC3317
#define SPI_CR1_1_RCRCINI
#define SPI_CR1_1_TCRCINI
#define SPI_CR2_0_TSER
#define SPI_I2SCFGR_0_FIXCH
#define SPI_I2SCFGR_0_I2SDIV
#define SPI_I2SCFGR_0_ODD
#define SPI_I2SCFGR_0_MCKOE
#define SPI_SR_0_RXPLVL
#define SPI_SR_0_RXWNE
#define SPI_SR_0_CTSIZE
#define SPI_MAP1_CFG1 __SOOL_PERIPH_PADDING_4
#define SPI_MAP1_CFG2 __SOOL_PERIPH_PADDING_4
#define SPI_MAP1_IER __SOOL_PERIPH_PADDING_4
#define SPI_MAP1_SR __SOOL_PERIPH_PADDING_4
#define SPI_MAP1_IFCR __SOOL_PERIPH_PADDING_4
#define SPI_MAP1_TXDR __SOOL_PERIPH_PADDING_4
#define SPI_MAP0_RXDR __SOOL_PERIPH_PADDING_4
#define SPI_MAP0_CRCPOLY __SOOL_PERIPH_PADDING_4
#define SPI_MAP0_TXCRC __SOOL_PERIPH_PADDING_4
#define SPI_MAP0_RXCRC __SOOL_PERIPH_PADDING_4
#define SPI_MAP0_UDRDR __SOOL_PERIPH_PADDING_4
#define SPI_MAP1_I2SCFGR __SOOL_PERIPH_PADDING_4
#endif

#define SPI_CR1
#define SPI_CR2
#define SPI_SR

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    )
#define SPI_CR1_0_CPHA       CPHA                 // 1 bits @ 0
#define SPI_CR1_0_CPOL       CPOL                 // 1 bits @ 1
#define SPI_CR1_0_MSTR       MSTR                 // 1 bits @ 2
#define SPI_CR1_0_BR         BR                   // 3 bits @ 3
#define SPI_CR1_0_SPE        SPE                  // 1 bits @ 6
#define SPI_CR1_0_LSBFIRST   LSBFIRST             // 1 bits @ 7
#define SPI_CR1_0_SSI        SSI                  // 1 bits @ 8
#define SPI_CR1_0_SSM        SSM                  // 1 bits @ 9
#define SPI_CR1_0_RXONLY     RXONLY               // 1 bits @ 10
#define SPI_CR1_0_CRCNEXT    CRCNEXT              // 1 bits @ 12
#define SPI_CR1_0_CRCEN      CRCEN                // 1 bits @ 13
#define SPI_CR1_0_BIDIOE     BIDIOE               // 1 bits @ 14
#define SPI_CR1_0_BIDIMODE   BIDIMODE             // 1 bits @ 15
#define SPI_CR2_0_RXDMAEN    RXDMAEN              // 1 bits @ 0
#define SPI_CR2_0_TXDMAEN    TXDMAEN              // 1 bits @ 1
#define SPI_CR2_0_SSOE       SSOE                 // 1 bits @ 2
#define SPI_CR2_0_ERRIE      ERRIE                // 1 bits @ 5
#define SPI_CR2_0_RXNEIE     RXNEIE               // 1 bits @ 6
#define SPI_CR2_0_TXEIE      TXEIE                // 1 bits @ 7
#define SPI_CRCPR
#define SPI_DR
#define SPI_RXCRCR
#define SPI_SR_0_RXNE        RXNE                 // 1 bits @ 0
#define SPI_SR_0_TXE         TXE                  // 1 bits @ 1
#define SPI_SR_0_CRCERR      CRCERR               // 1 bits @ 4
#define SPI_SR_0_MODF        MODF                 // 1 bits @ 5
#define SPI_SR_0_BSY         BSY                  // 1 bits @ 7
#define SPI_TXCRCR
#define SPI_MAP0_SR          SR_TypeDef SR
#define SPI_MAP0_DR          DR_TypeDef DR
#define SPI_MAP0_CRCPR       CRCPR_TypeDef CRCPR
#define SPI_MAP0_RXCRCR      RXCRCR_TypeDef RXCRCR
#define SPI_MAP0_TXCRCR      TXCRCR_TypeDef TXCRCR
#else
#define SPI_CR1_0_CPHA
#define SPI_CR1_0_CPOL
#define SPI_CR1_0_MSTR
#define SPI_CR1_0_BR
#define SPI_CR1_0_SPE
#define SPI_CR1_0_LSBFIRST
#define SPI_CR1_0_SSI
#define SPI_CR1_0_SSM
#define SPI_CR1_0_RXONLY
#define SPI_CR1_0_CRCNEXT
#define SPI_CR1_0_CRCEN
#define SPI_CR1_0_BIDIOE
#define SPI_CR1_0_BIDIMODE
#define SPI_CR2_0_RXDMAEN
#define SPI_CR2_0_TXDMAEN
#define SPI_CR2_0_SSOE
#define SPI_CR2_0_ERRIE
#define SPI_CR2_0_RXNEIE
#define SPI_CR2_0_TXEIE
#define SPI_SR_0_RXNE
#define SPI_SR_0_TXE
#define SPI_SR_0_CRCERR
#define SPI_SR_0_MODF
#define SPI_SR_0_BSY
#define SPI_MAP0_SR __SOOL_PERIPH_PADDING_4
#define SPI_MAP0_DR __SOOL_PERIPH_PADDING_4
#define SPI_MAP0_CRCPR __SOOL_PERIPH_PADDING_4
#define SPI_MAP0_RXCRCR __SOOL_PERIPH_PADDING_4
#define SPI_MAP0_TXCRCR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define SPI_CR1_0_CRCL       CRCL                 // 1 bits @ 11
#define SPI_CR2_0_NSSP       NSSP                 // 1 bits @ 3
#define SPI_CR2_0_DS         DS                   // 4 bits @ 8
#define SPI_CR2_0_FRXTH      FRXTH                // 1 bits @ 12
#define SPI_CR2_0_LDMARX     LDMARX               // 1 bits @ 13
#define SPI_CR2_0_LDMATX     LDMATX               // 1 bits @ 14
#define SPI_SR_0_FRLVL       FRLVL                // 2 bits @ 9
#define SPI_SR_0_FTLVL       FTLVL                // 2 bits @ 11
#else
#define SPI_CR1_0_CRCL
#define SPI_CR2_0_NSSP
#define SPI_CR2_0_DS
#define SPI_CR2_0_FRXTH
#define SPI_CR2_0_LDMARX
#define SPI_CR2_0_LDMATX
#define SPI_SR_0_FRLVL
#define SPI_SR_0_FTLVL
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32H7     ) ||\
    defined(STM32L0     ) || defined(STM32L1     )
#define SPI_CR1_1
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32L0     ) ||\
    defined(STM32L1     )
#define SPI_CR1_1_DFF        DFF                  // 1 bits @ 11
#else
#define SPI_CR1_1_DFF
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L100xC ) || defined(STM32L151xC ) ||\
    defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) ||\
    defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) ||\
    defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) ||\
    defined(STM32L162xDx) || defined(STM32L162xE ) || defined(STM32L4     ) || defined(STM32L4P    )
#define SPI_CR2_0_FRF        FRF                  // 1 bits @ 4
#else
#define SPI_CR2_0_FRF
#endif

#if defined(STM32F0     )
#define SPI_CRCPR_0
#define SPI_DR_0
#define SPI_RXCRCR_0
#define SPI_TXCRCR_0
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define SPI_CRCPR_1
#define SPI_DR_1
#define SPI_RXCRCR_1
#define SPI_TXCRCR_1
#endif

#if defined(STM32F0     ) || defined(STM32F101x6 ) || defined(STM32F101xB ) || defined(STM32F101xE ) ||\
    defined(STM32F101xG ) || defined(STM32F102x6 ) || defined(STM32F102xB ) || defined(STM32F103x6 ) ||\
    defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) ||\
    defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) ||\
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) ||\
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) ||\
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) ||\
    defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) ||\
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) ||\
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) ||\
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define SPI_I2SCFGR
#endif

#if defined(STM32F030x4 ) || defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) ||\
    defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L051xx ) || defined(STM32L052xx ) ||\
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) ||\
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L100xC ) || defined(STM32L151xC ) ||\
    defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) ||\
    defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) ||\
    defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) ||\
    defined(STM32L162xDx) || defined(STM32L162xE )
#define SPI_I2SCFGR_0_CHLEN  CHLEN                // 1 bits @ 0
#define SPI_I2SCFGR_0_DATLEN DATLEN               // 2 bits @ 1
#define SPI_I2SCFGR_0_CKPOL  CKPOL                // 1 bits @ 3
#define SPI_I2SCFGR_0_I2SCFG I2SCFG               // 2 bits @ 8
#define SPI_I2SCFGR_0_I2SE   I2SE                 // 1 bits @ 10
#define SPI_I2SPR
#define SPI_MAP0_I2SPR       I2SPR_TypeDef I2SPR
#else
#define SPI_I2SCFGR_0_CHLEN
#define SPI_I2SCFGR_0_DATLEN
#define SPI_I2SCFGR_0_CKPOL
#define SPI_I2SCFGR_0_I2SCFG
#define SPI_I2SCFGR_0_I2SE
#define SPI_MAP0_I2SPR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F030x4 ) || defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) ||\
    defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L051xx ) ||\
    defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) ||\
    defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) ||\
    defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L100xC ) ||\
    defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) ||\
    defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) ||\
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) ||\
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define SPI_I2SCFGR_0_I2SSTD I2SSTD               // 2 bits @ 4
#define SPI_I2SCFGR_0_PCMSYNC PCMSYNC              // 1 bits @ 7
#else
#define SPI_I2SCFGR_0_I2SSTD
#define SPI_I2SCFGR_0_PCMSYNC
#endif

#if defined(STM32F0     ) || defined(STM32F101x6 ) || defined(STM32F101xB ) || defined(STM32F101xE ) ||\
    defined(STM32F101xG ) || defined(STM32F102x6 ) || defined(STM32F102xB ) || defined(STM32F103x6 ) ||\
    defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) ||\
    defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) ||\
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L051xx ) ||\
    defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) ||\
    defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) ||\
    defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L100xC ) ||\
    defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) ||\
    defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) ||\
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) ||\
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
#define SPI_I2SCFGR_0_I2SMOD I2SMOD               // 1 bits @ 11
#define SPI_MAP0_I2SCFGR     I2SCFGR_TypeDef I2SCFGR
#else
#define SPI_I2SCFGR_0_I2SMOD
#define SPI_MAP0_I2SCFGR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) ||\
    defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) ||\
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L071xx ) || defined(STM32L072xx ) ||\
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define SPI_I2SCFGR_0_ASTRTEN ASTRTEN              // 1 bits @ 12
#else
#define SPI_I2SCFGR_0_ASTRTEN
#endif

#if defined(STM32F030x4 ) || defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) ||\
    defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) ||\
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) ||\
    defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define SPI_SR_0_CHSIDE      CHSIDE               // 1 bits @ 2
#define SPI_SR_0_UDR         UDR                  // 1 bits @ 3
#else
#define SPI_SR_0_CHSIDE
#define SPI_SR_0_UDR
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define SPI_SR_0_FRE         FRE                  // 1 bits @ 8
#else
#define SPI_SR_0_FRE
#endif

#if defined(STM32L4P    )
#define SPI_VERR
#define SPI_MAP0_VERR        VERR_TypeDef VERR
#else
#define SPI_MAP0_VERR __SOOL_PERIPH_PADDING_4
#endif

//endregion
namespace sool
{
	namespace core
	{
//region related-types
		
//endregion
//region peripheral-declaration

		class SPI
		{
			

		public :

#ifdef SPI_CFG1
			struct CFG1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t DSIZE                :5;
					uint32_t FTHLV                :4;
					uint32_t UDRCFG               :2;
					uint32_t UDRDET               :2;
					uint32_t                      :1;
					uint32_t RXDMAEN              :1;
					uint32_t TXDMAEN              :1;
					uint32_t CRCSIZE              :5;
					uint32_t                      :1;
					uint32_t CRCEN                :1;
					uint32_t                      :5;
					uint32_t MBR                  :3;
					uint32_t                      :1;

				
			};
#endif

#ifdef SPI_CFG2
			struct CFG2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t MSSI                 :4;
					uint32_t MIDI                 :4;
					uint32_t                      :7;
					uint32_t IOSWP                :1;
					uint32_t                      :1;
					uint32_t COMM                 :2;
					uint32_t SP                   :3;
					uint32_t MASTER               :1;
					uint32_t LSBFRST              :1;
					uint32_t CPHA                 :1;
					uint32_t CPOL                 :1;
					uint32_t SSM                  :1;
					uint32_t                      :1;
					uint32_t SSIOP                :1;
					uint32_t SSOE                 :1;
					uint32_t SSOM                 :1;
					uint32_t AFCNTR               :1;

				
			};
#endif

#ifdef SPI_CR1
			struct CR1_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;

				union
				{
					struct
					{
						uint32_t SPI_CR1_0_CPHA       :1;
						uint32_t SPI_CR1_0_CPOL       :1;
						uint32_t SPI_CR1_0_MSTR       :1;
						uint32_t SPI_CR1_0_BR         :3;
						uint32_t SPI_CR1_0_SPE        :1;
						uint32_t SPI_CR1_0_LSBFIRST   :1;
						uint32_t SPI_CR1_0_SSI        :1;
						uint32_t SPI_CR1_0_SSM        :1;
						uint32_t SPI_CR1_0_RXONLY     :1;
						uint32_t SPI_CR1_0_CRCL       :1;
						uint32_t SPI_CR1_0_CRCNEXT    :1;
						uint32_t SPI_CR1_0_CRCEN      :1;
						uint32_t SPI_CR1_0_BIDIOE     :1;
						uint32_t SPI_CR1_0_BIDIMODE   :1;
						uint32_t SPI_CR1_0_IOLOCK     :1;
						uint32_t                      :15;
					};
#ifdef SPI_CR1_1
					struct
					{
						uint32_t SPI_CR1_1_SPE        :1;
						uint32_t                      :7;
						uint32_t SPI_CR1_1_MASRX      :1;
						uint32_t SPI_CR1_1_CSTART     :1;
						uint32_t SPI_CR1_1_CSUSP      :1;
						uint32_t SPI_CR1_1_DFF        :1;
						uint32_t SPI_CR1_1_SSI        :1;
						uint32_t SPI_CR1_1_CRC3317    :1;
						uint32_t SPI_CR1_1_RCRCINI    :1;
						uint32_t SPI_CR1_1_TCRCINI    :1;
						uint32_t                      :16;
					};
#endif
#ifdef SPI_CR1_2
					struct
					{
						uint32_t                      :11;
						uint32_t HDDIR                :1;
						uint32_t                      :20;
					};
#endif
				};
				
			};
#endif

#ifdef SPI_CR2
			struct CR2_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;

				union
				{
					struct
					{
						uint32_t SPI_CR2_0_RXDMAEN    :1;
						uint32_t SPI_CR2_0_TXDMAEN    :1;
						uint32_t SPI_CR2_0_SSOE       :1;
						uint32_t SPI_CR2_0_NSSP       :1;
						uint32_t SPI_CR2_0_FRF        :1;
						uint32_t SPI_CR2_0_ERRIE      :1;
						uint32_t SPI_CR2_0_RXNEIE     :1;
						uint32_t SPI_CR2_0_TXEIE      :1;
						uint32_t SPI_CR2_0_DS         :4;
						uint32_t SPI_CR2_0_FRXTH      :1;
						uint32_t SPI_CR2_0_LDMARX     :1;
						uint32_t SPI_CR2_0_LDMATX     :1;
						uint32_t                      :1;
						uint32_t SPI_CR2_0_TSER       :16;
					};
#ifdef SPI_CR2_1
					struct
					{
						uint32_t TSIZE                :16;
						uint32_t                      :16;
					};
#endif
				};
				
			};
#endif

#ifdef SPI_CRCPOLY
			struct CRCPOLY_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t CRCPOLY              :32;

				
			};
#endif

#ifdef SPI_CRCPR
			struct CRCPR_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;

				union
				{
					#ifdef SPI_CRCPR_0
					struct
					{
						uint32_t CRCPOLY              :32;
					};
					#endif
					#ifdef SPI_CRCPR_1
					struct
					{
						uint32_t CRCPOLY              :16;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
#endif

#ifdef SPI_DR
			struct DR_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;

				union
				{
					#ifdef SPI_DR_0
					struct
					{
						uint32_t DR                   :32;
					};
					#endif
					#ifdef SPI_DR_1
					struct
					{
						uint32_t DR                   :16;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
#endif

#ifdef SPI_I2SCFGR
			struct I2SCFGR_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;

				union
				{
					struct
					{
						uint32_t SPI_I2SCFGR_0_CHLEN  :1;
						uint32_t SPI_I2SCFGR_0_DATLEN :2;
						uint32_t SPI_I2SCFGR_0_CKPOL  :1;
						uint32_t SPI_I2SCFGR_0_I2SSTD :2;
						uint32_t                      :1;
						uint32_t SPI_I2SCFGR_0_PCMSYNC :1;
						uint32_t SPI_I2SCFGR_0_I2SCFG :2;
						uint32_t SPI_I2SCFGR_0_I2SE   :1;
						uint32_t SPI_I2SCFGR_0_I2SMOD :1;
						uint32_t SPI_I2SCFGR_0_ASTRTEN :1;
						uint32_t SPI_I2SCFGR_0_FIXCH  :1;
						uint32_t                      :2;
						uint32_t SPI_I2SCFGR_0_I2SDIV :8;
						uint32_t SPI_I2SCFGR_0_ODD    :1;
						uint32_t SPI_I2SCFGR_0_MCKOE  :1;
						uint32_t                      :6;
					};
					#ifdef SPI_I2SCFGR_1
					struct
					{
						uint32_t I2SMOD               :1;
						uint32_t I2SCFG               :3;
						uint32_t                      :4;
						uint32_t DATLEN               :2;
						uint32_t CHLEN                :1;
						uint32_t CKPOL                :1;
						uint32_t WSINV                :1;
						uint32_t                      :19;
					};
					#endif
					#ifdef SPI_I2SCFGR_2
					struct
					{
						uint32_t                      :12;
						uint32_t DATFMT               :2;
						uint32_t                      :18;
					};
					#endif
				};
				
			};
#endif

#ifdef SPI_I2SPR
			struct I2SPR_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;

					uint32_t I2SDIV               :8;
					uint32_t ODD                  :1;
					uint32_t MCKOE                :1;
					uint32_t                      :22;

				
			};
#endif

#ifdef SPI_IER
			struct IER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t RXPIE                :1;
					uint32_t TXPIE                :1;
					uint32_t DXPIE                :1;
					uint32_t EOTIE                :1;
					uint32_t TXTFIE               :1;
					uint32_t UDRIE                :1;
					uint32_t OVRIE                :1;
					uint32_t CRCIE                :1;
					uint32_t TIFREIE              :1;
					uint32_t MODFIE               :1;
					uint32_t TSERIE               :1;
					uint32_t                      :21;

				
			};
#endif

#ifdef SPI_IFCR
			struct IFCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :3;
					uint32_t EOTC                 :1;
					uint32_t TXTFC                :1;
					uint32_t UDRC                 :1;
					uint32_t OVRC                 :1;
					uint32_t CRCEC                :1;
					uint32_t TIFREC               :1;
					uint32_t MODFC                :1;
					uint32_t TSERFC               :1;
					uint32_t SUSPC                :1;
					uint32_t                      :20;

				
			};
#endif

#ifdef SPI_RXCRCR
			struct RXCRCR_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;

				union
				{
					#ifdef SPI_RXCRCR_0
					struct
					{
						uint32_t RXCRC                :32;
					};
					#endif
					#ifdef SPI_RXCRCR_1
					struct
					{
						uint32_t RXCRC                :16;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
#endif

#ifdef SPI_RXDR
			struct RXDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t RXDR                 :32;

				
			};
#endif

#ifdef SPI_SR
			struct SR_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;

				union
				{
					struct
					{
						uint32_t SPI_SR_0_RXNE        :1;
						uint32_t SPI_SR_0_TXE         :1;
						uint32_t SPI_SR_0_CHSIDE      :1;
						uint32_t SPI_SR_0_UDR         :1;
						uint32_t SPI_SR_0_CRCERR      :1;
						uint32_t SPI_SR_0_MODF        :1;
						uint32_t OVR                  :1;
						uint32_t SPI_SR_0_BSY         :1;
						uint32_t SPI_SR_0_FRE         :1;
						uint32_t SPI_SR_0_FRLVL       :2;
						uint32_t SPI_SR_0_FTLVL       :2;
						uint32_t SPI_SR_0_RXPLVL      :2;
						uint32_t SPI_SR_0_RXWNE       :1;
						uint32_t SPI_SR_0_CTSIZE      :16;
					};
#ifdef SPI_SR_1
					struct
					{
						uint32_t RXP                  :1;
						uint32_t TXP                  :1;
						uint32_t DXP                  :1;
						uint32_t EOT                  :1;
						uint32_t TXTF                 :1;
						uint32_t UDR                  :1;
						uint32_t                      :1;
						uint32_t CRCE                 :1;
						uint32_t TIFRE                :1;
						uint32_t MODF                 :1;
						uint32_t TSERF                :1;
						uint32_t SUSP                 :1;
						uint32_t TXC                  :1;
						uint32_t                      :19;
					};
#endif
				};
				
			};
#endif

#ifdef SPI_TXCRC
			struct TXCRC_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t TXCRC                :32;
					};
					struct
					{
						uint32_t RXCRC                :32;
					};
				};
				
			};
#endif

#ifdef SPI_TXCRCR
			struct TXCRCR_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;

				union
				{
					#ifdef SPI_TXCRCR_0
					struct
					{
						uint32_t TXCRC                :32;
					};
					#endif
					#ifdef SPI_TXCRCR_1
					struct
					{
						uint32_t TXCRC                :16;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
#endif

#ifdef SPI_TXDR
			struct TXDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TXDR                 :32;

				
			};
#endif

#ifdef SPI_UDRDR
			struct UDRDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t UDRDR                :32;

				
			};
#endif

#ifdef SPI_VERR
			struct VERR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t MINREV               :4;
					uint32_t MAJREV               :4;
					uint32_t                      :24;

				
			};
#endif

			union
			{

				struct
				{
					CR1_TypeDef CR1;     // @0x000
					CR2_TypeDef CR2;     // @0x004
					SPI_MAP0_SR;         // @0x008
					SPI_MAP0_DR;         // @0x00c
					SPI_MAP0_CRCPR;      // @0x010
					SPI_MAP0_RXCRCR;     // @0x014
					SPI_MAP0_TXCRCR;     // @0x018
					SPI_MAP0_I2SCFGR;    // @0x01c
					SPI_MAP0_I2SPR;      // @0x020
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					SPI_MAP0_RXDR;       // @0x030
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					SPI_MAP0_CRCPOLY;    // @0x040
					SPI_MAP0_TXCRC;      // @0x044
					SPI_MAP0_RXCRC;      // @0x048
					SPI_MAP0_UDRDR;      // @0x04c
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_4;
					SPI_MAP0_VERR;       // @0x3f4
				};
				struct
				{
					__SOOL_PERIPH_PADDING_8;
					SPI_MAP1_CFG1;       // @0x008
					SPI_MAP1_CFG2;       // @0x00c
					SPI_MAP1_IER;        // @0x010
					SPI_MAP1_SR;         // @0x014
					SPI_MAP1_IFCR;       // @0x018
					__SOOL_PERIPH_PADDING_4;
					SPI_MAP1_TXDR;       // @0x020
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					SPI_MAP1_I2SCFGR;    // @0x050
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_4;
				};
			};
		private:
			SPI() = delete;
			private:
				static constexpr uint32_t get_clock_enable_bit(const uint32_t addr);
			
				static constexpr volatile Reg32_t &get_clock_enable_reg(const uint32_t addr);
			
			public:
				void enable_clock() volatile;
			
				void disable_clock() volatile;
			
				bool is_clock_enabled() const volatile;
			
		};

//endregion
//region instances
#if defined(STM32F030x4 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F042x6 ) ||\
    defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F070xB ) ||\
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) ||\
    defined(STM32F098xx ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xB ) ||\
    defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F102xB ) || defined(STM32F103xB ) ||\
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F2     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) ||\
    defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) ||\
    defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) ||\
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) ||\
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) ||\
    defined(STM32L1     ) || defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) ||\
    defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define SPI2_BASE_ADDR ((uint32_t)0x40003800U)
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define SPI1_BASE_ADDR ((uint32_t)0x40013000U)
#endif

#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) ||\
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) ||\
    defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) ||\
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F401xC ) ||\
    defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F411xE ) ||\
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) ||\
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) ||\
    defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) ||\
    defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) ||\
    defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) ||\
    defined(STM32L162xE ) || defined(STM32L4     ) || defined(STM32L4P    )
#define SPI3_BASE_ADDR ((uint32_t)0x40003C00U)
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
		#define I2S2ext_BASE_ADDR ((uint32_t)0x40003400U)
#define I2S3ext_BASE_ADDR ((uint32_t)0x40004000U)
#endif

#if defined(STM32F302xE ) || defined(STM32F303xE ) || defined(STM32F398xx )
#define SPI4_BASE_ADDR ((uint32_t)0x40013C00U)
#endif

#if defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F411xE ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     )
#define SPI4_BASE_ADDR ((uint32_t)0x40013400U)
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) ||\
    defined(STM32H7     )
#define SPI5_BASE_ADDR ((uint32_t)0x40015000U)
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) ||\
    defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) ||\
    defined(STM32F777xx ) || defined(STM32F779xx )
#define SPI6_BASE_ADDR ((uint32_t)0x40015400U)
#endif

#if defined(STM32H7     )
#define SPI6_BASE_ADDR ((uint32_t)0x58001400U)
#endif

#ifdef SPI2_BASE_ADDR
		volatile class SPI * const SPI2 = reinterpret_cast<class SPI* const>(SPI2_BASE_ADDR);
#endif
#ifdef SPI1_BASE_ADDR
		volatile class SPI * const SPI1 = reinterpret_cast<class SPI* const>(SPI1_BASE_ADDR);
#endif
#ifdef SPI3_BASE_ADDR
		volatile class SPI * const SPI3 = reinterpret_cast<class SPI* const>(SPI3_BASE_ADDR);
#endif
#ifdef I2S2ext_BASE_ADDR
		volatile class SPI * const I2S2ext = reinterpret_cast<class SPI* const>(I2S2ext_BASE_ADDR);
#endif
#ifdef I2S3ext_BASE_ADDR
		volatile class SPI * const I2S3ext = reinterpret_cast<class SPI* const>(I2S3ext_BASE_ADDR);
#endif
#ifdef SPI4_BASE_ADDR
		volatile class SPI * const SPI4 = reinterpret_cast<class SPI* const>(SPI4_BASE_ADDR);
#endif
#ifdef SPI5_BASE_ADDR
		volatile class SPI * const SPI5 = reinterpret_cast<class SPI* const>(SPI5_BASE_ADDR);
#endif
#ifdef SPI6_BASE_ADDR
		volatile class SPI * const SPI6 = reinterpret_cast<class SPI* const>(SPI6_BASE_ADDR);
#endif
//endregion
//region peripheral-definition
		constexpr uint32_t SPI::get_clock_enable_bit(const uint32_t addr)
		{
			switch (addr) {
		#ifdef SPI1_BASE_ADDR
				case SPI1_BASE_ADDR: return 1 << 12;
		#endif
		#ifdef SPI2_BASE_ADDR
				case SPI2_BASE_ADDR: return 1 << 14;
		#endif
		#ifdef SPI3_BASE_ADDR
				case SPI3_BASE_ADDR: return 1 << 15;
		#endif
		#ifdef SPI4_BASE_ADDR
				case SPI4_BASE_ADDR:
		#ifdef STM32F3
					return 1 << 15;
		#else
					return 1 << 13;
		#endif
		#endif
		#ifdef SPI5_BASE_ADDR
				case SPI5_BASE_ADDR: return 1 << 20;
		#endif
		#ifdef SPI6_BASE_ADDR
				case SPI6_BASE_ADDR:
		#ifdef STM32H7
					return 1 << 5;
		#else
					return 1 << 21;
		#endif
		#endif
				default:
					return 0;
			}
		}
		
		constexpr volatile Reg32_t &SPI::get_clock_enable_reg(const uint32_t addr)
		{
			switch (addr) {
		#ifdef SPI1_BASE_ADDR
				case SPI1_BASE_ADDR: return RCC->APB2ENR;
		#endif
		#ifdef SPI4_BASE_ADDR
				case SPI4_BASE_ADDR: return RCC->APB2ENR;
		#endif
		#ifdef SPI5_BASE_ADDR
				case SPI5_BASE_ADDR: return RCC->APB2ENR;
		#endif
		#ifdef SPI6_BASE_ADDR
				case SPI6_BASE_ADDR:
		#ifdef STM32H7
					return RCC->APB4ENR;
		#else
					return RCC->APB2ENR;
		#endif
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
		
		inline void SPI::enable_clock() volatile
		{
			get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
					|= get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
		}
		
		inline void SPI::disable_clock() volatile
		{
			get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
					&= ~get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
		}
		
		inline bool SPI::is_clock_enabled() const volatile
		{
			return (get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
					& get_clock_enable_bit(reinterpret_cast<const uint32_t>(this)))
				   == get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
		}
		
//endregion
	};
};
//region undef
#undef SPI_CR1_0_IOLOCK
#undef SPI_CR1_1_SPE
#undef SPI_CR1_1_MASRX
#undef SPI_CR1_1_CSTART
#undef SPI_CR1_1_CSUSP
#undef SPI_CR1_1_SSI
#undef SPI_CR1_1_CRC3317
#undef SPI_CR1_1_RCRCINI
#undef SPI_CR1_1_TCRCINI
#undef SPI_CR2_0_TSER
#undef SPI_I2SCFGR_0_FIXCH
#undef SPI_I2SCFGR_0_I2SDIV
#undef SPI_I2SCFGR_0_ODD
#undef SPI_I2SCFGR_0_MCKOE
#undef SPI_SR_0_RXPLVL
#undef SPI_SR_0_RXWNE
#undef SPI_SR_0_CTSIZE
#undef SPI_MAP1_CFG1
#undef SPI_MAP1_CFG2
#undef SPI_MAP1_IER
#undef SPI_MAP1_SR
#undef SPI_MAP1_IFCR
#undef SPI_MAP1_TXDR
#undef SPI_MAP0_RXDR
#undef SPI_MAP0_CRCPOLY
#undef SPI_MAP0_TXCRC
#undef SPI_MAP0_RXCRC
#undef SPI_MAP0_UDRDR
#undef SPI_MAP1_I2SCFGR
#undef SPI_CR1_0_CPHA
#undef SPI_CR1_0_CPOL
#undef SPI_CR1_0_MSTR
#undef SPI_CR1_0_BR
#undef SPI_CR1_0_SPE
#undef SPI_CR1_0_LSBFIRST
#undef SPI_CR1_0_SSI
#undef SPI_CR1_0_SSM
#undef SPI_CR1_0_RXONLY
#undef SPI_CR1_0_CRCNEXT
#undef SPI_CR1_0_CRCEN
#undef SPI_CR1_0_BIDIOE
#undef SPI_CR1_0_BIDIMODE
#undef SPI_CR2_0_RXDMAEN
#undef SPI_CR2_0_TXDMAEN
#undef SPI_CR2_0_SSOE
#undef SPI_CR2_0_ERRIE
#undef SPI_CR2_0_RXNEIE
#undef SPI_CR2_0_TXEIE
#undef SPI_SR_0_RXNE
#undef SPI_SR_0_TXE
#undef SPI_SR_0_CRCERR
#undef SPI_SR_0_MODF
#undef SPI_SR_0_BSY
#undef SPI_MAP0_SR
#undef SPI_MAP0_DR
#undef SPI_MAP0_CRCPR
#undef SPI_MAP0_RXCRCR
#undef SPI_MAP0_TXCRCR
#undef SPI_CR1_0_CRCL
#undef SPI_CR2_0_NSSP
#undef SPI_CR2_0_DS
#undef SPI_CR2_0_FRXTH
#undef SPI_CR2_0_LDMARX
#undef SPI_CR2_0_LDMATX
#undef SPI_SR_0_FRLVL
#undef SPI_SR_0_FTLVL
#undef SPI_CR1_1_DFF
#undef SPI_CR2_0_FRF
#undef SPI_I2SCFGR_0_CHLEN
#undef SPI_I2SCFGR_0_DATLEN
#undef SPI_I2SCFGR_0_CKPOL
#undef SPI_I2SCFGR_0_I2SCFG
#undef SPI_I2SCFGR_0_I2SE
#undef SPI_MAP0_I2SPR
#undef SPI_I2SCFGR_0_I2SSTD
#undef SPI_I2SCFGR_0_PCMSYNC
#undef SPI_I2SCFGR_0_I2SMOD
#undef SPI_MAP0_I2SCFGR
#undef SPI_I2SCFGR_0_ASTRTEN
#undef SPI_SR_0_CHSIDE
#undef SPI_SR_0_UDR
#undef SPI_SR_0_FRE
#undef SPI_MAP0_VERR

//endregion
#endif //__SOOL_SPI_H
