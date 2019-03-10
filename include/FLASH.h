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
#ifndef __SOOL_FLASH_H
#define __SOOL_FLASH_H

#include "lib_utils/peripheral_include.h"

//region defines

#define FLASH_ACR
#define FLASH_OPTKEYR

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_ACR_0
#define FLASH_SR
#endif

#if defined(STM32F0     ) || defined(STM32L0     ) || defined(STM32L1     ) 
#define FLASH_ACR_0_LATENCY  LATENCY              // 1 bits @ 0
#else
#define FLASH_ACR_0_LATENCY
#endif

#if defined(STM32L1     ) 
#define FLASH_ACR_0_ACC64    ACC64                // 1 bits @ 2
#define FLASH_OBR_2_IWDG_SW  IWDG_SW              // 1 bits @ 20
#define FLASH_OBR_2_nRST_STOP nRST_STOP            // 1 bits @ 21
#define FLASH_OBR_2_nRST_STDBY nRST_STDBY           // 1 bits @ 22
#define FLASH_OBR_3_BOR_LEV  BOR_LEV              // 4 bits @ 16
#define FLASH_OBR_6
#define FLASH_PECR_1
#define FLASH_WRPR1
#define FLASH_MAP2_WRPR1     WRPR1_TypeDef WRPR1
#else
#define FLASH_ACR_0_ACC64
#define FLASH_OBR_2_IWDG_SW
#define FLASH_OBR_2_nRST_STOP
#define FLASH_OBR_2_nRST_STDBY
#define FLASH_OBR_3_BOR_LEV
#define FLASH_MAP2_WRPR1 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F1     ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) ||\
    defined(STM32F398xx ) 
#define FLASH_ACR_0_HLFCYA   HLFCYA               // 1 bits @ 3
#else
#define FLASH_ACR_0_HLFCYA
#endif

#if defined(STM32F0     ) || defined(STM32F101x6 ) || defined(STM32F101xB ) || defined(STM32F101xE ) ||\
    defined(STM32F101xG ) || defined(STM32F102x6 ) || defined(STM32F102xB ) || defined(STM32F103x6 ) ||\
    defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) ||\
    defined(STM32F107xC ) || defined(STM32F3     ) 
#define FLASH_ACR_0_PRFTBE   PRFTBE               // 1 bits @ 4
#define FLASH_ACR_0_PRFTBS   PRFTBS               // 1 bits @ 5
#else
#define FLASH_ACR_0_PRFTBE
#define FLASH_ACR_0_PRFTBS
#endif

#if defined(STM32L0     ) 
#define FLASH_ACR_0_PRE_READ PRE_READ             // 1 bits @ 6
#define FLASH_ACR_2_DISAB_BUF DISAB_BUF            // 1 bits @ 5
#define FLASH_OPTR_0_RDPROT  RDPROT               // 8 bits @ 0
#define FLASH_OPTR_0_WPRMOD  WPRMOD               // 1 bits @ 8
#define FLASH_OPTR_0_BOR_LEV BOR_LEV              // 4 bits @ 16
#define FLASH_OPTR_0_IWDG_SW IWDG_SW              // 1 bits @ 20
#define FLASH_OPTR_0_nRST_STOP nRST_STOP            // 1 bits @ 21
#define FLASH_OPTR_0_nRST_STDBY nRST_STDBY           // 1 bits @ 22
#define FLASH_OPTR_0_BOOT1   BOOT1                // 1 bits @ 31
#define FLASH_OPTR_1_USER    USER                 // 3 bits @ 20
#define FLASH_PECR_0_FIX     FIX                  // 1 bits @ 8
#define FLASH_PECR_0_HALF_ARRAY HALF_ARRAY           // 1 bits @ 19
#define FLASH_SR_0_NOTZEROERR NOTZEROERR           // 1 bits @ 16
#define FLASH_SR_1_FWWERR    FWWERR               // 1 bits @ 17
#define FLASH_SR_2_HVOFF     HVOFF                // 1 bits @ 2
#define FLASH_SR_2_FWWER     FWWER                // 1 bits @ 17
#define FLASH_SR_3_ENHV      ENHV                 // 1 bits @ 2
#define FLASH_MAP3_OPTR      OPTR_TypeDef OPTR
#else
#define FLASH_ACR_0_PRE_READ
#define FLASH_ACR_2_DISAB_BUF
#define FLASH_OPTR_0_RDPROT
#define FLASH_OPTR_0_WPRMOD
#define FLASH_OPTR_0_BOR_LEV
#define FLASH_OPTR_0_IWDG_SW
#define FLASH_OPTR_0_nRST_STOP
#define FLASH_OPTR_0_nRST_STDBY
#define FLASH_OPTR_0_BOOT1
#define FLASH_OPTR_1_USER
#define FLASH_PECR_0_FIX
#define FLASH_PECR_0_HALF_ARRAY
#define FLASH_SR_0_NOTZEROERR
#define FLASH_SR_1_FWWERR
#define FLASH_SR_2_HVOFF
#define FLASH_SR_2_FWWER
#define FLASH_SR_3_ENHV
#define FLASH_MAP3_OPTR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define FLASH_ACR_0_PRFTEN   PRFTEN               // 1 bits @ 8
#define FLASH_CR_1_STRT      STRT                 // 1 bits @ 16
#define FLASH_CR_1_EOPIE     EOPIE                // 1 bits @ 24
#define FLASH_CR_1_LOCK      LOCK                 // 1 bits @ 31
#define FLASH_SR_1_EOP       EOP                  // 1 bits @ 0
#define FLASH_SR_1_PGAERR    PGAERR               // 1 bits @ 5
#define FLASH_SR_1_BSY       BSY                  // 1 bits @ 16
#else
#define FLASH_ACR_0_PRFTEN
#define FLASH_CR_1_STRT
#define FLASH_CR_1_EOPIE
#define FLASH_CR_1_LOCK
#define FLASH_SR_1_EOP
#define FLASH_SR_1_PGAERR
#define FLASH_SR_1_BSY
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_ACR_0_ICEN     ICEN                 // 1 bits @ 9
#define FLASH_ACR_0_DCEN     DCEN                 // 1 bits @ 10
#define FLASH_ACR_0_ICRST    ICRST                // 1 bits @ 11
#define FLASH_ACR_0_DCRST    DCRST                // 1 bits @ 12
#define FLASH_SR_0_PGSERR    PGSERR               // 1 bits @ 7
#else
#define FLASH_ACR_0_ICEN
#define FLASH_ACR_0_DCEN
#define FLASH_ACR_0_ICRST
#define FLASH_ACR_0_DCRST
#define FLASH_SR_0_PGSERR
#endif

#if defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_ACR_0_RUN_PD   RUN_PD               // 1 bits @ 13
#define FLASH_ACR_0_SLEEP_PD SLEEP_PD             // 1 bits @ 14
#define FLASH_CR_0_OPTLOCK   OPTLOCK              // 1 bits @ 30
#define FLASH_CR_1_OPTSTRT   OPTSTRT              // 1 bits @ 17
#define FLASH_CR_1_FSTPG     FSTPG                // 1 bits @ 18
#define FLASH_CR_1_OBL_LAUNCH OBL_LAUNCH           // 1 bits @ 27
#define FLASH_CR_4
#define FLASH_ECCR
#define FLASH_OPTR_0_nRST_SHDW nRST_SHDW            // 1 bits @ 14
#define FLASH_OPTR_0_SRAM2_PE SRAM2_PE             // 1 bits @ 24
#define FLASH_OPTR_0_SRAM2_RST SRAM2_RST            // 1 bits @ 25
#define FLASH_OPTR_1_RDP     RDP                  // 8 bits @ 0
#define FLASH_OPTR_1_BOR_LEV BOR_LEV              // 3 bits @ 8
#define FLASH_OPTR_1_nRST_STOP nRST_STOP            // 1 bits @ 12
#define FLASH_OPTR_1_nRST_STDBY nRST_STDBY           // 1 bits @ 13
#define FLASH_OPTR_1_IWDG_SW IWDG_SW              // 1 bits @ 16
#define FLASH_OPTR_1_IWDG_STOP IWDG_STOP            // 1 bits @ 17
#define FLASH_OPTR_1_IWDG_STDBY IWDG_STDBY           // 1 bits @ 18
#define FLASH_OPTR_1_WWDG_SW WWDG_SW              // 1 bits @ 19
#define FLASH_OPTR_1_nBOOT1  nBOOT1               // 1 bits @ 23
#define FLASH_PCROP1ER
#define FLASH_PCROP1SR
#define FLASH_SR_1_SIZERR    SIZERR               // 1 bits @ 6
#define FLASH_SR_1_MISERR    MISERR               // 1 bits @ 8
#define FLASH_SR_1_FASTERR   FASTERR              // 1 bits @ 9
#define FLASH_SR_1_OPTVERR   OPTVERR              // 1 bits @ 15
#define FLASH_SR_2_PROGERR   PROGERR              // 1 bits @ 3
#define FLASH_SR_2_RDERR     RDERR                // 1 bits @ 14
#define FLASH_WRP1AR
#define FLASH_WRP1BR
#define FLASH_MAP3_PDKEYR    PDKEYR_TypeDef PDKEYR
#define FLASH_MAP2_KEYR      KEYR_TypeDef KEYR
#define FLASH_MAP3_OPTKEYR   OPTKEYR_TypeDef OPTKEYR
#define FLASH_MAP3_SR        SR_TypeDef SR
#define FLASH_MAP3_CR        CR_TypeDef CR
#define FLASH_MAP3_ECCR      ECCR_TypeDef ECCR
#define FLASH_MAP4_OPTR      OPTR_TypeDef OPTR
#define FLASH_MAP1_PCROP1SR  PCROP1SR_TypeDef PCROP1SR
#define FLASH_MAP1_PCROP1ER  PCROP1ER_TypeDef PCROP1ER
#define FLASH_MAP1_WRP1AR    WRP1AR_TypeDef WRP1AR
#define FLASH_MAP1_WRP1BR    WRP1BR_TypeDef WRP1BR
#else
#define FLASH_ACR_0_RUN_PD
#define FLASH_ACR_0_SLEEP_PD
#define FLASH_CR_0_OPTLOCK
#define FLASH_CR_1_OPTSTRT
#define FLASH_CR_1_FSTPG
#define FLASH_CR_1_OBL_LAUNCH
#define FLASH_OPTR_0_nRST_SHDW
#define FLASH_OPTR_0_SRAM2_PE
#define FLASH_OPTR_0_SRAM2_RST
#define FLASH_OPTR_1_RDP
#define FLASH_OPTR_1_BOR_LEV
#define FLASH_OPTR_1_nRST_STOP
#define FLASH_OPTR_1_nRST_STDBY
#define FLASH_OPTR_1_IWDG_SW
#define FLASH_OPTR_1_IWDG_STOP
#define FLASH_OPTR_1_IWDG_STDBY
#define FLASH_OPTR_1_WWDG_SW
#define FLASH_OPTR_1_nBOOT1
#define FLASH_SR_1_SIZERR
#define FLASH_SR_1_MISERR
#define FLASH_SR_1_FASTERR
#define FLASH_SR_1_OPTVERR
#define FLASH_SR_2_PROGERR
#define FLASH_SR_2_RDERR
#define FLASH_MAP3_PDKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_KEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP3_OPTKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP3_SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP3_CR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP3_ECCR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_OPTR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_PCROP1SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_PCROP1ER __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_WRP1AR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_WRP1BR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F101x6 ) || defined(STM32F101xB ) || defined(STM32F101xE ) || defined(STM32F101xG ) ||\
    defined(STM32F102x6 ) || defined(STM32F102xB ) || defined(STM32F103x6 ) || defined(STM32F103xB ) ||\
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F3     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) ||\
    defined(STM32L1     ) || defined(STM32L4     ) 
#define FLASH_ACR_1
#endif

#if defined(STM32F101x6 ) || defined(STM32F101xB ) || defined(STM32F101xE ) || defined(STM32F101xG ) ||\
    defined(STM32F102x6 ) || defined(STM32F102xB ) || defined(STM32F103x6 ) || defined(STM32F103xB ) ||\
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F3     ) || defined(STM32H7     ) || defined(STM32L4     ) 
#define FLASH_ACR_1_LATENCY  LATENCY              // 3 bits @ 0
#else
#define FLASH_ACR_1_LATENCY
#endif

#if defined(STM32L0     ) || defined(STM32L1     ) 
#define FLASH_ACR_1_SLEEP_PD SLEEP_PD             // 1 bits @ 3
#define FLASH_ACR_2_RUN_PD   RUN_PD               // 1 bits @ 4
#define FLASH_ACR_3
#define FLASH_PECR
#define FLASH_PEKEYR
#define FLASH_PRGKEYR
#define FLASH_SR_0_PGAERR    PGAERR               // 1 bits @ 9
#define FLASH_SR_0_SIZERR    SIZERR               // 1 bits @ 10
#define FLASH_SR_0_OPTVERR   OPTVERR              // 1 bits @ 11
#define FLASH_SR_1_READY     READY                // 1 bits @ 3
#define FLASH_SR_2_WRPERR    WRPERR               // 1 bits @ 8
#define FLASH_SR_3_EOP       EOP                  // 1 bits @ 1
#define FLASH_SR_4
#define FLASH_MAP2_PECR      PECR_TypeDef PECR
#define FLASH_MAP1_PDKEYR    PDKEYR_TypeDef PDKEYR
#define FLASH_MAP2_PEKEYR    PEKEYR_TypeDef PEKEYR
#define FLASH_MAP2_PRGKEYR   PRGKEYR_TypeDef PRGKEYR
#define FLASH_MAP4_OPTKEYR   OPTKEYR_TypeDef OPTKEYR
#define FLASH_MAP1_SR        SR_TypeDef SR
#else
#define FLASH_ACR_1_SLEEP_PD
#define FLASH_ACR_2_RUN_PD
#define FLASH_SR_0_PGAERR
#define FLASH_SR_0_SIZERR
#define FLASH_SR_0_OPTVERR
#define FLASH_SR_1_READY
#define FLASH_SR_2_WRPERR
#define FLASH_SR_3_EOP
#define FLASH_MAP2_PECR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_PDKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_PEKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_PRGKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_OPTKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_SR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32H7     ) 
#define FLASH_ACR_1_WRHIGHFREQ WRHIGHFREQ           // 2 bits @ 4
#define FLASH_BOOT
#define FLASH_CCR
#define FLASH_CR_0_BER       BER                  // 1 bits @ 3
#define FLASH_CR_0_WRPERRIE  WRPERRIE             // 1 bits @ 17
#define FLASH_CR_0_PGSERRIE  PGSERRIE             // 1 bits @ 18
#define FLASH_CR_0_STRBERRIE STRBERRIE            // 1 bits @ 19
#define FLASH_CR_0_INCERRIE  INCERRIE             // 1 bits @ 21
#define FLASH_CR_0_OPERRIE   OPERRIE              // 1 bits @ 22
#define FLASH_CR_0_RDPERRIE  RDPERRIE             // 1 bits @ 23
#define FLASH_CR_0_RDSERRIE  RDSERRIE             // 1 bits @ 24
#define FLASH_CR_0_SNECCERRIE SNECCERRIE           // 1 bits @ 25
#define FLASH_CR_0_CRCENDIE  CRCENDIE             // 1 bits @ 27
#define FLASH_CR_1_CRC_EN    CRC_EN               // 1 bits @ 15
#define FLASH_CR_1_DBECCERRIE DBECCERRIE           // 1 bits @ 26
#define FLASH_CR_2_LOCK      LOCK                 // 1 bits @ 0
#define FLASH_CR_2_PG        PG                   // 1 bits @ 1
#define FLASH_CR_2_SER       SER                  // 1 bits @ 2
#define FLASH_CR_2_START     START                // 1 bits @ 7
#define FLASH_CR_2_EOPIE     EOPIE                // 1 bits @ 16
#define FLASH_CR_3
#define FLASH_CR1
#define FLASH_CRCCR
#define FLASH_CRCDATA
#define FLASH_CRCDATA2
#define FLASH_CRCEADDR
#define FLASH_CRCSADDR
#define FLASH_ECC_FA
#define FLASH_KEYR1
#define FLASH_OPTCCR
#define FLASH_OPTCR_0_MER    MER                  // 1 bits @ 3
#define FLASH_OPTCR_1_OPTSTART OPTSTART             // 1 bits @ 1
#define FLASH_OPTCR_2_SWAP_BANK SWAP_BANK            // 1 bits @ 31
#define FLASH_OPTCR_3
#define FLASH_OPTSR
#define FLASH_PRAR
#define FLASH_SCAR
#define FLASH_SR_0_CRC_BUSY  CRC_BUSY             // 1 bits @ 3
#define FLASH_SR_0_WRPERR    WRPERR               // 1 bits @ 17
#define FLASH_SR_0_STRBERR   STRBERR              // 1 bits @ 19
#define FLASH_SR_0_INCERR    INCERR               // 1 bits @ 21
#define FLASH_SR_0_OPERR     OPERR                // 1 bits @ 22
#define FLASH_SR_0_RDPERR    RDPERR               // 1 bits @ 23
#define FLASH_SR_0_RDSERR    RDSERR               // 1 bits @ 24
#define FLASH_SR_0_SNECCERR  SNECCERR             // 1 bits @ 25
#define FLASH_SR_0_DBECCERR  DBECCERR             // 1 bits @ 26
#define FLASH_SR_0_CRCEND    CRCEND               // 1 bits @ 27
#define FLASH_SR_1_QW        QW                   // 1 bits @ 2
#define FLASH_SR_1_PGSERR    PGSERR               // 1 bits @ 18
#define FLASH_SR_2_WBNE      WBNE                 // 1 bits @ 1
#define FLASH_SR_2_EOP       EOP                  // 1 bits @ 16
#define FLASH_SR1
#define FLASH_WPSN
#define FLASH_MAP1_KEYR1     uint32_t KEYR1
#define FLASH_MAP1_CR1       uint32_t CR1
#define FLASH_MAP1_SR1       uint32_t SR1
#define FLASH_MAP2_CCR1      CCR_TypeDef CCR1
#define FLASH_MAP2_OPTCR     OPTCR_TypeDef OPTCR
#define FLASH_MAP2_OPTSR_CUR OPTSR_TypeDef OPTSR_CUR
#define FLASH_MAP1_OPTSR_PRG OPTSR_TypeDef OPTSR_PRG
#define FLASH_MAP0_OPTCCR    OPTCCR_TypeDef OPTCCR
#define FLASH_MAP0_PRAR_CUR1 PRAR_TypeDef PRAR_CUR1
#define FLASH_MAP0_PRAR_PRG1 PRAR_TypeDef PRAR_PRG1
#define FLASH_MAP0_SCAR_CUR1 SCAR_TypeDef SCAR_CUR1
#define FLASH_MAP0_SCAR_PRG1 SCAR_TypeDef SCAR_PRG1
#define FLASH_MAP0_WPSN_CUR1 WPSN_TypeDef WPSN_CUR1
#define FLASH_MAP0_WPSN_PRG1 WPSN_TypeDef WPSN_PRG1
#define FLASH_MAP0_BOOT_CUR  BOOT_TypeDef BOOT_CUR
#define FLASH_MAP1_BOOT_PRG  BOOT_TypeDef BOOT_PRG
#define FLASH_MAP1_CRCCR1    CRCCR_TypeDef CRCCR1
#define FLASH_MAP1_CRCSADD1  CRCSADDR_TypeDef CRCSADD1
#define FLASH_MAP0_CRCEADD1  CRCEADDR_TypeDef CRCEADD1
#define FLASH_MAP0_CRCDATA   CRCDATA_TypeDef CRCDATA
#define FLASH_MAP0_ECC_FA1   ECC_FA_TypeDef ECC_FA1
#define FLASH_MAP1_KEYR2     uint32_t KEYR2
#define FLASH_MAP1_CR2       CR2_TypeDef CR2
#define FLASH_MAP1_SR2       SR2_TypeDef SR2
#define FLASH_MAP0_CCR2      CCR_TypeDef CCR2
#define FLASH_MAP0_PRAR_CUR2 PRAR_TypeDef PRAR_CUR2
#define FLASH_MAP0_PRAR_PRG2 PRAR_TypeDef PRAR_PRG2
#define FLASH_MAP0_SCAR_CUR2 SCAR_TypeDef SCAR_CUR2
#define FLASH_MAP0_SCAR_PRG2 SCAR_TypeDef SCAR_PRG2
#define FLASH_MAP0_WPSN_CUR2 WPSN_TypeDef WPSN_CUR2
#define FLASH_MAP0_WPSN_PRG2 WPSN_TypeDef WPSN_PRG2
#define FLASH_MAP0_CRCCR2    CRCCR_TypeDef CRCCR2
#define FLASH_MAP0_CRCSADD2  CRCSADDR_TypeDef CRCSADD2
#define FLASH_MAP0_CRCEADD2  CRCEADDR_TypeDef CRCEADD2
#define FLASH_MAP0_CRCDATA2  uint32_t CRCDATA2
#define FLASH_MAP0_ECC_FA2   ECC_FA_TypeDef ECC_FA2
#else
#define FLASH_ACR_1_WRHIGHFREQ
#define FLASH_CR_0_BER
#define FLASH_CR_0_WRPERRIE
#define FLASH_CR_0_PGSERRIE
#define FLASH_CR_0_STRBERRIE
#define FLASH_CR_0_INCERRIE
#define FLASH_CR_0_OPERRIE
#define FLASH_CR_0_RDPERRIE
#define FLASH_CR_0_RDSERRIE
#define FLASH_CR_0_SNECCERRIE
#define FLASH_CR_0_CRCENDIE
#define FLASH_CR_1_CRC_EN
#define FLASH_CR_1_DBECCERRIE
#define FLASH_CR_2_LOCK
#define FLASH_CR_2_PG
#define FLASH_CR_2_SER
#define FLASH_CR_2_START
#define FLASH_CR_2_EOPIE
#define FLASH_OPTCR_0_MER
#define FLASH_OPTCR_1_OPTSTART
#define FLASH_OPTCR_2_SWAP_BANK
#define FLASH_SR_0_CRC_BUSY
#define FLASH_SR_0_WRPERR
#define FLASH_SR_0_STRBERR
#define FLASH_SR_0_INCERR
#define FLASH_SR_0_OPERR
#define FLASH_SR_0_RDPERR
#define FLASH_SR_0_RDSERR
#define FLASH_SR_0_SNECCERR
#define FLASH_SR_0_DBECCERR
#define FLASH_SR_0_CRCEND
#define FLASH_SR_1_QW
#define FLASH_SR_1_PGSERR
#define FLASH_SR_2_WBNE
#define FLASH_SR_2_EOP
#define FLASH_MAP1_KEYR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_CR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_SR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_CCR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_OPTCR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_OPTSR_CUR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_OPTSR_PRG __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTCCR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_PRAR_CUR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_PRAR_PRG1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SCAR_CUR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SCAR_PRG1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_WPSN_CUR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_WPSN_PRG1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_BOOT_CUR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_BOOT_PRG __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_CRCCR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_CRCSADD1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCEADD1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCDATA __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_ECC_FA1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_KEYR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_CR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_SR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CCR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_PRAR_CUR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_PRAR_PRG2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SCAR_CUR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SCAR_PRG2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_WPSN_CUR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_WPSN_PRG2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCCR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCSADD2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCEADD2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCDATA2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_ECC_FA2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F7     ) 
#define FLASH_ACR_1_ARTEN    ARTEN                // 1 bits @ 9
#define FLASH_ACR_1_ARTRST   ARTRST               // 1 bits @ 11
#define FLASH_OPTCR_1_WWDG_SW WWDG_SW              // 1 bits @ 4
#define FLASH_OPTCR_1_IWDG_SW IWDG_SW              // 1 bits @ 5
#define FLASH_OPTCR_1_IWDG_STOP IWDG_STOP            // 1 bits @ 31
#define FLASH_OPTCR_2_IWDG_STDBY IWDG_STDBY           // 1 bits @ 30
#define FLASH_OPTCR1_0_BOOT_ADD0 BOOT_ADD0            // 16 bits @ 0
#define FLASH_OPTCR1_1
#define FLASH_SR_1_ERSERR    ERSERR               // 1 bits @ 7
#else
#define FLASH_ACR_1_ARTEN
#define FLASH_ACR_1_ARTRST
#define FLASH_OPTCR_1_WWDG_SW
#define FLASH_OPTCR_1_IWDG_SW
#define FLASH_OPTCR_1_IWDG_STOP
#define FLASH_OPTCR_2_IWDG_STDBY
#define FLASH_OPTCR1_0_BOOT_ADD0
#define FLASH_SR_1_ERSERR
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) ||\
    defined(STM32L1     ) || defined(STM32L4P    ) 
#define FLASH_ACR_2
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L4P    ) 
#define FLASH_ACR_2_LATENCY  LATENCY              // 4 bits @ 0
#else
#define FLASH_ACR_2_LATENCY
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) 
#define FLASH_AR
#define FLASH_CR_0_OPTPG     OPTPG                // 1 bits @ 4
#define FLASH_CR_0_OPTER     OPTER                // 1 bits @ 5
#define FLASH_CR_0_STRT      STRT                 // 1 bits @ 6
#define FLASH_CR_0_LOCK      LOCK                 // 1 bits @ 7
#define FLASH_CR_0_OPTWRE    OPTWRE               // 1 bits @ 9
#define FLASH_CR_0_ERRIE     ERRIE                // 1 bits @ 10
#define FLASH_CR_0_EOPIE     EOPIE                // 1 bits @ 12
#define FLASH_OBR_0
#define FLASH_SR_0_PGERR     PGERR                // 1 bits @ 2
#define FLASH_SR_0_EOP       EOP                  // 1 bits @ 5
#define FLASH_MAP0_AR        AR_TypeDef AR
#else
#define FLASH_CR_0_OPTPG
#define FLASH_CR_0_OPTER
#define FLASH_CR_0_STRT
#define FLASH_CR_0_LOCK
#define FLASH_CR_0_OPTWRE
#define FLASH_CR_0_ERRIE
#define FLASH_CR_0_EOPIE
#define FLASH_SR_0_PGERR
#define FLASH_SR_0_EOP
#define FLASH_MAP0_AR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F101xG ) || defined(STM32F103xG ) 
#define FLASH_AR_1
#define FLASH_AR2
#define FLASH_OBR_0_BFB2     BFB2                 // 1 bits @ 5
#define FLASH_OBR_3_USER     USER                 // 4 bits @ 2
#define FLASH_OPTKEYR_1
#define FLASH_MAP0_KEYR2     uint32_t KEYR2
#define FLASH_MAP0_SR2       SR2_TypeDef SR2
#define FLASH_MAP0_CR2       CR2_TypeDef CR2
#define FLASH_MAP0_AR2       uint32_t AR2
#else
#define FLASH_OBR_0_BFB2
#define FLASH_OBR_3_USER
#define FLASH_MAP0_KEYR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_AR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L4P    ) 
#define FLASH_CFGR
#define FLASH_ECCR_0_ECCC2   ECCC2                // 1 bits @ 28
#define FLASH_ECCR_0_ECCD2   ECCD2                // 1 bits @ 29
#define FLASH_ECCR_1
#define FLASH_OPTR_2_DBANK   DBANK                // 1 bits @ 22
#define FLASH_OPTR_3
#define FLASH_PCROP1ER_2
#define FLASH_PCROP1SR_2
#define FLASH_PCROP2ER_1
#define FLASH_PCROP2SR_1
#define FLASH_MAP1_CFGR      CFGR_TypeDef CFGR
#else
#define FLASH_ECCR_0_ECCC2
#define FLASH_ECCR_0_ECCD2
#define FLASH_OPTR_2_DBANK
#define FLASH_MAP1_CFGR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_CR
#define FLASH_CR_0_PG        PG                   // 1 bits @ 0
#define FLASH_KEYR
#else
#define FLASH_CR_0_PG
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define FLASH_CR_0
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define FLASH_CR_0_PER       PER                  // 1 bits @ 1
#else
#define FLASH_CR_0_PER
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) 
#define FLASH_CR_0_MER       MER                  // 1 bits @ 2
#define FLASH_MAP0_KEYR      KEYR_TypeDef KEYR
#define FLASH_MAP0_SR        SR_TypeDef SR
#define FLASH_MAP0_CR        CR_TypeDef CR
#else
#define FLASH_CR_0_MER
#define FLASH_MAP0_KEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define FLASH_CR_0_BKER      BKER                 // 1 bits @ 11
#define FLASH_OPTR_2
#define FLASH_PCROP2ER
#define FLASH_PCROP2SR
#define FLASH_WRP2AR
#define FLASH_WRP2BR
#define FLASH_MAP2_PCROP2SR  PCROP2SR_TypeDef PCROP2SR
#define FLASH_MAP0_PCROP2ER  PCROP2ER_TypeDef PCROP2ER
#define FLASH_MAP1_WRP2AR    WRP2AR_TypeDef WRP2AR
#define FLASH_MAP2_WRP2BR    WRP2BR_TypeDef WRP2BR
#else
#define FLASH_CR_0_BKER
#define FLASH_MAP2_PCROP2SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_PCROP2ER __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_WRP2AR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_WRP2BR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) 
#define FLASH_CR_0_OBL_LAUNCH OBL_LAUNCH           // 1 bits @ 13
#define FLASH_OBR_0_IWDG_SW  IWDG_SW              // 1 bits @ 8
#define FLASH_OBR_0_nRST_STOP nRST_STOP            // 1 bits @ 9
#define FLASH_OBR_0_nRST_STDBY nRST_STDBY           // 1 bits @ 10
#define FLASH_OBR_0_nBOOT1   nBOOT1               // 1 bits @ 12
#define FLASH_OBR_0_VDDA_MONITOR VDDA_MONITOR         // 1 bits @ 13
#define FLASH_OBR_0_DATA0    DATA0                // 8 bits @ 16
#define FLASH_OBR_0_DATA1    DATA1                // 8 bits @ 24
#else
#define FLASH_CR_0_OBL_LAUNCH
#define FLASH_OBR_0_IWDG_SW
#define FLASH_OBR_0_nRST_STOP
#define FLASH_OBR_0_nRST_STDBY
#define FLASH_OBR_0_nBOOT1
#define FLASH_OBR_0_VDDA_MONITOR
#define FLASH_OBR_0_DATA0
#define FLASH_OBR_0_DATA1
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F765xx ) ||\
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) ||\
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define FLASH_CR_0_MER2      MER2                 // 1 bits @ 15
#else
#define FLASH_CR_0_MER2
#endif

#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_CR_0_RDERRIE   RDERRIE              // 1 bits @ 26
#else
#define FLASH_CR_0_RDERRIE
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_CR_1
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) 
#define FLASH_CR_1_SER       SER                  // 1 bits @ 1
#define FLASH_CR_1_PSIZE     PSIZE                // 2 bits @ 8
#define FLASH_OPTCR_0_OPTSTRT OPTSTRT              // 1 bits @ 1
#define FLASH_OPTCR_0_nRST_STOP nRST_STOP            // 1 bits @ 6
#define FLASH_OPTCR_0_nRST_STDBY nRST_STDBY           // 1 bits @ 7
#define FLASH_OPTCR_0_RDP    RDP                  // 8 bits @ 8
#define FLASH_OPTCR_1_BOR_LEV BOR_LEV              // 2 bits @ 2
#define FLASH_SR_0_PGPERR    PGPERR               // 1 bits @ 6
#define FLASH_MAP1_OPTCR     OPTCR_TypeDef OPTCR
#else
#define FLASH_CR_1_SER
#define FLASH_CR_1_PSIZE
#define FLASH_OPTCR_0_OPTSTRT
#define FLASH_OPTCR_0_nRST_STOP
#define FLASH_OPTCR_0_nRST_STDBY
#define FLASH_OPTCR_0_RDP
#define FLASH_OPTCR_1_BOR_LEV
#define FLASH_SR_0_PGPERR
#define FLASH_MAP1_OPTCR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F765xx ) ||\
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_CR_1_MER1      MER1                 // 1 bits @ 2
#else
#define FLASH_CR_1_MER1
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F765xx ) || defined(STM32F767xx ) ||\
    defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) 
#define FLASH_CR_1_SNB       SNB                  // 5 bits @ 3
#else
#define FLASH_CR_1_SNB
#endif

#if defined(STM32F7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_CR_1_ERRIE     ERRIE                // 1 bits @ 25
#define FLASH_SR_1_OPERR     OPERR                // 1 bits @ 1
#else
#define FLASH_CR_1_ERRIE
#define FLASH_SR_1_OPERR
#endif

#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) ||\
    defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32H7     ) 
#define FLASH_CR_2
#endif

#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) ||\
    defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) 
#define FLASH_CR_2_SNB       SNB                  // 4 bits @ 3
#define FLASH_OPTCR_2_nWRP   nWRP                 // 8 bits @ 16
#else
#define FLASH_CR_2_SNB
#define FLASH_OPTCR_2_nWRP
#endif

#if defined(STM32F101xG ) || defined(STM32F103xG ) || defined(STM32H7     ) 
#define FLASH_CR2
#define FLASH_KEYR2
#define FLASH_SR2
#endif

#if defined(STM32L4     ) 
#define FLASH_ECCR_0_ADDR_ECC ADDR_ECC             // 19 bits @ 0
#define FLASH_ECCR_0_SYSF_ECC SYSF_ECC             // 1 bits @ 20
#else
#define FLASH_ECCR_0_ADDR_ECC
#define FLASH_ECCR_0_SYSF_ECC
#endif

#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define FLASH_ECCR_0_BK_ECC  BK_ECC               // 1 bits @ 19
#define FLASH_OPTR_2_DUALBANK DUALBANK             // 1 bits @ 21
#define FLASH_PCROP2ER_0
#define FLASH_PCROP2SR_0
#else
#define FLASH_ECCR_0_BK_ECC
#define FLASH_OPTR_2_DUALBANK
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L1     ) 
#define FLASH_OBR
#define FLASH_MAP0_OBR       OBR_TypeDef OBR
#else
#define FLASH_MAP0_OBR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) 
#define FLASH_OBR_0_RDPRT1   RDPRT1               // 1 bits @ 1
#define FLASH_OBR_0_RDPRT2   RDPRT2               // 1 bits @ 2
#define FLASH_OBR_0_RAM_PARITY_CHECK RAM_PARITY_CHECK     // 1 bits @ 14
#else
#define FLASH_OBR_0_RDPRT1
#define FLASH_OBR_0_RDPRT2
#define FLASH_OBR_0_RAM_PARITY_CHECK
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) 
#define FLASH_OBR_0_nBOOT0   nBOOT0               // 1 bits @ 11
#define FLASH_OBR_0_BOOT_SEL BOOT_SEL             // 1 bits @ 15
#define FLASH_OBR_1_USER     USER                 // 8 bits @ 8
#else
#define FLASH_OBR_0_nBOOT0
#define FLASH_OBR_0_BOOT_SEL
#define FLASH_OBR_1_USER
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F1     ) 
#define FLASH_OBR_1
#endif

#if defined(STM32F1     ) 
#define FLASH_OBR_1_RDPRT    RDPRT                // 1 bits @ 1
#define FLASH_OBR_1_IWDG_SW  IWDG_SW              // 1 bits @ 2
#define FLASH_OBR_1_nRST_STOP nRST_STOP            // 1 bits @ 3
#define FLASH_OBR_1_nRST_STDBY nRST_STDBY           // 1 bits @ 4
#define FLASH_OBR_1_DATA1    DATA1                // 8 bits @ 18
#define FLASH_OBR_2_DATA0    DATA0                // 8 bits @ 10
#else
#define FLASH_OBR_1_RDPRT
#define FLASH_OBR_1_IWDG_SW
#define FLASH_OBR_1_nRST_STOP
#define FLASH_OBR_1_nRST_STDBY
#define FLASH_OBR_1_DATA1
#define FLASH_OBR_2_DATA0
#endif

#if defined(STM32F1     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32L1     ) 
#define FLASH_OBR_2
#endif

#if defined(STM32F373xC ) || defined(STM32F378xx ) 
#define FLASH_OBR_2_LEVEL1_PROT LEVEL1_PROT          // 1 bits @ 1
#define FLASH_OBR_3_SDADC12_VDD_MONITOR SDADC12_VDD_MONITOR  // 1 bits @ 15
#define FLASH_OBR_5_LEVEL2_PROT LEVEL2_PROT          // 1 bits @ 2
#else
#define FLASH_OBR_2_LEVEL1_PROT
#define FLASH_OBR_3_SDADC12_VDD_MONITOR
#define FLASH_OBR_5_LEVEL2_PROT
#endif

#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101x6 ) || defined(STM32F101xB ) ||\
    defined(STM32F101xE ) || defined(STM32F102x6 ) || defined(STM32F102xB ) || defined(STM32F103x6 ) ||\
    defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F105xC ) || defined(STM32F107xC ) 
#define FLASH_OBR_2_USER     USER                 // 3 bits @ 2
#else
#define FLASH_OBR_2_USER
#endif

#if defined(STM32L151xBA) || defined(STM32L151xC ) || defined(STM32L152xBA) || defined(STM32L152xC ) ||\
    defined(STM32L162xC ) 
#define FLASH_OBR_2_SPRMOD   SPRMOD               // 1 bits @ 8
#else
#define FLASH_OBR_2_SPRMOD
#endif

#if defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xD ) ||\
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xD ) || defined(STM32L162xDx) ||\
    defined(STM32L162xE ) 
#define FLASH_OBR_2_nRST_BFB2 nRST_BFB2            // 1 bits @ 23
#define FLASH_WRPR3
#define FLASH_MAP0_WRPR3     WRPR3_TypeDef WRPR3
#else
#define FLASH_OBR_2_nRST_BFB2
#define FLASH_MAP0_WRPR3 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F101xG ) || defined(STM32F103xG ) || defined(STM32F3     ) || defined(STM32L1     ) 
#define FLASH_OBR_3
#endif

#if defined(STM32F3     ) 
#define FLASH_OBR_3_SRAM_PE  SRAM_PE              // 1 bits @ 14
#else
#define FLASH_OBR_3_SRAM_PE
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) ||\
    defined(STM32L100xB ) || defined(STM32L100xBA) || defined(STM32L100xC ) || defined(STM32L151xB ) ||\
    defined(STM32L151xBA) || defined(STM32L151xC ) || defined(STM32L152xB ) || defined(STM32L152xBA) ||\
    defined(STM32L152xC ) || defined(STM32L162xC ) 
#define FLASH_OBR_4
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F398xx ) 
#define FLASH_OBR_4_RDPRT    RDPRT                // 2 bits @ 1
#else
#define FLASH_OBR_4_RDPRT
#endif

#if defined(STM32L100xB ) || defined(STM32L100xBA) || defined(STM32L100xC ) || defined(STM32L151xB ) ||\
    defined(STM32L151xBA) || defined(STM32L151xC ) || defined(STM32L152xB ) || defined(STM32L152xBA) ||\
    defined(STM32L152xC ) || defined(STM32L162xC ) 
#define FLASH_OBR_4_USER     USER                 // 3 bits @ 20
#else
#define FLASH_OBR_4_USER
#endif

#if defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32L151xCA) || defined(STM32L151xD ) ||\
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xCA) || defined(STM32L152xD ) ||\
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xCA) || defined(STM32L162xD ) ||\
    defined(STM32L162xDx) || defined(STM32L162xE ) 
#define FLASH_OBR_5
#endif

#if defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) ||\
    defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) ||\
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) 
#define FLASH_OBR_5_USER     USER                 // 4 bits @ 20
#else
#define FLASH_OBR_5_USER
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) 
#define FLASH_OPTCR
#endif

#if defined(STM32F205xx ) 
#define FLASH_OPTCR_0_BOR_LEV BOR_LEV              // 1 bits @ 2
#else
#define FLASH_OPTCR_0_BOR_LEV
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) 
#define FLASH_OPTCR_0_BFB2   BFB2                 // 1 bits @ 4
#define FLASH_OPTCR_0_DB1M   DB1M                 // 1 bits @ 30
#define FLASH_OPTCR_0_SPRMOD SPRMOD               // 1 bits @ 31
#else
#define FLASH_OPTCR_0_BFB2
#define FLASH_OPTCR_0_DB1M
#define FLASH_OPTCR_0_SPRMOD
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) 
#define FLASH_OPTCR_0_WDG_SW WDG_SW               // 1 bits @ 5
#define FLASH_SR_0_SOP       SOP                  // 1 bits @ 1
#else
#define FLASH_OPTCR_0_WDG_SW
#define FLASH_SR_0_SOP
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) ||\
    defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) ||\
    defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) 
#define FLASH_OPTCR_0_nWRP   nWRP                 // 12 bits @ 16
#else
#define FLASH_OPTCR_0_nWRP
#endif

#if defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) ||\
    defined(STM32F779xx ) 
#define FLASH_OPTCR_0_nDBOOT nDBOOT               // 1 bits @ 28
#define FLASH_OPTCR_0_nDBANK nDBANK               // 1 bits @ 29
#else
#define FLASH_OPTCR_0_nDBOOT
#define FLASH_OPTCR_0_nDBANK
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx ) 
#define FLASH_OPTCR_1_nWRP   nWRP                 // 15 bits @ 16
#else
#define FLASH_OPTCR_1_nWRP
#endif

#if defined(STM32F7     ) || defined(STM32H7     ) 
#define FLASH_OPTCR_2
#endif

#if defined(STM32F4     ) || defined(STM32F7     ) 
#define FLASH_OPTCR1
#define FLASH_MAP0_OPTCR1    OPTCR1_TypeDef OPTCR1
#else
#define FLASH_MAP0_OPTCR1 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F4     ) 
#define FLASH_OPTCR1_0_nWRP  nWRP                 // 12 bits @ 16
#else
#define FLASH_OPTCR1_0_nWRP
#endif

#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) 
#define FLASH_OPTCR2
#define FLASH_MAP1_OPTCR2    OPTCR2_TypeDef OPTCR2
#else
#define FLASH_MAP1_OPTCR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) ||\
    defined(STM32L1     ) 
#define FLASH_OPTKEYR_0
#endif

#if defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_OPTR
#endif

#if defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) 
#define FLASH_OPTR_0_BFB2    BFB2                 // 1 bits @ 23
#define FLASH_PECR_0_NZDISABLE NZDISABLE            // 1 bits @ 22
#else
#define FLASH_OPTR_0_BFB2
#define FLASH_PECR_0_NZDISABLE
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) ||\
    defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define FLASH_OPTR_0_nSWBOOT0 nSWBOOT0             // 1 bits @ 26
#define FLASH_OPTR_0_nBOOT0  nBOOT0               // 1 bits @ 27
#define FLASH_SR_3_PEMPTY    PEMPTY               // 1 bits @ 17
#else
#define FLASH_OPTR_0_nSWBOOT0
#define FLASH_OPTR_0_nBOOT0
#define FLASH_SR_3_PEMPTY
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) ||\
    defined(STM32L443xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) 
#define FLASH_PCROP1ER_0_PCROP1_END PCROP1_END           // 16 bits @ 0
#define FLASH_PCROP1SR_0
#else
#define FLASH_PCROP1ER_0_PCROP1_END
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) 
#define FLASH_PCROP1ER_1
#define FLASH_PCROP1SR_1
#endif

#if defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_PDKEYR
#endif

#if defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L151xD ) || defined(STM32L151xDx) ||\
    defined(STM32L151xE ) || defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) ||\
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) 
#define FLASH_PECR_0_PARALLBANK PARALLBANK           // 1 bits @ 15
#else
#define FLASH_PECR_0_PARALLBANK
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32H7     ) ||\
    defined(STM32L0     ) || defined(STM32L1     ) 
#define FLASH_SR_0_BSY       BSY                  // 1 bits @ 0
#else
#define FLASH_SR_0_BSY
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) 
#define FLASH_SR_0_WRPRTERR  WRPRTERR             // 1 bits @ 4
#else
#define FLASH_SR_0_WRPRTERR
#endif

#if defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F722xx ) ||\
    defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) 
#define FLASH_SR_0_RDERR     RDERR                // 1 bits @ 8
#else
#define FLASH_SR_0_RDERR
#endif

#if defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) ||\
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) ||\
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) ||\
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) 
#define FLASH_SR_0_OPTVERRUSR OPTVERRUSR           // 1 bits @ 12
#else
#define FLASH_SR_0_OPTVERRUSR
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_SR_1
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_SR_1_WRPERR    WRPERR               // 1 bits @ 4
#else
#define FLASH_SR_1_WRPERR
#endif

#if defined(STM32L0     ) || defined(STM32L100xBA) || defined(STM32L100xC ) || defined(STM32L151xBA) ||\
    defined(STM32L151xC ) || defined(STM32L152xBA) || defined(STM32L152xC ) || defined(STM32L162xC ) 
#define FLASH_SR_1_RDERR     RDERR                // 1 bits @ 13
#else
#define FLASH_SR_1_RDERR
#endif

#if defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define FLASH_SR_2
#endif

#if defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L431xx ) || defined(STM32L432xx ) ||\
    defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) ||\
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) ||\
    defined(STM32L4P    ) 
#define FLASH_SR_3
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) 
#define FLASH_WRPR
#define FLASH_MAP0_WRPR      WRPR_TypeDef WRPR
#else
#define FLASH_MAP0_WRPR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32L0     ) 
#define FLASH_WRPR_0
#endif

#if defined(STM32F1     ) || defined(STM32F3     ) 
#define FLASH_WRPR_1
#endif

#if defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L100xC ) || defined(STM32L151xC ) ||\
    defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) ||\
    defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) ||\
    defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) ||\
    defined(STM32L162xDx) || defined(STM32L162xE ) 
#define FLASH_WRPR2
#define FLASH_MAP0_WRPR2     WRPR2_TypeDef WRPR2
#else
#define FLASH_MAP0_WRPR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) ||\
    defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) ||\
    defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) ||\
    defined(STM32L162xE ) 
#define FLASH_WRPR2_0
#endif

#if defined(STM32L151xDx) || defined(STM32L152xDx) || defined(STM32L162xDx) 
#define FLASH_WRPR2_1
#define FLASH_WRPR4_0
#endif

#if defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xDx) || defined(STM32L152xE ) ||\
    defined(STM32L162xDx) || defined(STM32L162xE ) 
#define FLASH_WRPR4
#define FLASH_MAP0_WRPR4     WRPR4_TypeDef WRPR4
#else
#define FLASH_MAP0_WRPR4 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L151xE ) || defined(STM32L152xE ) || defined(STM32L162xE ) 
#define FLASH_WRPR4_1
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) 
#define FLASH_MAP0_OPTKEYR   OPTKEYR_TypeDef OPTKEYR
#else
#define FLASH_MAP0_OPTKEYR __SOOL_PERIPH_PADDING_4
#endif

//endregion

namespace sool
{
	namespace core
	{
		class FLASH
		{
			
			
			public :
			
			#ifdef FLASH_ACR
			struct ACR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_ACR_0
					struct
					{
						uint32_t FLASH_ACR_0_LATENCY  :1;
						uint32_t                      :1;
						uint32_t FLASH_ACR_0_ACC64    :1;
						uint32_t FLASH_ACR_0_HLFCYA   :1;
						uint32_t FLASH_ACR_0_PRFTBE   :1;
						uint32_t FLASH_ACR_0_PRFTBS   :1;
						uint32_t FLASH_ACR_0_PRE_READ :1;
						uint32_t                      :1;
						uint32_t FLASH_ACR_0_PRFTEN   :1;
						uint32_t FLASH_ACR_0_ICEN     :1;
						uint32_t FLASH_ACR_0_DCEN     :1;
						uint32_t FLASH_ACR_0_ICRST    :1;
						uint32_t FLASH_ACR_0_DCRST    :1;
						uint32_t FLASH_ACR_0_RUN_PD   :1;
						uint32_t FLASH_ACR_0_SLEEP_PD :1;
						uint32_t                      :17;
					};
					#endif
					#ifdef FLASH_ACR_1
					struct
					{
						uint32_t FLASH_ACR_1_LATENCY  :3;
						uint32_t FLASH_ACR_1_SLEEP_PD :1;
						uint32_t FLASH_ACR_1_WRHIGHFREQ :2;
						uint32_t                      :3;
						uint32_t FLASH_ACR_1_ARTEN    :1;
						uint32_t                      :1;
						uint32_t FLASH_ACR_1_ARTRST   :1;
						uint32_t                      :20;
					};
					#endif
					#ifdef FLASH_ACR_2
					struct
					{
						uint32_t FLASH_ACR_2_LATENCY  :4;
						uint32_t FLASH_ACR_2_RUN_PD   :1;
						uint32_t FLASH_ACR_2_DISAB_BUF :1;
						uint32_t                      :26;
					};
					#endif
					#ifdef FLASH_ACR_3
					struct
					{
						uint32_t                      :1;
						uint32_t PRFTEN               :1;
						uint32_t                      :30;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_AR
			struct AR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t FAR                  :32;
					};
					#ifdef FLASH_AR_1
					struct
					{
						uint32_t FAR2                 :32;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_BOOT
			struct BOOT_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t ADD0                 :16;
					uint32_t ADD1                 :16;
			
				
			};
			#endif
			
			#ifdef FLASH_CCR
			struct CCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t                      :16;
					uint32_t CLR_EOP              :1;
					uint32_t CLR_WRPERR           :1;
					uint32_t CLR_PGSERR           :1;
					uint32_t CLR_STRBERR          :1;
					uint32_t                      :1;
					uint32_t CLR_INCERR           :1;
					uint32_t CLR_OPERR            :1;
					uint32_t CLR_RDPERR           :1;
					uint32_t CLR_RDSERR           :1;
					uint32_t CLR_SNECCERR         :1;
					uint32_t CLR_DBECCERR         :1;
					uint32_t CLR_CRCEND           :1;
					uint32_t                      :4;
			
				
			};
			#endif
			
			#ifdef FLASH_CFGR
			struct CFGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t LVEN                 :1;
					uint32_t                      :31;
			
				
			};
			#endif
			
			#ifdef FLASH_CR
			struct CR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_CR_0
					struct
					{
						uint32_t FLASH_CR_0_PG        :1;
						uint32_t FLASH_CR_0_PER       :1;
						uint32_t FLASH_CR_0_MER       :1;
						uint32_t FLASH_CR_0_BER       :1;
						uint32_t FLASH_CR_0_OPTPG     :1;
						uint32_t FLASH_CR_0_OPTER     :1;
						uint32_t FLASH_CR_0_STRT      :1;
						uint32_t FLASH_CR_0_LOCK      :1;
						uint32_t                      :1;
						uint32_t FLASH_CR_0_OPTWRE    :1;
						uint32_t FLASH_CR_0_ERRIE     :1;
						uint32_t FLASH_CR_0_BKER      :1;
						uint32_t FLASH_CR_0_EOPIE     :1;
						uint32_t FLASH_CR_0_OBL_LAUNCH :1;
						uint32_t                      :1;
						uint32_t FLASH_CR_0_MER2      :1;
						uint32_t                      :1;
						uint32_t FLASH_CR_0_WRPERRIE  :1;
						uint32_t FLASH_CR_0_PGSERRIE  :1;
						uint32_t FLASH_CR_0_STRBERRIE :1;
						uint32_t                      :1;
						uint32_t FLASH_CR_0_INCERRIE  :1;
						uint32_t FLASH_CR_0_OPERRIE   :1;
						uint32_t FLASH_CR_0_RDPERRIE  :1;
						uint32_t FLASH_CR_0_RDSERRIE  :1;
						uint32_t FLASH_CR_0_SNECCERRIE :1;
						uint32_t FLASH_CR_0_RDERRIE   :1;
						uint32_t FLASH_CR_0_CRCENDIE  :1;
						uint32_t                      :2;
						uint32_t FLASH_CR_0_OPTLOCK   :1;
						uint32_t                      :1;
					};
					#endif
					#ifdef FLASH_CR_1
					struct
					{
						uint32_t                      :1;
						uint32_t FLASH_CR_1_SER       :1;
						uint32_t FLASH_CR_1_MER1      :1;
						uint32_t FLASH_CR_1_SNB       :5;
						uint32_t FLASH_CR_1_PSIZE     :2;
						uint32_t                      :5;
						uint32_t FLASH_CR_1_CRC_EN    :1;
						uint32_t FLASH_CR_1_STRT      :1;
						uint32_t FLASH_CR_1_OPTSTRT   :1;
						uint32_t FLASH_CR_1_FSTPG     :1;
						uint32_t                      :5;
						uint32_t FLASH_CR_1_EOPIE     :1;
						uint32_t FLASH_CR_1_ERRIE     :1;
						uint32_t FLASH_CR_1_DBECCERRIE :1;
						uint32_t FLASH_CR_1_OBL_LAUNCH :1;
						uint32_t                      :3;
						uint32_t FLASH_CR_1_LOCK      :1;
					};
					#endif
					#ifdef FLASH_CR_2
					struct
					{
						uint32_t FLASH_CR_2_LOCK      :1;
						uint32_t FLASH_CR_2_PG        :1;
						uint32_t FLASH_CR_2_SER       :1;
						uint32_t FLASH_CR_2_SNB       :4;
						uint32_t FLASH_CR_2_START     :1;
						uint32_t                      :8;
						uint32_t FLASH_CR_2_EOPIE     :1;
						uint32_t                      :15;
					};
					#endif
					#ifdef FLASH_CR_3
					struct
					{
						uint32_t                      :4;
						uint32_t PSIZE                :2;
						uint32_t FW                   :1;
						uint32_t                      :1;
						uint32_t SNB                  :3;
						uint32_t                      :21;
					};
					#endif
					#ifdef FLASH_CR_4
					struct
					{
						uint32_t                      :3;
						uint32_t PNB                  :8;
						uint32_t                      :21;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_CR2
			struct CR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PG                   :1;
					uint32_t PER                  :1;
					uint32_t MER                  :1;
					uint32_t                      :3;
					uint32_t STRT                 :1;
					uint32_t LOCK                 :1;
					uint32_t                      :2;
					uint32_t ERRIE                :1;
					uint32_t                      :1;
					uint32_t EOPIE                :1;
					uint32_t                      :19;
			
				
			};
			#endif
			
			#ifdef FLASH_CRCCR
			struct CRCCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CRC_SECT             :3;
					uint32_t                      :4;
					uint32_t ALL_BANK             :1;
					uint32_t CRC_BY_SECT          :1;
					uint32_t ADD_SECT             :1;
					uint32_t CLEAN_SECT           :1;
					uint32_t                      :5;
					uint32_t START_CRC            :1;
					uint32_t CLEAN_CRC            :1;
					uint32_t                      :2;
					uint32_t CRC_BURST            :2;
					uint32_t                      :10;
			
				
			};
			#endif
			
			#ifdef FLASH_CRCDATA
			struct CRCDATA_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CRC_DATA             :32;
			
				
			};
			#endif
			
			#ifdef FLASH_CRCEADDR
			struct CRCEADDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CRC_END_ADDR         :32;
			
				
			};
			#endif
			
			#ifdef FLASH_CRCSADDR
			struct CRCSADDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t CRC_START_ADDR       :32;
			
				
			};
			#endif
			
			#ifdef FLASH_ECCR
			struct ECCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t FLASH_ECCR_0_ADDR_ECC :19;
						uint32_t FLASH_ECCR_0_BK_ECC  :1;
						uint32_t FLASH_ECCR_0_SYSF_ECC :1;
						uint32_t                      :3;
						uint32_t ECCIE                :1;
						uint32_t                      :3;
						uint32_t FLASH_ECCR_0_ECCC2   :1;
						uint32_t FLASH_ECCR_0_ECCD2   :1;
						uint32_t ECCC                 :1;
						uint32_t ECCD                 :1;
					};
					#ifdef FLASH_ECCR_1
					struct
					{
						uint32_t ADDR_ECC             :20;
						uint32_t                      :1;
						uint32_t BK_ECC               :1;
						uint32_t SYSF_ECC             :1;
						uint32_t                      :9;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_ECC_FA
			struct ECC_FA_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t FAIL_ECC_ADDR        :15;
					uint32_t                      :17;
			
				
			};
			#endif
			
			#ifdef FLASH_KEYR
			struct KEYR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t FKEYR                :32;
			
				
			};
			#endif
			
			#ifdef FLASH_OBR
			struct OBR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_OBR_0
					struct
					{
						uint32_t OPTERR               :1;
						uint32_t FLASH_OBR_0_RDPRT1   :1;
						uint32_t FLASH_OBR_0_RDPRT2   :1;
						uint32_t                      :2;
						uint32_t FLASH_OBR_0_BFB2     :1;
						uint32_t                      :2;
						uint32_t FLASH_OBR_0_IWDG_SW  :1;
						uint32_t FLASH_OBR_0_nRST_STOP :1;
						uint32_t FLASH_OBR_0_nRST_STDBY :1;
						uint32_t FLASH_OBR_0_nBOOT0   :1;
						uint32_t FLASH_OBR_0_nBOOT1   :1;
						uint32_t FLASH_OBR_0_VDDA_MONITOR :1;
						uint32_t FLASH_OBR_0_RAM_PARITY_CHECK :1;
						uint32_t FLASH_OBR_0_BOOT_SEL :1;
						uint32_t FLASH_OBR_0_DATA0    :8;
						uint32_t FLASH_OBR_0_DATA1    :8;
					};
					#endif
					#ifdef FLASH_OBR_1
					struct
					{
						uint32_t                      :1;
						uint32_t FLASH_OBR_1_RDPRT    :1;
						uint32_t FLASH_OBR_1_IWDG_SW  :1;
						uint32_t FLASH_OBR_1_nRST_STOP :1;
						uint32_t FLASH_OBR_1_nRST_STDBY :1;
						uint32_t                      :3;
						uint32_t FLASH_OBR_1_USER     :8;
						uint32_t                      :2;
						uint32_t FLASH_OBR_1_DATA1    :8;
						uint32_t                      :6;
					};
					#endif
					#ifdef FLASH_OBR_2
					struct
					{
						uint32_t                      :1;
						uint32_t FLASH_OBR_2_LEVEL1_PROT :1;
						uint32_t FLASH_OBR_2_USER     :3;
						uint32_t                      :3;
						uint32_t FLASH_OBR_2_SPRMOD   :1;
						uint32_t                      :1;
						uint32_t FLASH_OBR_2_DATA0    :8;
						uint32_t                      :2;
						uint32_t FLASH_OBR_2_IWDG_SW  :1;
						uint32_t FLASH_OBR_2_nRST_STOP :1;
						uint32_t FLASH_OBR_2_nRST_STDBY :1;
						uint32_t FLASH_OBR_2_nRST_BFB2 :1;
						uint32_t                      :8;
					};
					#endif
					#ifdef FLASH_OBR_3
					struct
					{
						uint32_t                      :2;
						uint32_t FLASH_OBR_3_USER     :4;
						uint32_t                      :8;
						uint32_t FLASH_OBR_3_SRAM_PE  :1;
						uint32_t FLASH_OBR_3_SDADC12_VDD_MONITOR :1;
						uint32_t FLASH_OBR_3_BOR_LEV  :4;
						uint32_t                      :12;
					};
					#endif
					#ifdef FLASH_OBR_4
					struct
					{
						uint32_t                      :1;
						uint32_t FLASH_OBR_4_RDPRT    :2;
						uint32_t                      :17;
						uint32_t FLASH_OBR_4_USER     :3;
						uint32_t                      :9;
					};
					#endif
					#ifdef FLASH_OBR_5
					struct
					{
						uint32_t                      :2;
						uint32_t FLASH_OBR_5_LEVEL2_PROT :1;
						uint32_t                      :17;
						uint32_t FLASH_OBR_5_USER     :4;
						uint32_t                      :8;
					};
					#endif
					#ifdef FLASH_OBR_6
					struct
					{
						uint32_t RDPRT                :8;
						uint32_t                      :24;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_OPTCCR
			struct OPTCCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t                      :30;
					uint32_t CLR_OPTCHANGEERR     :1;
					uint32_t                      :1;
			
				
			};
			#endif
			
			#ifdef FLASH_OPTCR
			struct OPTCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t OPTLOCK              :1;
						uint32_t FLASH_OPTCR_0_OPTSTRT :1;
						uint32_t FLASH_OPTCR_0_BOR_LEV :1;
						uint32_t FLASH_OPTCR_0_MER    :1;
						uint32_t FLASH_OPTCR_0_BFB2   :1;
						uint32_t FLASH_OPTCR_0_WDG_SW :1;
						uint32_t FLASH_OPTCR_0_nRST_STOP :1;
						uint32_t FLASH_OPTCR_0_nRST_STDBY :1;
						uint32_t FLASH_OPTCR_0_RDP    :8;
						uint32_t FLASH_OPTCR_0_nWRP   :12;
						uint32_t FLASH_OPTCR_0_nDBOOT :1;
						uint32_t FLASH_OPTCR_0_nDBANK :1;
						uint32_t FLASH_OPTCR_0_DB1M   :1;
						uint32_t FLASH_OPTCR_0_SPRMOD :1;
					};
					struct
					{
						uint32_t                      :1;
						uint32_t FLASH_OPTCR_1_OPTSTART :1;
						uint32_t FLASH_OPTCR_1_BOR_LEV :2;
						uint32_t FLASH_OPTCR_1_WWDG_SW :1;
						uint32_t FLASH_OPTCR_1_IWDG_SW :1;
						uint32_t                      :10;
						uint32_t FLASH_OPTCR_1_nWRP   :15;
						uint32_t FLASH_OPTCR_1_IWDG_STOP :1;
					};
					#ifdef FLASH_OPTCR_2
					struct
					{
						uint32_t                      :16;
						uint32_t FLASH_OPTCR_2_nWRP   :8;
						uint32_t                      :6;
						uint32_t FLASH_OPTCR_2_IWDG_STDBY :1;
						uint32_t FLASH_OPTCR_2_SWAP_BANK :1;
					};
					#endif
					#ifdef FLASH_OPTCR_3
					struct
					{
						uint32_t                      :30;
						uint32_t OPTCHANGEERRIE       :1;
						uint32_t                      :1;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_OPTCR1
			struct OPTCR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t FLASH_OPTCR1_0_BOOT_ADD0 :16;
						uint32_t FLASH_OPTCR1_0_nWRP  :12;
						uint32_t                      :4;
					};
					#ifdef FLASH_OPTCR1_1
					struct
					{
						uint32_t                      :16;
						uint32_t BOOT_ADD1            :16;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_OPTCR2
			struct OPTCR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PCROP                :8;
					uint32_t                      :24;
			
				
			};
			#endif
			
			#ifdef FLASH_OPTKEYR
			struct OPTKEYR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_OPTKEYR_0
					struct
					{
						uint32_t OPTKEYR              :32;
					};
					#endif
					#ifdef FLASH_OPTKEYR_1
					struct
					{
						uint32_t OPTKEY2              :32;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_OPTR
			struct OPTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t FLASH_OPTR_0_RDPROT  :8;
						uint32_t FLASH_OPTR_0_WPRMOD  :1;
						uint32_t                      :5;
						uint32_t FLASH_OPTR_0_nRST_SHDW :1;
						uint32_t                      :1;
						uint32_t FLASH_OPTR_0_BOR_LEV :4;
						uint32_t FLASH_OPTR_0_IWDG_SW :1;
						uint32_t FLASH_OPTR_0_nRST_STOP :1;
						uint32_t FLASH_OPTR_0_nRST_STDBY :1;
						uint32_t FLASH_OPTR_0_BFB2    :1;
						uint32_t FLASH_OPTR_0_SRAM2_PE :1;
						uint32_t FLASH_OPTR_0_SRAM2_RST :1;
						uint32_t FLASH_OPTR_0_nSWBOOT0 :1;
						uint32_t FLASH_OPTR_0_nBOOT0  :1;
						uint32_t                      :3;
						uint32_t FLASH_OPTR_0_BOOT1   :1;
					};
					struct
					{
						uint32_t FLASH_OPTR_1_RDP     :8;
						uint32_t FLASH_OPTR_1_BOR_LEV :3;
						uint32_t                      :1;
						uint32_t FLASH_OPTR_1_nRST_STOP :1;
						uint32_t FLASH_OPTR_1_nRST_STDBY :1;
						uint32_t                      :2;
						uint32_t FLASH_OPTR_1_IWDG_SW :1;
						uint32_t FLASH_OPTR_1_IWDG_STOP :1;
						uint32_t FLASH_OPTR_1_IWDG_STDBY :1;
						uint32_t FLASH_OPTR_1_WWDG_SW :1;
						uint32_t FLASH_OPTR_1_USER    :3;
						uint32_t FLASH_OPTR_1_nBOOT1  :1;
						uint32_t                      :8;
					};
					#ifdef FLASH_OPTR_2
					struct
					{
						uint32_t                      :20;
						uint32_t BFB2                 :1;
						uint32_t FLASH_OPTR_2_DUALBANK :1;
						uint32_t FLASH_OPTR_2_DBANK   :1;
						uint32_t                      :9;
					};
					#endif
					#ifdef FLASH_OPTR_3
					struct
					{
						uint32_t                      :21;
						uint32_t DB1M                 :1;
						uint32_t                      :10;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_OPTSR
			struct OPTSR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t OPT_BUSY             :1;
					uint32_t                      :1;
					uint32_t BOR_LEV              :2;
					uint32_t IWDG1_SW             :1;
					uint32_t                      :1;
					uint32_t NRST_STOP_D1         :1;
					uint32_t NRST_STBY_D1         :1;
					uint32_t RDP                  :8;
					uint32_t                      :1;
					uint32_t FZ_IWDG_STOP         :1;
					uint32_t FZ_IWDG_SDBY         :1;
					uint32_t ST_RAM_SIZE          :2;
					uint32_t SECURITY             :1;
					uint32_t                      :4;
					uint32_t RSS1                 :1;
					uint32_t RSS2                 :1;
					uint32_t PERSO_OK             :1;
					uint32_t IO_HSLV              :1;
					uint32_t OPTCHANGEERR         :1;
					uint32_t SWAP_BANK_OPT        :1;
			
				
			};
			#endif
			
			#ifdef FLASH_PCROP1ER
			struct PCROP1ER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t FLASH_PCROP1ER_0_PCROP1_END :16;
						uint32_t                      :15;
						uint32_t PCROP_RDP            :1;
					};
					#ifdef FLASH_PCROP1ER_1
					struct
					{
						uint32_t PCROP1_END           :15;
						uint32_t                      :17;
					};
					#endif
					#ifdef FLASH_PCROP1ER_2
					struct
					{
						uint32_t PCROP1_END           :17;
						uint32_t                      :15;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_PCROP1SR
			struct PCROP1SR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_PCROP1SR_0
					struct
					{
						uint32_t PCROP1_STRT          :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef FLASH_PCROP1SR_1
					struct
					{
						uint32_t PCROP1_STRT          :15;
						uint32_t                      :17;
					};
					#endif
					#ifdef FLASH_PCROP1SR_2
					struct
					{
						uint32_t PCROP1_STRT          :17;
						uint32_t                      :15;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_PCROP2ER
			struct PCROP2ER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_PCROP2ER_0
					struct
					{
						uint32_t PCROP2_END           :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef FLASH_PCROP2ER_1
					struct
					{
						uint32_t PCROP2_END           :17;
						uint32_t                      :15;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_PCROP2SR
			struct PCROP2SR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_PCROP2SR_0
					struct
					{
						uint32_t PCROP2_STRT          :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef FLASH_PCROP2SR_1
					struct
					{
						uint32_t PCROP2_STRT          :17;
						uint32_t                      :15;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_PDKEYR
			struct PDKEYR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PDKEYR               :32;
			
				
			};
			#endif
			
			#ifdef FLASH_PECR
			struct PECR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t PELOCK               :1;
						uint32_t PRGLOCK              :1;
						uint32_t OPTLOCK              :1;
						uint32_t PROG                 :1;
						uint32_t DATA                 :1;
						uint32_t                      :3;
						uint32_t FLASH_PECR_0_FIX     :1;
						uint32_t ERASE                :1;
						uint32_t FPRG                 :1;
						uint32_t                      :4;
						uint32_t FLASH_PECR_0_PARALLBANK :1;
						uint32_t EOPIE                :1;
						uint32_t ERRIE                :1;
						uint32_t OBL_LAUNCH           :1;
						uint32_t FLASH_PECR_0_HALF_ARRAY :1;
						uint32_t                      :2;
						uint32_t FLASH_PECR_0_NZDISABLE :1;
						uint32_t                      :9;
					};
					#ifdef FLASH_PECR_1
					struct
					{
						uint32_t                      :8;
						uint32_t FTDW                 :1;
						uint32_t                      :23;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_PEKEYR
			struct PEKEYR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PEKEYR               :32;
			
				
			};
			#endif
			
			#ifdef FLASH_PRAR
			struct PRAR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PROT_AREA_START      :12;
					uint32_t                      :4;
					uint32_t PROT_AREA_END        :12;
					uint32_t                      :3;
					uint32_t DMEP                 :1;
			
				
			};
			#endif
			
			#ifdef FLASH_PRGKEYR
			struct PRGKEYR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PRGKEYR              :32;
			
				
			};
			#endif
			
			#ifdef FLASH_SCAR
			struct SCAR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t SEC_AREA_START       :12;
					uint32_t                      :4;
					uint32_t SEC_AREA_END         :12;
					uint32_t                      :3;
					uint32_t DMES                 :1;
			
				
			};
			#endif
			
			#ifdef FLASH_SR
			struct SR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t FLASH_SR_0_BSY       :1;
						uint32_t FLASH_SR_0_SOP       :1;
						uint32_t FLASH_SR_0_PGERR     :1;
						uint32_t FLASH_SR_0_CRC_BUSY  :1;
						uint32_t FLASH_SR_0_WRPRTERR  :1;
						uint32_t FLASH_SR_0_EOP       :1;
						uint32_t FLASH_SR_0_PGPERR    :1;
						uint32_t FLASH_SR_0_PGSERR    :1;
						uint32_t FLASH_SR_0_RDERR     :1;
						uint32_t FLASH_SR_0_PGAERR    :1;
						uint32_t FLASH_SR_0_SIZERR    :1;
						uint32_t FLASH_SR_0_OPTVERR   :1;
						uint32_t FLASH_SR_0_OPTVERRUSR :1;
						uint32_t                      :3;
						uint32_t FLASH_SR_0_NOTZEROERR :1;
						uint32_t FLASH_SR_0_WRPERR    :1;
						uint32_t                      :1;
						uint32_t FLASH_SR_0_STRBERR   :1;
						uint32_t                      :1;
						uint32_t FLASH_SR_0_INCERR    :1;
						uint32_t FLASH_SR_0_OPERR     :1;
						uint32_t FLASH_SR_0_RDPERR    :1;
						uint32_t FLASH_SR_0_RDSERR    :1;
						uint32_t FLASH_SR_0_SNECCERR  :1;
						uint32_t FLASH_SR_0_DBECCERR  :1;
						uint32_t FLASH_SR_0_CRCEND    :1;
						uint32_t                      :4;
					};
					#ifdef FLASH_SR_1
					struct
					{
						uint32_t FLASH_SR_1_EOP       :1;
						uint32_t FLASH_SR_1_OPERR     :1;
						uint32_t FLASH_SR_1_QW        :1;
						uint32_t FLASH_SR_1_READY     :1;
						uint32_t FLASH_SR_1_WRPERR    :1;
						uint32_t FLASH_SR_1_PGAERR    :1;
						uint32_t FLASH_SR_1_SIZERR    :1;
						uint32_t FLASH_SR_1_ERSERR    :1;
						uint32_t FLASH_SR_1_MISERR    :1;
						uint32_t FLASH_SR_1_FASTERR   :1;
						uint32_t                      :3;
						uint32_t FLASH_SR_1_RDERR     :1;
						uint32_t                      :1;
						uint32_t FLASH_SR_1_OPTVERR   :1;
						uint32_t FLASH_SR_1_BSY       :1;
						uint32_t FLASH_SR_1_FWWERR    :1;
						uint32_t FLASH_SR_1_PGSERR    :1;
						uint32_t                      :13;
					};
					#endif
					#ifdef FLASH_SR_2
					struct
					{
						uint32_t                      :1;
						uint32_t FLASH_SR_2_WBNE      :1;
						uint32_t FLASH_SR_2_HVOFF     :1;
						uint32_t FLASH_SR_2_PROGERR   :1;
						uint32_t                      :4;
						uint32_t FLASH_SR_2_WRPERR    :1;
						uint32_t                      :5;
						uint32_t FLASH_SR_2_RDERR     :1;
						uint32_t                      :1;
						uint32_t FLASH_SR_2_EOP       :1;
						uint32_t FLASH_SR_2_FWWER     :1;
						uint32_t                      :14;
					};
					#endif
					#ifdef FLASH_SR_3
					struct
					{
						uint32_t                      :1;
						uint32_t FLASH_SR_3_EOP       :1;
						uint32_t FLASH_SR_3_ENHV      :1;
						uint32_t                      :14;
						uint32_t FLASH_SR_3_PEMPTY    :1;
						uint32_t                      :14;
					};
					#endif
					#ifdef FLASH_SR_4
					struct
					{
						uint32_t                      :2;
						uint32_t ENDHV                :1;
						uint32_t                      :29;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_SR2
			struct SR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t BSY                  :1;
					uint32_t                      :1;
					uint32_t PGERR                :1;
					uint32_t                      :1;
					uint32_t WRPRTERR             :1;
					uint32_t EOP                  :1;
					uint32_t                      :26;
			
				
			};
			#endif
			
			#ifdef FLASH_WPSN
			struct WPSN_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t WRPSN                :8;
					uint32_t                      :24;
			
				
			};
			#endif
			
			#ifdef FLASH_WRP1AR
			struct WRP1AR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t WRP1A_STRT           :8;
					uint32_t                      :8;
					uint32_t WRP1A_END            :8;
					uint32_t                      :8;
			
				
			};
			#endif
			
			#ifdef FLASH_WRP1BR
			struct WRP1BR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t WRP1B_STRT           :8;
					uint32_t                      :8;
					uint32_t WRP1B_END            :8;
					uint32_t                      :8;
			
				
			};
			#endif
			
			#ifdef FLASH_WRP2AR
			struct WRP2AR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t WRP2A_STRT           :8;
					uint32_t                      :8;
					uint32_t WRP2A_END            :8;
					uint32_t                      :8;
			
				
			};
			#endif
			
			#ifdef FLASH_WRP2BR
			struct WRP2BR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t WRP2B_STRT           :8;
					uint32_t                      :8;
					uint32_t WRP2B_END            :8;
					uint32_t                      :8;
			
				
			};
			#endif
			
			#ifdef FLASH_WRPR
			struct WRPR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_WRPR_0
					struct
					{
						uint32_t WRP                  :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef FLASH_WRPR_1
					struct
					{
						uint32_t WRP                  :32;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_WRPR1
			struct WRPR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t WRP                  :32;
			
				
			};
			#endif
			
			#ifdef FLASH_WRPR2
			struct WRPR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_WRPR2_0
					struct
					{
						uint32_t WRP                  :32;
					};
					#endif
					#ifdef FLASH_WRPR2_1
					struct
					{
						uint32_t WRP                  :16;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef FLASH_WRPR3
			struct WRPR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t WRP                  :32;
			
				
			};
			#endif
			
			#ifdef FLASH_WRPR4
			struct WRPR4_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef FLASH_WRPR4_0
					struct
					{
						uint32_t WRP                  :16;
						uint32_t                      :16;
					};
					#endif
					#ifdef FLASH_WRPR4_1
					struct
					{
						uint32_t WRP                  :32;
					};
					#endif
				};
				
			};
			#endif
			
			union
			{
				
				struct
				{
					ACR_TypeDef ACR;     // @0x000
					FLASH_MAP0_KEYR;     // @0x004
					FLASH_MAP0_OPTKEYR;  // @0x008
					FLASH_MAP0_SR;       // @0x00c
					FLASH_MAP0_CR;       // @0x010
					FLASH_MAP0_AR;       // @0x014
					FLASH_MAP0_OPTCR1;   // @0x018
					FLASH_MAP0_OBR;      // @0x01c
					FLASH_MAP0_WRPR;     // @0x020
					FLASH_MAP0_OPTCCR;   // @0x024
					FLASH_MAP0_PRAR_CUR1; // @0x028
					FLASH_MAP0_PRAR_PRG1; // @0x02c
					FLASH_MAP0_SCAR_CUR1; // @0x030
					FLASH_MAP0_SCAR_PRG1; // @0x034
					FLASH_MAP0_WPSN_CUR1; // @0x038
					FLASH_MAP0_WPSN_PRG1; // @0x03c
					FLASH_MAP0_BOOT_CUR; // @0x040
					FLASH_MAP0_KEYR2;    // @0x044
					FLASH_MAP0_PCROP2ER; // @0x048
					FLASH_MAP0_SR2;      // @0x04c
					FLASH_MAP0_CR2;      // @0x050
					FLASH_MAP0_AR2;      // @0x054
					FLASH_MAP0_CRCEADD1; // @0x058
					FLASH_MAP0_CRCDATA;  // @0x05c
					FLASH_MAP0_ECC_FA1;  // @0x060
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP0_WRPR2;    // @0x080
					FLASH_MAP0_WRPR3;    // @0x084
					FLASH_MAP0_WRPR4;    // @0x088
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_8;
					FLASH_MAP0_CCR2;     // @0x114
					__SOOL_PERIPH_PADDING_16;
					FLASH_MAP0_PRAR_CUR2; // @0x128
					FLASH_MAP0_PRAR_PRG2; // @0x12c
					FLASH_MAP0_SCAR_CUR2; // @0x130
					FLASH_MAP0_SCAR_PRG2; // @0x134
					FLASH_MAP0_WPSN_CUR2; // @0x138
					FLASH_MAP0_WPSN_PRG2; // @0x13c
					__SOOL_PERIPH_PADDING_16;
					FLASH_MAP0_CRCCR2;   // @0x150
					FLASH_MAP0_CRCSADD2; // @0x154
					FLASH_MAP0_CRCEADD2; // @0x158
					FLASH_MAP0_CRCDATA2; // @0x15c
					FLASH_MAP0_ECC_FA2;  // @0x160
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP1_KEYR1;    // @0x004
					FLASH_MAP1_PDKEYR;   // @0x008
					FLASH_MAP1_CR1;      // @0x00c
					FLASH_MAP1_SR1;      // @0x010
					FLASH_MAP1_OPTCR;    // @0x014
					FLASH_MAP1_SR;       // @0x018
					FLASH_MAP1_OPTCR2;   // @0x01c
					FLASH_MAP1_OPTSR_PRG; // @0x020
					FLASH_MAP1_PCROP1SR; // @0x024
					FLASH_MAP1_PCROP1ER; // @0x028
					FLASH_MAP1_WRP1AR;   // @0x02c
					FLASH_MAP1_WRP1BR;   // @0x030
					__SOOL_PERIPH_PADDING_16;
					FLASH_MAP1_BOOT_PRG; // @0x044
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP1_WRP2AR;   // @0x04c
					FLASH_MAP1_CRCCR1;   // @0x050
					FLASH_MAP1_CRCSADD1; // @0x054
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP1_KEYR2;    // @0x104
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP1_CR2;      // @0x10c
					FLASH_MAP1_SR2;      // @0x110
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP1_CFGR;     // @0x130
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP2_PECR;     // @0x004
					FLASH_MAP2_KEYR;     // @0x008
					FLASH_MAP2_PEKEYR;   // @0x00c
					FLASH_MAP2_PRGKEYR;  // @0x010
					FLASH_MAP2_CCR1;     // @0x014
					FLASH_MAP2_OPTCR;    // @0x018
					FLASH_MAP2_OPTSR_CUR; // @0x01c
					FLASH_MAP2_WRPR1;    // @0x020
					__SOOL_PERIPH_PADDING_32;
					FLASH_MAP2_PCROP2SR; // @0x044
					__SOOL_PERIPH_PADDING_8;
					FLASH_MAP2_WRP2BR;   // @0x050
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_16;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP3_PDKEYR;   // @0x004
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP3_OPTKEYR;  // @0x00c
					FLASH_MAP3_SR;       // @0x010
					FLASH_MAP3_CR;       // @0x014
					FLASH_MAP3_ECCR;     // @0x018
					FLASH_MAP3_OPTR;     // @0x01c
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_4;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP4_OPTKEYR;  // @0x014
					__SOOL_PERIPH_PADDING_8;
					FLASH_MAP4_OPTR;     // @0x020
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_64;
				};
			};
			private:
			FLASH() = delete;
			
		};
		
		//region instances
#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define FLASH_BASE_ADDR ((uint32_t)0x40022000U)
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     ) 
#define FLASH_BASE_ADDR ((uint32_t)0x40023C00U)
#endif

#if defined(STM32H7     ) 
#define FLASH_BASE_ADDR ((uint32_t)0x52002000U)
#endif

#ifdef FLASH_BASE_ADDR
volatile class FLASH * const FLASH = reinterpret_cast<class FLASH* const>(FLASH_BASE_ADDR);
#endif
//endregion



	};
};
//region undef
#undef FLASH_ACR_0_LATENCY
#undef FLASH_ACR_0_ACC64
#undef FLASH_OBR_2_IWDG_SW
#undef FLASH_OBR_2_nRST_STOP
#undef FLASH_OBR_2_nRST_STDBY
#undef FLASH_OBR_3_BOR_LEV
#undef FLASH_MAP2_WRPR1
#undef FLASH_ACR_0_HLFCYA
#undef FLASH_ACR_0_PRFTBE
#undef FLASH_ACR_0_PRFTBS
#undef FLASH_ACR_0_PRE_READ
#undef FLASH_ACR_2_DISAB_BUF
#undef FLASH_OPTR_0_RDPROT
#undef FLASH_OPTR_0_WPRMOD
#undef FLASH_OPTR_0_BOR_LEV
#undef FLASH_OPTR_0_IWDG_SW
#undef FLASH_OPTR_0_nRST_STOP
#undef FLASH_OPTR_0_nRST_STDBY
#undef FLASH_OPTR_0_BOOT1
#undef FLASH_OPTR_1_USER
#undef FLASH_PECR_0_FIX
#undef FLASH_PECR_0_HALF_ARRAY
#undef FLASH_SR_0_NOTZEROERR
#undef FLASH_SR_1_FWWERR
#undef FLASH_SR_2_HVOFF
#undef FLASH_SR_2_FWWER
#undef FLASH_SR_3_ENHV
#undef FLASH_MAP3_OPTR
#undef FLASH_ACR_0_PRFTEN
#undef FLASH_CR_1_STRT
#undef FLASH_CR_1_EOPIE
#undef FLASH_CR_1_LOCK
#undef FLASH_SR_1_EOP
#undef FLASH_SR_1_PGAERR
#undef FLASH_SR_1_BSY
#undef FLASH_ACR_0_ICEN
#undef FLASH_ACR_0_DCEN
#undef FLASH_ACR_0_ICRST
#undef FLASH_ACR_0_DCRST
#undef FLASH_SR_0_PGSERR
#undef FLASH_ACR_0_RUN_PD
#undef FLASH_ACR_0_SLEEP_PD
#undef FLASH_CR_0_OPTLOCK
#undef FLASH_CR_1_OPTSTRT
#undef FLASH_CR_1_FSTPG
#undef FLASH_CR_1_OBL_LAUNCH
#undef FLASH_OPTR_0_nRST_SHDW
#undef FLASH_OPTR_0_SRAM2_PE
#undef FLASH_OPTR_0_SRAM2_RST
#undef FLASH_OPTR_1_RDP
#undef FLASH_OPTR_1_BOR_LEV
#undef FLASH_OPTR_1_nRST_STOP
#undef FLASH_OPTR_1_nRST_STDBY
#undef FLASH_OPTR_1_IWDG_SW
#undef FLASH_OPTR_1_IWDG_STOP
#undef FLASH_OPTR_1_IWDG_STDBY
#undef FLASH_OPTR_1_WWDG_SW
#undef FLASH_OPTR_1_nBOOT1
#undef FLASH_SR_1_SIZERR
#undef FLASH_SR_1_MISERR
#undef FLASH_SR_1_FASTERR
#undef FLASH_SR_1_OPTVERR
#undef FLASH_SR_2_PROGERR
#undef FLASH_SR_2_RDERR
#undef FLASH_MAP3_PDKEYR
#undef FLASH_MAP2_KEYR
#undef FLASH_MAP3_OPTKEYR
#undef FLASH_MAP3_SR
#undef FLASH_MAP3_CR
#undef FLASH_MAP3_ECCR
#undef FLASH_MAP4_OPTR
#undef FLASH_MAP1_PCROP1SR
#undef FLASH_MAP1_PCROP1ER
#undef FLASH_MAP1_WRP1AR
#undef FLASH_MAP1_WRP1BR
#undef FLASH_ACR_1_LATENCY
#undef FLASH_ACR_1_SLEEP_PD
#undef FLASH_ACR_2_RUN_PD
#undef FLASH_SR_0_PGAERR
#undef FLASH_SR_0_SIZERR
#undef FLASH_SR_0_OPTVERR
#undef FLASH_SR_1_READY
#undef FLASH_SR_2_WRPERR
#undef FLASH_SR_3_EOP
#undef FLASH_MAP2_PECR
#undef FLASH_MAP1_PDKEYR
#undef FLASH_MAP2_PEKEYR
#undef FLASH_MAP2_PRGKEYR
#undef FLASH_MAP4_OPTKEYR
#undef FLASH_MAP1_SR
#undef FLASH_ACR_1_WRHIGHFREQ
#undef FLASH_CR_0_BER
#undef FLASH_CR_0_WRPERRIE
#undef FLASH_CR_0_PGSERRIE
#undef FLASH_CR_0_STRBERRIE
#undef FLASH_CR_0_INCERRIE
#undef FLASH_CR_0_OPERRIE
#undef FLASH_CR_0_RDPERRIE
#undef FLASH_CR_0_RDSERRIE
#undef FLASH_CR_0_SNECCERRIE
#undef FLASH_CR_0_CRCENDIE
#undef FLASH_CR_1_CRC_EN
#undef FLASH_CR_1_DBECCERRIE
#undef FLASH_CR_2_LOCK
#undef FLASH_CR_2_PG
#undef FLASH_CR_2_SER
#undef FLASH_CR_2_START
#undef FLASH_CR_2_EOPIE
#undef FLASH_OPTCR_0_MER
#undef FLASH_OPTCR_1_OPTSTART
#undef FLASH_OPTCR_2_SWAP_BANK
#undef FLASH_SR_0_CRC_BUSY
#undef FLASH_SR_0_WRPERR
#undef FLASH_SR_0_STRBERR
#undef FLASH_SR_0_INCERR
#undef FLASH_SR_0_OPERR
#undef FLASH_SR_0_RDPERR
#undef FLASH_SR_0_RDSERR
#undef FLASH_SR_0_SNECCERR
#undef FLASH_SR_0_DBECCERR
#undef FLASH_SR_0_CRCEND
#undef FLASH_SR_1_QW
#undef FLASH_SR_1_PGSERR
#undef FLASH_SR_2_WBNE
#undef FLASH_SR_2_EOP
#undef FLASH_MAP1_KEYR1
#undef FLASH_MAP1_CR1
#undef FLASH_MAP1_SR1
#undef FLASH_MAP2_CCR1
#undef FLASH_MAP2_OPTCR
#undef FLASH_MAP2_OPTSR_CUR
#undef FLASH_MAP1_OPTSR_PRG
#undef FLASH_MAP0_OPTCCR
#undef FLASH_MAP0_PRAR_CUR1
#undef FLASH_MAP0_PRAR_PRG1
#undef FLASH_MAP0_SCAR_CUR1
#undef FLASH_MAP0_SCAR_PRG1
#undef FLASH_MAP0_WPSN_CUR1
#undef FLASH_MAP0_WPSN_PRG1
#undef FLASH_MAP0_BOOT_CUR
#undef FLASH_MAP1_BOOT_PRG
#undef FLASH_MAP1_CRCCR1
#undef FLASH_MAP1_CRCSADD1
#undef FLASH_MAP0_CRCEADD1
#undef FLASH_MAP0_CRCDATA
#undef FLASH_MAP0_ECC_FA1
#undef FLASH_MAP1_KEYR2
#undef FLASH_MAP1_CR2
#undef FLASH_MAP1_SR2
#undef FLASH_MAP0_CCR2
#undef FLASH_MAP0_PRAR_CUR2
#undef FLASH_MAP0_PRAR_PRG2
#undef FLASH_MAP0_SCAR_CUR2
#undef FLASH_MAP0_SCAR_PRG2
#undef FLASH_MAP0_WPSN_CUR2
#undef FLASH_MAP0_WPSN_PRG2
#undef FLASH_MAP0_CRCCR2
#undef FLASH_MAP0_CRCSADD2
#undef FLASH_MAP0_CRCEADD2
#undef FLASH_MAP0_CRCDATA2
#undef FLASH_MAP0_ECC_FA2
#undef FLASH_ACR_1_ARTEN
#undef FLASH_ACR_1_ARTRST
#undef FLASH_OPTCR_1_WWDG_SW
#undef FLASH_OPTCR_1_IWDG_SW
#undef FLASH_OPTCR_1_IWDG_STOP
#undef FLASH_OPTCR_2_IWDG_STDBY
#undef FLASH_OPTCR1_0_BOOT_ADD0
#undef FLASH_SR_1_ERSERR
#undef FLASH_ACR_2_LATENCY
#undef FLASH_CR_0_OPTPG
#undef FLASH_CR_0_OPTER
#undef FLASH_CR_0_STRT
#undef FLASH_CR_0_LOCK
#undef FLASH_CR_0_OPTWRE
#undef FLASH_CR_0_ERRIE
#undef FLASH_CR_0_EOPIE
#undef FLASH_SR_0_PGERR
#undef FLASH_SR_0_EOP
#undef FLASH_MAP0_AR
#undef FLASH_OBR_0_BFB2
#undef FLASH_OBR_3_USER
#undef FLASH_MAP0_KEYR2
#undef FLASH_MAP0_SR2
#undef FLASH_MAP0_CR2
#undef FLASH_MAP0_AR2
#undef FLASH_ECCR_0_ECCC2
#undef FLASH_ECCR_0_ECCD2
#undef FLASH_OPTR_2_DBANK
#undef FLASH_MAP1_CFGR
#undef FLASH_CR_0_PG
#undef FLASH_CR_0_PER
#undef FLASH_CR_0_MER
#undef FLASH_MAP0_KEYR
#undef FLASH_MAP0_SR
#undef FLASH_MAP0_CR
#undef FLASH_CR_0_BKER
#undef FLASH_MAP2_PCROP2SR
#undef FLASH_MAP0_PCROP2ER
#undef FLASH_MAP1_WRP2AR
#undef FLASH_MAP2_WRP2BR
#undef FLASH_CR_0_OBL_LAUNCH
#undef FLASH_OBR_0_IWDG_SW
#undef FLASH_OBR_0_nRST_STOP
#undef FLASH_OBR_0_nRST_STDBY
#undef FLASH_OBR_0_nBOOT1
#undef FLASH_OBR_0_VDDA_MONITOR
#undef FLASH_OBR_0_DATA0
#undef FLASH_OBR_0_DATA1
#undef FLASH_CR_0_MER2
#undef FLASH_CR_0_RDERRIE
#undef FLASH_CR_1_SER
#undef FLASH_CR_1_PSIZE
#undef FLASH_OPTCR_0_OPTSTRT
#undef FLASH_OPTCR_0_nRST_STOP
#undef FLASH_OPTCR_0_nRST_STDBY
#undef FLASH_OPTCR_0_RDP
#undef FLASH_OPTCR_1_BOR_LEV
#undef FLASH_SR_0_PGPERR
#undef FLASH_MAP1_OPTCR
#undef FLASH_CR_1_MER1
#undef FLASH_CR_1_SNB
#undef FLASH_CR_1_ERRIE
#undef FLASH_SR_1_OPERR
#undef FLASH_CR_2_SNB
#undef FLASH_OPTCR_2_nWRP
#undef FLASH_ECCR_0_ADDR_ECC
#undef FLASH_ECCR_0_SYSF_ECC
#undef FLASH_ECCR_0_BK_ECC
#undef FLASH_OPTR_2_DUALBANK
#undef FLASH_MAP0_OBR
#undef FLASH_OBR_0_RDPRT1
#undef FLASH_OBR_0_RDPRT2
#undef FLASH_OBR_0_RAM_PARITY_CHECK
#undef FLASH_OBR_0_nBOOT0
#undef FLASH_OBR_0_BOOT_SEL
#undef FLASH_OBR_1_USER
#undef FLASH_OBR_1_RDPRT
#undef FLASH_OBR_1_IWDG_SW
#undef FLASH_OBR_1_nRST_STOP
#undef FLASH_OBR_1_nRST_STDBY
#undef FLASH_OBR_1_DATA1
#undef FLASH_OBR_2_DATA0
#undef FLASH_OBR_2_LEVEL1_PROT
#undef FLASH_OBR_3_SDADC12_VDD_MONITOR
#undef FLASH_OBR_5_LEVEL2_PROT
#undef FLASH_OBR_2_USER
#undef FLASH_OBR_2_SPRMOD
#undef FLASH_OBR_2_nRST_BFB2
#undef FLASH_MAP0_WRPR3
#undef FLASH_OBR_3_SRAM_PE
#undef FLASH_OBR_4_RDPRT
#undef FLASH_OBR_4_USER
#undef FLASH_OBR_5_USER
#undef FLASH_OPTCR_0_BOR_LEV
#undef FLASH_OPTCR_0_BFB2
#undef FLASH_OPTCR_0_DB1M
#undef FLASH_OPTCR_0_SPRMOD
#undef FLASH_OPTCR_0_WDG_SW
#undef FLASH_SR_0_SOP
#undef FLASH_OPTCR_0_nWRP
#undef FLASH_OPTCR_0_nDBOOT
#undef FLASH_OPTCR_0_nDBANK
#undef FLASH_OPTCR_1_nWRP
#undef FLASH_MAP0_OPTCR1
#undef FLASH_OPTCR1_0_nWRP
#undef FLASH_MAP1_OPTCR2
#undef FLASH_OPTR_0_BFB2
#undef FLASH_PECR_0_NZDISABLE
#undef FLASH_OPTR_0_nSWBOOT0
#undef FLASH_OPTR_0_nBOOT0
#undef FLASH_SR_3_PEMPTY
#undef FLASH_PCROP1ER_0_PCROP1_END
#undef FLASH_PECR_0_PARALLBANK
#undef FLASH_SR_0_BSY
#undef FLASH_SR_0_WRPRTERR
#undef FLASH_SR_0_RDERR
#undef FLASH_SR_0_OPTVERRUSR
#undef FLASH_SR_1_WRPERR
#undef FLASH_SR_1_RDERR
#undef FLASH_MAP0_WRPR
#undef FLASH_MAP0_WRPR2
#undef FLASH_MAP0_WRPR4
#undef FLASH_MAP0_OPTKEYR
//endregion
#endif
