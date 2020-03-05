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


//Generated 2020-03-01T00:46:38.171644

#ifndef __SOOL_CORE_FLASH_H
#define __SOOL_CORE_FLASH_H
#include "lib_utils/peripheral_include.h"


#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || defined(STM32L1      ) || \
    defined(STM32L4      ) || defined(STM32W1      ) || defined(STM32WB      ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || \
    defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || \
    defined(STM32H755xx_CORE_CM7)
#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || defined(STM32L4      ) || \
    defined(STM32W1      ) || defined(STM32WB      ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || \
    defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define FLASH_ACR_0
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32G0      ) || \
    defined(STM32L4      ) || defined(STM32W1      ) || defined(STM32WB      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || \
    defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || \
    defined(STM32H755xx_CORE_CM7)
#define FLASH_ACR_0_LATENCY LATENCY
#else
#define FLASH_ACR_0_LATENCY
#endif

#if	defined(STM32W1      )
#define FLASH_ACR_0_HLFCYA HLFCYA
#define FLASH_SR_2_WRPRTERR WRPRTERR
#define FLASH_OBR_2
#define FLASH_CLKER
#define FLASH_CLKSR
#define FLASH_MAP3_OPTKEYR OPTKEYR_t OPTKEYR
#define FLASH_MAP3_SR SR_t SR
#define FLASH_MAP4_CLKER CLKER_t CLKER
#define FLASH_MAP4_CLKSR CLKSR_t CLKSR
#define FLASH_MAP4_ACR ACR_t ACR
#define FLASH_MAP4_KEYR KEYR_t KEYR
#define FLASH_MAP4_CR CR_t CR
#define FLASH_MAP4_AR AR_t AR
#define FLASH_MAP4_OBR OBR_t OBR
#define FLASH_MAP4_WRPR WRPR_t WRPR
#else
#define FLASH_ACR_0_HLFCYA
#define FLASH_SR_2_WRPRTERR
#define FLASH_MAP3_OPTKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP3_SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_CLKER __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_CLKSR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_ACR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_KEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_CR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_AR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_OBR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_WRPR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define FLASH_ACR_0_WRHIGHFREQ WRHIGHFREQ
#define FLASH_KEYR1
#define FLASH_CR1
#define FLASH_SR1
#define FLASH_CCR1
#define FLASH_OPTCR_0_OPTSTART OPTSTART
#define FLASH_OPTCR_0_MER MER
#define FLASH_OPTCR_0_OPTCHANGEERRIE OPTCHANGEERRIE
#define FLASH_OPTCR_0_SWAP_BANK SWAP_BANK
#define FLASH_OPTSR_CUR
#define FLASH_OPTSR_PRG
#define FLASH_OPTCCR
#define FLASH_PRAR_CUR1
#define FLASH_SCAR_CUR1
#define FLASH_WPSN_CUR1R
#define FLASH_BOOT_CURR
#define FLASH_CRCCRx
#define FLASH_CRCSADDxR
#define FLASH_CRCEADDxR
#define FLASH_CRCDATAR
#define FLASH_ECC_FA1R
#define FLASH_KEYR2
#define FLASH_CR2
#define FLASH_SR2
#define FLASH_CCR2
#define FLASH_PRAR_CUR2
#define FLASH_SCAR_CUR2
#define FLASH_WPSN_CUR2R
#define FLASH_ECC_FA2R
#define FLASH_MAP0_KEYR1 KEYR1_t KEYR1
#define FLASH_MAP0_CR1 CR1_t CR1
#define FLASH_MAP0_SR1 SR1_t SR1
#define FLASH_MAP0_CCR1 CCR1_t CCR1
#define FLASH_MAP0_OPTCR OPTCR_t OPTCR
#define FLASH_MAP0_OPTSR_CUR OPTSR_CUR_t OPTSR_CUR
#define FLASH_MAP0_OPTSR_PRG OPTSR_PRG_t OPTSR_PRG
#define FLASH_MAP0_OPTCCR OPTCCR_t OPTCCR
#define FLASH_MAP0_PRAR_CUR1 PRAR_CUR1_t PRAR_CUR1
#define FLASH_MAP0_PRAR_PRG1 PRAR_CUR1_t PRAR_PRG1
#define FLASH_MAP0_SCAR_CUR1 SCAR_CUR1_t SCAR_CUR1
#define FLASH_MAP0_SCAR_PRG1 SCAR_CUR1_t SCAR_PRG1
#define FLASH_MAP0_WPSN_CUR1R WPSN_CUR1R_t WPSN_CUR1R
#define FLASH_MAP0_WPSN_PRG1R WPSN_CUR1R_t WPSN_PRG1R
#define FLASH_MAP0_BOOT_CURR BOOT_CURR_t BOOT_CURR
#define FLASH_MAP0_BOOT_PRGR BOOT_CURR_t BOOT_PRGR
#define FLASH_MAP0_CRCCR1 CRCCRx_t CRCCR1
#define FLASH_MAP0_CRCSADD1R CRCSADDxR_t CRCSADD1R
#define FLASH_MAP0_CRCEADD1R CRCEADDxR_t CRCEADD1R
#define FLASH_MAP0_CRCDATAR CRCDATAR_t CRCDATAR
#define FLASH_MAP0_ECC_FA1R ECC_FA1R_t ECC_FA1R
#define FLASH_MAP0_ACR_ ACR_t ACR_
#define FLASH_MAP0_KEYR2 KEYR2_t KEYR2
#define FLASH_MAP0_OPTKEYR_ OPTKEYR_t OPTKEYR_
#define FLASH_MAP0_CR2 CR2_t CR2
#define FLASH_MAP0_SR2 SR2_t SR2
#define FLASH_MAP0_CCR2 CCR2_t CCR2
#define FLASH_MAP0_OPTCR_ OPTCR_t OPTCR_
#define FLASH_MAP0_OPTSR_CUR_ OPTSR_CUR_t OPTSR_CUR_
#define FLASH_MAP0_OPTSR_PRG_ OPTSR_PRG_t OPTSR_PRG_
#define FLASH_MAP0_OPTCCR_ OPTCCR_t OPTCCR_
#define FLASH_MAP0_PRAR_CUR2 PRAR_CUR2_t PRAR_CUR2
#define FLASH_MAP1_PRAR_PRG2 PRAR_CUR2_t PRAR_PRG2
#define FLASH_MAP1_SCAR_CUR2 SCAR_CUR2_t SCAR_CUR2
#define FLASH_MAP1_SCAR_PRG2 SCAR_CUR2_t SCAR_PRG2
#define FLASH_MAP1_WPSN_CUR2R WPSN_CUR2R_t WPSN_CUR2R
#define FLASH_MAP1_WPSN_PRG2R WPSN_CUR2R_t WPSN_PRG2R
#define FLASH_MAP1_CRCCR2 CRCCRx_t CRCCR2
#define FLASH_MAP1_CRCSADD2R CRCSADDxR_t CRCSADD2R
#define FLASH_MAP1_CRCEADD2R CRCEADDxR_t CRCEADD2R
#define FLASH_MAP1_ECC_FA2R ECC_FA2R_t ECC_FA2R
#else
#define FLASH_ACR_0_WRHIGHFREQ
#define FLASH_OPTCR_0_OPTSTART
#define FLASH_OPTCR_0_MER
#define FLASH_OPTCR_0_OPTCHANGEERRIE
#define FLASH_OPTCR_0_SWAP_BANK
#define FLASH_MAP0_KEYR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CCR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTCR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTSR_CUR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTSR_PRG __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTCCR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_PRAR_CUR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_PRAR_PRG1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SCAR_CUR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SCAR_PRG1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_WPSN_CUR1R __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_WPSN_PRG1R __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_BOOT_CURR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_BOOT_PRGR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCCR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCSADD1R __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCEADD1R __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CRCDATAR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_ECC_FA1R __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_ACR_ __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_KEYR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTKEYR_ __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_SR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_CCR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTCR_ __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTSR_CUR_ __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTSR_PRG_ __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_OPTCCR_ __SOOL_PERIPH_PADDING_4
#define FLASH_MAP0_PRAR_CUR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_PRAR_PRG2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_SCAR_CUR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_SCAR_PRG2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_WPSN_CUR2R __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_WPSN_PRG2R __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_CRCCR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_CRCSADD2R __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_CRCEADD2R __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_ECC_FA2R __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L0      )
#define FLASH_ACR_0_PRE_READ PRE_READ
#define FLASH_ACR_2_DESAB_BUF DESAB_BUF
#define FLASH_SR_0_FWWERR FWWERR
#define FLASH_SR_1_NOTZEROERR NOTZEROERR
#define FLASH_OBR_1_SPRMOD SPRMOD
#define FLASH_WRPR_1
#else
#define FLASH_ACR_0_PRE_READ
#define FLASH_ACR_2_DESAB_BUF
#define FLASH_SR_0_FWWERR
#define FLASH_SR_1_NOTZEROERR
#define FLASH_OBR_1_SPRMOD
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32G4      ) || \
    defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
#define FLASH_ACR_0_PRFTEN PRFTEN
#define FLASH_SR_0_EOP EOP
#define FLASH_SR_0_OPERR OPERR
#define FLASH_SR_0_WRPERR WRPERR
#define FLASH_SR_0_PGAERR PGAERR
#define FLASH_SR_0_BSY BSY
#define FLASH_CR_0_EOPIE EOPIE
#define FLASH_CR_0_ERRIE ERRIE
#define FLASH_CR_0_LOCK LOCK
#else
#define FLASH_ACR_0_PRFTEN
#define FLASH_SR_0_EOP
#define FLASH_SR_0_OPERR
#define FLASH_SR_0_WRPERR
#define FLASH_SR_0_PGAERR
#define FLASH_SR_0_BSY
#define FLASH_CR_0_EOPIE
#define FLASH_CR_0_ERRIE
#define FLASH_CR_0_LOCK
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32L4      ) || defined(STM32WB      )
#define FLASH_ACR_0_ICEN ICEN
#define FLASH_ACR_0_ICRST ICRST
#else
#define FLASH_ACR_0_ICEN
#define FLASH_ACR_0_ICRST
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || \
    defined(STM32WB      )
#define FLASH_ACR_0_DCEN DCEN
#define FLASH_ACR_0_DCRST DCRST
#else
#define FLASH_ACR_0_DCEN
#define FLASH_ACR_0_DCRST
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      )
#define FLASH_ACR_0_RUN_PD RUN_PD
#define FLASH_ACR_0_SLEEP_PD SLEEP_PD
#define FLASH_CR_0_MER1 MER1
#define FLASH_ECCR_0_ADDR_ECC ADDR_ECC
#define FLASH_OPTR_0_BOR_LEV BOR_LEV
#define FLASH_PCROP1SR
#define FLASH_PCROP1ER
#define FLASH_MAP1_PDKEYR PDKEYR_t PDKEYR
#define FLASH_MAP1_PCROP1SR PCROP1SR_t PCROP1SR
#define FLASH_MAP1_PCROP1ER PCROP1ER_t PCROP1ER
#else
#define FLASH_ACR_0_RUN_PD
#define FLASH_ACR_0_SLEEP_PD
#define FLASH_CR_0_MER1
#define FLASH_ECCR_0_ADDR_ECC
#define FLASH_OPTR_0_BOR_LEV
#define FLASH_MAP1_PDKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_PCROP1SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_PCROP1ER __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32WB      )
#define FLASH_ACR_0_PES PES
#define FLASH_SR_0_OPTNV OPTNV
#define FLASH_SR_0_PESD PESD
#define FLASH_ECCR_1_ADDR_ECC ADDR_ECC
#define FLASH_ECCR_1_ECCCIE ECCCIE
#define FLASH_ECCR_1_CPUID CPUID
#define FLASH_OPTR_1_ESE ESE
#define FLASH_OPTR_1_BOR_LEV BOR_LEV
#define FLASH_OPTR_1_AGC_TRIM AGC_TRIM
#define FLASH_PCROP1ASR_0
#define FLASH_PCROP1AER_0_PCROP1A_END PCROP1A_END
#define FLASH_PCROP1BSR_0
#define FLASH_PCROP1BER_0
#define FLASH_IPCCBR
#define FLASH_C2ACR
#define FLASH_C2SR
#define FLASH_C2CR
#define FLASH_SFR
#define FLASH_SRRVR
#define FLASH_MAP2_IPCCBR IPCCBR_t IPCCBR
#define FLASH_MAP2_C2ACR C2ACR_t C2ACR
#define FLASH_MAP2_C2SR C2SR_t C2SR
#define FLASH_MAP2_C2CR C2CR_t C2CR
#define FLASH_MAP2_SFR SFR_t SFR
#define FLASH_MAP2_SRRVR SRRVR_t SRRVR
#else
#define FLASH_ACR_0_PES
#define FLASH_SR_0_OPTNV
#define FLASH_SR_0_PESD
#define FLASH_ECCR_1_ADDR_ECC
#define FLASH_ECCR_1_ECCCIE
#define FLASH_ECCR_1_CPUID
#define FLASH_OPTR_1_ESE
#define FLASH_OPTR_1_BOR_LEV
#define FLASH_OPTR_1_AGC_TRIM
#define FLASH_PCROP1AER_0_PCROP1A_END
#define FLASH_MAP2_IPCCBR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_C2ACR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_C2SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_C2CR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_SFR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_SRRVR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32WB      )
#define FLASH_ACR_0_EMPTY EMPTY
#define FLASH_SR_0_CFGBSY CFGBSY
#define FLASH_OPTR_1
#define FLASH_PCROP1ASR
#define FLASH_PCROP1AER
#define FLASH_PCROP1BSR
#define FLASH_PCROP1BER
#define FLASH_MAP2_PCROP1ASR PCROP1ASR_t PCROP1ASR
#define FLASH_MAP2_PCROP1AER PCROP1AER_t PCROP1AER
#define FLASH_MAP2_PCROP1BSR PCROP1BSR_t PCROP1BSR
#define FLASH_MAP2_PCROP1BER PCROP1BER_t PCROP1BER
#else
#define FLASH_ACR_0_EMPTY
#define FLASH_SR_0_CFGBSY
#define FLASH_MAP2_PCROP1ASR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_PCROP1AER __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_PCROP1BSR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_PCROP1BER __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      )
#define FLASH_ACR_0_DBG_SWEN DBG_SWEN
#else
#define FLASH_ACR_0_DBG_SWEN
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32W1      )
#define FLASH_ACR_1
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || \
    defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || \
    defined(STM32F779xx  )
#define FLASH_ACR_1_LATENCY LATENCY
#else
#define FLASH_ACR_1_LATENCY
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32W1      )
#define FLASH_ACR_1_PRFTBE PRFTBE
#define FLASH_ACR_1_PRFTBS PRFTBS
#define FLASH_KEYR_2
#define FLASH_SR_0_PGERR PGERR
#define FLASH_SR_1_EOP EOP
#define FLASH_CR_1_ERRIE ERRIE
#define FLASH_CR_1_EOPIE EOPIE
#define FLASH_CR_3_LOCK LOCK
#define FLASH_CR_3_OPTWRE OPTWRE
#define FLASH_CR_4
#define FLASH_AR
#define FLASH_OBR_0
#define FLASH_WRPR_0
#else
#define FLASH_ACR_1_PRFTBE
#define FLASH_ACR_1_PRFTBS
#define FLASH_SR_0_PGERR
#define FLASH_SR_1_EOP
#define FLASH_CR_1_ERRIE
#define FLASH_CR_1_EOPIE
#define FLASH_CR_3_LOCK
#define FLASH_CR_3_OPTWRE
#endif

#if	defined(STM32F7      )
#define FLASH_ACR_1_ARTEN ARTEN
#define FLASH_ACR_1_ARTRST ARTRST
#define FLASH_OPTCR_0_IWDG_SW IWDG_SW
#define FLASH_OPTCR_1_WWDG_SW WWDG_SW
#define FLASH_OPTCR_1_IWDG_STDBY IWDG_STDBY
#define FLASH_OPTCR_1_IWDG_STOP IWDG_STOP
#define FLASH_OPTCR1_0
#else
#define FLASH_ACR_1_ARTEN
#define FLASH_ACR_1_ARTRST
#define FLASH_OPTCR_0_IWDG_SW
#define FLASH_OPTCR_1_WWDG_SW
#define FLASH_OPTCR_1_IWDG_STDBY
#define FLASH_OPTCR_1_IWDG_STOP
#endif

#if	defined(STM32L0      ) || defined(STM32L1      )
#define FLASH_ACR_2
#define FLASH_SR_1_ENDHV ENDHV
#define FLASH_SR_1_READY READY
#define FLASH_SR_1_PGAERR PGAERR
#define FLASH_SR_1_SIZERR SIZERR
#define FLASH_SR_1_OPTVERR OPTVERR
#define FLASH_SR_2_EOP EOP
#define FLASH_SR_2_WRPERR WRPERR
#define FLASH_OBR_1
#define FLASH_PECR
#define FLASH_PEKEYR
#define FLASH_PRGKEYR
#define FLASH_MAP3_PECR PECR_t PECR
#define FLASH_MAP3_PDKEYR PDKEYR_t PDKEYR
#define FLASH_MAP3_PEKEYR PEKEYR_t PEKEYR
#define FLASH_MAP3_PRGKEYR PRGKEYR_t PRGKEYR
#define FLASH_MAP4_OPTKEYR OPTKEYR_t OPTKEYR
#define FLASH_MAP4_SR SR_t SR
#else
#define FLASH_SR_1_ENDHV
#define FLASH_SR_1_READY
#define FLASH_SR_1_PGAERR
#define FLASH_SR_1_SIZERR
#define FLASH_SR_1_OPTVERR
#define FLASH_SR_2_EOP
#define FLASH_SR_2_WRPERR
#define FLASH_MAP3_PECR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP3_PDKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP3_PEKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP3_PRGKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_OPTKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_SR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32L1      )
#define FLASH_ACR_2_ACC64 ACC64
#define FLASH_SR_0_OPTVERRUSR OPTVERRUSR
#define FLASH_OBR_1_IWDG_SW IWDG_SW
#define FLASH_OBR_1_nRTS_STOP nRTS_STOP
#define FLASH_OBR_1_nRST_STDBY nRST_STDBY
#define FLASH_OBR_1_BFB2 BFB2
#define FLASH_WRPR1
#define FLASH_WRPR2
#define FLASH_WRPR3
#define FLASH_MAP4_WRPR1 WRPR1_t WRPR1
#define FLASH_MAP4_WRPR2 WRPR2_t WRPR2
#define FLASH_MAP4_WRPR3 WRPR3_t WRPR3
#else
#define FLASH_ACR_2_ACC64
#define FLASH_SR_0_OPTVERRUSR
#define FLASH_OBR_1_IWDG_SW
#define FLASH_OBR_1_nRTS_STOP
#define FLASH_OBR_1_nRST_STDBY
#define FLASH_OBR_1_BFB2
#define FLASH_MAP4_WRPR1 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_WRPR2 __SOOL_PERIPH_PADDING_4
#define FLASH_MAP4_WRPR3 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32W1      ) || defined(STM32WB      ) || \
    defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || \
    defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define FLASH_OPTKEYR_0
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || \
    defined(STM32F756xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || \
    defined(STM32F779xx  )
#define FLASH_OPTKEYR_1
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || \
    defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || \
    defined(STM32H755xx_CORE_CM7)
#define FLASH_OPTCR
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      )
#define FLASH_OPTCR_0_BOR_LEV BOR_LEV
#define FLASH_OPTCR_0_nRST_STOP nRST_STOP
#define FLASH_OPTCR_0_nRST_STDBY nRST_STDBY
#define FLASH_OPTCR_0_RDP RDP
#define FLASH_OPTCR_1
#define FLASH_KEYR_1
#define FLASH_SR_1_PGPERR PGPERR
#define FLASH_CR_1_SER SER
#define FLASH_CR_1_PSIZE PSIZE
#define FLASH_MAP2_OPTCR OPTCR_t OPTCR
#else
#define FLASH_OPTCR_0_BOR_LEV
#define FLASH_OPTCR_0_nRST_STOP
#define FLASH_OPTCR_0_nRST_STDBY
#define FLASH_OPTCR_0_RDP
#define FLASH_SR_1_PGPERR
#define FLASH_CR_1_SER
#define FLASH_CR_1_PSIZE
#define FLASH_MAP2_OPTCR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F2      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || \
    defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  ) || \
    defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || \
    defined(STM32F745xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || \
    defined(STM32F779xx  )
#define FLASH_OPTCR_0_nWRP nWRP
#else
#define FLASH_OPTCR_0_nWRP
#endif

#if	defined(STM32F745xx  ) || defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || \
    defined(STM32F779xx  )
#define FLASH_OPTCR_0_nDBOOT nDBOOT
#define FLASH_OPTCR_0_nDBANK nDBANK
#else
#define FLASH_OPTCR_0_nDBOOT
#define FLASH_OPTCR_0_nDBANK
#endif

#if	defined(STM32F2      ) || defined(STM32F4      )
#define FLASH_OPTCR_1_WDG_SW WDG_SW
#else
#define FLASH_OPTCR_1_WDG_SW
#endif

#if	defined(STM32F446xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  )
#define FLASH_OPTCR_1_nWRP nWRP
#else
#define FLASH_OPTCR_1_nWRP
#endif

#if	defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  )
#define FLASH_OPTCR_2
#endif

#if	defined(STM32F469xx  ) || defined(STM32F479xx  )
#define FLASH_OPTCR_2_BFB2 BFB2
#define FLASH_OPTCR_2_DB1M DB1M
#else
#define FLASH_OPTCR_2_BFB2
#define FLASH_OPTCR_2_DB1M
#endif

#if	defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  )
#define FLASH_OPTCR_2_nWRP nWRP
#else
#define FLASH_OPTCR_2_nWRP
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32L4      )
#define FLASH_PDKEYR
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32W1      ) || \
    defined(STM32WB      )
#define FLASH_KEYR
#define FLASH_CR
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
#define FLASH_KEYR_0
#define FLASH_SR_0_PROGERR PROGERR
#define FLASH_SR_0_SIZERR SIZERR
#define FLASH_SR_0_MISERR MISERR
#define FLASH_SR_0_FASTERR FASTERR
#define FLASH_SR_0_OPTVERR OPTVERR
#define FLASH_CR_0_OPTSTRT OPTSTRT
#define FLASH_CR_0_FSTPG FSTPG
#define FLASH_CR_0_OBL_LAUNCH OBL_LAUNCH
#define FLASH_CR_0_OPTLOCK OPTLOCK
#define FLASH_ECCR
#define FLASH_OPTR
#define FLASH_WRP1AR
#define FLASH_WRP1BR
#define FLASH_MAP1_KEYR KEYR_t KEYR
#define FLASH_MAP1_OPTKEYR OPTKEYR_t OPTKEYR
#define FLASH_MAP1_SR SR_t SR
#define FLASH_MAP1_CR CR_t CR
#define FLASH_MAP1_ECCR ECCR_t ECCR
#define FLASH_MAP1_OPTR OPTR_t OPTR
#define FLASH_MAP2_WRP1AR WRP1AR_t WRP1AR
#define FLASH_MAP2_WRP1BR WRP1BR_t WRP1BR
#else
#define FLASH_SR_0_PROGERR
#define FLASH_SR_0_SIZERR
#define FLASH_SR_0_MISERR
#define FLASH_SR_0_FASTERR
#define FLASH_SR_0_OPTVERR
#define FLASH_CR_0_OPTSTRT
#define FLASH_CR_0_FSTPG
#define FLASH_CR_0_OBL_LAUNCH
#define FLASH_CR_0_OPTLOCK
#define FLASH_MAP1_KEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_OPTKEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_CR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_ECCR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP1_OPTR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_WRP1AR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_WRP1BR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || defined(STM32L1      ) || \
    defined(STM32L4      ) || defined(STM32W1      ) || defined(STM32WB      )
#define FLASH_SR
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  )
#define FLASH_SR_0_PGSERR PGSERR
#else
#define FLASH_SR_0_PGSERR
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || defined(STM32L4      ) || \
    defined(STM32WB      )
#define FLASH_SR_0_RDERR RDERR
#else
#define FLASH_SR_0_RDERR
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32W1      )
#define FLASH_SR_1
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32W1      )
#define FLASH_SR_1_BSY BSY
#define FLASH_OBR
#else
#define FLASH_SR_1_BSY
#endif

#if	defined(STM32F0      ) || defined(STM32F3      )
#define FLASH_SR_1_WRPRT WRPRT
#define FLASH_CR_0_FORCE_OPTLOAD FORCE_OPTLOAD
#define FLASH_OBR_0_LEVEL1_PROT LEVEL1_PROT
#define FLASH_OBR_0_LEVEL2_PROT LEVEL2_PROT
#define FLASH_OBR_0_WDG_SW WDG_SW
#define FLASH_OBR_0_nRST_STOP nRST_STOP
#define FLASH_OBR_0_nRST_STDBY nRST_STDBY
#define FLASH_OBR_0_BOOT1 BOOT1
#define FLASH_OBR_0_VDDA_MONITOR VDDA_MONITOR
#define FLASH_OBR_0_Data0 Data0
#define FLASH_OBR_0_Data1 Data1
#define FLASH_MAP3_AR AR_t AR
#else
#define FLASH_SR_1_WRPRT
#define FLASH_CR_0_FORCE_OPTLOAD
#define FLASH_OBR_0_LEVEL1_PROT
#define FLASH_OBR_0_LEVEL2_PROT
#define FLASH_OBR_0_WDG_SW
#define FLASH_OBR_0_nRST_STOP
#define FLASH_OBR_0_nRST_STDBY
#define FLASH_OBR_0_BOOT1
#define FLASH_OBR_0_VDDA_MONITOR
#define FLASH_OBR_0_Data0
#define FLASH_OBR_0_Data1
#define FLASH_MAP3_AR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  ) || \
    defined(STM32F745xx  ) || defined(STM32F765xx  )
#define FLASH_SR_1_ERSERR ERSERR
#else
#define FLASH_SR_1_ERSERR
#endif

#if	defined(STM32F446xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define FLASH_SR_1_RDERR RDERR
#else
#define FLASH_SR_1_RDERR
#endif

#if	defined(STM32L0      ) || defined(STM32L1      ) || defined(STM32W1      )
#define FLASH_SR_2
#define FLASH_MAP4
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32L4      ) || defined(STM32W1      ) || defined(STM32WB      )
#define FLASH_CR_0_PER PER
#else
#define FLASH_CR_0_PER
#endif

#if	defined(STM32L4      ) || defined(STM32WB      )
#define FLASH_CR_0_PNB PNB
#define FLASH_WRP1AR_0
#else
#define FLASH_CR_0_PNB
#endif

#if	defined(STM32L4      )
#define FLASH_CR_0_BKER BKER
#define FLASH_CR_0_MER2 MER2
#define FLASH_CR_0_START START
#define FLASH_ECCR_0_BK_ECC BK_ECC
#define FLASH_OPTR_0_BFB2 BFB2
#define FLASH_OPTR_0_DUALBANK DUALBANK
#define FLASH_PCROP1SR_0
#define FLASH_PCROP1ER_0_PCROP1_END PCROP1_END
#else
#define FLASH_CR_0_BKER
#define FLASH_CR_0_MER2
#define FLASH_CR_0_START
#define FLASH_ECCR_0_BK_ECC
#define FLASH_OPTR_0_BFB2
#define FLASH_OPTR_0_DUALBANK
#define FLASH_PCROP1ER_0_PCROP1_END
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      ) || \
    defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  )
#define FLASH_CR_0_RDERRIE RDERRIE
#else
#define FLASH_CR_0_RDERRIE
#endif

#if	defined(STM32G4      ) || defined(STM32GB      )
#define FLASH_CR_0_SEC_PROT1 SEC_PROT1
#define FLASH_CR_2
#define FLASH_ECCR_0_ECCC2 ECCC2
#define FLASH_ECCR_0_ECCD2 ECCD2
#define FLASH_ECCR_1_BK_ECC BK_ECC
#define FLASH_ECCR_1_SYSF_ECC SYSF_ECC
#define FLASH_OPTR_0_NRST_MODE NRST_MODE
#define FLASH_OPTR_0_IRHEN IRHEN
#define FLASH_PCROP1SR_1
#define FLASH_PCROP1ER_1
#define FLASH_WRP1AR_1
#define FLASH_WRP1BR_2
#define FLASH_SEC1R
#define FLASH_MAP2_SEC1R SEC1R_t SEC1R
#else
#define FLASH_CR_0_SEC_PROT1
#define FLASH_ECCR_0_ECCC2
#define FLASH_ECCR_0_ECCD2
#define FLASH_ECCR_1_BK_ECC
#define FLASH_ECCR_1_SYSF_ECC
#define FLASH_OPTR_0_NRST_MODE
#define FLASH_OPTR_0_IRHEN
#define FLASH_MAP2_SEC1R __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32W1      ) || defined(STM32WB      )
#define FLASH_CR_1
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32W1      ) || defined(STM32WB      )
#define FLASH_CR_1_MER MER
#else
#define FLASH_CR_1_MER
#endif

#if	defined(STM32F7      ) || defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define FLASH_CR_1_SNB SNB
#define FLASH_OPTCR1
#define FLASH_MAP2_OPTCR1 OPTCR1_t OPTCR1
#else
#define FLASH_CR_1_SNB
#define FLASH_MAP2_OPTCR1 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || \
    defined(STM32F765xx  ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  )
#define FLASH_CR_1_MER1 MER1
#else
#define FLASH_CR_1_MER1
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32G4      ) || \
    defined(STM32GB      ) || defined(STM32WB      )
#define FLASH_CR_1_STRT STRT
#else
#define FLASH_CR_1_STRT
#endif

#if	defined(STM32G0      )
#define FLASH_CR_1_SEC_PROT SEC_PROT
#define FLASH_CR_5
#define FLASH_ECCR_2
#define FLASH_OPTR_0_nRSTS_HDW nRSTS_HDW
#define FLASH_OPTR_0_RAM_PARITY_CHECK RAM_PARITY_CHECK
#define FLASH_OPTR_1_nRST_STOP nRST_STOP
#define FLASH_OPTR_1_nRST_STDBY nRST_STDBY
#define FLASH_OPTR_1_nBOOT_SEL nBOOT_SEL
#define FLASH_OPTR_1_nBOOT1 nBOOT1
#define FLASH_OPTR_1_nBOOT0 nBOOT0
#define FLASH_OPTR_1_NRST_MODE NRST_MODE
#define FLASH_OPTR_2
#define FLASH_WRP1AR_2
#define FLASH_WRP1BR_3
#define FLASH_PCROP1ASR_1
#define FLASH_PCROP1AER_1
#define FLASH_PCROP1BSR_1
#define FLASH_PCROP1BER_1
#define FLASH_SECR
#define FLASH_MAP3_SECR SECR_t SECR
#else
#define FLASH_CR_1_SEC_PROT
#define FLASH_OPTR_0_nRSTS_HDW
#define FLASH_OPTR_0_RAM_PARITY_CHECK
#define FLASH_OPTR_1_nRST_STOP
#define FLASH_OPTR_1_nRST_STDBY
#define FLASH_OPTR_1_nBOOT_SEL
#define FLASH_OPTR_1_nBOOT1
#define FLASH_OPTR_1_nBOOT0
#define FLASH_OPTR_1_NRST_MODE
#define FLASH_MAP3_SECR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32W1      ) || defined(STM32F401xC  ) || \
    defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || \
    defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F446xx  )
#define FLASH_CR_3
#endif

#if	defined(STM32F2      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || \
    defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || \
    defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F446xx  )
#define FLASH_CR_3_SNB SNB
#else
#define FLASH_CR_3_SNB
#endif

#if	defined(STM32G0      ) || defined(STM32L4      ) || defined(STM32WB      )
#define FLASH_ECCR_0_SYSF_ECC SYSF_ECC
#else
#define FLASH_ECCR_0_SYSF_ECC
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      )
#define FLASH_ECCR_0_ECCIE ECCIE
#else
#define FLASH_ECCR_0_ECCIE
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32WB      )
#define FLASH_ECCR_1
#define FLASH_OPTR_0_nRST_SHDW nRST_SHDW
#define FLASH_OPTR_0_nSWBOOT0 nSWBOOT0
#define FLASH_OPTR_0_nBOOT0 nBOOT0
#else
#define FLASH_OPTR_0_nRST_SHDW
#define FLASH_OPTR_0_nSWBOOT0
#define FLASH_OPTR_0_nBOOT0
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
#define FLASH_OPTR_0_nRST_STOP nRST_STOP
#define FLASH_OPTR_0_nRST_STDBY nRST_STDBY
#define FLASH_OPTR_0_nBOOT1 nBOOT1
#define FLASH_OPTR_0_SRAM2_PE SRAM2_PE
#define FLASH_OPTR_0_SRAM2_RST SRAM2_RST
#else
#define FLASH_OPTR_0_nRST_STOP
#define FLASH_OPTR_0_nRST_STDBY
#define FLASH_OPTR_0_nBOOT1
#define FLASH_OPTR_0_SRAM2_PE
#define FLASH_OPTR_0_SRAM2_RST
#endif

#if	defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || \
    defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R7xx  ) || \
    defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define FLASH_WRP1BR_0
#endif

#if	defined(STM32WB      ) || defined(STM32L4R5xx  )
#define FLASH_WRP1BR_1
#endif

#if	defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || \
    defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define FLASH_PCROP2SR
#define FLASH_PCROP2ER
#define FLASH_WRP2AR
#define FLASH_WRP2BR
#define FLASH_MAP2_PCROP2SR PCROP2SR_t PCROP2SR
#define FLASH_MAP2_PCROP2ER PCROP2ER_t PCROP2ER
#define FLASH_MAP2_WRP2AR WRP2AR_t WRP2AR
#define FLASH_MAP2_WRP2BR WRP2BR_t WRP2BR
#else
#define FLASH_MAP2_PCROP2SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_PCROP2ER __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_WRP2AR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_WRP2BR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  )
#define FLASH_OPTCR1_1
#endif

#if	defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  )
#define FLASH_OPTCR2
#define FLASH_MAP2_OPTCR2 OPTCR2_t OPTCR2
#else
#define FLASH_MAP2_OPTCR2 __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F3      )
#define FLASH_OBR_0_SRAM_PARITY_CHECK SRAM_PARITY_CHECK
#else
#define FLASH_OBR_0_SRAM_PARITY_CHECK
#endif

#if	defined(STM32F373xC  ) || defined(STM32F378xx  ) || defined(STM32F398xx  )
#define FLASH_OBR_0_SDADC12_VDD_MONITOR SDADC12_VDD_MONITOR
#else
#define FLASH_OBR_0_SDADC12_VDD_MONITOR
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L0      ) || defined(STM32W1      )
#define FLASH_WRPR
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L0      ) || defined(STM32L1      ) || \
    defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || \
    defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define FLASH_MAP0
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define FLASH_MAP0_OPTKEYR OPTKEYR_t OPTKEYR
#else
#define FLASH_MAP0_OPTKEYR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      ) || \
    defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define FLASH_MAP1
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
#define FLASH_MAP2
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      )
#define FLASH_MAP2_KEYR KEYR_t KEYR
#define FLASH_MAP2_SR SR_t SR
#define FLASH_MAP2_CR CR_t CR
#else
#define FLASH_MAP2_KEYR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_SR __SOOL_PERIPH_PADDING_4
#define FLASH_MAP2_CR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32G0      ) || defined(STM32L0      ) || defined(STM32L1      ) || \
    defined(STM32W1      )
#define FLASH_MAP3
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L0      ) || defined(STM32L1      )
#define FLASH_MAP3_OBR OBR_t OBR
#else
#define FLASH_MAP3_OBR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L0      )
#define FLASH_MAP3_WRPR WRPR_t WRPR
#else
#define FLASH_MAP3_WRPR __SOOL_PERIPH_PADDING_4
#endif

namespace sool {
	namespace core {
		class FLASH /// flash
		{
		public:
			
			struct ACR_t: public Reg32_t /// Access control register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_ACR_0
					struct
					{
						uint32_t FLASH_ACR_0_LATENCY : 3; /// Read latency
						uint32_t FLASH_ACR_0_HLFCYA : 1;
						uint32_t FLASH_ACR_0_WRHIGHFREQ : 2; /// Flash signal delay
						uint32_t FLASH_ACR_0_PRE_READ : 1; /// Pre-read data address
						uint32_t                  : 1;
						uint32_t FLASH_ACR_0_PRFTEN : 1; /// Prefetch enable
						uint32_t FLASH_ACR_0_ICEN : 1; /// Instruction cache enable
						uint32_t FLASH_ACR_0_DCEN : 1; /// Data cache enable
						uint32_t FLASH_ACR_0_ICRST : 1; /// Instruction cache reset
						uint32_t FLASH_ACR_0_DCRST : 1; /// Data cache reset
						uint32_t FLASH_ACR_0_RUN_PD : 1; /// Flash Power-down mode during Low-power run mode
						uint32_t FLASH_ACR_0_SLEEP_PD : 1; /// Flash Power-down mode during Low-power sleep mode
						uint32_t FLASH_ACR_0_PES  : 1; /// CPU1 CortexM4 program erase suspend request
						uint32_t FLASH_ACR_0_EMPTY : 1; /// Flash User area empty
						uint32_t                  : 1;
						uint32_t FLASH_ACR_0_DBG_SWEN : 1; /// Debug software enable
						uint32_t                  : 13;
					};
					#endif
					#ifdef FLASH_ACR_1
					struct
					{
						uint32_t FLASH_ACR_1_LATENCY : 4; /// Latency
						uint32_t FLASH_ACR_1_PRFTBE : 1;
						uint32_t FLASH_ACR_1_PRFTBS : 1; /// Prefetch Status
						uint32_t                  : 3;
						uint32_t FLASH_ACR_1_ARTEN : 1; /// ART Accelerator Enable
						uint32_t                  : 1;
						uint32_t FLASH_ACR_1_ARTRST : 1; /// ART Accelerator reset
						uint32_t                  : 20;
					};
					#endif
					#ifdef FLASH_ACR_2
					struct
					{
						uint32_t LATENCY          : 1; /// Latency
						uint32_t PRFTEN           : 1; /// Prefetch enable
						uint32_t FLASH_ACR_2_ACC64 : 1; /// 64-bit access
						uint32_t SLEEP_PD         : 1; /// Flash mode during Sleep
						uint32_t RUN_PD           : 1; /// Flash mode during Run
						uint32_t FLASH_ACR_2_DESAB_BUF : 1; /// Disable Buffer
						uint32_t                  : 26;
					};
					#endif
				};
				
			};
			#ifdef FLASH_KEYR1
			struct KEYR1_t: public Reg32_t /// FLASH key register for bank 1
			{
				using Reg32_t::operator=;
				uint32_t KEYR1            : 32; /// Bank 1 access configuration unlock key
				
			};
			#endif
			struct OPTKEYR_t: public Reg32_t /// FLASH option key register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_OPTKEYR_0
					struct
					{
						uint32_t OPTKEYR          : 32; /// Unlock key option bytes
					};
					#endif
					#ifdef FLASH_OPTKEYR_1
					struct
					{
						uint32_t OPTKEY           : 32; /// Option byte key
					};
					#endif
				};
				
			};
			#ifdef FLASH_CR1
			struct CR1_t: public Reg32_t /// FLASH control register for bank 1
			{
				using Reg32_t::operator=;
				uint32_t LOCK1            : 1; /// Bank 1 configuration lock bit
				uint32_t PG1              : 1; /// Bank 1 program enable bit
				uint32_t SER1             : 1; /// Bank 1 sector erase request
				uint32_t BER1             : 1; /// Bank 1 erase request
				uint32_t PSIZE1           : 2; /// Bank 1 program size
				uint32_t FW1              : 1; /// Bank 1 write forcing control bit
				uint32_t START1           : 1; /// Bank 1 bank or sector erase start control bit
				uint32_t SNB1             : 3; /// Bank 1 sector erase selection number
				uint32_t                  : 4;
				uint32_t CRC_EN           : 1; /// Bank 1 CRC control bit
				uint32_t EOPIE1           : 1; /// Bank 1 end-of-program interrupt control bit
				uint32_t WRPERRIE1        : 1; /// Bank 1 write protection error interrupt enable bit
				uint32_t PGSERRIE1        : 1; /// Bank 1 programming sequence error interrupt enable bit
				uint32_t STRBERRIE1       : 1; /// Bank 1 strobe error interrupt enable bit
				uint32_t                  : 1;
				uint32_t INCERRIE1        : 1; /// Bank 1 inconsistency error interrupt enable bit
				uint32_t OPERRIE1         : 1; /// Bank 1 write/erase error interrupt enable bit
				uint32_t RDPERRIE1        : 1; /// Bank 1 read protection error interrupt enable bit
				uint32_t RDSERRIE1        : 1; /// Bank 1 secure error interrupt enable bit
				uint32_t SNECCERRIE1      : 1; /// Bank 1 ECC single correction error interrupt enable bit
				uint32_t DBECCERRIE1      : 1; /// Bank 1 ECC double detection error interrupt enable bit
				uint32_t CRCENDIE1        : 1; /// Bank 1 end of CRC calculation interrupt enable bit
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef FLASH_SR1
			struct SR1_t: public Reg32_t /// FLASH status register for bank 1
			{
				using Reg32_t::operator=;
				uint32_t BSY1             : 1; /// Bank 1 ongoing program flag
				uint32_t WBNE1            : 1; /// Bank 1 write buffer not empty flag
				uint32_t QW1              : 1; /// Bank 1 wait queue flag
				uint32_t CRC_BUSY1        : 1; /// Bank 1 CRC busy flag
				uint32_t                  : 12;
				uint32_t EOP1             : 1; /// Bank 1 end-of-program flag
				uint32_t WRPERR1          : 1; /// Bank 1 write protection error flag
				uint32_t PGSERR1          : 1; /// Bank 1 programming sequence error flag
				uint32_t STRBERR1         : 1; /// Bank 1 strobe error flag
				uint32_t                  : 1;
				uint32_t INCERR1          : 1; /// Bank 1 inconsistency error flag
				uint32_t OPERR1           : 1; /// Bank 1 write/erase error flag
				uint32_t RDPERR1          : 1; /// Bank 1 read protection error flag
				uint32_t RDSERR1          : 1; /// Bank 1 secure error flag
				uint32_t SNECCERR11       : 1; /// Bank 1 single correction error flag
				uint32_t DBECCERR1        : 1; /// Bank 1 ECC double detection error flag
				uint32_t CRCEND1          : 1; /// Bank 1 CRC-complete flag
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef FLASH_CCR1
			struct CCR1_t: public Reg32_t /// FLASH clear control register for bank 1
			{
				using Reg32_t::operator=;
				uint32_t                  : 16;
				uint32_t CLR_EOP1         : 1; /// Bank 1 EOP1 flag clear bit
				uint32_t CLR_WRPERR1      : 1; /// Bank 1 WRPERR1 flag clear bit
				uint32_t CLR_PGSERR1      : 1; /// Bank 1 PGSERR1 flag clear bi
				uint32_t CLR_STRBERR1     : 1; /// Bank 1 STRBERR1 flag clear bit
				uint32_t                  : 1;
				uint32_t CLR_INCERR1      : 1; /// Bank 1 INCERR1 flag clear bit
				uint32_t CLR_OPERR1       : 1; /// Bank 1 OPERR1 flag clear bit
				uint32_t CLR_RDPERR1      : 1; /// Bank 1 RDPERR1 flag clear bit
				uint32_t CLR_RDSERR1      : 1; /// Bank 1 RDSERR1 flag clear bit
				uint32_t CLR_SNECCERR1    : 1; /// Bank 1 SNECCERR1 flag clear bit
				uint32_t CLR_DBECCERR1    : 1; /// Bank 1 DBECCERR1 flag clear bit
				uint32_t CLR_CRCEND1      : 1; /// Bank 1 CRCEND1 flag clear bit
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef FLASH_OPTCR
			struct OPTCR_t: public Reg32_t /// FLASH option control register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t OPTLOCK          : 1; /// FLASH_OPTCR lock option configuration bit
						uint32_t FLASH_OPTCR_0_OPTSTART : 1; /// Option byte start change option configuration bit
						uint32_t FLASH_OPTCR_0_BOR_LEV : 2; /// BOR reset Level
						uint32_t FLASH_OPTCR_0_MER : 1; /// Flash mass erase enable bit
						uint32_t FLASH_OPTCR_0_IWDG_SW : 1; /// User option bytes
						uint32_t FLASH_OPTCR_0_nRST_STOP : 1; /// User option bytes
						uint32_t FLASH_OPTCR_0_nRST_STDBY : 1; /// User option bytes
						uint32_t FLASH_OPTCR_0_RDP : 8; /// Read protect
						uint32_t FLASH_OPTCR_0_nWRP : 12; /// Not write protect
						uint32_t FLASH_OPTCR_0_nDBOOT : 1; /// Dual Boot mode (valid only when nDBANK=0)
						uint32_t FLASH_OPTCR_0_nDBANK : 1; /// Not dual bank mode
						uint32_t FLASH_OPTCR_0_OPTCHANGEERRIE : 1; /// Option byte change error interrupt enable bit
						uint32_t FLASH_OPTCR_0_SWAP_BANK : 1; /// Bank swapping configuration bit
					};
					#ifdef FLASH_OPTCR_1
					struct
					{
						uint32_t                  : 1;
						uint32_t OPTSTRT          : 1; /// Option start
						uint32_t                  : 2;
						uint32_t FLASH_OPTCR_1_WWDG_SW : 1; /// User option bytes
						uint32_t FLASH_OPTCR_1_WDG_SW : 1; /// WDG_SW User option bytes
						uint32_t                  : 10;
						uint32_t FLASH_OPTCR_1_nWRP : 8; /// Not write protect
						uint32_t                  : 6;
						uint32_t FLASH_OPTCR_1_IWDG_STDBY : 1; /// Independent watchdog counter freeze in standby mode
						uint32_t FLASH_OPTCR_1_IWDG_STOP : 1; /// Independent watchdog counter freeze in Stop mode
					};
					#endif
					#ifdef FLASH_OPTCR_2
					struct
					{
						uint32_t                  : 4;
						uint32_t FLASH_OPTCR_2_BFB2 : 1; /// Dual-bank Boot option byte
						uint32_t                  : 11;
						uint32_t FLASH_OPTCR_2_nWRP : 5; /// Not write protect
						uint32_t                  : 9;
						uint32_t FLASH_OPTCR_2_DB1M : 1; /// Dual-bank on 1 Mbyte Flash memory devices
						uint32_t SPRMOD           : 1; /// Selection of protection mode for nWPRi bits
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_OPTSR_CUR
			struct OPTSR_CUR_t: public Reg32_t /// FLASH option status register
			{
				using Reg32_t::operator=;
				uint32_t OPT_BUSY         : 1; /// Option byte change ongoing flag
				uint32_t                  : 1;
				uint32_t BOR_LEV          : 2; /// Brownout level option status bit
				uint32_t IWDG1_HW         : 1; /// IWDG1 control option status bit
				uint32_t                  : 1;
				uint32_t nRST_STOP_D1     : 1; /// D1 DStop entry reset option status bit
				uint32_t nRST_STBY_D1     : 1; /// D1 DStandby entry reset option status bit
				uint32_t RDP              : 8; /// Readout protection level option status byte
				uint32_t                  : 1;
				uint32_t FZ_IWDG_STOP     : 1; /// IWDG Stop mode freeze option status bit
				uint32_t FZ_IWDG_SDBY     : 1; /// IWDG Standby mode freeze option status bit
				uint32_t ST_RAM_SIZE      : 2; /// DTCM RAM size option status
				uint32_t SECURITY         : 1; /// Security enable option status bit
				uint32_t                  : 4;
				uint32_t RSS1             : 1; /// User option bit 1
				uint32_t                  : 1;
				uint32_t PERSO_OK         : 1; /// Device personalization status bit
				uint32_t IO_HSLV          : 1; /// I/O high-speed at low-voltage status bit (PRODUCT_BELOW_25V)
				uint32_t OPTCHANGEERR     : 1; /// Option byte change error flag
				uint32_t SWAP_BANK_OPT    : 1; /// Bank swapping option status bit
				
			};
			#endif
			#ifdef FLASH_OPTSR_PRG
			struct OPTSR_PRG_t: public Reg32_t /// FLASH option status register
			{
				using Reg32_t::operator=;
				uint32_t                  : 2;
				uint32_t BOR_LEV          : 2; /// BOR reset level option configuration bits
				uint32_t IWDG1_HW         : 1; /// IWDG1 option configuration bit
				uint32_t                  : 1;
				uint32_t nRST_STOP_D1     : 1; /// Option byte erase after D1 DStop option configuration bit
				uint32_t nRST_STBY_D1     : 1; /// Option byte erase after D1 DStandby option configuration bit
				uint32_t RDP              : 8; /// Readout protection level option configuration byte
				uint32_t                  : 1;
				uint32_t FZ_IWDG_STOP     : 1; /// IWDG Stop mode freeze option configuration bit
				uint32_t FZ_IWDG_SDBY     : 1; /// IWDG Standby mode freeze option configuration bit
				uint32_t ST_RAM_SIZE      : 2; /// DTCM size select option configuration bits
				uint32_t SECURITY         : 1; /// Security option configuration bit
				uint32_t                  : 4;
				uint32_t RSS1             : 1; /// User option configuration bit 1
				uint32_t RSS2             : 1; /// User option configuration bit 2
				uint32_t                  : 1;
				uint32_t IO_HSLV          : 1; /// I/O high-speed at low-voltage (PRODUCT_BELOW_25V)
				uint32_t                  : 1;
				uint32_t SWAP_BANK_OPT    : 1; /// Bank swapping option configuration bit
				
			};
			#endif
			#ifdef FLASH_OPTCCR
			struct OPTCCR_t: public Reg32_t /// FLASH option clear control register
			{
				using Reg32_t::operator=;
				uint32_t                  : 30;
				uint32_t CLR_OPTCHANGEERR : 1; /// OPTCHANGEERR reset bit
				uint32_t                  : 1;
				
			};
			#endif
			#ifdef FLASH_PRAR_CUR1
			struct PRAR_CUR1_t: public Reg32_t /// FLASH protection address for bank 1
			{
				using Reg32_t::operator=;
				uint32_t PROT_AREA_START1 : 12; /// Bank 1 lowest PCROP protected address
				uint32_t                  : 4;
				uint32_t PROT_AREA_END1   : 12; /// Bank 1 highest PCROP protected address
				uint32_t                  : 3;
				uint32_t DMEP1            : 1; /// Bank 1 PCROP protected erase enable option status bit
				
			};
			#endif
			#ifdef FLASH_SCAR_CUR1
			struct SCAR_CUR1_t: public Reg32_t /// FLASH secure address for bank 1
			{
				using Reg32_t::operator=;
				uint32_t SEC_AREA_START1  : 12; /// Bank 1 lowest secure protected address
				uint32_t                  : 4;
				uint32_t SEC_AREA_END1    : 12; /// Bank 1 highest secure protected address
				uint32_t                  : 3;
				uint32_t DMES1            : 1; /// Bank 1 secure protected erase enable option status bit
				
			};
			#endif
			#ifdef FLASH_WPSN_CUR1R
			struct WPSN_CUR1R_t: public Reg32_t /// FLASH write sector protection for bank 1
			{
				using Reg32_t::operator=;
				uint32_t WRPSn1           : 8; /// Bank 1 sector write protection option status byte
				uint32_t                  : 24;
				
			};
			#endif
			#ifdef FLASH_BOOT_CURR
			struct BOOT_CURR_t: public Reg32_t /// FLASH register with boot address
			{
				using Reg32_t::operator=;
				uint32_t BOOT_ADD0        : 16; /// Boot address 0
				uint32_t BOOT_ADD1        : 16; /// Boot address 1
				
			};
			#endif
			#ifdef FLASH_CRCCRx
			struct CRCCRx_t: public Reg32_t /// FLASH CRC control register for bank 1
			{
				using Reg32_t::operator=;
				uint32_t CRC_SECT         : 3; /// Bank 1 CRC sector number
				uint32_t                  : 4;
				uint32_t ALL_BANK         : 1; /// Bank 1 CRC select bit
				uint32_t CRC_BY_SECT      : 1; /// Bank 1 CRC sector mode select bit
				uint32_t ADD_SECT         : 1; /// Bank 1 CRC sector select bit
				uint32_t CLEAN_SECT       : 1; /// Bank 1 CRC sector list clear bit
				uint32_t                  : 5;
				uint32_t START_CRC        : 1; /// Bank 1 CRC start bit
				uint32_t CLEAN_CRC        : 1; /// Bank 1 CRC clear bit
				uint32_t                  : 2;
				uint32_t CRC_BURST        : 2; /// Bank 1 CRC burst size
				uint32_t                  : 10;
				
			};
			#endif
			#ifdef FLASH_CRCSADDxR
			struct CRCSADDxR_t: public Reg32_t /// FLASH CRC start address register for bank 1
			{
				using Reg32_t::operator=;
				uint32_t CRC_START_ADDR   : 32; /// CRC start address on bank 1
				
			};
			#endif
			#ifdef FLASH_CRCEADDxR
			struct CRCEADDxR_t: public Reg32_t /// FLASH CRC end address register for bank 1
			{
				using Reg32_t::operator=;
				uint32_t CRC_END_ADDR     : 32; /// CRC end address on bank 1
				
			};
			#endif
			#ifdef FLASH_CRCDATAR
			struct CRCDATAR_t: public Reg32_t /// FLASH CRC data register
			{
				using Reg32_t::operator=;
				uint32_t CRC_DATA         : 32; /// CRC result
				
			};
			#endif
			#ifdef FLASH_ECC_FA1R
			struct ECC_FA1R_t: public Reg32_t /// FLASH ECC fail address for bank 1
			{
				using Reg32_t::operator=;
				uint32_t FAIL_ECC_ADDR1   : 15; /// Bank 1 ECC error address
				uint32_t                  : 17;
				
			};
			#endif
			#ifdef FLASH_KEYR2
			struct KEYR2_t: public Reg32_t /// FLASH key register for bank 2
			{
				using Reg32_t::operator=;
				uint32_t KEYR2            : 32; /// Bank 2 access configuration unlock key
				
			};
			#endif
			#ifdef FLASH_CR2
			struct CR2_t: public Reg32_t /// FLASH control register for bank 2
			{
				using Reg32_t::operator=;
				uint32_t LOCK2            : 1; /// Bank 2 configuration lock bit
				uint32_t PG2              : 1; /// Bank 2 program enable bit
				uint32_t SER2             : 1; /// Bank 2 sector erase request
				uint32_t BER2             : 1; /// Bank 2 erase request
				uint32_t PSIZE2           : 2; /// Bank 2 program size
				uint32_t FW2              : 1; /// Bank 2 write forcing control bit
				uint32_t START2           : 1; /// Bank 2 bank or sector erase start control bit
				uint32_t SNB2             : 3; /// Bank 2 sector erase selection number
				uint32_t                  : 4;
				uint32_t CRC_EN           : 1; /// Bank 2 CRC control bit
				uint32_t EOPIE2           : 1; /// Bank 2 end-of-program interrupt control bit
				uint32_t WRPERRIE2        : 1; /// Bank 2 write protection error interrupt enable bit
				uint32_t PGSERRIE2        : 1; /// Bank 2 programming sequence error interrupt enable bit
				uint32_t STRBERRIE2       : 1; /// Bank 2 strobe error interrupt enable bit
				uint32_t                  : 1;
				uint32_t INCERRIE2        : 1; /// Bank 2 inconsistency error interrupt enable bit
				uint32_t OPERRIE2         : 1; /// Bank 2 write/erase error interrupt enable bit
				uint32_t RDPERRIE2        : 1; /// Bank 2 read protection error interrupt enable bit
				uint32_t RDSERRIE2        : 1; /// Bank 2 secure error interrupt enable bit
				uint32_t SNECCERRIE2      : 1; /// Bank 2 ECC single correction error interrupt enable bit
				uint32_t DBECCERRIE2      : 1; /// Bank 2 ECC double detection error interrupt enable bit
				uint32_t CRCENDIE2        : 1; /// Bank 2 end of CRC calculation interrupt enable bit
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef FLASH_SR2
			struct SR2_t: public Reg32_t /// FLASH status register for bank 2
			{
				using Reg32_t::operator=;
				uint32_t BSY2             : 1; /// Bank 2 ongoing program flag
				uint32_t WBNE2            : 1; /// Bank 2 write buffer not empty flag
				uint32_t QW2              : 1; /// Bank 2 wait queue flag
				uint32_t CRC_BUSY2        : 1; /// Bank 2 CRC busy flag
				uint32_t                  : 12;
				uint32_t EOP2             : 1; /// Bank 2 end-of-program flag
				uint32_t WRPERR2          : 1; /// Bank 2 write protection error flag
				uint32_t PGSERR2          : 1; /// Bank 2 programming sequence error flag
				uint32_t STRBERR2         : 1; /// Bank 2 strobe error flag
				uint32_t                  : 1;
				uint32_t INCERR2          : 1; /// Bank 2 inconsistency error flag
				uint32_t OPERR2           : 1; /// Bank 2 write/erase error flag
				uint32_t RDPERR2          : 1; /// Bank 2 read protection error flag
				uint32_t RDSERR2          : 1; /// Bank 2 secure error flag
				uint32_t SNECCERR2        : 1; /// Bank 2 single correction error flag
				uint32_t DBECCERR2        : 1; /// Bank 2 ECC double detection error flag
				uint32_t CRCEND2          : 1; /// Bank 2 CRC-complete flag
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef FLASH_CCR2
			struct CCR2_t: public Reg32_t /// FLASH clear control register for bank 2
			{
				using Reg32_t::operator=;
				uint32_t                  : 16;
				uint32_t CLR_EOP2         : 1; /// Bank 1 EOP1 flag clear bit
				uint32_t CLR_WRPERR2      : 1; /// Bank 2 WRPERR1 flag clear bit
				uint32_t CLR_PGSERR2      : 1; /// Bank 2 PGSERR1 flag clear bi
				uint32_t CLR_STRBERR2     : 1; /// Bank 2 STRBERR1 flag clear bit
				uint32_t                  : 1;
				uint32_t CLR_INCERR2      : 1; /// Bank 2 INCERR1 flag clear bit
				uint32_t CLR_OPERR2       : 1; /// Bank 2 OPERR1 flag clear bit
				uint32_t CLR_RDPERR2      : 1; /// Bank 2 RDPERR1 flag clear bit
				uint32_t CLR_RDSERR1      : 1; /// Bank 1 RDSERR1 flag clear bit
				uint32_t CLR_SNECCERR2    : 1; /// Bank 2 SNECCERR1 flag clear bit
				uint32_t CLR_DBECCERR1    : 1; /// Bank 1 DBECCERR1 flag clear bit
				uint32_t CLR_CRCEND2      : 1; /// Bank 2 CRCEND1 flag clear bit
				uint32_t                  : 4;
				
			};
			#endif
			#ifdef FLASH_PRAR_CUR2
			struct PRAR_CUR2_t: public Reg32_t /// FLASH protection address for bank 1
			{
				using Reg32_t::operator=;
				uint32_t PROT_AREA_START2 : 12; /// Bank 2 lowest PCROP protected address
				uint32_t                  : 4;
				uint32_t PROT_AREA_END2   : 12; /// Bank 2 highest PCROP protected address
				uint32_t                  : 3;
				uint32_t DMEP2            : 1; /// Bank 2 PCROP protected erase enable option status bit
				
			};
			#endif
			#ifdef FLASH_SCAR_CUR2
			struct SCAR_CUR2_t: public Reg32_t /// FLASH secure address for bank 2
			{
				using Reg32_t::operator=;
				uint32_t SEC_AREA_START2  : 12; /// Bank 2 lowest secure protected address
				uint32_t                  : 4;
				uint32_t SEC_AREA_END2    : 12; /// Bank 2 highest secure protected address
				uint32_t                  : 3;
				uint32_t DMES2            : 1; /// Bank 2 secure protected erase enable option status bit
				
			};
			#endif
			#ifdef FLASH_WPSN_CUR2R
			struct WPSN_CUR2R_t: public Reg32_t /// FLASH write sector protection for bank 2
			{
				using Reg32_t::operator=;
				uint32_t WRPSn2           : 8; /// Bank 2 sector write protection option status byte
				uint32_t                  : 24;
				
			};
			#endif
			#ifdef FLASH_ECC_FA2R
			struct ECC_FA2R_t: public Reg32_t /// FLASH ECC fail address for bank 2
			{
				using Reg32_t::operator=;
				uint32_t FAIL_ECC_ADDR2   : 15; /// Bank 2 ECC error address
				uint32_t                  : 17;
				
			};
			#endif
			#ifdef FLASH_PDKEYR
			struct PDKEYR_t: public Reg32_t /// Power down key register
			{
				using Reg32_t::operator=;
				uint32_t PDKEYR           : 32; /// RUN_PD in FLASH_ACR key
				
			};
			#endif
			#ifdef FLASH_KEYR
			struct KEYR_t: public Reg32_t /// Flash key register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_KEYR_0
					struct
					{
						uint32_t KEYR             : 32;
					};
					#endif
					#ifdef FLASH_KEYR_1
					struct
					{
						uint32_t KEY              : 32; /// FPEC key
					};
					#endif
					#ifdef FLASH_KEYR_2
					struct
					{
						uint32_t FKEYR            : 32; /// Flash Key
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_SR
			struct SR_t: public Reg32_t /// Status register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t FLASH_SR_0_EOP   : 1; /// End of operation
						uint32_t FLASH_SR_0_OPERR : 1; /// Operation error
						uint32_t FLASH_SR_0_PGERR : 1; /// Programming error
						uint32_t FLASH_SR_0_PROGERR : 1; /// Programming error
						uint32_t FLASH_SR_0_WRPERR : 1; /// Write protected error
						uint32_t FLASH_SR_0_PGAERR : 1; /// Programming alignment error
						uint32_t FLASH_SR_0_SIZERR : 1; /// Size error
						uint32_t FLASH_SR_0_PGSERR : 1; /// Programming sequence error
						uint32_t FLASH_SR_0_MISERR : 1; /// Fast programming data miss error
						uint32_t FLASH_SR_0_FASTERR : 1; /// Fast programming error
						uint32_t                  : 2;
						uint32_t FLASH_SR_0_OPTVERRUSR : 1; /// Option UserValidity Error
						uint32_t FLASH_SR_0_OPTNV : 1; /// User Option OPTVAL indication
						uint32_t FLASH_SR_0_RDERR : 1; /// PCROP read error
						uint32_t FLASH_SR_0_OPTVERR : 1; /// Option validity error
						uint32_t FLASH_SR_0_BSY   : 1; /// Busy
						uint32_t FLASH_SR_0_FWWERR : 1;
						uint32_t FLASH_SR_0_CFGBSY : 1; /// Programming or erase configuration busy
						uint32_t FLASH_SR_0_PESD  : 1; /// Programming or erase operation suspended
						uint32_t                  : 12;
					};
					#ifdef FLASH_SR_1
					struct
					{
						uint32_t FLASH_SR_1_BSY   : 1; /// Busy
						uint32_t                  : 1;
						uint32_t FLASH_SR_1_ENDHV : 1; /// End of high voltage
						uint32_t FLASH_SR_1_READY : 1; /// Flash memory module ready after low power mode
						uint32_t FLASH_SR_1_WRPRT : 1; /// Write protection error
						uint32_t FLASH_SR_1_EOP   : 1; /// End of operation
						uint32_t FLASH_SR_1_PGPERR : 1; /// Programming parallelism error
						uint32_t FLASH_SR_1_ERSERR : 1; /// Erase Sequence Error
						uint32_t FLASH_SR_1_RDERR : 1; /// Proprietary readout protection (PCROP) error
						uint32_t FLASH_SR_1_PGAERR : 1; /// Programming alignment error
						uint32_t FLASH_SR_1_SIZERR : 1; /// Size error
						uint32_t FLASH_SR_1_OPTVERR : 1; /// Option validity error
						uint32_t                  : 4;
						uint32_t FLASH_SR_1_NOTZEROERR : 1;
						uint32_t                  : 15;
					};
					#endif
					#ifdef FLASH_SR_2
					struct
					{
						uint32_t                  : 1;
						uint32_t FLASH_SR_2_EOP   : 1; /// End of operation
						uint32_t                  : 2;
						uint32_t FLASH_SR_2_WRPRTERR : 1;
						uint32_t                  : 3;
						uint32_t FLASH_SR_2_WRPERR : 1; /// Write protected error
						uint32_t                  : 23;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_CR
			struct CR_t: public Reg32_t /// Flash control register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t PG               : 1; /// Programming
						uint32_t FLASH_CR_0_PER   : 1; /// Page erase
						uint32_t FLASH_CR_0_MER1  : 1; /// Bank 1 Mass erase
						uint32_t FLASH_CR_0_PNB   : 8; /// Page number
						uint32_t FLASH_CR_0_BKER  : 1; /// Bank erase
						uint32_t                  : 1;
						uint32_t FLASH_CR_0_FORCE_OPTLOAD : 1; /// Force option byte loading
						uint32_t                  : 1;
						uint32_t FLASH_CR_0_MER2  : 1; /// Bank 2 Mass erase
						uint32_t FLASH_CR_0_START : 1; /// Start
						uint32_t FLASH_CR_0_OPTSTRT : 1; /// Options modification start
						uint32_t FLASH_CR_0_FSTPG : 1; /// Fast programming
						uint32_t                  : 5;
						uint32_t FLASH_CR_0_EOPIE : 1; /// End of operation interrupt enable
						uint32_t FLASH_CR_0_ERRIE : 1; /// Error interrupt enable
						uint32_t FLASH_CR_0_RDERRIE : 1; /// PCROP read error interrupt enable
						uint32_t FLASH_CR_0_OBL_LAUNCH : 1; /// Force the option byte loading
						uint32_t FLASH_CR_0_SEC_PROT1 : 1;
						uint32_t                  : 1;
						uint32_t FLASH_CR_0_OPTLOCK : 1; /// Options Lock
						uint32_t FLASH_CR_0_LOCK  : 1; /// FLASH_CR Lock
					};
					#ifdef FLASH_CR_1
					struct
					{
						uint32_t                  : 1;
						uint32_t FLASH_CR_1_SER   : 1; /// Sector Erase
						uint32_t FLASH_CR_1_MER   : 1; /// Mass Erase of sectors 0 to 11
						uint32_t FLASH_CR_1_SNB   : 5; /// Sector number
						uint32_t FLASH_CR_1_PSIZE : 2; /// Program size
						uint32_t FLASH_CR_1_ERRIE : 1; /// Error interrupt enable
						uint32_t                  : 1;
						uint32_t FLASH_CR_1_EOPIE : 1; /// End of operation interrupt enable
						uint32_t                  : 2;
						uint32_t FLASH_CR_1_MER1  : 1; /// Mass Erase of sectors 12 to 23
						uint32_t FLASH_CR_1_STRT  : 1; /// Start
						uint32_t                  : 11;
						uint32_t FLASH_CR_1_SEC_PROT : 1; /// Securable memory area protection enable
						uint32_t                  : 3;
					};
					#endif
					#ifdef FLASH_CR_2
					struct
					{
						uint32_t                  : 3;
						uint32_t PNB              : 7; /// Page number
						uint32_t                  : 22;
					};
					#endif
					#ifdef FLASH_CR_3
					struct
					{
						uint32_t                  : 3;
						uint32_t FLASH_CR_3_SNB   : 4; /// Sector number
						uint32_t FLASH_CR_3_LOCK  : 1; /// Lock
						uint32_t                  : 1;
						uint32_t FLASH_CR_3_OPTWRE : 1; /// Option bytes write enable
						uint32_t                  : 22;
					};
					#endif
					#ifdef FLASH_CR_4
					struct
					{
						uint32_t                  : 4;
						uint32_t OPTPG            : 1; /// Option byte programming
						uint32_t OPTER            : 1; /// Option byte erase
						uint32_t STRT             : 1; /// Start
						uint32_t                  : 25;
					};
					#endif
					#ifdef FLASH_CR_5
					struct
					{
						uint32_t                  : 3;
						uint32_t PNB              : 6; /// Page number
						uint32_t                  : 23;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_ECCR
			struct ECCR_t: public Reg32_t /// Flash ECC register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t FLASH_ECCR_0_ADDR_ECC : 19; /// ECC fail address
						uint32_t FLASH_ECCR_0_BK_ECC : 1; /// ECC fail bank
						uint32_t FLASH_ECCR_0_SYSF_ECC : 1; /// System Flash ECC fail
						uint32_t                  : 3;
						uint32_t FLASH_ECCR_0_ECCIE : 1; /// ECC correction interrupt enable
						uint32_t                  : 3;
						uint32_t FLASH_ECCR_0_ECCC2 : 1; /// ECC correction
						uint32_t FLASH_ECCR_0_ECCD2 : 1; /// ECC2 detection
						uint32_t ECCC             : 1; /// ECC correction
						uint32_t ECCD             : 1; /// ECC detection
					};
					#ifdef FLASH_ECCR_1
					struct
					{
						uint32_t FLASH_ECCR_1_ADDR_ECC : 17; /// ECC fail address
						uint32_t                  : 4;
						uint32_t FLASH_ECCR_1_BK_ECC : 1;
						uint32_t FLASH_ECCR_1_SYSF_ECC : 1;
						uint32_t                  : 1;
						uint32_t FLASH_ECCR_1_ECCCIE : 1; /// ECC correction interrupt enable
						uint32_t                  : 1;
						uint32_t FLASH_ECCR_1_CPUID : 3; /// CPU identification
						uint32_t                  : 3;
					};
					#endif
					#ifdef FLASH_ECCR_2
					struct
					{
						uint32_t ADDR_ECC         : 14; /// ECC fail address
						uint32_t                  : 18;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_OPTR
			struct OPTR_t: public Reg32_t /// Flash option register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t RDP              : 8; /// Read protection level
						uint32_t FLASH_OPTR_0_BOR_LEV : 3; /// BOR reset Level
						uint32_t                  : 1;
						uint32_t FLASH_OPTR_0_nRST_STOP : 1;
						uint32_t FLASH_OPTR_0_nRST_STDBY : 1;
						uint32_t FLASH_OPTR_0_nRST_SHDW : 1;
						uint32_t FLASH_OPTR_0_nRSTS_HDW : 1;
						uint32_t IDWG_SW          : 1; /// Independent watchdog selection
						uint32_t IWDG_STOP        : 1; /// Independent watchdog counter freeze in Stop mode
						uint32_t IWDG_STDBY       : 1; /// Independent watchdog counter freeze in Standby mode
						uint32_t WWDG_SW          : 1; /// Window watchdog selection
						uint32_t FLASH_OPTR_0_BFB2 : 1; /// Dual-bank boot
						uint32_t FLASH_OPTR_0_DUALBANK : 1; /// Dual-Bank on 512 KB or 256 KB Flash memory devices
						uint32_t FLASH_OPTR_0_RAM_PARITY_CHECK : 1; /// SRAM parity check control
						uint32_t FLASH_OPTR_0_nBOOT1 : 1; /// Boot configuration
						uint32_t FLASH_OPTR_0_SRAM2_PE : 1; /// SRAM2 parity check enable
						uint32_t FLASH_OPTR_0_SRAM2_RST : 1; /// SRAM2 Erase when system reset
						uint32_t FLASH_OPTR_0_nSWBOOT0 : 1; /// Software Boot0
						uint32_t FLASH_OPTR_0_nBOOT0 : 1; /// nBoot0 option bit
						uint32_t FLASH_OPTR_0_NRST_MODE : 2;
						uint32_t FLASH_OPTR_0_IRHEN : 1;
						uint32_t                  : 1;
					};
					#ifdef FLASH_OPTR_1
					struct
					{
						uint32_t                  : 8;
						uint32_t FLASH_OPTR_1_ESE : 1; /// Security enabled
						uint32_t FLASH_OPTR_1_BOR_LEV : 3; /// BOR reset Level
						uint32_t                  : 1;
						uint32_t FLASH_OPTR_1_nRST_STOP : 1;
						uint32_t FLASH_OPTR_1_nRST_STDBY : 1;
						uint32_t                  : 9;
						uint32_t FLASH_OPTR_1_nBOOT_SEL : 1;
						uint32_t FLASH_OPTR_1_nBOOT1 : 1; /// Boot configuration
						uint32_t FLASH_OPTR_1_nBOOT0 : 1; /// nBOOT0 option bit
						uint32_t FLASH_OPTR_1_NRST_MODE : 2;
						uint32_t FLASH_OPTR_1_AGC_TRIM : 3; /// Radio Automatic Gain Control Trimming
					};
					#endif
					#ifdef FLASH_OPTR_2
					struct
					{
						uint32_t                  : 8;
						uint32_t BOREN            : 1; /// BOR reset Level
						uint32_t BORF_LEV         : 2; /// These bits contain the VDD supply level threshold that activates the reset
						uint32_t BORR_LEV         : 2; /// These bits contain the VDD supply level threshold that releases the reset.
						uint32_t                  : 16;
						uint32_t IRHEN            : 1; /// Internal reset holder enable bit
						uint32_t                  : 2;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_PCROP1SR
			struct PCROP1SR_t: public Reg32_t /// Flash Bank 1 PCROP Start address register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_PCROP1SR_0
					struct
					{
						uint32_t PCROP1_STRT      : 16; /// Bank 1 PCROP area start offset
						uint32_t                  : 16;
					};
					#endif
					#ifdef FLASH_PCROP1SR_1
					struct
					{
						uint32_t PCROP1_STRT      : 15; /// Bank 1 PCROP area start offset
						uint32_t                  : 17;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_PCROP1ER
			struct PCROP1ER_t: public Reg32_t /// Flash Bank 1 PCROP End address register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t FLASH_PCROP1ER_0_PCROP1_END : 16; /// Bank 1 PCROP area end offset
						uint32_t                  : 15;
						uint32_t PCROP_RDP        : 1; /// PCROP area preserved when RDP level decreased
					};
					#ifdef FLASH_PCROP1ER_1
					struct
					{
						uint32_t PCROP1_END       : 15; /// Bank 1 PCROP area end offset
						uint32_t                  : 17;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_WRP1AR
			struct WRP1AR_t: public Reg32_t /// Flash Bank 1 WRP area A address register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_WRP1AR_0
					struct
					{
						uint32_t WRP1A_STRT       : 8; /// Bank 1 WRP first area start offset
						uint32_t                  : 8;
						uint32_t WRP1A_END        : 8; /// Bank 1 WRP first area A end offset
						uint32_t                  : 8;
					};
					#endif
					#ifdef FLASH_WRP1AR_1
					struct
					{
						uint32_t WRP1A_STRT       : 7; /// Bank 1 WRP first area start offset
						uint32_t                  : 9;
						uint32_t WRP1A_END        : 7; /// Bank 1 WRP first area A end offset
						uint32_t                  : 9;
					};
					#endif
					#ifdef FLASH_WRP1AR_2
					struct
					{
						uint32_t WRP1A_STRT       : 6; /// WRP area A start offset
						uint32_t                  : 10;
						uint32_t WRP1A_END        : 6; /// WRP area A end offset
						uint32_t                  : 10;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_WRP1BR
			struct WRP1BR_t: public Reg32_t /// Flash Bank 1 WRP area B address register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_WRP1BR_0
					struct
					{
						uint32_t WRP1B_STRT       : 8; /// Bank 1 WRP second area B start offset
						uint32_t                  : 8;
						uint32_t WRP1B_END        : 8; /// Bank 1 WRP second area B end offset
						uint32_t                  : 8;
					};
					#endif
					#ifdef FLASH_WRP1BR_1
					struct
					{
						uint32_t WRP1B_END        : 8; /// Bank 1 WRP second area B start offset
						uint32_t                  : 8;
						uint32_t WRP1B_STRT       : 8; /// Bank 1 WRP second area B end offset
						uint32_t                  : 8;
					};
					#endif
					#ifdef FLASH_WRP1BR_2
					struct
					{
						uint32_t WRP1B_STRT       : 7; /// Bank 1 WRP second area B end offset
						uint32_t                  : 9;
						uint32_t WRP1B_END        : 7; /// Bank 1 WRP second area B start offset
						uint32_t                  : 9;
					};
					#endif
					#ifdef FLASH_WRP1BR_3
					struct
					{
						uint32_t WRP1B_STRT       : 6; /// WRP area B start offset
						uint32_t                  : 10;
						uint32_t WRP1B_END        : 6; /// WRP area B end offset
						uint32_t                  : 10;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_PCROP2SR
			struct PCROP2SR_t: public Reg32_t /// Flash Bank 2 PCROP Start address register
			{
				using Reg32_t::operator=;
				uint32_t PCROP2_STRT      : 16; /// Bank 2 PCROP area start offset
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef FLASH_PCROP2ER
			struct PCROP2ER_t: public Reg32_t /// Flash Bank 2 PCROP End address register
			{
				using Reg32_t::operator=;
				uint32_t PCROP2_END       : 16; /// Bank 2 PCROP area end offset
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef FLASH_WRP2AR
			struct WRP2AR_t: public Reg32_t /// Flash Bank 2 WRP area A address register
			{
				using Reg32_t::operator=;
				uint32_t WRP2A_STRT       : 8; /// Bank 2 WRP first area A start offset
				uint32_t                  : 8;
				uint32_t WRP2A_END        : 8; /// Bank 2 WRP first area A end offset
				uint32_t                  : 8;
				
			};
			#endif
			#ifdef FLASH_WRP2BR
			struct WRP2BR_t: public Reg32_t /// Flash Bank 2 WRP area B address register
			{
				using Reg32_t::operator=;
				uint32_t WRP2B_STRT       : 8; /// Bank 2 WRP second area B start offset
				uint32_t                  : 8;
				uint32_t WRP2B_END        : 8; /// Bank 2 WRP second area B end offset
				uint32_t                  : 8;
				
			};
			#endif
			#ifdef FLASH_OPTCR1
			struct OPTCR1_t: public Reg32_t /// Flash option control register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_OPTCR1_0
					struct
					{
						uint32_t BOOT_ADD0        : 16; /// Boot base address when Boot pin =0
						uint32_t BOOT_ADD1        : 16; /// Boot base address when Boot pin =1
					};
					#endif
					#ifdef FLASH_OPTCR1_1
					struct
					{
						uint32_t                  : 16;
						uint32_t nWRP             : 12; /// Not write protect
						uint32_t                  : 4;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_SEC1R
			struct SEC1R_t: public Reg32_t /// securable area bank1 register
			{
				using Reg32_t::operator=;
				uint32_t SEC_SIZE1        : 8;
				uint32_t                  : 8;
				uint32_t BOOT_LOCK        : 1;
				uint32_t                  : 15;
				
			};
			#endif
			#ifdef FLASH_OPTCR2
			struct OPTCR2_t: public Reg32_t /// Flash option control register
			{
				using Reg32_t::operator=;
				uint32_t PCROP            : 8; /// PCROP option byte
				uint32_t                  : 23;
				uint32_t PCROP_RDP        : 1; /// PCROP zone preserved when RDP level decreased
				
			};
			#endif
			#ifdef FLASH_PCROP1ASR
			struct PCROP1ASR_t: public Reg32_t /// Flash Bank 1 PCROP Start address zone A register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_PCROP1ASR_0
					struct
					{
						uint32_t PCROP1A_STRT     : 9; /// Bank 1 PCROPQ area start offset
						uint32_t                  : 23;
					};
					#endif
					#ifdef FLASH_PCROP1ASR_1
					struct
					{
						uint32_t PCROP1A_STRT     : 8; /// PCROP1A area start offset
						uint32_t                  : 24;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_PCROP1AER
			struct PCROP1AER_t: public Reg32_t /// Flash Bank 1 PCROP End address zone A register
			{
				using Reg32_t::operator=;
				union
				{
					struct
					{
						uint32_t FLASH_PCROP1AER_0_PCROP1A_END : 9; /// Bank 1 PCROP area end offset
						uint32_t                  : 22;
						uint32_t PCROP_RDP        : 1; /// PCROP area preserved when RDP level decreased
					};
					#ifdef FLASH_PCROP1AER_1
					struct
					{
						uint32_t PCROP1A_END      : 8; /// PCROP1A area end offset
						uint32_t                  : 24;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_PCROP1BSR
			struct PCROP1BSR_t: public Reg32_t /// Flash Bank 1 PCROP Start address area B register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_PCROP1BSR_0
					struct
					{
						uint32_t PCROP1B_STRT     : 9; /// Bank 1 PCROP area B start offset
						uint32_t                  : 23;
					};
					#endif
					#ifdef FLASH_PCROP1BSR_1
					struct
					{
						uint32_t PCROP1B_STRT     : 8; /// PCROP1B area start offset
						uint32_t                  : 24;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_PCROP1BER
			struct PCROP1BER_t: public Reg32_t /// Flash Bank 1 PCROP End address area B register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_PCROP1BER_0
					struct
					{
						uint32_t PCROP1B_END      : 9; /// Bank 1 PCROP area end area B offset
						uint32_t                  : 23;
					};
					#endif
					#ifdef FLASH_PCROP1BER_1
					struct
					{
						uint32_t PCROP1B_END      : 8; /// PCROP1B area end offset
						uint32_t                  : 24;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_IPCCBR
			struct IPCCBR_t: public Reg32_t /// IPCC mailbox data buffer address register
			{
				using Reg32_t::operator=;
				uint32_t IPCCDBA          : 14; /// PCC mailbox data buffer base address
				uint32_t                  : 18;
				
			};
			#endif
			#ifdef FLASH_C2ACR
			struct C2ACR_t: public Reg32_t /// CPU2 cortex M0 access control register
			{
				using Reg32_t::operator=;
				uint32_t                  : 8;
				uint32_t PRFTEN           : 1; /// CPU2 cortex M0 prefetch enable
				uint32_t ICEN             : 1; /// CPU2 cortex M0 instruction cache enable
				uint32_t                  : 1;
				uint32_t ICRST            : 1; /// CPU2 cortex M0 instruction cache reset
				uint32_t                  : 3;
				uint32_t PES              : 1; /// CPU2 cortex M0 program erase suspend request
				uint32_t                  : 16;
				
			};
			#endif
			#ifdef FLASH_C2SR
			struct C2SR_t: public Reg32_t /// CPU2 cortex M0 status register
			{
				using Reg32_t::operator=;
				uint32_t EOP              : 1; /// End of operation
				uint32_t OPERR            : 1; /// Operation error
				uint32_t                  : 1;
				uint32_t PROGERR          : 1; /// Programming error
				uint32_t WRPERR           : 1; /// write protection error
				uint32_t PGAERR           : 1; /// Programming alignment error
				uint32_t SIZERR           : 1; /// Size error
				uint32_t PGSERR           : 1; /// Programming sequence error
				uint32_t MISSERR          : 1; /// Fast programming data miss error
				uint32_t FASTERR          : 1; /// Fast programming error
				uint32_t                  : 4;
				uint32_t RDERR            : 1; /// PCROP read error
				uint32_t                  : 1;
				uint32_t BSY              : 1; /// Busy
				uint32_t                  : 1;
				uint32_t CFGBSY           : 1; /// Programming or erase configuration busy
				uint32_t PESD             : 1; /// Programming or erase operation suspended
				uint32_t                  : 12;
				
			};
			#endif
			#ifdef FLASH_C2CR
			struct C2CR_t: public Reg32_t /// CPU2 cortex M0 control register
			{
				using Reg32_t::operator=;
				uint32_t PG               : 1; /// Programming
				uint32_t PER              : 1; /// Page erase
				uint32_t MER              : 1; /// Masse erase
				uint32_t PNB              : 8; /// Page Number selection
				uint32_t                  : 5;
				uint32_t STRT             : 1; /// Start
				uint32_t                  : 1;
				uint32_t FSTPG            : 1; /// Fast programming
				uint32_t                  : 5;
				uint32_t EOPIE            : 1; /// End of operation interrupt enable
				uint32_t ERRIE            : 1; /// Error interrupt enable
				uint32_t RDERRIE          : 1; /// PCROP read error interrupt enable
				uint32_t                  : 5;
				
			};
			#endif
			#ifdef FLASH_SFR
			struct SFR_t: public Reg32_t /// Secure flash start address register
			{
				using Reg32_t::operator=;
				uint32_t SFSA             : 8; /// Secure flash start address
				uint32_t FSD              : 1; /// Flash security disable
				uint32_t                  : 3;
				uint32_t DDS              : 1; /// Disable Cortex M0 debug access
				uint32_t                  : 19;
				
			};
			#endif
			#ifdef FLASH_SRRVR
			struct SRRVR_t: public Reg32_t /// Secure SRAM2 start address and cortex M0 reset vector register
			{
				using Reg32_t::operator=;
				uint32_t SBRV             : 18; /// cortex M0 access control register
				uint32_t SBRSA            : 5; /// Secure backup SRAM2a start address
				uint32_t BRSD             : 1; /// backup SRAM2a security disable
				uint32_t                  : 1;
				uint32_t SNBRSA           : 5; /// Secure non backup SRAM2a start address
				uint32_t NBRSD            : 1; /// non-backup SRAM2b security disable
				uint32_t C2OPT            : 1; /// CPU2 cortex M0 boot reset vector memory selection
				
			};
			#endif
			#ifdef FLASH_AR
			struct AR_t: public Reg32_t /// Flash address register
			{
				using Reg32_t::operator=;
				uint32_t FAR              : 32; /// Flash address
				
			};
			#endif
			#ifdef FLASH_OBR
			struct OBR_t: public Reg32_t /// Option byte register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_OBR_0
					struct
					{
						uint32_t OPTERR           : 1; /// Option byte error
						uint32_t FLASH_OBR_0_LEVEL1_PROT : 1; /// Level 1 protection status
						uint32_t FLASH_OBR_0_LEVEL2_PROT : 1; /// Level 2 protection status
						uint32_t                  : 5;
						uint32_t FLASH_OBR_0_WDG_SW : 1;
						uint32_t FLASH_OBR_0_nRST_STOP : 1;
						uint32_t FLASH_OBR_0_nRST_STDBY : 1;
						uint32_t                  : 1;
						uint32_t FLASH_OBR_0_BOOT1 : 1;
						uint32_t FLASH_OBR_0_VDDA_MONITOR : 1;
						uint32_t FLASH_OBR_0_SRAM_PARITY_CHECK : 1;
						uint32_t FLASH_OBR_0_SDADC12_VDD_MONITOR : 1;
						uint32_t FLASH_OBR_0_Data0 : 8;
						uint32_t FLASH_OBR_0_Data1 : 8;
					};
					#endif
					#ifdef FLASH_OBR_1
					struct
					{
						uint32_t RDPRT            : 8; /// Read protection
						uint32_t FLASH_OBR_1_SPRMOD : 1; /// Selection of protection mode of WPR bits
						uint32_t                  : 7;
						uint32_t BOR_LEV          : 4;
						uint32_t FLASH_OBR_1_IWDG_SW : 1;
						uint32_t FLASH_OBR_1_nRTS_STOP : 1;
						uint32_t FLASH_OBR_1_nRST_STDBY : 1;
						uint32_t FLASH_OBR_1_BFB2 : 1; /// Boot From Bank 2
						uint32_t                  : 8;
					};
					#endif
					#ifdef FLASH_OBR_2
					struct
					{
						uint32_t                  : 1;
						uint32_t RDPRT            : 1;
						uint32_t                  : 30;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_WRPR
			struct WRPR_t: public Reg32_t /// Write protection register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef FLASH_WRPR_0
					struct
					{
						uint32_t WRP              : 32; /// Write protect
					};
					#endif
					#ifdef FLASH_WRPR_1
					struct
					{
						uint32_t WRP              : 16; /// Write protection
						uint32_t                  : 16;
					};
					#endif
				};
				
			};
			#endif
			#ifdef FLASH_SECR
			struct SECR_t: public Reg32_t /// Flash Security register
			{
				using Reg32_t::operator=;
				uint32_t SEC_SIZE         : 7; /// Securable memory area size
				uint32_t                  : 9;
				uint32_t BOOT_LOCK        : 1; /// used to force boot from user area
				uint32_t                  : 15;
				
			};
			#endif
			#ifdef FLASH_PECR
			struct PECR_t: public Reg32_t /// Program/erase control register
			{
				using Reg32_t::operator=;
				uint32_t PELOCK           : 1; /// FLASH_PECR and data EEPROM lock
				uint32_t PRGLOCK          : 1; /// Program memory lock
				uint32_t OPTLOCK          : 1; /// Option bytes block lock
				uint32_t PROG             : 1; /// Program memory selection
				uint32_t DATA             : 1; /// Data EEPROM selection
				uint32_t                  : 3;
				uint32_t FTDW             : 1; /// Fixed time data write for Byte, Half Word and Word programming
				uint32_t ERASE            : 1; /// Page or Double Word erase mode
				uint32_t FPRG             : 1; /// Half Page/Double Word programming mode
				uint32_t                  : 4;
				uint32_t PARALLELBANK     : 1; /// Parallel bank mode
				uint32_t EOPIE            : 1; /// End of programming interrupt enable
				uint32_t ERRIE            : 1; /// Error interrupt enable
				uint32_t OBL_LAUNCH       : 1; /// Launch the option byte loading
				uint32_t                  : 13;
				
			};
			#endif
			#ifdef FLASH_PEKEYR
			struct PEKEYR_t: public Reg32_t /// Program/erase key register
			{
				using Reg32_t::operator=;
				uint32_t PEKEYR           : 32; /// FLASH_PEC and data EEPROM key
				
			};
			#endif
			#ifdef FLASH_PRGKEYR
			struct PRGKEYR_t: public Reg32_t /// Program memory key register
			{
				using Reg32_t::operator=;
				uint32_t PRGKEYR          : 32; /// Program memory key
				
			};
			#endif
			#ifdef FLASH_WRPR1
			struct WRPR1_t: public Reg32_t /// Write protection register
			{
				using Reg32_t::operator=;
				uint32_t WRP1             : 32; /// Write protection
				
			};
			#endif
			#ifdef FLASH_WRPR2
			struct WRPR2_t: public Reg32_t /// Write protection register
			{
				using Reg32_t::operator=;
				uint32_t WRP2             : 32;
				
			};
			#endif
			#ifdef FLASH_WRPR3
			struct WRPR3_t: public Reg32_t /// Write protection register
			{
				using Reg32_t::operator=;
				uint32_t WRP3             : 32;
				
			};
			#endif
			#ifdef FLASH_CLKER
			struct CLKER_t: public Reg32_t /// FLASH controller clock enable register
			{
				using Reg32_t::operator=;
				uint32_t EN               : 1;
				uint32_t                  : 31;
				
			};
			#endif
			#ifdef FLASH_CLKSR
			struct CLKSR_t: public Reg32_t /// FLASH controller clock status register
			{
				using Reg32_t::operator=;
				uint32_t ACK              : 1;
				uint32_t BSY              : 1;
				uint32_t                  : 30;
				
			};
			#endif
			union
			{
				#ifdef FLASH_MAP0
				struct
				{
					ACR_t ACR; /// Access control register
					FLASH_MAP0_KEYR1; /// FLASH key register for bank 1
					FLASH_MAP0_OPTKEYR; /// FLASH option key register
					FLASH_MAP0_CR1; /// FLASH control register for bank 1
					FLASH_MAP0_SR1; /// FLASH status register for bank 1
					FLASH_MAP0_CCR1; /// FLASH clear control register for bank 1
					FLASH_MAP0_OPTCR; /// FLASH option control register
					FLASH_MAP0_OPTSR_CUR; /// FLASH option status register
					FLASH_MAP0_OPTSR_PRG; /// FLASH option status register
					FLASH_MAP0_OPTCCR; /// FLASH option clear control register
					FLASH_MAP0_PRAR_CUR1; /// FLASH protection address for bank 1
					FLASH_MAP0_PRAR_PRG1; /// FLASH protection address for bank 1
					FLASH_MAP0_SCAR_CUR1; /// FLASH secure address for bank 1
					FLASH_MAP0_SCAR_PRG1; /// FLASH secure address for bank 1
					FLASH_MAP0_WPSN_CUR1R; /// FLASH write sector protection for bank 1
					FLASH_MAP0_WPSN_PRG1R; /// FLASH write sector protection for bank 1
					FLASH_MAP0_BOOT_CURR; /// FLASH register with boot address
					FLASH_MAP0_BOOT_PRGR; /// FLASH register with boot address
					__SOOL_PERIPH_PADDING_8;
					FLASH_MAP0_CRCCR1; /// FLASH CRC control register for bank 1
					FLASH_MAP0_CRCSADD1R; /// FLASH CRC start address register for bank 1
					FLASH_MAP0_CRCEADD1R; /// FLASH CRC end address register for bank 1
					FLASH_MAP0_CRCDATAR; /// FLASH CRC data register
					FLASH_MAP0_ECC_FA1R; /// FLASH ECC fail address for bank 1
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_128;
					FLASH_MAP0_ACR_; /// Access control register
					FLASH_MAP0_KEYR2; /// FLASH key register for bank 2
					FLASH_MAP0_OPTKEYR_; /// FLASH option key register
					FLASH_MAP0_CR2; /// FLASH control register for bank 2
					FLASH_MAP0_SR2; /// FLASH status register for bank 2
					FLASH_MAP0_CCR2; /// FLASH clear control register for bank 2
					FLASH_MAP0_OPTCR_; /// FLASH option control register
					FLASH_MAP0_OPTSR_CUR_; /// FLASH option status register
					FLASH_MAP0_OPTSR_PRG_; /// FLASH option status register
					FLASH_MAP0_OPTCCR_; /// FLASH option clear control register
					FLASH_MAP0_PRAR_CUR2; /// FLASH protection address for bank 1
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_2048;
					__SOOL_PERIPH_PADDING_4096;
					__SOOL_PERIPH_PADDING_8192;
				};
				#endif
				#ifdef FLASH_MAP1
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP1_PDKEYR; /// Power down key register
					FLASH_MAP1_KEYR; /// Flash key register
					FLASH_MAP1_OPTKEYR; /// Option byte key register
					FLASH_MAP1_SR; /// Status register
					FLASH_MAP1_CR; /// Flash control register
					FLASH_MAP1_ECCR; /// Flash ECC register
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP1_OPTR; /// Flash option register
					FLASH_MAP1_PCROP1SR; /// Flash Bank 1 PCROP Start address register
					FLASH_MAP1_PCROP1ER; /// Flash Bank 1 PCROP End address register
					FLASH_MAP1_PRAR_PRG2; /// FLASH protection address for bank 2
					__SOOL_PERIPH_PADDING_256;
					FLASH_MAP1_SCAR_CUR2; /// FLASH secure address for bank 2
					FLASH_MAP1_SCAR_PRG2; /// FLASH secure address for bank 2
					FLASH_MAP1_WPSN_CUR2R; /// FLASH write sector protection for bank 2
					FLASH_MAP1_WPSN_PRG2R; /// FLASH write sector protection for bank 2
					__SOOL_PERIPH_PADDING_16;
					FLASH_MAP1_CRCCR2; /// FLASH CRC control register for bank 1
					FLASH_MAP1_CRCSADD2R; /// FLASH CRC start address register for bank 2
					FLASH_MAP1_CRCEADD2R; /// FLASH CRC end address register for bank 2
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP1_ECC_FA2R; /// FLASH ECC fail address for bank 2
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_2048;
					__SOOL_PERIPH_PADDING_4096;
					__SOOL_PERIPH_PADDING_8192;
				};
				#endif
				#ifdef FLASH_MAP2
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP2_KEYR; /// Flash key register
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP2_SR; /// Status register
					FLASH_MAP2_CR; /// Control register
					FLASH_MAP2_OPTCR; /// Flash option control register
					FLASH_MAP2_OPTCR1; /// Flash option control register 1
					FLASH_MAP2_OPTCR2; /// Flash option control register
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP2_PCROP1ASR; /// Flash Bank 1 PCROP Start address zone A register
					FLASH_MAP2_PCROP1AER; /// Flash Bank 1 PCROP End address zone A register
					FLASH_MAP2_WRP1AR; /// Flash Bank 1 WRP area A address register
					FLASH_MAP2_WRP1BR; /// Flash Bank 1 WRP area B address register
					FLASH_MAP2_PCROP1BSR; /// Flash Bank 1 PCROP Start address area B register
					FLASH_MAP2_PCROP1BER; /// Flash Bank 1 PCROP End address area B register
					FLASH_MAP2_IPCCBR; /// IPCC mailbox data buffer address register
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP2_PCROP2SR; /// Flash Bank 2 PCROP Start address register
					FLASH_MAP2_PCROP2ER; /// Flash Bank 2 PCROP End address register
					FLASH_MAP2_WRP2AR; /// Flash Bank 2 WRP area A address register
					FLASH_MAP2_WRP2BR; /// Flash Bank 2 WRP area B address register
					__SOOL_PERIPH_PADDING_8;
					FLASH_MAP2_C2ACR; /// CPU2 cortex M0 access control register
					FLASH_MAP2_C2SR; /// CPU2 cortex M0 status register
					FLASH_MAP2_C2CR; /// CPU2 cortex M0 control register
					__SOOL_PERIPH_PADDING_8;
					FLASH_MAP2_SEC1R; /// securable area bank1 register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					FLASH_MAP2_SFR; /// Secure flash start address register
					FLASH_MAP2_SRRVR; /// Secure SRAM2 start address and cortex M0 reset vector register
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_2048;
					__SOOL_PERIPH_PADDING_4096;
					__SOOL_PERIPH_PADDING_8192;
				};
				#endif
				#ifdef FLASH_MAP3
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP3_PECR; /// Program/erase control register
					FLASH_MAP3_PDKEYR; /// Power down key register
					FLASH_MAP3_PEKEYR; /// Program/erase key register
					FLASH_MAP3_PRGKEYR; /// Program memory key register
					FLASH_MAP3_AR; /// Flash address register
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP3_OBR; /// Option byte register
					FLASH_MAP3_WRPR; /// Write protection register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_64;
					FLASH_MAP3_SECR; /// Flash Security register
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_2048;
					__SOOL_PERIPH_PADDING_4096;
					__SOOL_PERIPH_PADDING_8192;
					FLASH_MAP3_OPTKEYR; /// FLASH OPT key register
					FLASH_MAP3_SR; /// FLASH status register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_16;
				};
				#endif
				#ifdef FLASH_MAP4
				struct
				{
					FLASH_MAP4_CLKER; /// FLASH controller clock enable register
					FLASH_MAP4_CLKSR; /// FLASH controller clock status register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					FLASH_MAP4_OPTKEYR; /// Option byte key register
					FLASH_MAP4_SR; /// Status register
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP4_WRPR1; /// Write protection register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_64;
					FLASH_MAP4_WRPR2; /// Write protection register
					FLASH_MAP4_WRPR3; /// Write protection register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_1024;
					__SOOL_PERIPH_PADDING_2048;
					__SOOL_PERIPH_PADDING_4096;
					__SOOL_PERIPH_PADDING_8192;
					FLASH_MAP4_ACR; /// FLASH access control register
					FLASH_MAP4_KEYR; /// FLASH key register
					__SOOL_PERIPH_PADDING_8;
					FLASH_MAP4_CR; /// FLASH control register
					FLASH_MAP4_AR; /// FLASH address register
					__SOOL_PERIPH_PADDING_4;
					FLASH_MAP4_OBR; /// FLASH option bytes register
					FLASH_MAP4_WRPR; /// FLASH write protection register
				};
				#endif
			};

			#if __SOOL_DEBUG_NOPHY
				FLASH(uintptr_t addr) : myaddr(addr){};
				const uintptr_t myaddr;
				inline const uintptr_t get_addr() {return myaddr;};
			#else
				inline const uintptr_t get_addr() {return reinterpret_cast<uintptr_t>(this);};
			private:
				FLASH() = delete;
			#endif
			
		};

#if	defined(STM32H742xx  ) || defined(STM32H743xx  ) || defined(STM32H745xx_CORE_CM4) || defined(STM32H745xx_CORE_CM7) || defined(STM32H750xx  ) || \
    defined(STM32H753xx  ) || defined(STM32H755xx_CORE_CM4) || defined(STM32H755xx_CORE_CM7)
#define Flash_BASE_ADDR ((uint32_t)0x52002000U)
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      )
#define FLASH_BASE_ADDR ((uint32_t)0x40022000U)
#endif

#if	defined(STM32L1      ) || defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  )
#define Flash_BASE_ADDR ((uint32_t)0x40023c00U)
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || \
    defined(STM32F732xx  ) || defined(STM32F733xx  ) || defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || \
    defined(STM32F756xx  ) || defined(STM32F765xx  )
#define FLASH_BASE_ADDR ((uint32_t)0x40023c00U)
#endif

#if	defined(STM32WB      )
#define Flash_BASE_ADDR ((uint32_t)0x58004000U)
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32L0      )
#define Flash_BASE_ADDR ((uint32_t)0x40022000U)
#endif

#if	defined(STM32W1      )
#define FLASH_BASE_ADDR ((uint32_t)0x4000402cU)
#endif


//Instances for peripheral FLASH

		#if defined(FLASH_BASE_ADDR) 
			#if __SOOL_DEBUG_NOPHY
				volatile class FLASH * const FLASH = new class FLASH(FLASH_BASE_ADDR);

			#else
				volatile class FLASH * const FLASH = reinterpret_cast<class FLASH* const>(FLASH_BASE_ADDR);
			#endif
		#endif

		#if defined(Flash_BASE_ADDR) 
			#if __SOOL_DEBUG_NOPHY
				volatile class FLASH * const Flash = new class FLASH(Flash_BASE_ADDR);

			#else
				volatile class FLASH * const Flash = reinterpret_cast<class FLASH* const>(Flash_BASE_ADDR);
			#endif
		#endif
		
		
	};
};
#undef FLASH_CR_0_SEC_PROT1
#undef FLASH_SR_0_BSY
#undef FLASH_SR_0_PGERR
#undef FLASH_OPTR_0_nRSTS_HDW
#undef FLASH_SR_0_WRPERR
#undef FLASH_CR_2
#undef FLASH_MAP2_WRP2BR
#undef FLASH_OPTCR_0_BOR_LEV
#undef FLASH_OBR_0_nRST_STDBY
#undef FLASH_OPTR_1_nBOOT_SEL
#undef FLASH_OBR_0_SDADC12_VDD_MONITOR
#undef FLASH_CR_1_ERRIE
#undef FLASH_ACR_0_DCRST
#undef FLASH_WRP1BR_0
#undef FLASH_CR_0_OBL_LAUNCH
#undef FLASH_OBR_0_LEVEL2_PROT
#undef FLASH_OBR_0_nRST_STOP
#undef FLASH_MAP0_OPTCR
#undef FLASH_SR_0_MISERR
#undef FLASH_CR_0_LOCK
#undef FLASH_MAP2_C2CR
#undef FLASH_ACR_2_DESAB_BUF
#undef FLASH_MAP0_PRAR_CUR2
#undef FLASH_OPTR_1_nBOOT0
#undef FLASH_SR_1_PGAERR
#undef FLASH_OBR_1_IWDG_SW
#undef FLASH_KEYR_1
#undef FLASH_MAP0_OPTCR_
#undef FLASH_OPTCR_2
#undef FLASH_PCROP1SR_0
#undef FLASH_MAP1_CRCSADD2R
#undef FLASH_MAP1_SR
#undef FLASH_OPTCR_0_nRST_STDBY
#undef FLASH_CR_1_MER
#undef FLASH_ACR_0_ICEN
#undef FLASH_ACR_0_ICRST
#undef FLASH_OPTR_0_nBOOT0
#undef FLASH_OPTCR_0_OPTSTART
#undef FLASH_MAP2_CR
#undef FLASH_MAP1_WPSN_PRG2R
#undef FLASH_OPTCR_1_IWDG_STOP
#undef FLASH_SR_0_SIZERR
#undef FLASH_CR_0_OPTSTRT
#undef FLASH_CR_0_BKER
#undef FLASH_OPTR_0_nRST_STDBY
#undef FLASH_MAP1_SCAR_CUR2
#undef FLASH_CR_0_ERRIE
#undef FLASH_SR_0_PESD
#undef FLASH_MAP0_SCAR_PRG1
#undef FLASH_MAP1_PCROP1ER
#undef FLASH_MAP2_C2ACR
#undef FLASH_MAP2_PCROP1ASR
#undef FLASH_ACR_1
#undef FLASH_SR_2_EOP
#undef FLASH_SR_1_ENDHV
#undef FLASH_OPTCR_0_nRST_STOP
#undef FLASH_PCROP1ER_1
#undef FLASH_CR_1_SEC_PROT
#undef FLASH_OPTR_0_nRST_SHDW
#undef FLASH_ACR_0_EMPTY
#undef FLASH_MAP4_WRPR1
#undef FLASH_OPTR_0_SRAM2_RST
#undef FLASH_MAP0_OPTCCR_
#undef FLASH_KEYR_2
#undef FLASH_CR_0_EOPIE
#undef FLASH_OPTCR_1_IWDG_STDBY
#undef FLASH_SR_1_RDERR
#undef FLASH_PCROP1BSR_0
#undef FLASH_ECCR_1_ECCCIE
#undef FLASH_MAP0_CCR2
#undef FLASH_ACR_1_PRFTBE
#undef FLASH_WRP1BR_2
#undef FLASH_OPTCR_0_nWRP
#undef FLASH_MAP4_OPTKEYR
#undef FLASH_MAP1_ECC_FA2R
#undef FLASH_OBR_1_BFB2
#undef FLASH_OPTKEYR_1
#undef FLASH_MAP2
#undef FLASH_SR_1_PGPERR
#undef FLASH_OPTCR_0_nDBANK
#undef FLASH_SR_1_EOP
#undef FLASH_OBR_0_VDDA_MONITOR
#undef FLASH_ECCR_0_ECCC2
#undef FLASH_OPTR_1_nBOOT1
#undef FLASH_MAP3_PECR
#undef FLASH_OBR_0_Data0
#undef FLASH_MAP0_OPTCCR
#undef FLASH_MAP3_WRPR
#undef FLASH_SR_0_PROGERR
#undef FLASH_MAP4_KEYR
#undef FLASH_ECCR_1_BK_ECC
#undef FLASH_SR_0_FASTERR
#undef FLASH_MAP2_KEYR
#undef FLASH_MAP1_WPSN_CUR2R
#undef FLASH_OPTCR_0_nDBOOT
#undef FLASH_SR_1_OPTVERR
#undef FLASH_MAP0_SCAR_CUR1
#undef FLASH_OBR_0_WDG_SW
#undef FLASH_OBR_0_SRAM_PARITY_CHECK
#undef FLASH_ACR_0_PRFTEN
#undef FLASH_MAP1_KEYR
#undef FLASH_SR_0_OPTVERR
#undef FLASH_MAP1_CR
#undef FLASH_OPTCR_0_SWAP_BANK
#undef FLASH_MAP2_PCROP1AER
#undef FLASH_MAP1_SCAR_PRG2
#undef FLASH_ECCR_0_ADDR_ECC
#undef FLASH_ECCR_0_BK_ECC
#undef FLASH_MAP0_ECC_FA1R
#undef FLASH_OPTCR_1_WDG_SW
#undef FLASH_MAP1_PDKEYR
#undef FLASH_CR_1_SER
#undef FLASH_CR_0_FORCE_OPTLOAD
#undef FLASH_MAP0_OPTSR_PRG_
#undef FLASH_OPTR_0_IRHEN
#undef FLASH_ACR_1_PRFTBS
#undef FLASH_OPTCR_0_MER
#undef FLASH_OPTR_1_NRST_MODE
#undef FLASH_MAP2_PCROP2SR
#undef FLASH_PCROP1SR_1
#undef FLASH_CR_0_MER2
#undef FLASH_MAP0
#undef FLASH_CR_0_OPTLOCK
#undef FLASH_CR_0_PER
#undef FLASH_ACR_0_PRE_READ
#undef FLASH_CR_1_MER1
#undef FLASH_MAP4_ACR
#undef FLASH_ECCR_1
#undef FLASH_MAP2_PCROP1BSR
#undef FLASH_MAP3_OBR
#undef FLASH_SR_0_PGAERR
#undef FLASH_MAP2_SFR
#undef FLASH_OPTCR_0_IWDG_SW
#undef FLASH_MAP2_OPTCR1
#undef FLASH_OPTR_1_BOR_LEV
#undef FLASH_MAP0_CR2
#undef FLASH_MAP4_WRPR2
#undef FLASH_MAP4_CLKSR
#undef FLASH_MAP1
#undef FLASH_OPTR_0_RAM_PARITY_CHECK
#undef FLASH_ACR_0_LATENCY
#undef FLASH_SR_0_CFGBSY
#undef FLASH_MAP1_CRCCR2
#undef FLASH_ACR_0_HLFCYA
#undef FLASH_ACR_2
#undef FLASH_ACR_0_WRHIGHFREQ
#undef FLASH_CR_0_FSTPG
#undef FLASH_ECCR_1_ADDR_ECC
#undef FLASH_OPTR_1_AGC_TRIM
#undef FLASH_OBR_1_SPRMOD
#undef FLASH_MAP0_PRAR_CUR1
#undef FLASH_MAP4
#undef FLASH_OPTR_0_nRST_STOP
#undef FLASH_MAP4_SR
#undef FLASH_PCROP1ASR_0
#undef FLASH_CR_3_LOCK
#undef FLASH_CR_0_MER1
#undef FLASH_PCROP1ER_0_PCROP1_END
#undef FLASH_MAP1_PRAR_PRG2
#undef FLASH_MAP0_OPTSR_CUR
#undef FLASH_MAP3_OPTKEYR
#undef FLASH_MAP0_CRCDATAR
#undef FLASH_PCROP1AER_1
#undef FLASH_PCROP1AER_0_PCROP1A_END
#undef FLASH_MAP2_WRP1BR
#undef FLASH_SR_2_WRPRTERR
#undef FLASH_CR_4
#undef FLASH_OBR_0_Data1
#undef FLASH_OPTR_0_nBOOT1
#undef FLASH_ACR_0_RUN_PD
#undef FLASH_SR_0_EOP
#undef FLASH_ECCR_0_ECCD2
#undef FLASH_OPTR_0_nSWBOOT0
#undef FLASH_SR_1_WRPRT
#undef FLASH_MAP0_OPTSR_PRG
#undef FLASH_MAP0_WPSN_CUR1R
#undef FLASH_MAP2_WRP1AR
#undef FLASH_CR_0_START
#undef FLASH_WRP1BR_3
#undef FLASH_MAP4_WRPR3
#undef FLASH_MAP3
#undef FLASH_MAP0_SR1
#undef FLASH_OPTCR_1
#undef FLASH_SR_1_READY
#undef FLASH_ECCR_1_CPUID
#undef FLASH_MAP4_OBR
#undef FLASH_OPTCR_2_BFB2
#undef FLASH_SR_1
#undef FLASH_SR_1_ERSERR
#undef FLASH_CR_0_RDERRIE
#undef FLASH_SR_0_OPTNV
#undef FLASH_MAP1_OPTKEYR
#undef FLASH_MAP2_SEC1R
#undef FLASH_OPTR_1_nRST_STOP
#undef FLASH_WRP1AR_2
#undef FLASH_OPTR_0_BOR_LEV
#undef FLASH_MAP0_BOOT_PRGR
#undef FLASH_WRP1BR_1
#undef FLASH_MAP0_CRCEADD1R
#undef FLASH_PCROP1ASR_1
#undef FLASH_WRP1AR_0
#undef FLASH_MAP0_KEYR1
#undef FLASH_MAP0_BOOT_CURR
#undef FLASH_OBR_1
#undef FLASH_MAP0_CCR1
#undef FLASH_MAP0_OPTKEYR_
#undef FLASH_MAP4_CLKER
#undef FLASH_OPTCR_1_nWRP
#undef FLASH_SR_0_OPTVERRUSR
#undef FLASH_OBR_0
#undef FLASH_MAP3_PDKEYR
#undef FLASH_MAP3_SECR
#undef FLASH_CR_3_SNB
#undef FLASH_MAP2_WRP2AR
#undef FLASH_CR_1_EOPIE
#undef FLASH_CR_1_STRT
#undef FLASH_OPTCR_0_RDP
#undef FLASH_SR_0_FWWERR
#undef FLASH_CR_3_OPTWRE
#undef FLASH_OPTCR_1_WWDG_SW
#undef FLASH_MAP0_CRCCR1
#undef FLASH_ACR_1_LATENCY
#undef FLASH_MAP1_ECCR
#undef FLASH_ECCR_1_SYSF_ECC
#undef FLASH_OPTR_0_NRST_MODE
#undef FLASH_SR_0_OPERR
#undef FLASH_MAP3_PEKEYR
#undef FLASH_MAP4_WRPR
#undef FLASH_SR_0_PGSERR
#undef FLASH_CR_5
#undef FLASH_MAP0_OPTKEYR
#undef FLASH_MAP0_CRCSADD1R
#undef FLASH_OPTKEYR_0
#undef FLASH_OPTCR_2_DB1M
#undef FLASH_OBR_1_nRTS_STOP
#undef FLASH_KEYR_0
#undef FLASH_MAP2_PCROP1BER
#undef FLASH_MAP1_PCROP1SR
#undef FLASH_OPTR_2
#undef FLASH_OPTR_1_ESE
#undef FLASH_SR_1_NOTZEROERR
#undef FLASH_SR_2_WRPERR
#undef FLASH_ACR_0_DBG_SWEN
#undef FLASH_PCROP1BSR_1
#undef FLASH_MAP2_OPTCR
#undef FLASH_MAP1_CRCEADD2R
#undef FLASH_MAP2_PCROP2ER
#undef FLASH_OBR_2
#undef FLASH_MAP0_SR2
#undef FLASH_MAP2_SR
#undef FLASH_MAP0_OPTSR_CUR_
#undef FLASH_ACR_1_ARTEN
#undef FLASH_SR_1_BSY
#undef FLASH_OBR_0_LEVEL1_PROT
#undef FLASH_MAP0_PRAR_PRG1
#undef FLASH_PCROP1BER_0
#undef FLASH_MAP2_SRRVR
#undef FLASH_SR_1_SIZERR
#undef FLASH_OPTCR1_1
#undef FLASH_MAP2_OPTCR2
#undef FLASH_MAP1_OPTR
#undef FLASH_CR_1
#undef FLASH_WRPR_1
#undef FLASH_ACR_2_ACC64
#undef FLASH_OPTCR_2_nWRP
#undef FLASH_OPTCR1_0
#undef FLASH_CR_1_PSIZE
#undef FLASH_OBR_0_BOOT1
#undef FLASH_ACR_0
#undef FLASH_ACR_0_PES
#undef FLASH_SR_0_RDERR
#undef FLASH_MAP0_KEYR2
#undef FLASH_PCROP1BER_1
#undef FLASH_CR_0_PNB
#undef FLASH_OPTR_0_SRAM2_PE
#undef FLASH_MAP3_SR
#undef FLASH_OBR_1_nRST_STDBY
#undef FLASH_ECCR_0_SYSF_ECC
#undef FLASH_ACR_0_DCEN
#undef FLASH_OPTR_0_DUALBANK
#undef FLASH_OPTR_1
#undef FLASH_ACR_0_SLEEP_PD
#undef FLASH_MAP3_AR
#undef FLASH_CR_3
#undef FLASH_MAP4_CR
#undef FLASH_MAP4_AR
#undef FLASH_MAP0_WPSN_PRG1R
#undef FLASH_MAP0_ACR_
#undef FLASH_MAP0_CR1
#undef FLASH_SR_2
#undef FLASH_MAP3_PRGKEYR
#undef FLASH_WRP1AR_1
#undef FLASH_CR_1_SNB
#undef FLASH_ECCR_0_ECCIE
#undef FLASH_MAP2_IPCCBR
#undef FLASH_WRPR_0
#undef FLASH_ECCR_2
#undef FLASH_OPTR_0_BFB2
#undef FLASH_MAP2_C2SR
#undef FLASH_OPTCR_0_OPTCHANGEERRIE
#undef FLASH_OPTR_1_nRST_STDBY
#undef FLASH_ACR_1_ARTRST

#endif

#endif //__SOOL_CORE_FLASH_H