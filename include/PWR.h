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
#ifndef __SOOL_PWR_H
#define __SOOL_PWR_H



#include "lib_utils/peripheral_include.h"
#include "RCC.h"


//region defines

#if defined(STM32H7     )
#define PWR_CPUCR
#define PWR_CR1_1_PVDEN      PVDEN                // 1 bits @ 4
#define PWR_CR1_1_FLPS       FLPS                 // 1 bits @ 9
#define PWR_CR1_1_RLPSN      RLPSN                // 1 bits @ 10
#define PWR_CR1_1_SVOS       SVOS                 // 2 bits @ 14
#define PWR_CR1_1_AVDEN      AVDEN                // 1 bits @ 16
#define PWR_CR1_1_ALS        ALS                  // 2 bits @ 17
#define PWR_CR2_0_BRRDY      BRRDY                // 1 bits @ 16
#define PWR_CR2_0_VBATL      VBATL                // 1 bits @ 20
#define PWR_CR2_0_VBATH      VBATH                // 1 bits @ 21
#define PWR_CR2_0_TEMPL      TEMPL                // 1 bits @ 22
#define PWR_CR2_0_TEMPH      TEMPH                // 1 bits @ 23
#define PWR_CR2_1_BREN       BREN                 // 1 bits @ 0
#define PWR_CR2_1_MONEN      MONEN                // 1 bits @ 4
#define PWR_CR3_0_BYPASS     BYPASS               // 1 bits @ 0
#define PWR_CR3_0_LDOEN      LDOEN                // 1 bits @ 1
#define PWR_CR3_0_SCUEN      SCUEN                // 1 bits @ 2
#define PWR_CR3_0_VBE        VBE                  // 1 bits @ 8
#define PWR_CR3_0_VBRS       VBRS                 // 1 bits @ 9
#define PWR_CR3_0_USB33DEN   USB33DEN             // 1 bits @ 24
#define PWR_CR3_0_USBREGEN   USBREGEN             // 1 bits @ 25
#define PWR_CR3_0_USB33RDY   USB33RDY             // 1 bits @ 26
#define PWR_CSR1_0_ACTVOSRDY ACTVOSRDY            // 1 bits @ 13
#define PWR_CSR1_1_PVDO      PVDO                 // 1 bits @ 4
#define PWR_CSR1_1_ACTVOS    ACTVOS               // 2 bits @ 14
#define PWR_CSR1_1_AVDO      AVDO                 // 1 bits @ 16
#define PWR_D3CR
#define PWR_WKUPCR
#define PWR_WKUPEPR
#define PWR_WKUPFR
#define PWR_MAP2_CR3         CR3_TypeDef CR3
#define PWR_MAP0_CPUCR       CPUCR_TypeDef CPUCR
#define PWR_MAP0_D3CR        D3CR_TypeDef D3CR
#define PWR_MAP0_WKUPCR      WKUPCR_TypeDef WKUPCR
#define PWR_MAP0_WKUPFR      WKUPFR_TypeDef WKUPFR
#define PWR_MAP0_WKUPEPR     WKUPEPR_TypeDef WKUPEPR
#else
#define PWR_CR1_1_PVDEN
#define PWR_CR1_1_FLPS
#define PWR_CR1_1_RLPSN
#define PWR_CR1_1_SVOS
#define PWR_CR1_1_AVDEN
#define PWR_CR1_1_ALS
#define PWR_CR2_0_BRRDY
#define PWR_CR2_0_VBATL
#define PWR_CR2_0_VBATH
#define PWR_CR2_0_TEMPL
#define PWR_CR2_0_TEMPH
#define PWR_CR2_1_BREN
#define PWR_CR2_1_MONEN
#define PWR_CR3_0_BYPASS
#define PWR_CR3_0_LDOEN
#define PWR_CR3_0_SCUEN
#define PWR_CR3_0_VBE
#define PWR_CR3_0_VBRS
#define PWR_CR3_0_USB33DEN
#define PWR_CR3_0_USBREGEN
#define PWR_CR3_0_USB33RDY
#define PWR_CSR1_0_ACTVOSRDY
#define PWR_CSR1_1_PVDO
#define PWR_CSR1_1_ACTVOS
#define PWR_CSR1_1_AVDO
#define PWR_MAP2_CR3 __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_CPUCR __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_D3CR __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_WKUPCR __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_WKUPFR __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_WKUPEPR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32H743xx )
#define PWR_CPUCR_SBF_D1     SBF_D1               // 1 bits @ 7
#define PWR_CPUCR_SBF_D2     SBF_D2               // 1 bits @ 8
#else
#define PWR_CPUCR_SBF_D1
#define PWR_CPUCR_SBF_D2
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32L0     ) || defined(STM32L1     )
#define PWR_CR
#define PWR_CSR
#define PWR_MAP0_CR          CR_TypeDef CR
#define PWR_MAP0_CSR         CSR_TypeDef CSR
#else
#define PWR_MAP0_CR __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_CSR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     )
#define PWR_CR_0_LPDS        LPDS                 // 1 bits @ 0
#else
#define PWR_CR_0_LPDS
#endif

#if defined(STM32F031x6 ) || defined(STM32F042x6 ) || defined(STM32F051x8 ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F091xC ) || defined(STM32F1     ) || defined(STM32F2     ) ||\
    defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F334x8 ) ||\
    defined(STM32F373xC ) || defined(STM32F4     ) || defined(STM32L0     ) || defined(STM32L1     )
#define PWR_CR_0_PVDE        PVDE                 // 1 bits @ 4
#define PWR_CR_0_PLS         PLS                  // 3 bits @ 5
#define PWR_CSR_0_PVDO       PVDO                 // 1 bits @ 2
#else
#define PWR_CR_0_PVDE
#define PWR_CR_0_PLS
#define PWR_CSR_0_PVDO
#endif

#if defined(STM32F2     ) || defined(STM32F4     )
#define PWR_CR_0_FPDS        FPDS                 // 1 bits @ 9
#define PWR_CSR_1_BRR        BRR                  // 1 bits @ 3
#define PWR_CSR_1_BRE        BRE                  // 1 bits @ 9
#else
#define PWR_CR_0_FPDS
#define PWR_CSR_1_BRR
#define PWR_CSR_1_BRE
#endif

#if defined(STM32F373xC ) || defined(STM32F378xx )
#define PWR_CR_0_ENSD2       ENSD2                // 1 bits @ 10
#define PWR_CR_0_ENSD3       ENSD3                // 1 bits @ 11
#define PWR_CR_1_ENSD1       ENSD1                // 1 bits @ 9
#define PWR_CR_1_SDADC2EN    SDADC2EN             // 1 bits @ 10
#define PWR_CR_1_SDADC3EN    SDADC3EN             // 1 bits @ 11
#define PWR_CR_2_SDADC1EN    SDADC1EN             // 1 bits @ 9
#else
#define PWR_CR_0_ENSD2
#define PWR_CR_0_ENSD3
#define PWR_CR_1_ENSD1
#define PWR_CR_1_SDADC2EN
#define PWR_CR_1_SDADC3EN
#define PWR_CR_2_SDADC1EN
#endif

#if defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
#define PWR_CR_0_ADCDC1      ADCDC1               // 1 bits @ 13
#define PWR_CR_0_VOS         VOS                  // 2 bits @ 14
#define PWR_CR_2_LPLVDS      LPLVDS               // 1 bits @ 10
#define PWR_CR_2_MRLVDS      MRLVDS               // 1 bits @ 11
#else
#define PWR_CR_0_ADCDC1
#define PWR_CR_0_VOS
#define PWR_CR_2_LPLVDS
#define PWR_CR_2_MRLVDS
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
#define PWR_CR_0_ODEN        ODEN                 // 1 bits @ 16
#define PWR_CR_0_ODSWEN      ODSWEN               // 1 bits @ 17
#define PWR_CR_0_UDEN        UDEN                 // 2 bits @ 18
#define PWR_CR_3_LPUDS       LPUDS                // 1 bits @ 10
#define PWR_CR_3_MRUDS       MRUDS                // 1 bits @ 11
#define PWR_CSR_0_ODRDY      ODRDY                // 1 bits @ 16
#define PWR_CSR_0_ODSWRDY    ODSWRDY              // 1 bits @ 17
#define PWR_CSR_0_UDRDY      UDRDY                // 2 bits @ 18
#define PWR_CSR_1_UDSWRDY    UDSWRDY              // 2 bits @ 18
#else
#define PWR_CR_0_ODEN
#define PWR_CR_0_ODSWEN
#define PWR_CR_0_UDEN
#define PWR_CR_3_LPUDS
#define PWR_CR_3_MRUDS
#define PWR_CSR_0_ODRDY
#define PWR_CSR_0_ODSWRDY
#define PWR_CSR_0_UDRDY
#define PWR_CSR_1_UDSWRDY
#endif

#if defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F411xE ) ||\
    defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) ||\
    defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F446xx )
#define PWR_CR_0_FMSSR       FMSSR                // 1 bits @ 20
#define PWR_CR_0_FISSR       FISSR                // 1 bits @ 21
#else
#define PWR_CR_0_FMSSR
#define PWR_CR_0_FISSR
#endif

#if defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F401xC ) || defined(STM32F401xE ) ||\
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F411xE ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32L0     ) ||\
    defined(STM32L1     )
#define PWR_CR_1
#endif

#if defined(STM32L0     ) || defined(STM32L1     )
#define PWR_CR_1_LPSDSR      LPSDSR               // 1 bits @ 0
#define PWR_CR_3_ULP         ULP                  // 1 bits @ 9
#define PWR_CR_3_LPRUN       LPRUN                // 1 bits @ 14
#define PWR_CR_4
#define PWR_CSR_0_VOSF       VOSF                 // 1 bits @ 4
#define PWR_CSR_0_REGLPF     REGLPF               // 1 bits @ 5
#else
#define PWR_CR_1_LPSDSR
#define PWR_CR_3_ULP
#define PWR_CR_3_LPRUN
#define PWR_CSR_0_VOSF
#define PWR_CSR_0_REGLPF
#endif

#if defined(STM32L0     )
#define PWR_CR_1_DSEEKOFF    DSEEKOFF             // 1 bits @ 13
#else
#define PWR_CR_1_DSEEKOFF
#endif

#if defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) ||\
    defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx ) || defined(STM32F411xE ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) ||\
    defined(STM32F479xx )
#define PWR_CR_1_PMODE       PMODE                // 2 bits @ 14
#define PWR_CSR_2
#else
#define PWR_CR_1_PMODE
#endif

#if defined(STM32L011xx ) || defined(STM32L021xx )
#define PWR_CR_1_LPDS        LPDS                 // 1 bits @ 16
#else
#define PWR_CR_1_LPDS
#endif

#if defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F4     )
#define PWR_CR_2
#endif

#if defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) || defined(STM32F417xx )
#define PWR_CR_2_VOS         VOS                  // 1 bits @ 14
#else
#define PWR_CR_2_VOS
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32L0     ) ||\
    defined(STM32L1     )
#define PWR_CR_3
#endif

#if defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define PWR_CR1
#define PWR_CR2
#define PWR_MAP1_CR1         CR1_TypeDef CR1
#else
#define PWR_MAP1_CR1 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F7     ) || defined(STM32H7     )
#define PWR_CR1_0_LPDS       LPDS                 // 1 bits @ 0
#define PWR_CR1_0_PLS        PLS                  // 3 bits @ 5
#define PWR_CSR1
#define PWR_MAP1_CSR1        CSR1_TypeDef CSR1
#define PWR_MAP0_CR2         CR2_TypeDef CR2
#else
#define PWR_CR1_0_LPDS
#define PWR_CR1_0_PLS
#define PWR_MAP1_CSR1 __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_CR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F7     )
#define PWR_CR1_0_PDDS       PDDS                 // 1 bits @ 1
#define PWR_CR1_0_CSBF       CSBF                 // 1 bits @ 3
#define PWR_CR1_0_PVDE       PVDE                 // 1 bits @ 4
#define PWR_CR1_0_FPDS       FPDS                 // 1 bits @ 9
#define PWR_CR1_0_LPUDS      LPUDS                // 1 bits @ 10
#define PWR_CR1_0_MRUDS      MRUDS                // 1 bits @ 11
#define PWR_CR1_0_ADCDC1     ADCDC1               // 1 bits @ 13
#define PWR_CR1_0_VOS        VOS                  // 2 bits @ 14
#define PWR_CR1_0_ODEN       ODEN                 // 1 bits @ 16
#define PWR_CR1_0_ODSWEN     ODSWEN               // 1 bits @ 17
#define PWR_CR1_0_UDEN       UDEN                 // 2 bits @ 18
#define PWR_CR2_0_CWUPF1     CWUPF1               // 1 bits @ 0
#define PWR_CR2_0_CWUPF2     CWUPF2               // 1 bits @ 1
#define PWR_CR2_0_CWUPF3     CWUPF3               // 1 bits @ 2
#define PWR_CR2_0_CWUPF4     CWUPF4               // 1 bits @ 3
#define PWR_CR2_0_CWUPF5     CWUPF5               // 1 bits @ 4
#define PWR_CR2_0_CWUPF6     CWUPF6               // 1 bits @ 5
#define PWR_CR2_0_WUPP1      WUPP1                // 1 bits @ 8
#define PWR_CR2_0_WUPP2      WUPP2                // 1 bits @ 9
#define PWR_CR2_0_WUPP3      WUPP3                // 1 bits @ 10
#define PWR_CR2_0_WUPP4      WUPP4                // 1 bits @ 11
#define PWR_CR2_0_WUPP5      WUPP5                // 1 bits @ 12
#define PWR_CR2_0_WUPP6      WUPP6                // 1 bits @ 13
#define PWR_CSR1_0_WUIF      WUIF                 // 1 bits @ 0
#define PWR_CSR1_0_SBF       SBF                  // 1 bits @ 1
#define PWR_CSR1_0_PVDO      PVDO                 // 1 bits @ 2
#define PWR_CSR1_0_BRR       BRR                  // 1 bits @ 3
#define PWR_CSR1_0_EIWUP     EIWUP                // 1 bits @ 8
#define PWR_CSR1_0_BRE       BRE                  // 1 bits @ 9
#define PWR_CSR1_0_VOSRDY    VOSRDY               // 1 bits @ 14
#define PWR_CSR1_0_ODRDY     ODRDY                // 1 bits @ 16
#define PWR_CSR1_0_ODSWRDY   ODSWRDY              // 1 bits @ 17
#define PWR_CSR1_0_UDRDY     UDRDY                // 2 bits @ 18
#define PWR_CSR2
#define PWR_MAP0_CSR2        CSR2_TypeDef CSR2
#else
#define PWR_CR1_0_PDDS
#define PWR_CR1_0_CSBF
#define PWR_CR1_0_PVDE
#define PWR_CR1_0_FPDS
#define PWR_CR1_0_LPUDS
#define PWR_CR1_0_MRUDS
#define PWR_CR1_0_ADCDC1
#define PWR_CR1_0_VOS
#define PWR_CR1_0_ODEN
#define PWR_CR1_0_ODSWEN
#define PWR_CR1_0_UDEN
#define PWR_CR2_0_CWUPF1
#define PWR_CR2_0_CWUPF2
#define PWR_CR2_0_CWUPF3
#define PWR_CR2_0_CWUPF4
#define PWR_CR2_0_CWUPF5
#define PWR_CR2_0_CWUPF6
#define PWR_CR2_0_WUPP1
#define PWR_CR2_0_WUPP2
#define PWR_CR2_0_WUPP3
#define PWR_CR2_0_WUPP4
#define PWR_CR2_0_WUPP5
#define PWR_CR2_0_WUPP6
#define PWR_CSR1_0_WUIF
#define PWR_CSR1_0_SBF
#define PWR_CSR1_0_PVDO
#define PWR_CSR1_0_BRR
#define PWR_CSR1_0_EIWUP
#define PWR_CSR1_0_BRE
#define PWR_CSR1_0_VOSRDY
#define PWR_CSR1_0_ODRDY
#define PWR_CSR1_0_ODSWRDY
#define PWR_CSR1_0_UDRDY
#define PWR_MAP0_CSR2 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define PWR_CR1_1
#define PWR_CR2_1
#define PWR_CR3
#endif

#if defined(STM32L4     ) || defined(STM32L4P    )
#define PWR_CR1_1_LPMS       LPMS                 // 3 bits @ 0
#define PWR_CR1_2
#define PWR_CR2_1_PLS        PLS                  // 3 bits @ 1
#define PWR_CR2_1_PVME3      PVME3                // 1 bits @ 6
#define PWR_CR2_1_PVME4      PVME4                // 1 bits @ 7
#define PWR_CR2_2
#define PWR_CR3_0_EWUP4      EWUP4                // 1 bits @ 3
#define PWR_CR3_0_EWUP5      EWUP5                // 1 bits @ 4
#define PWR_CR3_0_APC        APC                  // 1 bits @ 10
#define PWR_CR3_0_EIWUL      EIWUL                // 1 bits @ 15
#define PWR_CR3_1
#define PWR_CR3_2
#define PWR_CR4
#define PWR_PDCRA
#define PWR_PDCRB
#define PWR_PDCRC
#define PWR_PDCRD
#define PWR_PDCRE
#define PWR_PDCRH
#define PWR_PUCRA
#define PWR_PUCRB
#define PWR_PUCRC
#define PWR_PUCRD
#define PWR_PUCRE
#define PWR_PUCRH
#define PWR_SCR
#define PWR_SR1
#define PWR_SR2
#define PWR_MAP2_CR2         CR2_TypeDef CR2
#define PWR_MAP1_CR3         CR3_TypeDef CR3
#define PWR_MAP1_CR4         CR4_TypeDef CR4
#define PWR_MAP1_SR1         SR1_TypeDef SR1
#define PWR_MAP0_SR2         SR2_TypeDef SR2
#define PWR_MAP1_SCR         SCR_TypeDef SCR
#define PWR_MAP1_PUCRA       PUCRA_TypeDef PUCRA
#define PWR_MAP1_PDCRA       PDCRA_TypeDef PDCRA
#define PWR_MAP1_PUCRB       PUCRB_TypeDef PUCRB
#define PWR_MAP0_PDCRB       PDCRB_TypeDef PDCRB
#define PWR_MAP0_PUCRC       PUCRC_TypeDef PUCRC
#define PWR_MAP0_PDCRC       PDCRC_TypeDef PDCRC
#define PWR_MAP0_PUCRD       PUCRD_TypeDef PUCRD
#define PWR_MAP0_PDCRD       PDCRD_TypeDef PDCRD
#define PWR_MAP0_PUCRE       PUCRE_TypeDef PUCRE
#define PWR_MAP0_PDCRE       PDCRE_TypeDef PDCRE
#define PWR_MAP0_PUCRH       PUCRH_TypeDef PUCRH
#define PWR_MAP0_PDCRH       PDCRH_TypeDef PDCRH
#else
#define PWR_CR1_1_LPMS
#define PWR_CR2_1_PLS
#define PWR_CR2_1_PVME3
#define PWR_CR2_1_PVME4
#define PWR_CR3_0_EWUP4
#define PWR_CR3_0_EWUP5
#define PWR_CR3_0_APC
#define PWR_CR3_0_EIWUL
#define PWR_MAP2_CR2 __SOOL_PERIPH_PADDING_4
#define PWR_MAP1_CR3 __SOOL_PERIPH_PADDING_4
#define PWR_MAP1_CR4 __SOOL_PERIPH_PADDING_4
#define PWR_MAP1_SR1 __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_SR2 __SOOL_PERIPH_PADDING_4
#define PWR_MAP1_SCR __SOOL_PERIPH_PADDING_4
#define PWR_MAP1_PUCRA __SOOL_PERIPH_PADDING_4
#define PWR_MAP1_PDCRA __SOOL_PERIPH_PADDING_4
#define PWR_MAP1_PUCRB __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PDCRB __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PUCRC __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PDCRC __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PUCRD __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PDCRD __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PUCRE __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PDCRE __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PUCRH __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PDCRH __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L4P    )
#define PWR_CR1_2_RRSTP      RRSTP                // 1 bits @ 4
#define PWR_CR3_0_DSIPDEN    DSIPDEN              // 1 bits @ 12
#define PWR_CR5
#define PWR_MAP0_CR5         CR5_TypeDef CR5
#else
#define PWR_CR1_2_RRSTP
#define PWR_CR3_0_DSIPDEN
#define PWR_MAP0_CR5 __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L431xx ) || defined(STM32L432xx ) ||\
    defined(STM32L442xx ) || defined(STM32L451xx )
#define PWR_CR2_0
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L442xx ) || defined(STM32L451xx )
#define PWR_CR2_0_PVME       PVME                 // 2 bits @ 6
#else
#define PWR_CR2_0_PVME
#endif

#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define PWR_CR2_1_PVME2      PVME2                // 1 bits @ 5
#define PWR_CR2_1_IOSV       IOSV                 // 1 bits @ 9
#define PWR_PDCRF
#define PWR_PDCRG
#define PWR_PUCRF
#define PWR_PUCRG
#define PWR_SR2_PVMO2        PVMO2                // 1 bits @ 13
#define PWR_MAP0_PUCRF       PUCRF_TypeDef PUCRF
#define PWR_MAP0_PDCRF       PDCRF_TypeDef PDCRF
#define PWR_MAP0_PUCRG       PUCRG_TypeDef PUCRG
#define PWR_MAP0_PDCRG       PDCRG_TypeDef PDCRG
#else
#define PWR_CR2_1_PVME2
#define PWR_CR2_1_IOSV
#define PWR_SR2_PVMO2
#define PWR_MAP0_PUCRF __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PDCRF __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PUCRG __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PDCRG __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) ||\
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) ||\
    defined(STM32L4P    )
#define PWR_CR2_1_USV        USV                  // 1 bits @ 10
#else
#define PWR_CR2_1_USV
#endif

#if defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define PWR_CR2_2_PVME1      PVME1                // 1 bits @ 4
#define PWR_SR2_PVMO1        PVMO1                // 1 bits @ 12
#else
#define PWR_CR2_2_PVME1
#define PWR_SR2_PVMO1
#endif

#if defined(STM32L471xx )
#define PWR_CR2_2_PVME       PVME                 // 3 bits @ 5
#else
#define PWR_CR2_2_PVME
#endif

#if defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define PWR_CR2_3
#endif

#if defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) ||\
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F301x8 ) ||\
    defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32L0     ) || defined(STM32L1     )
#define PWR_CSR_0_VREFINTRDYF VREFINTRDYF          // 1 bits @ 3
#else
#define PWR_CSR_0_VREFINTRDYF
#endif

#if defined(STM32F469xx ) || defined(STM32F479xx )
#define PWR_CSR_0_WUPP       WUPP                 // 1 bits @ 7
#else
#define PWR_CSR_0_WUPP
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F446xx ) || defined(STM32L0     ) ||\
    defined(STM32L1     )
#define PWR_CSR_0_EWUP1      EWUP1                // 1 bits @ 8
#else
#define PWR_CSR_0_EWUP1
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L0     ) || defined(STM32L1     )
#define PWR_CSR_0_EWUP2      EWUP2                // 1 bits @ 9
#else
#define PWR_CSR_0_EWUP2
#endif

#if defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) ||\
    defined(STM32F098xx ) || defined(STM32F3     ) || defined(STM32L011xx ) || defined(STM32L021xx ) ||\
    defined(STM32L031xx ) || defined(STM32L041xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) ||\
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) ||\
    defined(STM32L1     )
#define PWR_CSR_0_EWUP3      EWUP3                // 1 bits @ 10
#else
#define PWR_CSR_0_EWUP3
#endif

#if defined(STM32F030xC ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070xB ) ||\
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) ||\
    defined(STM32F098xx )
#define PWR_CSR_0_EWUP4      EWUP4                // 1 bits @ 11
#define PWR_CSR_0_EWUP6      EWUP6                // 1 bits @ 13
#define PWR_CSR_0_EWUP7      EWUP7                // 1 bits @ 14
#else
#define PWR_CSR_0_EWUP4
#define PWR_CSR_0_EWUP6
#define PWR_CSR_0_EWUP7
#endif

#if defined(STM32F030xC ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx )
#define PWR_CSR_0_EWUP5      EWUP5                // 1 bits @ 12
#else
#define PWR_CSR_0_EWUP5
#endif

#if defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) ||\
    defined(STM32F098xx )
#define PWR_CSR_0_EWUP8      EWUP8                // 1 bits @ 15
#else
#define PWR_CSR_0_EWUP8
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F4     )
#define PWR_CSR_1
#endif

#if defined(STM32F446xx )
#define PWR_CSR_1_EWUP2      EWUP2                // 1 bits @ 7
#else
#define PWR_CSR_1_EWUP2
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) ||\
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
#define PWR_CSR_1_EWUP       EWUP                 // 1 bits @ 8
#else
#define PWR_CSR_1_EWUP
#endif

#if defined(STM32F4     )
#define PWR_CSR_1_VOSRDY     VOSRDY               // 1 bits @ 14
#else
#define PWR_CSR_1_VOSRDY
#endif

#if defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32H7     )
#define PWR_CSR1_1
#endif

#if defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx )
#define PWR_CSR1_1_UDSWRDY   UDSWRDY              // 2 bits @ 18
#else
#define PWR_CSR1_1_UDSWRDY
#endif

#if defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) ||\
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) ||\
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) || defined(STM32L4P    )
#define PWR_PDCRB_PB2        PB2                  // 1 bits @ 2
#define PWR_PDCRB_PB8        PB8                  // 1 bits @ 8
#define PWR_PDCRB_PB9        PB9                  // 1 bits @ 9
#define PWR_PDCRB_PB10       PB10                 // 1 bits @ 10
#define PWR_PDCRB_PB11       PB11                 // 1 bits @ 11
#define PWR_PDCRB_PB12       PB12                 // 1 bits @ 12
#define PWR_PDCRB_PB13       PB13                 // 1 bits @ 13
#define PWR_PDCRB_PB14       PB14                 // 1 bits @ 14
#define PWR_PDCRB_PB15       PB15                 // 1 bits @ 15
#define PWR_PDCRC_PC0        PC0                  // 1 bits @ 0
#define PWR_PDCRC_PC1        PC1                  // 1 bits @ 1
#define PWR_PDCRC_PC2        PC2                  // 1 bits @ 2
#define PWR_PDCRC_PC3        PC3                  // 1 bits @ 3
#define PWR_PDCRC_PC4        PC4                  // 1 bits @ 4
#define PWR_PDCRC_PC5        PC5                  // 1 bits @ 5
#define PWR_PDCRC_PC6        PC6                  // 1 bits @ 6
#define PWR_PDCRC_PC7        PC7                  // 1 bits @ 7
#define PWR_PDCRC_PC8        PC8                  // 1 bits @ 8
#define PWR_PDCRC_PC9        PC9                  // 1 bits @ 9
#define PWR_PDCRC_PC10       PC10                 // 1 bits @ 10
#define PWR_PDCRC_PC11       PC11                 // 1 bits @ 11
#define PWR_PDCRC_PC12       PC12                 // 1 bits @ 12
#define PWR_PDCRC_PC13       PC13                 // 1 bits @ 13
#define PWR_PDCRH_PH0        PH0                  // 1 bits @ 0
#define PWR_PDCRH_PH1        PH1                  // 1 bits @ 1
#define PWR_PUCRB_PB2        PB2                  // 1 bits @ 2
#define PWR_PUCRB_PB8        PB8                  // 1 bits @ 8
#define PWR_PUCRB_PB9        PB9                  // 1 bits @ 9
#define PWR_PUCRB_PB10       PB10                 // 1 bits @ 10
#define PWR_PUCRB_PB11       PB11                 // 1 bits @ 11
#define PWR_PUCRB_PB12       PB12                 // 1 bits @ 12
#define PWR_PUCRB_PB13       PB13                 // 1 bits @ 13
#define PWR_PUCRB_PB14       PB14                 // 1 bits @ 14
#define PWR_PUCRB_PB15       PB15                 // 1 bits @ 15
#define PWR_PUCRC_PC0        PC0                  // 1 bits @ 0
#define PWR_PUCRC_PC1        PC1                  // 1 bits @ 1
#define PWR_PUCRC_PC2        PC2                  // 1 bits @ 2
#define PWR_PUCRC_PC3        PC3                  // 1 bits @ 3
#define PWR_PUCRC_PC4        PC4                  // 1 bits @ 4
#define PWR_PUCRC_PC5        PC5                  // 1 bits @ 5
#define PWR_PUCRC_PC6        PC6                  // 1 bits @ 6
#define PWR_PUCRC_PC7        PC7                  // 1 bits @ 7
#define PWR_PUCRC_PC8        PC8                  // 1 bits @ 8
#define PWR_PUCRC_PC9        PC9                  // 1 bits @ 9
#define PWR_PUCRC_PC10       PC10                 // 1 bits @ 10
#define PWR_PUCRC_PC11       PC11                 // 1 bits @ 11
#define PWR_PUCRC_PC12       PC12                 // 1 bits @ 12
#define PWR_PUCRC_PC13       PC13                 // 1 bits @ 13
#define PWR_PUCRH_PH0        PH0                  // 1 bits @ 0
#define PWR_PUCRH_PH1        PH1                  // 1 bits @ 1
#else
#define PWR_PDCRB_PB2
#define PWR_PDCRB_PB8
#define PWR_PDCRB_PB9
#define PWR_PDCRB_PB10
#define PWR_PDCRB_PB11
#define PWR_PDCRB_PB12
#define PWR_PDCRB_PB13
#define PWR_PDCRB_PB14
#define PWR_PDCRB_PB15
#define PWR_PDCRC_PC0
#define PWR_PDCRC_PC1
#define PWR_PDCRC_PC2
#define PWR_PDCRC_PC3
#define PWR_PDCRC_PC4
#define PWR_PDCRC_PC5
#define PWR_PDCRC_PC6
#define PWR_PDCRC_PC7
#define PWR_PDCRC_PC8
#define PWR_PDCRC_PC9
#define PWR_PDCRC_PC10
#define PWR_PDCRC_PC11
#define PWR_PDCRC_PC12
#define PWR_PDCRC_PC13
#define PWR_PDCRH_PH0
#define PWR_PDCRH_PH1
#define PWR_PUCRB_PB2
#define PWR_PUCRB_PB8
#define PWR_PUCRB_PB9
#define PWR_PUCRB_PB10
#define PWR_PUCRB_PB11
#define PWR_PUCRB_PB12
#define PWR_PUCRB_PB13
#define PWR_PUCRB_PB14
#define PWR_PUCRB_PB15
#define PWR_PUCRC_PC0
#define PWR_PUCRC_PC1
#define PWR_PUCRC_PC2
#define PWR_PUCRC_PC3
#define PWR_PUCRC_PC4
#define PWR_PUCRC_PC5
#define PWR_PUCRC_PC6
#define PWR_PUCRC_PC7
#define PWR_PUCRC_PC8
#define PWR_PUCRC_PC9
#define PWR_PUCRC_PC10
#define PWR_PUCRC_PC11
#define PWR_PUCRC_PC12
#define PWR_PUCRC_PC13
#define PWR_PUCRH_PH0
#define PWR_PUCRH_PH1
#endif

#if defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define PWR_PDCRH_PH2        PH2                  // 1 bits @ 2
#define PWR_PDCRH_PH4        PH4                  // 1 bits @ 4
#define PWR_PDCRH_PH5        PH5                  // 1 bits @ 5
#define PWR_PDCRH_PH6        PH6                  // 1 bits @ 6
#define PWR_PDCRH_PH7        PH7                  // 1 bits @ 7
#define PWR_PDCRH_PH8        PH8                  // 1 bits @ 8
#define PWR_PDCRH_PH9        PH9                  // 1 bits @ 9
#define PWR_PDCRH_PH10       PH10                 // 1 bits @ 10
#define PWR_PDCRH_PH11       PH11                 // 1 bits @ 11
#define PWR_PDCRH_PH12       PH12                 // 1 bits @ 12
#define PWR_PDCRH_PH13       PH13                 // 1 bits @ 13
#define PWR_PDCRH_PH14       PH14                 // 1 bits @ 14
#define PWR_PDCRH_PH15       PH15                 // 1 bits @ 15
#define PWR_PDCRI
#define PWR_PUCRH_PH2        PH2                  // 1 bits @ 2
#define PWR_PUCRH_PH4        PH4                  // 1 bits @ 4
#define PWR_PUCRH_PH5        PH5                  // 1 bits @ 5
#define PWR_PUCRH_PH6        PH6                  // 1 bits @ 6
#define PWR_PUCRH_PH7        PH7                  // 1 bits @ 7
#define PWR_PUCRH_PH8        PH8                  // 1 bits @ 8
#define PWR_PUCRH_PH9        PH9                  // 1 bits @ 9
#define PWR_PUCRH_PH10       PH10                 // 1 bits @ 10
#define PWR_PUCRH_PH11       PH11                 // 1 bits @ 11
#define PWR_PUCRH_PH12       PH12                 // 1 bits @ 12
#define PWR_PUCRH_PH13       PH13                 // 1 bits @ 13
#define PWR_PUCRH_PH14       PH14                 // 1 bits @ 14
#define PWR_PUCRH_PH15       PH15                 // 1 bits @ 15
#define PWR_PUCRI
#define PWR_MAP0_PUCRI       PUCRI_TypeDef PUCRI
#define PWR_MAP0_PDCRI       PDCRI_TypeDef PDCRI
#else
#define PWR_PDCRH_PH2
#define PWR_PDCRH_PH4
#define PWR_PDCRH_PH5
#define PWR_PDCRH_PH6
#define PWR_PDCRH_PH7
#define PWR_PDCRH_PH8
#define PWR_PDCRH_PH9
#define PWR_PDCRH_PH10
#define PWR_PDCRH_PH11
#define PWR_PDCRH_PH12
#define PWR_PDCRH_PH13
#define PWR_PDCRH_PH14
#define PWR_PDCRH_PH15
#define PWR_PUCRH_PH2
#define PWR_PUCRH_PH4
#define PWR_PUCRH_PH5
#define PWR_PUCRH_PH6
#define PWR_PUCRH_PH7
#define PWR_PUCRH_PH8
#define PWR_PUCRH_PH9
#define PWR_PUCRH_PH10
#define PWR_PUCRH_PH11
#define PWR_PUCRH_PH12
#define PWR_PUCRH_PH13
#define PWR_PUCRH_PH14
#define PWR_PUCRH_PH15
#define PWR_MAP0_PUCRI __SOOL_PERIPH_PADDING_4
#define PWR_MAP0_PDCRI __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32L431xx ) || defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) ||\
    defined(STM32L443xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define PWR_PDCRH_PH3        PH3                  // 1 bits @ 3
#define PWR_PUCRH_PH3        PH3                  // 1 bits @ 3
#else
#define PWR_PDCRH_PH3
#define PWR_PUCRH_PH3
#endif

//endregion
namespace sool
{
	namespace core
	{
//region related-types
		
//endregion
//region peripheral-declaration

		class PWR
		{
			

		public :

#ifdef PWR_CPUCR
			struct CPUCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PDDS_D1              :1;
					uint32_t PDDS_D2              :1;
					uint32_t PDDS_D3              :1;
					uint32_t                      :2;
					uint32_t STOPF                :1;
					uint32_t SBF                  :1;
					uint32_t PWR_CPUCR_SBF_D1     :1;
					uint32_t PWR_CPUCR_SBF_D2     :1;
					uint32_t CSSF                 :1;
					uint32_t                      :1;
					uint32_t RUN_D3               :1;
					uint32_t                      :20;

				
			};
#endif

#ifdef PWR_CR
			struct CR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t PWR_CR_0_LPDS        :1;
						uint32_t PDDS                 :1;
						uint32_t CWUF                 :1;
						uint32_t CSBF                 :1;
						uint32_t PWR_CR_0_PVDE        :1;
						uint32_t PWR_CR_0_PLS         :3;
						uint32_t DBP                  :1;
						uint32_t PWR_CR_0_FPDS        :1;
						uint32_t PWR_CR_0_ENSD2       :1;
						uint32_t PWR_CR_0_ENSD3       :1;
						uint32_t                      :1;
						uint32_t PWR_CR_0_ADCDC1      :1;
						uint32_t PWR_CR_0_VOS         :2;
						uint32_t PWR_CR_0_ODEN        :1;
						uint32_t PWR_CR_0_ODSWEN      :1;
						uint32_t PWR_CR_0_UDEN        :2;
						uint32_t PWR_CR_0_FMSSR       :1;
						uint32_t PWR_CR_0_FISSR       :1;
						uint32_t                      :10;
					};
					#ifdef PWR_CR_1
					struct
					{
						uint32_t PWR_CR_1_LPSDSR      :1;
						uint32_t                      :8;
						uint32_t PWR_CR_1_ENSD1       :1;
						uint32_t PWR_CR_1_SDADC2EN    :1;
						uint32_t PWR_CR_1_SDADC3EN    :1;
						uint32_t                      :1;
						uint32_t PWR_CR_1_DSEEKOFF    :1;
						uint32_t PWR_CR_1_PMODE       :2;
						uint32_t PWR_CR_1_LPDS        :1;
						uint32_t                      :15;
					};
					#endif
					#ifdef PWR_CR_2
					struct
					{
						uint32_t                      :9;
						uint32_t PWR_CR_2_SDADC1EN    :1;
						uint32_t PWR_CR_2_LPLVDS      :1;
						uint32_t PWR_CR_2_MRLVDS      :1;
						uint32_t                      :2;
						uint32_t PWR_CR_2_VOS         :1;
						uint32_t                      :17;
					};
					#endif
					#ifdef PWR_CR_3
					struct
					{
						uint32_t                      :9;
						uint32_t PWR_CR_3_ULP         :1;
						uint32_t PWR_CR_3_LPUDS       :1;
						uint32_t PWR_CR_3_MRUDS       :1;
						uint32_t                      :2;
						uint32_t PWR_CR_3_LPRUN       :1;
						uint32_t                      :17;
					};
					#endif
					#ifdef PWR_CR_4
					struct
					{
						uint32_t                      :10;
						uint32_t FWU                  :1;
						uint32_t VOS                  :2;
						uint32_t                      :19;
					};
					#endif
				};
				
			};
#endif

#ifdef PWR_CR1
			struct CR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t PWR_CR1_0_LPDS       :1;
						uint32_t PWR_CR1_0_PDDS       :1;
						uint32_t                      :1;
						uint32_t PWR_CR1_0_CSBF       :1;
						uint32_t PWR_CR1_0_PVDE       :1;
						uint32_t PWR_CR1_0_PLS        :3;
						uint32_t DBP                  :1;
						uint32_t PWR_CR1_0_FPDS       :1;
						uint32_t PWR_CR1_0_LPUDS      :1;
						uint32_t PWR_CR1_0_MRUDS      :1;
						uint32_t                      :1;
						uint32_t PWR_CR1_0_ADCDC1     :1;
						uint32_t PWR_CR1_0_VOS        :2;
						uint32_t PWR_CR1_0_ODEN       :1;
						uint32_t PWR_CR1_0_ODSWEN     :1;
						uint32_t PWR_CR1_0_UDEN       :2;
						uint32_t                      :12;
					};
					#ifdef PWR_CR1_1
					struct
					{
						uint32_t PWR_CR1_1_LPMS       :3;
						uint32_t                      :1;
						uint32_t PWR_CR1_1_PVDEN      :1;
						uint32_t                      :4;
						uint32_t PWR_CR1_1_FLPS       :1;
						uint32_t PWR_CR1_1_RLPSN      :1;
						uint32_t                      :3;
						uint32_t PWR_CR1_1_SVOS       :2;
						uint32_t PWR_CR1_1_AVDEN      :1;
						uint32_t PWR_CR1_1_ALS        :2;
						uint32_t                      :13;
					};
					#endif
					#ifdef PWR_CR1_2
					struct
					{
						uint32_t                      :4;
						uint32_t PWR_CR1_2_RRSTP      :1;
						uint32_t                      :4;
						uint32_t VOS                  :2;
						uint32_t                      :3;
						uint32_t LPR                  :1;
						uint32_t                      :17;
					};
					#endif
				};
				
			};
#endif

#ifdef PWR_CR2
			struct CR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					#ifdef PWR_CR2_0
					struct
					{
						uint32_t PWR_CR2_0_CWUPF1     :1;
						uint32_t PWR_CR2_0_CWUPF2     :1;
						uint32_t PWR_CR2_0_CWUPF3     :1;
						uint32_t PWR_CR2_0_CWUPF4     :1;
						uint32_t PWR_CR2_0_CWUPF5     :1;
						uint32_t PWR_CR2_0_CWUPF6     :1;
						uint32_t PWR_CR2_0_PVME       :2;
						uint32_t PWR_CR2_0_WUPP1      :1;
						uint32_t PWR_CR2_0_WUPP2      :1;
						uint32_t PWR_CR2_0_WUPP3      :1;
						uint32_t PWR_CR2_0_WUPP4      :1;
						uint32_t PWR_CR2_0_WUPP5      :1;
						uint32_t PWR_CR2_0_WUPP6      :1;
						uint32_t                      :2;
						uint32_t PWR_CR2_0_BRRDY      :1;
						uint32_t                      :3;
						uint32_t PWR_CR2_0_VBATL      :1;
						uint32_t PWR_CR2_0_VBATH      :1;
						uint32_t PWR_CR2_0_TEMPL      :1;
						uint32_t PWR_CR2_0_TEMPH      :1;
						uint32_t                      :8;
					};
					#endif
					#ifdef PWR_CR2_1
					struct
					{
						uint32_t PWR_CR2_1_BREN       :1;
						uint32_t PWR_CR2_1_PLS        :3;
						uint32_t PWR_CR2_1_MONEN      :1;
						uint32_t PWR_CR2_1_PVME2      :1;
						uint32_t PWR_CR2_1_PVME3      :1;
						uint32_t PWR_CR2_1_PVME4      :1;
						uint32_t                      :1;
						uint32_t PWR_CR2_1_IOSV       :1;
						uint32_t PWR_CR2_1_USV        :1;
						uint32_t                      :21;
					};
					#endif
					#ifdef PWR_CR2_2
					struct
					{
						uint32_t PVDE                 :1;
						uint32_t                      :3;
						uint32_t PWR_CR2_2_PVME1      :1;
						uint32_t PWR_CR2_2_PVME       :3;
						uint32_t                      :24;
					};
					#endif
					#ifdef PWR_CR2_3
					struct
					{
						uint32_t                      :4;
						uint32_t PVME                 :4;
						uint32_t                      :24;
					};
					#endif
				};
				
			};
#endif

#ifdef PWR_CR3
			struct CR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t PWR_CR3_0_BYPASS     :1;
						uint32_t PWR_CR3_0_LDOEN      :1;
						uint32_t PWR_CR3_0_SCUEN      :1;
						uint32_t PWR_CR3_0_EWUP4      :1;
						uint32_t PWR_CR3_0_EWUP5      :1;
						uint32_t                      :3;
						uint32_t PWR_CR3_0_VBE        :1;
						uint32_t PWR_CR3_0_VBRS       :1;
						uint32_t PWR_CR3_0_APC        :1;
						uint32_t                      :1;
						uint32_t PWR_CR3_0_DSIPDEN    :1;
						uint32_t                      :2;
						uint32_t PWR_CR3_0_EIWUL      :1;
						uint32_t                      :8;
						uint32_t PWR_CR3_0_USB33DEN   :1;
						uint32_t PWR_CR3_0_USBREGEN   :1;
						uint32_t PWR_CR3_0_USB33RDY   :1;
						uint32_t                      :5;
					};
					#ifdef PWR_CR3_1
					struct
					{
						uint32_t EWUP1                :1;
						uint32_t EWUP2                :1;
						uint32_t EWUP3                :1;
						uint32_t                      :5;
						uint32_t RRS                  :1;
						uint32_t                      :6;
						uint32_t EIWF                 :1;
						uint32_t                      :16;
					};
					#endif
					#ifdef PWR_CR3_2
					struct
					{
						uint32_t EWUP                 :5;
						uint32_t                      :27;
					};
					#endif
				};
				
			};
#endif

#ifdef PWR_CR4
			struct CR4_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t WP1                  :1;
					uint32_t WP2                  :1;
					uint32_t WP3                  :1;
					uint32_t WP4                  :1;
					uint32_t WP5                  :1;
					uint32_t                      :3;
					uint32_t VBE                  :1;
					uint32_t VBRS                 :1;
					uint32_t                      :22;

				
			};
#endif

#ifdef PWR_CR5
			struct CR5_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :8;
					uint32_t R1MODE               :1;
					uint32_t                      :23;

				
			};
#endif

#ifdef PWR_CSR
			struct CSR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t WUF                  :1;
						uint32_t SBF                  :1;
						uint32_t PWR_CSR_0_PVDO       :1;
						uint32_t PWR_CSR_0_VREFINTRDYF :1;
						uint32_t PWR_CSR_0_VOSF       :1;
						uint32_t PWR_CSR_0_REGLPF     :1;
						uint32_t                      :1;
						uint32_t PWR_CSR_0_WUPP       :1;
						uint32_t PWR_CSR_0_EWUP1      :1;
						uint32_t PWR_CSR_0_EWUP2      :1;
						uint32_t PWR_CSR_0_EWUP3      :1;
						uint32_t PWR_CSR_0_EWUP4      :1;
						uint32_t PWR_CSR_0_EWUP5      :1;
						uint32_t PWR_CSR_0_EWUP6      :1;
						uint32_t PWR_CSR_0_EWUP7      :1;
						uint32_t PWR_CSR_0_EWUP8      :1;
						uint32_t PWR_CSR_0_ODRDY      :1;
						uint32_t PWR_CSR_0_ODSWRDY    :1;
						uint32_t PWR_CSR_0_UDRDY      :2;
						uint32_t                      :12;
					};
					#ifdef PWR_CSR_1
					struct
					{
						uint32_t                      :3;
						uint32_t PWR_CSR_1_BRR        :1;
						uint32_t                      :3;
						uint32_t PWR_CSR_1_EWUP2      :1;
						uint32_t PWR_CSR_1_EWUP       :1;
						uint32_t PWR_CSR_1_BRE        :1;
						uint32_t                      :4;
						uint32_t PWR_CSR_1_VOSRDY     :1;
						uint32_t                      :3;
						uint32_t PWR_CSR_1_UDSWRDY    :2;
						uint32_t                      :12;
					};
					#endif
					#ifdef PWR_CSR_2
					struct
					{
						uint32_t                      :14;
						uint32_t REGRDY               :1;
						uint32_t                      :17;
					};
					#endif
				};
				
			};
#endif

#ifdef PWR_CSR1
			struct CSR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t PWR_CSR1_0_WUIF      :1;
						uint32_t PWR_CSR1_0_SBF       :1;
						uint32_t PWR_CSR1_0_PVDO      :1;
						uint32_t PWR_CSR1_0_BRR       :1;
						uint32_t                      :4;
						uint32_t PWR_CSR1_0_EIWUP     :1;
						uint32_t PWR_CSR1_0_BRE       :1;
						uint32_t                      :3;
						uint32_t PWR_CSR1_0_ACTVOSRDY :1;
						uint32_t PWR_CSR1_0_VOSRDY    :1;
						uint32_t                      :1;
						uint32_t PWR_CSR1_0_ODRDY     :1;
						uint32_t PWR_CSR1_0_ODSWRDY   :1;
						uint32_t PWR_CSR1_0_UDRDY     :2;
						uint32_t                      :12;
					};
					#ifdef PWR_CSR1_1
					struct
					{
						uint32_t                      :4;
						uint32_t PWR_CSR1_1_PVDO      :1;
						uint32_t                      :9;
						uint32_t PWR_CSR1_1_ACTVOS    :2;
						uint32_t PWR_CSR1_1_AVDO      :1;
						uint32_t                      :1;
						uint32_t PWR_CSR1_1_UDSWRDY   :2;
						uint32_t                      :12;
					};
					#endif
				};
				
			};
#endif

#ifdef PWR_CSR2
			struct CSR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t WUPF1                :1;
					uint32_t WUPF2                :1;
					uint32_t WUPF3                :1;
					uint32_t WUPF4                :1;
					uint32_t WUPF5                :1;
					uint32_t WUPF6                :1;
					uint32_t                      :2;
					uint32_t EWUP1                :1;
					uint32_t EWUP2                :1;
					uint32_t EWUP3                :1;
					uint32_t EWUP4                :1;
					uint32_t EWUP5                :1;
					uint32_t EWUP6                :1;
					uint32_t                      :18;

				
			};
#endif

#ifdef PWR_D3CR
			struct D3CR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :13;
					uint32_t VOSRDY               :1;
					uint32_t VOS                  :2;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PDCRA
			struct PDCRA_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PA0                  :1;
					uint32_t PA1                  :1;
					uint32_t PA2                  :1;
					uint32_t PA3                  :1;
					uint32_t PA4                  :1;
					uint32_t PA5                  :1;
					uint32_t PA6                  :1;
					uint32_t PA7                  :1;
					uint32_t PA8                  :1;
					uint32_t PA9                  :1;
					uint32_t PA10                 :1;
					uint32_t PA11                 :1;
					uint32_t PA12                 :1;
					uint32_t                      :1;
					uint32_t PA14                 :1;
					uint32_t                      :17;

				
			};
#endif

#ifdef PWR_PDCRB
			struct PDCRB_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PB0                  :1;
					uint32_t PB1                  :1;
					uint32_t PWR_PDCRB_PB2        :1;
					uint32_t PB3                  :1;
					uint32_t                      :1;
					uint32_t PB5                  :1;
					uint32_t PB6                  :1;
					uint32_t PB7                  :1;
					uint32_t PWR_PDCRB_PB8        :1;
					uint32_t PWR_PDCRB_PB9        :1;
					uint32_t PWR_PDCRB_PB10       :1;
					uint32_t PWR_PDCRB_PB11       :1;
					uint32_t PWR_PDCRB_PB12       :1;
					uint32_t PWR_PDCRB_PB13       :1;
					uint32_t PWR_PDCRB_PB14       :1;
					uint32_t PWR_PDCRB_PB15       :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PDCRC
			struct PDCRC_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PWR_PDCRC_PC0        :1;
					uint32_t PWR_PDCRC_PC1        :1;
					uint32_t PWR_PDCRC_PC2        :1;
					uint32_t PWR_PDCRC_PC3        :1;
					uint32_t PWR_PDCRC_PC4        :1;
					uint32_t PWR_PDCRC_PC5        :1;
					uint32_t PWR_PDCRC_PC6        :1;
					uint32_t PWR_PDCRC_PC7        :1;
					uint32_t PWR_PDCRC_PC8        :1;
					uint32_t PWR_PDCRC_PC9        :1;
					uint32_t PWR_PDCRC_PC10       :1;
					uint32_t PWR_PDCRC_PC11       :1;
					uint32_t PWR_PDCRC_PC12       :1;
					uint32_t PWR_PDCRC_PC13       :1;
					uint32_t PC14                 :1;
					uint32_t PC15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PDCRD
			struct PDCRD_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PD0                  :1;
					uint32_t PD1                  :1;
					uint32_t PD2                  :1;
					uint32_t PD3                  :1;
					uint32_t PD4                  :1;
					uint32_t PD5                  :1;
					uint32_t PD6                  :1;
					uint32_t PD7                  :1;
					uint32_t PD8                  :1;
					uint32_t PD9                  :1;
					uint32_t PD10                 :1;
					uint32_t PD11                 :1;
					uint32_t PD12                 :1;
					uint32_t PD13                 :1;
					uint32_t PD14                 :1;
					uint32_t PD15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PDCRE
			struct PDCRE_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PE0                  :1;
					uint32_t PE1                  :1;
					uint32_t PE2                  :1;
					uint32_t PE3                  :1;
					uint32_t PE4                  :1;
					uint32_t PE5                  :1;
					uint32_t PE6                  :1;
					uint32_t PE7                  :1;
					uint32_t PE8                  :1;
					uint32_t PE9                  :1;
					uint32_t PE10                 :1;
					uint32_t PE11                 :1;
					uint32_t PE12                 :1;
					uint32_t PE13                 :1;
					uint32_t PE14                 :1;
					uint32_t PE15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PDCRF
			struct PDCRF_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PF0                  :1;
					uint32_t PF1                  :1;
					uint32_t PF2                  :1;
					uint32_t PF3                  :1;
					uint32_t PF4                  :1;
					uint32_t PF5                  :1;
					uint32_t PF6                  :1;
					uint32_t PF7                  :1;
					uint32_t PF8                  :1;
					uint32_t PF9                  :1;
					uint32_t PF10                 :1;
					uint32_t PF11                 :1;
					uint32_t PF12                 :1;
					uint32_t PF13                 :1;
					uint32_t PF14                 :1;
					uint32_t PF15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PDCRG
			struct PDCRG_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PG0                  :1;
					uint32_t PG1                  :1;
					uint32_t PG2                  :1;
					uint32_t PG3                  :1;
					uint32_t PG4                  :1;
					uint32_t PG5                  :1;
					uint32_t PG6                  :1;
					uint32_t PG7                  :1;
					uint32_t PG8                  :1;
					uint32_t PG9                  :1;
					uint32_t PG10                 :1;
					uint32_t PG11                 :1;
					uint32_t PG12                 :1;
					uint32_t PG13                 :1;
					uint32_t PG14                 :1;
					uint32_t PG15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PDCRH
			struct PDCRH_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PWR_PDCRH_PH0        :1;
					uint32_t PWR_PDCRH_PH1        :1;
					uint32_t PWR_PDCRH_PH2        :1;
					uint32_t PWR_PDCRH_PH3        :1;
					uint32_t PWR_PDCRH_PH4        :1;
					uint32_t PWR_PDCRH_PH5        :1;
					uint32_t PWR_PDCRH_PH6        :1;
					uint32_t PWR_PDCRH_PH7        :1;
					uint32_t PWR_PDCRH_PH8        :1;
					uint32_t PWR_PDCRH_PH9        :1;
					uint32_t PWR_PDCRH_PH10       :1;
					uint32_t PWR_PDCRH_PH11       :1;
					uint32_t PWR_PDCRH_PH12       :1;
					uint32_t PWR_PDCRH_PH13       :1;
					uint32_t PWR_PDCRH_PH14       :1;
					uint32_t PWR_PDCRH_PH15       :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PDCRI
			struct PDCRI_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PI0                  :1;
					uint32_t PI1                  :1;
					uint32_t PI2                  :1;
					uint32_t PI3                  :1;
					uint32_t PI4                  :1;
					uint32_t PI5                  :1;
					uint32_t PI6                  :1;
					uint32_t PI7                  :1;
					uint32_t PI8                  :1;
					uint32_t PI9                  :1;
					uint32_t PI10                 :1;
					uint32_t PI11                 :1;
					uint32_t                      :20;

				
			};
#endif

#ifdef PWR_PUCRA
			struct PUCRA_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PA0                  :1;
					uint32_t PA1                  :1;
					uint32_t PA2                  :1;
					uint32_t PA3                  :1;
					uint32_t PA4                  :1;
					uint32_t PA5                  :1;
					uint32_t PA6                  :1;
					uint32_t PA7                  :1;
					uint32_t PA8                  :1;
					uint32_t PA9                  :1;
					uint32_t PA10                 :1;
					uint32_t PA11                 :1;
					uint32_t PA12                 :1;
					uint32_t PA13                 :1;
					uint32_t                      :1;
					uint32_t PA15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PUCRB
			struct PUCRB_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PB0                  :1;
					uint32_t PB1                  :1;
					uint32_t PWR_PUCRB_PB2        :1;
					uint32_t PB3                  :1;
					uint32_t PB4                  :1;
					uint32_t PB5                  :1;
					uint32_t PB6                  :1;
					uint32_t PB7                  :1;
					uint32_t PWR_PUCRB_PB8        :1;
					uint32_t PWR_PUCRB_PB9        :1;
					uint32_t PWR_PUCRB_PB10       :1;
					uint32_t PWR_PUCRB_PB11       :1;
					uint32_t PWR_PUCRB_PB12       :1;
					uint32_t PWR_PUCRB_PB13       :1;
					uint32_t PWR_PUCRB_PB14       :1;
					uint32_t PWR_PUCRB_PB15       :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PUCRC
			struct PUCRC_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PWR_PUCRC_PC0        :1;
					uint32_t PWR_PUCRC_PC1        :1;
					uint32_t PWR_PUCRC_PC2        :1;
					uint32_t PWR_PUCRC_PC3        :1;
					uint32_t PWR_PUCRC_PC4        :1;
					uint32_t PWR_PUCRC_PC5        :1;
					uint32_t PWR_PUCRC_PC6        :1;
					uint32_t PWR_PUCRC_PC7        :1;
					uint32_t PWR_PUCRC_PC8        :1;
					uint32_t PWR_PUCRC_PC9        :1;
					uint32_t PWR_PUCRC_PC10       :1;
					uint32_t PWR_PUCRC_PC11       :1;
					uint32_t PWR_PUCRC_PC12       :1;
					uint32_t PWR_PUCRC_PC13       :1;
					uint32_t PC14                 :1;
					uint32_t PC15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PUCRD
			struct PUCRD_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PD0                  :1;
					uint32_t PD1                  :1;
					uint32_t PD2                  :1;
					uint32_t PD3                  :1;
					uint32_t PD4                  :1;
					uint32_t PD5                  :1;
					uint32_t PD6                  :1;
					uint32_t PD7                  :1;
					uint32_t PD8                  :1;
					uint32_t PD9                  :1;
					uint32_t PD10                 :1;
					uint32_t PD11                 :1;
					uint32_t PD12                 :1;
					uint32_t PD13                 :1;
					uint32_t PD14                 :1;
					uint32_t PD15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PUCRE
			struct PUCRE_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PE0                  :1;
					uint32_t PE1                  :1;
					uint32_t PE2                  :1;
					uint32_t PE3                  :1;
					uint32_t PE4                  :1;
					uint32_t PE5                  :1;
					uint32_t PE6                  :1;
					uint32_t PE7                  :1;
					uint32_t PE8                  :1;
					uint32_t PE9                  :1;
					uint32_t PE10                 :1;
					uint32_t PE11                 :1;
					uint32_t PE12                 :1;
					uint32_t PE13                 :1;
					uint32_t PE14                 :1;
					uint32_t PE15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PUCRF
			struct PUCRF_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PF0                  :1;
					uint32_t PF1                  :1;
					uint32_t PF2                  :1;
					uint32_t PF3                  :1;
					uint32_t PF4                  :1;
					uint32_t PF5                  :1;
					uint32_t PF6                  :1;
					uint32_t PF7                  :1;
					uint32_t PF8                  :1;
					uint32_t PF9                  :1;
					uint32_t PF10                 :1;
					uint32_t PF11                 :1;
					uint32_t PF12                 :1;
					uint32_t PF13                 :1;
					uint32_t PF14                 :1;
					uint32_t PF15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PUCRG
			struct PUCRG_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PG0                  :1;
					uint32_t PG1                  :1;
					uint32_t PG2                  :1;
					uint32_t PG3                  :1;
					uint32_t PG4                  :1;
					uint32_t PG5                  :1;
					uint32_t PG6                  :1;
					uint32_t PG7                  :1;
					uint32_t PG8                  :1;
					uint32_t PG9                  :1;
					uint32_t PG10                 :1;
					uint32_t PG11                 :1;
					uint32_t PG12                 :1;
					uint32_t PG13                 :1;
					uint32_t PG14                 :1;
					uint32_t PG15                 :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PUCRH
			struct PUCRH_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PWR_PUCRH_PH0        :1;
					uint32_t PWR_PUCRH_PH1        :1;
					uint32_t PWR_PUCRH_PH2        :1;
					uint32_t PWR_PUCRH_PH3        :1;
					uint32_t PWR_PUCRH_PH4        :1;
					uint32_t PWR_PUCRH_PH5        :1;
					uint32_t PWR_PUCRH_PH6        :1;
					uint32_t PWR_PUCRH_PH7        :1;
					uint32_t PWR_PUCRH_PH8        :1;
					uint32_t PWR_PUCRH_PH9        :1;
					uint32_t PWR_PUCRH_PH10       :1;
					uint32_t PWR_PUCRH_PH11       :1;
					uint32_t PWR_PUCRH_PH12       :1;
					uint32_t PWR_PUCRH_PH13       :1;
					uint32_t PWR_PUCRH_PH14       :1;
					uint32_t PWR_PUCRH_PH15       :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_PUCRI
			struct PUCRI_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PI0                  :1;
					uint32_t PI1                  :1;
					uint32_t PI2                  :1;
					uint32_t PI3                  :1;
					uint32_t PI4                  :1;
					uint32_t PI5                  :1;
					uint32_t PI6                  :1;
					uint32_t PI7                  :1;
					uint32_t PI8                  :1;
					uint32_t PI9                  :1;
					uint32_t PI10                 :1;
					uint32_t PI11                 :1;
					uint32_t                      :20;

				
			};
#endif

#ifdef PWR_SCR
			struct SCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t CWUF                 :5;
						uint32_t                      :3;
						uint32_t CSBF                 :1;
						uint32_t                      :23;
					};
					struct
					{
						uint32_t CWUF1                :1;
						uint32_t CWUF2                :1;
						uint32_t CWUF3                :1;
						uint32_t CWUF4                :1;
						uint32_t CWUF5                :1;
						uint32_t                      :27;
					};
				};
				
			};
#endif

#ifdef PWR_SR1
			struct SR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t WUF                  :5;
						uint32_t                      :3;
						uint32_t SBF                  :1;
						uint32_t                      :6;
						uint32_t WUFI                 :1;
						uint32_t                      :16;
					};
					struct
					{
						uint32_t WUF1                 :1;
						uint32_t WUF2                 :1;
						uint32_t WUF3                 :1;
						uint32_t WUF4                 :1;
						uint32_t WUF5                 :1;
						uint32_t                      :27;
					};
				};
				
			};
#endif

#ifdef PWR_SR2
			struct SR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :8;
					uint32_t REGLPS               :1;
					uint32_t REGLPF               :1;
					uint32_t VOSF                 :1;
					uint32_t PVDO                 :1;
					uint32_t PWR_SR2_PVMO1        :1;
					uint32_t PWR_SR2_PVMO2        :1;
					uint32_t PVMO3                :1;
					uint32_t PVMO4                :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef PWR_WKUPCR
			struct WKUPCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t WKUPC1               :1;
					uint32_t WKUPC2               :1;
					uint32_t WKUPC3               :1;
					uint32_t WKUPC4               :1;
					uint32_t WKUPC5               :1;
					uint32_t WKUPC6               :1;
					uint32_t                      :26;

				
			};
#endif

#ifdef PWR_WKUPEPR
			struct WKUPEPR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t WKUPEN1              :1;
					uint32_t WKUPEN2              :1;
					uint32_t WKUPEN3              :1;
					uint32_t WKUPEN4              :1;
					uint32_t WKUPEN5              :1;
					uint32_t WKUPEN6              :1;
					uint32_t                      :2;
					uint32_t WKUPP1               :1;
					uint32_t WKUPP2               :1;
					uint32_t WKUPP3               :1;
					uint32_t WKUPP4               :1;
					uint32_t WKUPP5               :1;
					uint32_t WKUPP6               :1;
					uint32_t                      :2;
					uint32_t WKUPPUPD1            :2;
					uint32_t WKUPPUPD2            :2;
					uint32_t WKUPPUPD3            :2;
					uint32_t WKUPPUPD4            :2;
					uint32_t WKUPPUPD5            :2;
					uint32_t WKUPPUPD6            :2;
					uint32_t                      :4;

				
			};
#endif

#ifdef PWR_WKUPFR
			struct WKUPFR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t WKUPF1               :1;
					uint32_t WKUPF2               :1;
					uint32_t WKUPF3               :1;
					uint32_t WKUPF4               :1;
					uint32_t WKUPF5               :1;
					uint32_t WKUPF6               :1;
					uint32_t                      :26;

				
			};
#endif

			union
			{

				struct
				{
					PWR_MAP0_CR;         // @0x000
					PWR_MAP0_CSR;        // @0x004
					PWR_MAP0_CR2;        // @0x008
					PWR_MAP0_CSR2;       // @0x00c
					PWR_MAP0_CPUCR;      // @0x010
					PWR_MAP0_SR2;        // @0x014
					PWR_MAP0_D3CR;       // @0x018
					__SOOL_PERIPH_PADDING_4;
					PWR_MAP0_WKUPCR;     // @0x020
					PWR_MAP0_WKUPFR;     // @0x024
					PWR_MAP0_WKUPEPR;    // @0x028
					PWR_MAP0_PDCRB;      // @0x02c
					PWR_MAP0_PUCRC;      // @0x030
					PWR_MAP0_PDCRC;      // @0x034
					PWR_MAP0_PUCRD;      // @0x038
					PWR_MAP0_PDCRD;      // @0x03c
					PWR_MAP0_PUCRE;      // @0x040
					PWR_MAP0_PDCRE;      // @0x044
					PWR_MAP0_PUCRF;      // @0x048
					PWR_MAP0_PDCRF;      // @0x04c
					PWR_MAP0_PUCRG;      // @0x050
					PWR_MAP0_PDCRG;      // @0x054
					PWR_MAP0_PUCRH;      // @0x058
					PWR_MAP0_PDCRH;      // @0x05c
					PWR_MAP0_PUCRI;      // @0x060
					PWR_MAP0_PDCRI;      // @0x064
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					PWR_MAP0_CR5;        // @0x080
				};
				struct
				{
					PWR_MAP1_CR1;        // @0x000
					PWR_MAP1_CSR1;       // @0x004
					PWR_MAP1_CR3;        // @0x008
					PWR_MAP1_CR4;        // @0x00c
					PWR_MAP1_SR1;        // @0x010
					__SOOL_PERIPH_PADDING_4;
					PWR_MAP1_SCR;        // @0x018
					__SOOL_PERIPH_PADDING_4;
					PWR_MAP1_PUCRA;      // @0x020
					PWR_MAP1_PDCRA;      // @0x024
					PWR_MAP1_PUCRB;      // @0x028
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_4;
					PWR_MAP2_CR2;        // @0x004
					__SOOL_PERIPH_PADDING_4;
					PWR_MAP2_CR3;        // @0x00c
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_4;
				};
			};
		private:
			PWR() = delete;
			public:
				void enable_clock() volatile;
			
				void disable_clock() volatile;
			
				bool is_clock_enabled() const volatile;
			
		};

//endregion
//region instances
#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    )
#define PWR_BASE_ADDR ((uint32_t)0x40007000U)
#endif

#if defined(STM32H7     )
#define PWR_BASE_ADDR ((uint32_t)0x58024800U)
#endif

#ifdef PWR_BASE_ADDR
		volatile class PWR * const PWR = reinterpret_cast<class PWR* const>(PWR_BASE_ADDR);
#endif
//endregion
//region peripheral-definition
		inline void PWR::enable_clock() volatile
		{
		#if defined(RCC_APB1ENR)
			RCC->APB1ENR.PWREN = 1;
		#elif defined(RCC_APB1ENR1)
			RCC->APB1ENR1.PWREN = 1;
		#endif
		}
		inline void PWR::disable_clock() volatile
		{
		#if defined(RCC_APB1ENR)
			RCC->APB1ENR.PWREN = 0;
		#elif defined(RCC_APB1ENR1)
			RCC->APB1ENR1.PWREN = 0;
		#endif
		}
		inline bool PWR::is_clock_enabled() const volatile
		{
		#if defined(RCC_APB1ENR)
			return RCC->APB1ENR.PWREN;
		#elif defined(RCC_APB1ENR1)
			return RCC->APB1ENR1.PWREN;
		#endif
		}
		
//endregion
	};
};
//region undef
#undef PWR_CR1_1_PVDEN
#undef PWR_CR1_1_FLPS
#undef PWR_CR1_1_RLPSN
#undef PWR_CR1_1_SVOS
#undef PWR_CR1_1_AVDEN
#undef PWR_CR1_1_ALS
#undef PWR_CR2_0_BRRDY
#undef PWR_CR2_0_VBATL
#undef PWR_CR2_0_VBATH
#undef PWR_CR2_0_TEMPL
#undef PWR_CR2_0_TEMPH
#undef PWR_CR2_1_BREN
#undef PWR_CR2_1_MONEN
#undef PWR_CR3_0_BYPASS
#undef PWR_CR3_0_LDOEN
#undef PWR_CR3_0_SCUEN
#undef PWR_CR3_0_VBE
#undef PWR_CR3_0_VBRS
#undef PWR_CR3_0_USB33DEN
#undef PWR_CR3_0_USBREGEN
#undef PWR_CR3_0_USB33RDY
#undef PWR_CSR1_0_ACTVOSRDY
#undef PWR_CSR1_1_PVDO
#undef PWR_CSR1_1_ACTVOS
#undef PWR_CSR1_1_AVDO
#undef PWR_MAP2_CR3
#undef PWR_MAP0_CPUCR
#undef PWR_MAP0_D3CR
#undef PWR_MAP0_WKUPCR
#undef PWR_MAP0_WKUPFR
#undef PWR_MAP0_WKUPEPR
#undef PWR_CPUCR_SBF_D1
#undef PWR_CPUCR_SBF_D2
#undef PWR_MAP0_CR
#undef PWR_MAP0_CSR
#undef PWR_CR_0_LPDS
#undef PWR_CR_0_PVDE
#undef PWR_CR_0_PLS
#undef PWR_CSR_0_PVDO
#undef PWR_CR_0_FPDS
#undef PWR_CSR_1_BRR
#undef PWR_CSR_1_BRE
#undef PWR_CR_0_ENSD2
#undef PWR_CR_0_ENSD3
#undef PWR_CR_1_ENSD1
#undef PWR_CR_1_SDADC2EN
#undef PWR_CR_1_SDADC3EN
#undef PWR_CR_2_SDADC1EN
#undef PWR_CR_0_ADCDC1
#undef PWR_CR_0_VOS
#undef PWR_CR_2_LPLVDS
#undef PWR_CR_2_MRLVDS
#undef PWR_CR_0_ODEN
#undef PWR_CR_0_ODSWEN
#undef PWR_CR_0_UDEN
#undef PWR_CR_3_LPUDS
#undef PWR_CR_3_MRUDS
#undef PWR_CSR_0_ODRDY
#undef PWR_CSR_0_ODSWRDY
#undef PWR_CSR_0_UDRDY
#undef PWR_CSR_1_UDSWRDY
#undef PWR_CR_0_FMSSR
#undef PWR_CR_0_FISSR
#undef PWR_CR_1_LPSDSR
#undef PWR_CR_3_ULP
#undef PWR_CR_3_LPRUN
#undef PWR_CSR_0_VOSF
#undef PWR_CSR_0_REGLPF
#undef PWR_CR_1_DSEEKOFF
#undef PWR_CR_1_PMODE
#undef PWR_CR_1_LPDS
#undef PWR_CR_2_VOS
#undef PWR_MAP1_CR1
#undef PWR_CR1_0_LPDS
#undef PWR_CR1_0_PLS
#undef PWR_MAP1_CSR1
#undef PWR_MAP0_CR2
#undef PWR_CR1_0_PDDS
#undef PWR_CR1_0_CSBF
#undef PWR_CR1_0_PVDE
#undef PWR_CR1_0_FPDS
#undef PWR_CR1_0_LPUDS
#undef PWR_CR1_0_MRUDS
#undef PWR_CR1_0_ADCDC1
#undef PWR_CR1_0_VOS
#undef PWR_CR1_0_ODEN
#undef PWR_CR1_0_ODSWEN
#undef PWR_CR1_0_UDEN
#undef PWR_CR2_0_CWUPF1
#undef PWR_CR2_0_CWUPF2
#undef PWR_CR2_0_CWUPF3
#undef PWR_CR2_0_CWUPF4
#undef PWR_CR2_0_CWUPF5
#undef PWR_CR2_0_CWUPF6
#undef PWR_CR2_0_WUPP1
#undef PWR_CR2_0_WUPP2
#undef PWR_CR2_0_WUPP3
#undef PWR_CR2_0_WUPP4
#undef PWR_CR2_0_WUPP5
#undef PWR_CR2_0_WUPP6
#undef PWR_CSR1_0_WUIF
#undef PWR_CSR1_0_SBF
#undef PWR_CSR1_0_PVDO
#undef PWR_CSR1_0_BRR
#undef PWR_CSR1_0_EIWUP
#undef PWR_CSR1_0_BRE
#undef PWR_CSR1_0_VOSRDY
#undef PWR_CSR1_0_ODRDY
#undef PWR_CSR1_0_ODSWRDY
#undef PWR_CSR1_0_UDRDY
#undef PWR_MAP0_CSR2
#undef PWR_CR1_1_LPMS
#undef PWR_CR2_1_PLS
#undef PWR_CR2_1_PVME3
#undef PWR_CR2_1_PVME4
#undef PWR_CR3_0_EWUP4
#undef PWR_CR3_0_EWUP5
#undef PWR_CR3_0_APC
#undef PWR_CR3_0_EIWUL
#undef PWR_MAP2_CR2
#undef PWR_MAP1_CR3
#undef PWR_MAP1_CR4
#undef PWR_MAP1_SR1
#undef PWR_MAP0_SR2
#undef PWR_MAP1_SCR
#undef PWR_MAP1_PUCRA
#undef PWR_MAP1_PDCRA
#undef PWR_MAP1_PUCRB
#undef PWR_MAP0_PDCRB
#undef PWR_MAP0_PUCRC
#undef PWR_MAP0_PDCRC
#undef PWR_MAP0_PUCRD
#undef PWR_MAP0_PDCRD
#undef PWR_MAP0_PUCRE
#undef PWR_MAP0_PDCRE
#undef PWR_MAP0_PUCRH
#undef PWR_MAP0_PDCRH
#undef PWR_CR1_2_RRSTP
#undef PWR_CR3_0_DSIPDEN
#undef PWR_MAP0_CR5
#undef PWR_CR2_0_PVME
#undef PWR_CR2_1_PVME2
#undef PWR_CR2_1_IOSV
#undef PWR_SR2_PVMO2
#undef PWR_MAP0_PUCRF
#undef PWR_MAP0_PDCRF
#undef PWR_MAP0_PUCRG
#undef PWR_MAP0_PDCRG
#undef PWR_CR2_1_USV
#undef PWR_CR2_2_PVME1
#undef PWR_SR2_PVMO1
#undef PWR_CR2_2_PVME
#undef PWR_CSR_0_VREFINTRDYF
#undef PWR_CSR_0_WUPP
#undef PWR_CSR_0_EWUP1
#undef PWR_CSR_0_EWUP2
#undef PWR_CSR_0_EWUP3
#undef PWR_CSR_0_EWUP4
#undef PWR_CSR_0_EWUP6
#undef PWR_CSR_0_EWUP7
#undef PWR_CSR_0_EWUP5
#undef PWR_CSR_0_EWUP8
#undef PWR_CSR_1_EWUP2
#undef PWR_CSR_1_EWUP
#undef PWR_CSR_1_VOSRDY
#undef PWR_CSR1_1_UDSWRDY
#undef PWR_PDCRB_PB2
#undef PWR_PDCRB_PB8
#undef PWR_PDCRB_PB9
#undef PWR_PDCRB_PB10
#undef PWR_PDCRB_PB11
#undef PWR_PDCRB_PB12
#undef PWR_PDCRB_PB13
#undef PWR_PDCRB_PB14
#undef PWR_PDCRB_PB15
#undef PWR_PDCRC_PC0
#undef PWR_PDCRC_PC1
#undef PWR_PDCRC_PC2
#undef PWR_PDCRC_PC3
#undef PWR_PDCRC_PC4
#undef PWR_PDCRC_PC5
#undef PWR_PDCRC_PC6
#undef PWR_PDCRC_PC7
#undef PWR_PDCRC_PC8
#undef PWR_PDCRC_PC9
#undef PWR_PDCRC_PC10
#undef PWR_PDCRC_PC11
#undef PWR_PDCRC_PC12
#undef PWR_PDCRC_PC13
#undef PWR_PDCRH_PH0
#undef PWR_PDCRH_PH1
#undef PWR_PUCRB_PB2
#undef PWR_PUCRB_PB8
#undef PWR_PUCRB_PB9
#undef PWR_PUCRB_PB10
#undef PWR_PUCRB_PB11
#undef PWR_PUCRB_PB12
#undef PWR_PUCRB_PB13
#undef PWR_PUCRB_PB14
#undef PWR_PUCRB_PB15
#undef PWR_PUCRC_PC0
#undef PWR_PUCRC_PC1
#undef PWR_PUCRC_PC2
#undef PWR_PUCRC_PC3
#undef PWR_PUCRC_PC4
#undef PWR_PUCRC_PC5
#undef PWR_PUCRC_PC6
#undef PWR_PUCRC_PC7
#undef PWR_PUCRC_PC8
#undef PWR_PUCRC_PC9
#undef PWR_PUCRC_PC10
#undef PWR_PUCRC_PC11
#undef PWR_PUCRC_PC12
#undef PWR_PUCRC_PC13
#undef PWR_PUCRH_PH0
#undef PWR_PUCRH_PH1
#undef PWR_PDCRH_PH2
#undef PWR_PDCRH_PH4
#undef PWR_PDCRH_PH5
#undef PWR_PDCRH_PH6
#undef PWR_PDCRH_PH7
#undef PWR_PDCRH_PH8
#undef PWR_PDCRH_PH9
#undef PWR_PDCRH_PH10
#undef PWR_PDCRH_PH11
#undef PWR_PDCRH_PH12
#undef PWR_PDCRH_PH13
#undef PWR_PDCRH_PH14
#undef PWR_PDCRH_PH15
#undef PWR_PUCRH_PH2
#undef PWR_PUCRH_PH4
#undef PWR_PUCRH_PH5
#undef PWR_PUCRH_PH6
#undef PWR_PUCRH_PH7
#undef PWR_PUCRH_PH8
#undef PWR_PUCRH_PH9
#undef PWR_PUCRH_PH10
#undef PWR_PUCRH_PH11
#undef PWR_PUCRH_PH12
#undef PWR_PUCRH_PH13
#undef PWR_PUCRH_PH14
#undef PWR_PUCRH_PH15
#undef PWR_MAP0_PUCRI
#undef PWR_MAP0_PDCRI
#undef PWR_PDCRH_PH3
#undef PWR_PUCRH_PH3

//endregion
#endif //__SOOL_PWR_H
