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


//Generated 2020-02-21T22:51:46.559162

#ifndef __SOOL_CORE_USART_H
#define __SOOL_CORE_USART_H
#include "lib_utils/peripheral_include.h"
#include "RCC.h"



#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || \
    defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32MP1     ) || defined(STM32WB      )
#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32L010x4  ) || \
    defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || \
    defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_CR1_0
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32MP1     ) || \
    defined(STM32WB      ) || defined(STM32L010x4  ) || defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || \
    defined(STM32L011xx  ) || defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || \
    defined(STM32L081xx  )
#define USART_CR1_0_UE UE
#define USART_CR1_0_MME MME
#define USART_CR1_0_CMIE CMIE
#define USART_CR1_0_RTOIE RTOIE
#define USART_CR1_0_EOBIE EOBIE
#define USART_CR2_0_ADDM7 ADDM7
#define USART_CR2_0_SWAP SWAP
#define USART_CR2_0_RXINV RXINV
#define USART_CR2_0_TXINV TXINV
#define USART_CR2_0_DATAINV DATAINV
#define USART_CR2_0_MSBFIRST MSBFIRST
#define USART_CR2_0_ABREN ABREN
#define USART_CR2_0_RTOEN RTOEN
#define USART_CR3_0_OVRDIS OVRDIS
#define USART_CR3_0_DDRE DDRE
#define USART_CR3_0_DEM DEM
#define USART_CR3_0_DEP DEP
#define USART_CR3_0_SCARCNT SCARCNT
#define USART_RTOR_0
#define USART_ISR_0
#define USART_ICR_0
#else
#define USART_CR1_0_UE
#define USART_CR1_0_MME
#define USART_CR1_0_CMIE
#define USART_CR1_0_RTOIE
#define USART_CR1_0_EOBIE
#define USART_CR2_0_ADDM7
#define USART_CR2_0_SWAP
#define USART_CR2_0_RXINV
#define USART_CR2_0_TXINV
#define USART_CR2_0_DATAINV
#define USART_CR2_0_MSBFIRST
#define USART_CR2_0_ABREN
#define USART_CR2_0_RTOEN
#define USART_CR3_0_OVRDIS
#define USART_CR3_0_DDRE
#define USART_CR3_0_DEM
#define USART_CR3_0_DEP
#define USART_CR3_0_SCARCNT
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32WB      ) || \
    defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || \
    defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32L010x4  ) || \
    defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || \
    defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_CR1_0_UESM UESM
#define USART_CR3_0_WUS WUS
#define USART_CR3_0_WUFIE WUFIE
#define USART_ISR_0_RWU RWU
#define USART_ISR_0_WUF WUF
#define USART_ISR_0_REACK REACK
#define USART_ICR_0_WUCF WUCF
#else
#define USART_CR1_0_UESM
#define USART_CR3_0_WUS
#define USART_CR3_0_WUFIE
#define USART_ISR_0_RWU
#define USART_ISR_0_WUF
#define USART_ISR_0_REACK
#define USART_ICR_0_WUCF
#endif

#if	defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32L010x4  ) || \
    defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || \
    defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_CR1_0_M0 M0
#define USART_CR2_0_ADD0_3 ADD0_3
#define USART_CR2_0_ADD4_7 ADD4_7
#else
#define USART_CR1_0_M0
#define USART_CR2_0_ADD0_3
#define USART_CR2_0_ADD4_7
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32MP1     )
#define USART_CR1_0_DEDT DEDT
#define USART_CR1_0_DEAT DEAT
#define USART_CR2_0_ABRMOD ABRMOD
#else
#define USART_CR1_0_DEDT
#define USART_CR1_0_DEAT
#define USART_CR2_0_ABRMOD
#endif

#if	defined(STM32F0      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32WB      ) || \
    defined(STM32L010x4  ) || defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || \
    defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_CR1_0_M1 M1
#else
#define USART_CR1_0_M1
#endif

#if	defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32WB      )
#define USART_CR1_0_FIFOEN FIFOEN
#define USART_CR1_0_TXFEIE TXFEIE
#define USART_CR1_0_RXFFIE RXFFIE
#define USART_CR2_0_SLVEN SLVEN
#define USART_CR2_0_DIS_NSS DIS_NSS
#define USART_CR3_0_TXFTIE TXFTIE
#define USART_CR3_0_RXFTCFG RXFTCFG
#define USART_CR3_0_RXFTIE RXFTIE
#define USART_CR3_0_TXFTCFG TXFTCFG
#define USART_ISR_0_UDR UDR
#define USART_ISR_0_TXFE TXFE
#define USART_ISR_0_RXFF RXFF
#define USART_ISR_0_RXFT RXFT
#define USART_ISR_0_TXFT TXFT
#define USART_ICR_0_TXFECF TXFECF
#define USART_ICR_0_UDRCF UDRCF
#else
#define USART_CR1_0_FIFOEN
#define USART_CR1_0_TXFEIE
#define USART_CR1_0_RXFFIE
#define USART_CR2_0_SLVEN
#define USART_CR2_0_DIS_NSS
#define USART_CR3_0_TXFTIE
#define USART_CR3_0_RXFTCFG
#define USART_CR3_0_RXFTIE
#define USART_CR3_0_TXFTCFG
#define USART_ISR_0_UDR
#define USART_ISR_0_TXFE
#define USART_ISR_0_RXFF
#define USART_ISR_0_RXFT
#define USART_ISR_0_TXFT
#define USART_ICR_0_TXFECF
#define USART_ICR_0_UDRCF
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32WB      ) || defined(STM32L010x4  ) || defined(STM32L010x6  ) || \
    defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || defined(STM32L031xx  ) || \
    defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_CR1_1
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32L1      )
#define USART_CR1_1_SBK SBK
#define USART_CR1_1_RWU RWU
#define USART_CR1_1_UE UE
#define USART_SR
#define USART_DR
#define USART_MAP1
#else
#define USART_CR1_1_SBK
#define USART_CR1_1_RWU
#define USART_CR1_1_UE
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32L1      )
#define USART_CR1_1_M M
#else
#define USART_CR1_1_M
#endif

#if	defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32WB      ) || defined(STM32L010x4  ) || defined(STM32L010x6  ) || \
    defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || defined(STM32L031xx  ) || \
    defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_CR1_1_DEDT0 DEDT0
#define USART_CR1_1_DEDT1 DEDT1
#define USART_CR1_1_DEDT2 DEDT2
#define USART_CR1_1_DEDT3 DEDT3
#define USART_CR1_1_DEDT4 DEDT4
#define USART_CR1_1_DEAT0 DEAT0
#define USART_CR1_1_DEAT1 DEAT1
#define USART_CR1_1_DEAT2 DEAT2
#define USART_CR1_1_DEAT3 DEAT3
#define USART_CR1_1_DEAT4 DEAT4
#define USART_CR2_1_ABRMOD0 ABRMOD0
#define USART_CR2_1_ABRMOD1 ABRMOD1
#else
#define USART_CR1_1_DEDT0
#define USART_CR1_1_DEDT1
#define USART_CR1_1_DEDT2
#define USART_CR1_1_DEDT3
#define USART_CR1_1_DEDT4
#define USART_CR1_1_DEAT0
#define USART_CR1_1_DEAT1
#define USART_CR1_1_DEAT2
#define USART_CR1_1_DEAT3
#define USART_CR1_1_DEAT4
#define USART_CR2_1_ABRMOD0
#define USART_CR2_1_ABRMOD1
#endif

#if	defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || \
    defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  ) || defined(STM32L412xx  ) || \
    defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || \
    defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || \
    defined(STM32L4A6xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define USART_CR1_2
#define USART_CR2_2
#define USART_ICR_2
#endif

#if	defined(STM32L4      ) || defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || defined(STM32L062xx  ) || \
    defined(STM32L063xx  ) || defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define USART_CR1_3
#define USART_RQR_2
#define USART_ISR_2
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4P5xx  )
#define USART_CR1_4
#define USART_CR2_4
#endif

#if	defined(STM32G4      ) || defined(STM32GB      )
#define USART_CR1_5
#define USART_RQR_3
#endif

#if	defined(STM32G0      )
#define USART_CR1_6
#define USART_CR1_7
#define USART_CR2_8
#define USART_BRR_7
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32L1      ) || \
    defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F410Cx  ) || \
    defined(STM32F410Rx  ) || defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || \
    defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F423xx  ) || defined(STM32L010x4  ) || \
    defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || \
    defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_CR2_0
#define USART_CR3_0
#define USART_GTPR_0
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32L1      ) || \
    defined(STM32WB      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || \
    defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F423xx  ) || defined(STM32L010x4  ) || defined(STM32L010x6  ) || \
    defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || defined(STM32L031xx  ) || \
    defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_CR2_1
#endif

#if	defined(STM32L1      ) || defined(STM32F401xC  ) || defined(STM32F401xE  ) || defined(STM32F410Cx  ) || defined(STM32F410Rx  ) || \
    defined(STM32F410Tx  ) || defined(STM32F411xE  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || \
    defined(STM32F412Zx  ) || defined(STM32F413xx  ) || defined(STM32F423xx  )
#define USART_CR2_1_ADD ADD
#define USART_SR_2
#else
#define USART_CR2_1_ADD
#endif

#if	defined(STM32F0      ) || defined(STM32F3      )
#define USART_CR2_1_ADD0 ADD0
#define USART_CR2_1_ADD4 ADD4
#else
#define USART_CR2_1_ADD0
#define USART_CR2_1_ADD4
#endif

#if	defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || \
    defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || \
    defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || \
    defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define USART_CR2_3
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L412xx  ) || defined(STM32L422xx  )
#define USART_CR2_5
#endif

#if	defined(STM32F2      ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  )
#define USART_CR2_6
#define USART_CR2_7
#define USART_CR3_5
#define USART_CR3_6
#define USART_SR_0
#define USART_SR_1
#endif

#if	defined(STM32H7      ) || defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || \
    defined(STM32F730xx  ) || defined(STM32F732xx  ) || defined(STM32F733xx  )
#define USART_CR3_0_TCBGTIE TCBGTIE
#define USART_ISR_0_TCBGT TCBGT
#else
#define USART_CR3_0_TCBGTIE
#define USART_ISR_0_TCBGT
#endif

#if	defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || \
    defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L485xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define USART_CR3_1
#define USART_ISR_1
#endif

#if	defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || \
    defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || \
    defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L485xx  ) || \
    defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || \
    defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define USART_CR3_2
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4P5xx  )
#define USART_CR3_3
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      )
#define USART_CR3_4
#define USART_ISR_4
#define USART_ISR_5
#define USART_ICR_5
#endif

#if	defined(STM32L476xx  ) || defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  )
#define USART_CR3_7
#define USART_CR3_9
#define USART_CR3_10
#endif

#if	defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L476xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  )
#define USART_CR3_8
#endif

#if	defined(STM32F2      )
#define USART_CR3_11
#endif

#if	defined(STM32L412xx  ) || defined(STM32L422xx  )
#define USART_CR3_12
#endif

#if	defined(STM32H7      ) || defined(STM32MP1     )
#define USART_BRR_0
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || \
    defined(STM32L062xx  ) || defined(STM32L063xx  ) || defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L082xx  ) || \
    defined(STM32L083xx  ) || defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || \
    defined(STM32L433xx  ) || defined(STM32L442xx  ) || defined(STM32L443xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || \
    defined(STM32L462xx  ) || defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define USART_BRR_1
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32L051xx  ) || \
    defined(STM32L052xx  ) || defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || defined(STM32L072xx  ) || \
    defined(STM32L073xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define USART_BRR_2
#define USART_RTOR_1
#define USART_ICR_3
#define USART_USART_tmpl_5
#endif

#if	defined(STM32L4P5xx  )
#define USART_BRR_3
#define USART_ISR_3
#define USART_ICR_4
#define USART_PRESC_1
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32L1      ) || \
    defined(STM32F745xx  ) || defined(STM32F746xx  ) || defined(STM32F750xx  ) || defined(STM32F756xx  ) || defined(STM32F765xx  ) || \
    defined(STM32F767xx  ) || defined(STM32F769xx  ) || defined(STM32F777xx  ) || defined(STM32F779xx  ) || defined(STM32L010x4  ) || \
    defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || \
    defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_BRR_4
#endif

#if	defined(STM32WB      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || defined(STM32F732xx  ) || \
    defined(STM32F733xx  )
#define USART_BRR_5
#endif

#if	defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L442xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || \
    defined(STM32L462xx  ) || defined(STM32L471xx  )
#define USART_BRR_6
#endif

#if	defined(STM32F2      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || \
    defined(STM32F405xx  ) || defined(STM32F407xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || defined(STM32L062xx  ) || \
    defined(STM32L063xx  ) || defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define USART_GTPR_1
#define USART_USART_tmpl_0
#define USART_USART_tmpl_1
#define USART_USART_tmpl_2
#define USART_USART_tmpl_3
#define USART_USART_tmpl_4
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32G4      ) || \
    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || defined(STM32L4      ) || defined(STM32MP1     ) || \
    defined(STM32WB      )
#define USART_RTOR
#define USART_RQR
#define USART_ISR
#define USART_ICR
#define USART_RDR
#define USART_TDR
#define USART_MAP0
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32F7      ) || defined(STM32G0      ) || defined(STM32H7      ) || \
    defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32L010x4  ) || defined(STM32L010x6  ) || defined(STM32L010x8  ) || \
    defined(STM32L010xB  ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || \
    defined(STM32L071xx  ) || defined(STM32L081xx  )
#define USART_RQR_0
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32L051xx  ) || defined(STM32L052xx  ) || \
    defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || defined(STM32L072xx  ) || defined(STM32L073xx  ) || \
    defined(STM32L082xx  ) || defined(STM32L083xx  )
#define USART_RQR_1
#endif

#if	defined(STM32L412xx  ) || defined(STM32L422xx  ) || defined(STM32L431xx  ) || defined(STM32L432xx  ) || defined(STM32L442xx  ) || \
    defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || defined(STM32L471xx  )
#define USART_ISR_6
#endif

#if	defined(STM32MP1     ) || defined(STM32WB      ) || defined(STM32F722xx  ) || defined(STM32F723xx  ) || defined(STM32F730xx  ) || \
    defined(STM32F732xx  ) || defined(STM32F733xx  )
#define USART_ICR_0_TCBGTCF TCBGTCF
#else
#define USART_ICR_0_TCBGTCF
#endif

#if	defined(STM32H7      )
#define USART_ICR_1
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32MP1     ) || \
    defined(STM32WB      ) || defined(STM32L4P5xx  )
#define USART_PRESC
#define USART_MAP0_PRESC PRESC_t PRESC
#else
#define USART_MAP0_PRESC __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32MP1     ) || \
    defined(STM32WB      )
#define USART_PRESC_0
#endif

#if	defined(STM32MP1     ) || defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  )
#define USART_HWCFGR2
#define USART_HWCFGR1
#define USART_VERR
#define USART_IPIDR
#define USART_SIDR
#define USART_MAP0_HWCFGR2 HWCFGR2_t HWCFGR2
#define USART_MAP0_HWCFGR1 HWCFGR1_t HWCFGR1
#define USART_MAP0_VERR VERR_t VERR
#define USART_MAP0_IPIDR IPIDR_t IPIDR
#define USART_MAP0_SIDR SIDR_t SIDR
#else
#define USART_MAP0_HWCFGR2 __SOOL_PERIPH_PADDING_4
#define USART_MAP0_HWCFGR1 __SOOL_PERIPH_PADDING_4
#define USART_MAP0_VERR __SOOL_PERIPH_PADDING_4
#define USART_MAP0_IPIDR __SOOL_PERIPH_PADDING_4
#define USART_MAP0_SIDR __SOOL_PERIPH_PADDING_4
#endif

#if	defined(STM32MP1     )
#define USART_HWCFGR2_0
#define USART_HWCFGR1_0
#define USART_VERR_0
#define USART_IPIDR_0
#define USART_SIDR_0
#endif

#if	defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  )
#define USART_HWCFGR2_1
#define USART_HWCFGR1_1
#define USART_VERR_1
#define USART_IPIDR_1
#define USART_SIDR_1
#endif

#if	defined(STM32L010x4  ) || defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || \
    defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define PERIPH_UART
#endif

namespace sool {
	namespace core {
		#ifdef USART_USART_tmpl_0
		struct USART_tmpl_0 /// specific fields for UART7, UART8, USART1, USART6, USART2 
		{
			struct CR1_t
			{
				union
				{
					#ifdef USART_CR1_2
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t                  : 3;
					};
					#endif
					#ifdef USART_CR1_4
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
					#ifdef USART_CR1_6
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT             : 5;
						uint32_t DEAT             : 5;
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
				};
			};
			struct CR2_t
			{
				union
				{
					#ifdef USART_CR2_6
					struct
					{
						uint32_t ADD              : 4; /// Address of the USART node
						uint32_t                  : 1;
						uint32_t LBDL             : 1; /// lin break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t                  : 17;
					};
					#endif
					#ifdef USART_CR2_2
					struct
					{
						uint32_t                  : 4;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_4
					struct
					{
						uint32_t SLVEN            : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t DIS_NSS          : 1;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_8
					struct
					{
						uint32_t SLVEN            : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t DIS_NSS          : 1; /// When the DSI_NSS bit is set, the NSS pin input will be ignored
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD           : 2; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
				};
			};
			struct CR3_t
			{
				union
				{
					#ifdef USART_CR3_5
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// IrDA mode enable
						uint32_t IRLP             : 1; /// IrDA low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t                  : 20;
					};
					#endif
					#ifdef USART_CR3_1
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_CR3_3
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t TXFTIE           : 1; /// TXFIFO threshold interrupt enable
						uint32_t TCBGTIE          : 1; /// Transmission Complete before guard time, interrupt enable
						uint32_t RXFTCFG          : 3; /// Receive FIFO threshold configuration
						uint32_t RXFTIE           : 1; /// RXFIFO threshold interrupt enable
						uint32_t TXFTCFG          : 3; /// TXFIFO threshold configuration
					};
					#endif
					#ifdef USART_CR3_8
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t UCESM            : 1; /// USART Clock Enable in Stop mode.
						uint32_t TCBGTIE          : 1; /// Transmission complete before guard time interrupt enable
						uint32_t                  : 7;
					};
					#endif
				};
			};
			struct BRR_t
			{
				union
				{
					#ifdef USART_BRR_1
					struct
					{
						uint32_t DIV_Fraction     : 4;
						uint32_t DIV_Mantissa     : 12;
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_3
					struct
					{
						uint32_t BRR0_3           : 4; /// BRR
						uint32_t BRR4_15          : 12; /// USARTDIV
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_7
					struct
					{
						uint32_t BRR_0_3          : 4;
						uint32_t BRR_4_15         : 12;
						uint32_t                  : 16;
					};
					#endif
				};
			};
			struct GTPR_t
			{
				#ifdef USART_GTPR_1
				struct
				{
					uint32_t PSC              : 8; /// Prescaler value
					uint32_t GT               : 8; /// Guard time value
					uint32_t                  : 16;
				};
				#endif
			};
			struct RTOR_t
			{
				#ifdef USART_RTOR_1
				struct
				{
					uint32_t RTO              : 24; /// Receiver timeout value
					uint32_t BLEN             : 8; /// Block Length
				};
				#endif
			};
			struct RQR_t
			{
				#ifdef USART_RQR_1
				struct
				{
					uint32_t ABRRQ            : 1; /// Auto baud rate request
					uint32_t SBKRQ            : 1; /// Send break request
					uint32_t MMRQ             : 1; /// Mute mode request
					uint32_t RXFRQ            : 1; /// Receive data flush request
					uint32_t TXFRQ            : 1; /// Transmit data flush request
					uint32_t                  : 27;
				};
				#endif
			};
			struct ISR_t
			{
				union
				{
					#ifdef USART_ISR_1
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_ISR_3
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1;
						uint32_t RXFF             : 1;
						uint32_t TCBGT            : 1;
						uint32_t RXFT             : 1;
						uint32_t TXFT             : 1;
						uint32_t                  : 4;
					};
					#endif
					#ifdef USART_ISR_4
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t UDR              : 1; /// SPI slave underrun error flag
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1; /// TXFIFO Empty
						uint32_t RXFF             : 1; /// RXFIFO Full
						uint32_t TCBGT            : 1; /// Transmission complete before guard time flag
						uint32_t RXFT             : 1; /// RXFIFO threshold flag
						uint32_t TXFT             : 1; /// TXFIFO threshold flag
						uint32_t                  : 4;
					};
					#endif
					#ifdef USART_ISR_6
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t                  : 2;
						uint32_t TCBGT            : 1; /// Transmission complete before guard time completion
						uint32_t                  : 6;
					};
					#endif
				};
			};
			struct ICR_t
			{
				union
				{
					#ifdef USART_ICR_2
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t                  : 4;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_4
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1;
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_5
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t TXFECF           : 1; /// TXFIFO empty clear flag
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t TCBGTCF          : 1; /// Transmission complete before Guard time clear flag
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1; /// SPI slave underrun clear flag
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
				};
			};
			struct PRESC_t
			{
				#ifdef USART_PRESC_1
				struct
				{
					uint32_t PRESCALER        : 4; /// Clock prescaler
					uint32_t                  : 28;
				};
				#endif
			};
			struct HWCFGR2_t { };
			struct HWCFGR1_t { };
			struct VERR_t { };
			struct IPIDR_t { };
			struct SIDR_t { };
			struct SR_t
			{
				#ifdef USART_SR_0
				struct
				{
					uint32_t PE               : 1; /// Parity error
					uint32_t FE               : 1; /// Framing error
					uint32_t NF               : 1; /// Noise detected flag
					uint32_t ORE              : 1; /// Overrun error
					uint32_t IDLE             : 1; /// IDLE line detected
					uint32_t RXNE             : 1; /// Read data register not empty
					uint32_t TC               : 1; /// Transmission complete
					uint32_t TXE              : 1; /// Transmit data register empty
					uint32_t LBD              : 1; /// LIN break detection flag
					uint32_t CTS              : 1; /// CTS flag
					uint32_t                  : 22;
				};
				#endif
			};
		};
		#endif
		#ifdef USART_USART_tmpl_1
		struct USART_tmpl_1 /// specific fields for UART5 
		{
			struct CR1_t
			{
				union
				{
					#ifdef USART_CR1_2
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t                  : 3;
					};
					#endif
					#ifdef USART_CR1_4
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
				};
			};
			struct CR2_t
			{
				union
				{
					#ifdef USART_CR2_2
					struct
					{
						uint32_t                  : 4;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_4
					struct
					{
						uint32_t SLVEN            : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t DIS_NSS          : 1;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_7
					struct
					{
						uint32_t ADD              : 4; /// Address of the USART node
						uint32_t                  : 1;
						uint32_t LBDL             : 1; /// lin break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 5;
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t                  : 17;
					};
					#endif
				};
			};
			struct CR3_t
			{
				union
				{
					#ifdef USART_CR3_1
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_CR3_3
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t TXFTIE           : 1; /// TXFIFO threshold interrupt enable
						uint32_t TCBGTIE          : 1; /// Transmission Complete before guard time, interrupt enable
						uint32_t RXFTCFG          : 3; /// Receive FIFO threshold configuration
						uint32_t RXFTIE           : 1; /// RXFIFO threshold interrupt enable
						uint32_t TXFTCFG          : 3; /// TXFIFO threshold configuration
					};
					#endif
					#ifdef USART_CR3_6
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// IrDA mode enable
						uint32_t IRLP             : 1; /// IrDA low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t                  : 2;
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t                  : 3;
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t                  : 20;
					};
					#endif
					#ifdef USART_CR3_11
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// IrDA mode enable
						uint32_t IRLP             : 1; /// IrDA low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t                  : 7;
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t                  : 20;
					};
					#endif
				};
			};
			struct BRR_t
			{
				union
				{
					#ifdef USART_BRR_1
					struct
					{
						uint32_t DIV_Fraction     : 4;
						uint32_t DIV_Mantissa     : 12;
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_3
					struct
					{
						uint32_t BRR0_3           : 4; /// BRR
						uint32_t BRR4_15          : 12; /// USARTDIV
						uint32_t                  : 16;
					};
					#endif
				};
			};
			struct GTPR_t
			{
				#ifdef USART_GTPR_1
				struct
				{
					uint32_t PSC              : 8; /// Prescaler value
					uint32_t GT               : 8; /// Guard time value
					uint32_t                  : 16;
				};
				#endif
			};
			struct RTOR_t
			{
				#ifdef USART_RTOR_1
				struct
				{
					uint32_t RTO              : 24; /// Receiver timeout value
					uint32_t BLEN             : 8; /// Block Length
				};
				#endif
			};
			struct RQR_t
			{
				#ifdef USART_RQR_1
				struct
				{
					uint32_t ABRRQ            : 1; /// Auto baud rate request
					uint32_t SBKRQ            : 1; /// Send break request
					uint32_t MMRQ             : 1; /// Mute mode request
					uint32_t RXFRQ            : 1; /// Receive data flush request
					uint32_t TXFRQ            : 1; /// Transmit data flush request
					uint32_t                  : 27;
				};
				#endif
			};
			struct ISR_t
			{
				union
				{
					#ifdef USART_ISR_1
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_ISR_3
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1;
						uint32_t RXFF             : 1;
						uint32_t TCBGT            : 1;
						uint32_t RXFT             : 1;
						uint32_t TXFT             : 1;
						uint32_t                  : 4;
					};
					#endif
					#ifdef USART_ISR_4
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t UDR              : 1; /// SPI slave underrun error flag
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1; /// TXFIFO Empty
						uint32_t RXFF             : 1; /// RXFIFO Full
						uint32_t TCBGT            : 1; /// Transmission complete before guard time flag
						uint32_t RXFT             : 1; /// RXFIFO threshold flag
						uint32_t TXFT             : 1; /// TXFIFO threshold flag
						uint32_t                  : 4;
					};
					#endif
				};
			};
			struct ICR_t
			{
				union
				{
					#ifdef USART_ICR_2
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t                  : 4;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_4
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1;
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_5
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t TXFECF           : 1; /// TXFIFO empty clear flag
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t TCBGTCF          : 1; /// Transmission complete before Guard time clear flag
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1; /// SPI slave underrun clear flag
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
				};
			};
			struct PRESC_t
			{
				#ifdef USART_PRESC_1
				struct
				{
					uint32_t PRESCALER        : 4; /// Clock prescaler
					uint32_t                  : 28;
				};
				#endif
			};
			struct HWCFGR2_t { };
			struct HWCFGR1_t { };
			struct VERR_t { };
			struct IPIDR_t { };
			struct SIDR_t { };
			struct SR_t
			{
				#ifdef USART_SR_1
				struct
				{
					uint32_t PE               : 1; /// Parity error
					uint32_t FE               : 1; /// Framing error
					uint32_t NF               : 1; /// Noise detected flag
					uint32_t ORE              : 1; /// Overrun error
					uint32_t IDLE             : 1; /// IDLE line detected
					uint32_t RXNE             : 1; /// Read data register not empty
					uint32_t TC               : 1; /// Transmission complete
					uint32_t TXE              : 1; /// Transmit data register empty
					uint32_t LBD              : 1; /// LIN break detection flag
					uint32_t                  : 23;
				};
				#endif
			};
		};
		#endif
		#ifdef USART_USART_tmpl_2
		struct USART_tmpl_2 /// specific fields for USART3 
		{
			struct CR1_t
			{
				union
				{
					#ifdef USART_CR1_2
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t                  : 3;
					};
					#endif
					#ifdef USART_CR1_4
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
					#ifdef USART_CR1_6
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT             : 5;
						uint32_t DEAT             : 5;
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
				};
			};
			struct CR2_t
			{
				union
				{
					#ifdef USART_CR2_2
					struct
					{
						uint32_t                  : 4;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_4
					struct
					{
						uint32_t SLVEN            : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t DIS_NSS          : 1;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_6
					struct
					{
						uint32_t ADD              : 4; /// Address of the USART node
						uint32_t                  : 1;
						uint32_t LBDL             : 1; /// lin break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t                  : 17;
					};
					#endif
					#ifdef USART_CR2_8
					struct
					{
						uint32_t SLVEN            : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t DIS_NSS          : 1; /// When the DSI_NSS bit is set, the NSS pin input will be ignored
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD           : 2; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
				};
			};
			struct CR3_t
			{
				union
				{
					#ifdef USART_CR3_1
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_CR3_3
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t TXFTIE           : 1; /// TXFIFO threshold interrupt enable
						uint32_t TCBGTIE          : 1; /// Transmission Complete before guard time, interrupt enable
						uint32_t RXFTCFG          : 3; /// Receive FIFO threshold configuration
						uint32_t RXFTIE           : 1; /// RXFIFO threshold interrupt enable
						uint32_t TXFTCFG          : 3; /// TXFIFO threshold configuration
					};
					#endif
					#ifdef USART_CR3_5
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// IrDA mode enable
						uint32_t IRLP             : 1; /// IrDA low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t                  : 20;
					};
					#endif
					#ifdef USART_CR3_8
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t UCESM            : 1; /// USART Clock Enable in Stop mode.
						uint32_t TCBGTIE          : 1; /// Transmission complete before guard time interrupt enable
						uint32_t                  : 7;
					};
					#endif
					#ifdef USART_CR3_9
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t UCESM            : 1; /// USART Clock Enable in Stop mode.
						uint32_t TCBGTIE_         : 1; /// Transmission complete before guard time interrupt enable
						uint32_t                  : 7;
					};
					#endif
				};
			};
			struct BRR_t
			{
				union
				{
					#ifdef USART_BRR_1
					struct
					{
						uint32_t DIV_Fraction     : 4;
						uint32_t DIV_Mantissa     : 12;
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_3
					struct
					{
						uint32_t BRR0_3           : 4; /// BRR
						uint32_t BRR4_15          : 12; /// USARTDIV
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_6
					struct
					{
						uint32_t BRR              : 12; /// USARTDIV
						uint32_t                  : 20;
					};
					#endif
					#ifdef USART_BRR_7
					struct
					{
						uint32_t BRR_0_3          : 4;
						uint32_t BRR_4_15         : 12;
						uint32_t                  : 16;
					};
					#endif
				};
			};
			struct GTPR_t
			{
				#ifdef USART_GTPR_1
				struct
				{
					uint32_t PSC              : 8; /// Prescaler value
					uint32_t GT               : 8; /// Guard time value
					uint32_t                  : 16;
				};
				#endif
			};
			struct RTOR_t
			{
				#ifdef USART_RTOR_1
				struct
				{
					uint32_t RTO              : 24; /// Receiver timeout value
					uint32_t BLEN             : 8; /// Block Length
				};
				#endif
			};
			struct RQR_t
			{
				#ifdef USART_RQR_1
				struct
				{
					uint32_t ABRRQ            : 1; /// Auto baud rate request
					uint32_t SBKRQ            : 1; /// Send break request
					uint32_t MMRQ             : 1; /// Mute mode request
					uint32_t RXFRQ            : 1; /// Receive data flush request
					uint32_t TXFRQ            : 1; /// Transmit data flush request
					uint32_t                  : 27;
				};
				#endif
			};
			struct ISR_t
			{
				union
				{
					#ifdef USART_ISR_1
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_ISR_3
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1;
						uint32_t RXFF             : 1;
						uint32_t TCBGT            : 1;
						uint32_t RXFT             : 1;
						uint32_t TXFT             : 1;
						uint32_t                  : 4;
					};
					#endif
					#ifdef USART_ISR_4
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t UDR              : 1; /// SPI slave underrun error flag
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1; /// TXFIFO Empty
						uint32_t RXFF             : 1; /// RXFIFO Full
						uint32_t TCBGT            : 1; /// Transmission complete before guard time flag
						uint32_t RXFT             : 1; /// RXFIFO threshold flag
						uint32_t TXFT             : 1; /// TXFIFO threshold flag
						uint32_t                  : 4;
					};
					#endif
					#ifdef USART_ISR_6
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t                  : 2;
						uint32_t TCBGT            : 1; /// Transmission complete before guard time completion
						uint32_t                  : 6;
					};
					#endif
				};
			};
			struct ICR_t
			{
				union
				{
					#ifdef USART_ICR_2
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t                  : 4;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_4
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1;
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_5
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t TXFECF           : 1; /// TXFIFO empty clear flag
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t TCBGTCF          : 1; /// Transmission complete before Guard time clear flag
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1; /// SPI slave underrun clear flag
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
				};
			};
			struct PRESC_t
			{
				#ifdef USART_PRESC_1
				struct
				{
					uint32_t PRESCALER        : 4; /// Clock prescaler
					uint32_t                  : 28;
				};
				#endif
			};
			struct HWCFGR2_t { };
			struct HWCFGR1_t { };
			struct VERR_t { };
			struct IPIDR_t { };
			struct SIDR_t { };
			struct SR_t
			{
				#ifdef USART_SR_0
				struct
				{
					uint32_t PE               : 1; /// Parity error
					uint32_t FE               : 1; /// Framing error
					uint32_t NF               : 1; /// Noise detected flag
					uint32_t ORE              : 1; /// Overrun error
					uint32_t IDLE             : 1; /// IDLE line detected
					uint32_t RXNE             : 1; /// Read data register not empty
					uint32_t TC               : 1; /// Transmission complete
					uint32_t TXE              : 1; /// Transmit data register empty
					uint32_t LBD              : 1; /// LIN break detection flag
					uint32_t CTS              : 1; /// CTS flag
					uint32_t                  : 22;
				};
				#endif
			};
		};
		#endif
		#ifdef USART_USART_tmpl_3
		struct USART_tmpl_3 /// specific fields for UART4, USART4, USART5 
		{
			struct CR1_t
			{
				union
				{
					#ifdef USART_CR1_2
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t                  : 3;
					};
					#endif
					#ifdef USART_CR1_4
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
					#ifdef USART_CR1_6
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT             : 5;
						uint32_t DEAT             : 5;
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
				};
			};
			struct CR2_t
			{
				union
				{
					#ifdef USART_CR2_2
					struct
					{
						uint32_t                  : 4;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_4
					struct
					{
						uint32_t SLVEN            : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t DIS_NSS          : 1;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_7
					struct
					{
						uint32_t ADD              : 4; /// Address of the USART node
						uint32_t                  : 1;
						uint32_t LBDL             : 1; /// lin break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 5;
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t                  : 17;
					};
					#endif
					#ifdef USART_CR2_8
					struct
					{
						uint32_t SLVEN            : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t DIS_NSS          : 1; /// When the DSI_NSS bit is set, the NSS pin input will be ignored
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD           : 2; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
				};
			};
			struct CR3_t
			{
				union
				{
					#ifdef USART_CR3_1
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_CR3_3
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t TXFTIE           : 1; /// TXFIFO threshold interrupt enable
						uint32_t TCBGTIE          : 1; /// Transmission Complete before guard time, interrupt enable
						uint32_t RXFTCFG          : 3; /// Receive FIFO threshold configuration
						uint32_t RXFTIE           : 1; /// RXFIFO threshold interrupt enable
						uint32_t TXFTCFG          : 3; /// TXFIFO threshold configuration
					};
					#endif
					#ifdef USART_CR3_6
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// IrDA mode enable
						uint32_t IRLP             : 1; /// IrDA low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t                  : 2;
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t                  : 3;
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t                  : 20;
					};
					#endif
				};
			};
			struct BRR_t
			{
				union
				{
					#ifdef USART_BRR_1
					struct
					{
						uint32_t DIV_Fraction     : 4;
						uint32_t DIV_Mantissa     : 12;
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_3
					struct
					{
						uint32_t BRR0_3           : 4; /// BRR
						uint32_t BRR4_15          : 12; /// USARTDIV
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_7
					struct
					{
						uint32_t BRR_0_3          : 4;
						uint32_t BRR_4_15         : 12;
						uint32_t                  : 16;
					};
					#endif
				};
			};
			struct GTPR_t
			{
				#ifdef USART_GTPR_1
				struct
				{
					uint32_t PSC              : 8; /// Prescaler value
					uint32_t GT               : 8; /// Guard time value
					uint32_t                  : 16;
				};
				#endif
			};
			struct RTOR_t
			{
				#ifdef USART_RTOR_1
				struct
				{
					uint32_t RTO              : 24; /// Receiver timeout value
					uint32_t BLEN             : 8; /// Block Length
				};
				#endif
			};
			struct RQR_t
			{
				#ifdef USART_RQR_1
				struct
				{
					uint32_t ABRRQ            : 1; /// Auto baud rate request
					uint32_t SBKRQ            : 1; /// Send break request
					uint32_t MMRQ             : 1; /// Mute mode request
					uint32_t RXFRQ            : 1; /// Receive data flush request
					uint32_t TXFRQ            : 1; /// Transmit data flush request
					uint32_t                  : 27;
				};
				#endif
			};
			struct ISR_t
			{
				union
				{
					#ifdef USART_ISR_1
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_ISR_3
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1;
						uint32_t RXFF             : 1;
						uint32_t TCBGT            : 1;
						uint32_t RXFT             : 1;
						uint32_t TXFT             : 1;
						uint32_t                  : 4;
					};
					#endif
					#ifdef USART_ISR_4
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t UDR              : 1; /// SPI slave underrun error flag
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1; /// TXFIFO Empty
						uint32_t RXFF             : 1; /// RXFIFO Full
						uint32_t TCBGT            : 1; /// Transmission complete before guard time flag
						uint32_t RXFT             : 1; /// RXFIFO threshold flag
						uint32_t TXFT             : 1; /// TXFIFO threshold flag
						uint32_t                  : 4;
					};
					#endif
				};
			};
			struct ICR_t
			{
				union
				{
					#ifdef USART_ICR_2
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t                  : 4;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_4
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1;
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_5
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t TXFECF           : 1; /// TXFIFO empty clear flag
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t TCBGTCF          : 1; /// Transmission complete before Guard time clear flag
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1; /// SPI slave underrun clear flag
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
				};
			};
			struct PRESC_t
			{
				#ifdef USART_PRESC_1
				struct
				{
					uint32_t PRESCALER        : 4; /// Clock prescaler
					uint32_t                  : 28;
				};
				#endif
			};
			struct HWCFGR2_t { };
			struct HWCFGR1_t { };
			struct VERR_t { };
			struct IPIDR_t { };
			struct SIDR_t { };
			struct SR_t
			{
				#ifdef USART_SR_1
				struct
				{
					uint32_t PE               : 1; /// Parity error
					uint32_t FE               : 1; /// Framing error
					uint32_t NF               : 1; /// Noise detected flag
					uint32_t ORE              : 1; /// Overrun error
					uint32_t IDLE             : 1; /// IDLE line detected
					uint32_t RXNE             : 1; /// Read data register not empty
					uint32_t TC               : 1; /// Transmission complete
					uint32_t TXE              : 1; /// Transmit data register empty
					uint32_t LBD              : 1; /// LIN break detection flag
					uint32_t                  : 23;
				};
				#endif
			};
		};
		#endif
		#ifdef USART_USART_tmpl_4
		struct USART_tmpl_4 /// specific fields for USART1 
		{
			struct CR1_t
			{
				union
				{
					#ifdef USART_CR1_2
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t                  : 3;
					};
					#endif
					#ifdef USART_CR1_4
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
					#ifdef USART_CR1_6
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t DEDT             : 5;
						uint32_t DEAT             : 5;
						uint32_t RTOIE            : 1; /// Receiver timeout interrupt enable
						uint32_t EOBIE            : 1; /// End of Block interrupt enable
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
				};
			};
			struct CR2_t
			{
				union
				{
					#ifdef USART_CR2_2
					struct
					{
						uint32_t                  : 4;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_4
					struct
					{
						uint32_t SLVEN            : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t DIS_NSS          : 1;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD0          : 1;
						uint32_t ABRMOD1          : 1; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_8
					struct
					{
						uint32_t SLVEN            : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t DIS_NSS          : 1; /// When the DSI_NSS bit is set, the NSS pin input will be ignored
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t ABREN            : 1; /// Auto baud rate enable
						uint32_t ABRMOD           : 2; /// Auto baud rate mode
						uint32_t RTOEN            : 1; /// Receiver timeout enable
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
				};
			};
			struct CR3_t
			{
				union
				{
					#ifdef USART_CR3_1
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_CR3_3
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t TXFTIE           : 1; /// TXFIFO threshold interrupt enable
						uint32_t TCBGTIE          : 1; /// Transmission Complete before guard time, interrupt enable
						uint32_t RXFTCFG          : 3; /// Receive FIFO threshold configuration
						uint32_t RXFTIE           : 1; /// RXFIFO threshold interrupt enable
						uint32_t TXFTCFG          : 3; /// TXFIFO threshold configuration
					};
					#endif
					#ifdef USART_CR3_7
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t UCESM_           : 1; /// USART Clock Enable in Stop mode.
						uint32_t TCBGTIE          : 1; /// Transmission complete before guard time interrupt enable
						uint32_t                  : 7;
					};
					#endif
					#ifdef USART_CR3_8
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t SCARCNT          : 3; /// Smartcard auto-retry count
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t UCESM            : 1; /// USART Clock Enable in Stop mode.
						uint32_t TCBGTIE          : 1; /// Transmission complete before guard time interrupt enable
						uint32_t                  : 7;
					};
					#endif
				};
			};
			struct BRR_t
			{
				union
				{
					#ifdef USART_BRR_1
					struct
					{
						uint32_t DIV_Fraction     : 4;
						uint32_t DIV_Mantissa     : 12;
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_3
					struct
					{
						uint32_t BRR0_3           : 4; /// BRR
						uint32_t BRR4_15          : 12; /// USARTDIV
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_7
					struct
					{
						uint32_t BRR_0_3          : 4;
						uint32_t BRR_4_15         : 12;
						uint32_t                  : 16;
					};
					#endif
				};
			};
			struct GTPR_t
			{
				#ifdef USART_GTPR_1
				struct
				{
					uint32_t PSC              : 8; /// Prescaler value
					uint32_t GT               : 8; /// Guard time value
					uint32_t                  : 16;
				};
				#endif
			};
			struct RTOR_t
			{
				#ifdef USART_RTOR_1
				struct
				{
					uint32_t RTO              : 24; /// Receiver timeout value
					uint32_t BLEN             : 8; /// Block Length
				};
				#endif
			};
			struct RQR_t
			{
				#ifdef USART_RQR_1
				struct
				{
					uint32_t ABRRQ            : 1; /// Auto baud rate request
					uint32_t SBKRQ            : 1; /// Send break request
					uint32_t MMRQ             : 1; /// Mute mode request
					uint32_t RXFRQ            : 1; /// Receive data flush request
					uint32_t TXFRQ            : 1; /// Transmit data flush request
					uint32_t                  : 27;
				};
				#endif
			};
			struct ISR_t
			{
				union
				{
					#ifdef USART_ISR_1
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_ISR_3
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1;
						uint32_t RXFF             : 1;
						uint32_t TCBGT            : 1;
						uint32_t RXFT             : 1;
						uint32_t TXFT             : 1;
						uint32_t                  : 4;
					};
					#endif
					#ifdef USART_ISR_4
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t UDR              : 1; /// SPI slave underrun error flag
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1; /// TXFIFO Empty
						uint32_t RXFF             : 1; /// RXFIFO Full
						uint32_t TCBGT            : 1; /// Transmission complete before guard time flag
						uint32_t RXFT             : 1; /// RXFIFO threshold flag
						uint32_t TXFT             : 1; /// TXFIFO threshold flag
						uint32_t                  : 4;
					};
					#endif
					#ifdef USART_ISR_6
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t LBDF             : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t RTOF             : 1;
						uint32_t EOBF             : 1;
						uint32_t                  : 1;
						uint32_t ABRE             : 1;
						uint32_t ABRF             : 1;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t                  : 2;
						uint32_t TCBGT            : 1; /// Transmission complete before guard time completion
						uint32_t                  : 6;
					};
					#endif
				};
			};
			struct ICR_t
			{
				union
				{
					#ifdef USART_ICR_2
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t                  : 4;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_4
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t                  : 1;
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t                  : 1;
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1;
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_5
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t TXFECF           : 1; /// TXFIFO empty clear flag
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t TCBGTCF          : 1; /// Transmission complete before Guard time clear flag
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t UDRCF            : 1; /// SPI slave underrun clear flag
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
				};
			};
			struct PRESC_t
			{
				#ifdef USART_PRESC_1
				struct
				{
					uint32_t PRESCALER        : 4; /// Clock prescaler
					uint32_t                  : 28;
				};
				#endif
			};
			struct HWCFGR2_t { };
			struct HWCFGR1_t { };
			struct VERR_t { };
			struct IPIDR_t { };
			struct SIDR_t { };
			struct SR_t { };
		};
		#endif
		#ifdef USART_USART_tmpl_5
		struct USART_tmpl_5 /// specific fields for LPUART, LPUART1, LPUSART1 
		{
			struct CR1_t
			{
				union
				{
					#ifdef USART_CR1_3
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t                  : 1;
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t                  : 2;
						uint32_t M1               : 1; /// Word length
						uint32_t                  : 3;
					};
					#endif
					#ifdef USART_CR1_5
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t                  : 1;
						uint32_t DEDT0            : 1;
						uint32_t DEDT1            : 1;
						uint32_t DEDT2            : 1;
						uint32_t DEDT3            : 1;
						uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
						uint32_t DEAT0            : 1;
						uint32_t DEAT1            : 1;
						uint32_t DEAT2            : 1;
						uint32_t DEAT3            : 1;
						uint32_t DEAT4            : 1; /// Driver Enable assertion time
						uint32_t                  : 2;
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1;
						uint32_t TXFEIE           : 1;
						uint32_t RXFFIE           : 1;
					};
					#endif
					#ifdef USART_CR1_7
					struct
					{
						uint32_t UE               : 1; /// USART enable
						uint32_t UESM             : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t M0               : 1; /// Word length
						uint32_t MME              : 1; /// Mute mode enable
						uint32_t CMIE             : 1; /// Character match interrupt enable
						uint32_t                  : 1;
						uint32_t DEDT0            : 5;
						uint32_t DEAT             : 5; /// DEAT0
						uint32_t                  : 2;
						uint32_t M1               : 1; /// Word length
						uint32_t FIFOEN           : 1; /// FIFO mode enable
						uint32_t TXFEIE           : 1; /// TXFIFO empty interrupt enable
						uint32_t RXFFIE           : 1; /// RXFIFO Full interrupt enable
					};
					#endif
				};
			};
			struct CR2_t
			{
				union
				{
					#ifdef USART_CR2_3
					struct
					{
						uint32_t                  : 4;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t                  : 6;
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t                  : 1;
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t                  : 4;
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_5
					struct
					{
						uint32_t                  : 4;
						uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t                  : 7;
						uint32_t STOP             : 2; /// STOP bits
						uint32_t                  : 1;
						uint32_t SWAP             : 1; /// Swap TX/RX pins
						uint32_t RXINV            : 1; /// RX pin active level inversion
						uint32_t TXINV            : 1; /// TX pin active level inversion
						uint32_t DATAINV          : 1; /// Binary data inversion
						uint32_t MSBFIRST         : 1; /// Most significant bit first
						uint32_t                  : 4;
						uint32_t ADD0_3           : 4; /// Address of the USART node
						uint32_t ADD4_7           : 4; /// Address of the USART node
					};
					#endif
				};
			};
			struct CR3_t
			{
				union
				{
					#ifdef USART_CR3_2
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t                  : 2;
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t                  : 2;
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t                  : 1;
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 4;
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_CR3_4
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t                  : 2;
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t                  : 2;
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t                  : 1;
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 4;
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t TXFTIE           : 1; /// threshold interrupt enable
						uint32_t                  : 1;
						uint32_t RXFTCFG          : 3; /// Receive FIFO threshold configuration
						uint32_t RXFTIE           : 1; /// RXFIFO threshold interrupt enable
						uint32_t TXFTCFG          : 3; /// TXFIFO threshold configuration
					};
					#endif
					#ifdef USART_CR3_10
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t                  : 2;
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t                  : 2;
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t                  : 1;
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 4;
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t UCESM_           : 1; /// LPUART Clock Enable in Stop mode
						uint32_t                  : 8;
					};
					#endif
					#ifdef USART_CR3_12
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t                  : 2;
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t                  : 2;
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t                  : 1;
						uint32_t OVRDIS           : 1; /// Overrun Disable
						uint32_t DDRE             : 1; /// DMA Disable on Reception Error
						uint32_t DEM              : 1; /// Driver enable mode
						uint32_t DEP              : 1; /// Driver enable polarity selection
						uint32_t                  : 4;
						uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t UCESM            : 1;
						uint32_t                  : 8;
					};
					#endif
				};
			};
			struct BRR_t
			{
				#ifdef USART_BRR_2
				struct
				{
					uint32_t BRR              : 20;
					uint32_t                  : 12;
				};
				#endif
			};
			struct GTPR_t { };
			struct RTOR_t { };
			struct RQR_t
			{
				union
				{
					#ifdef USART_RQR_2
					struct
					{
						uint32_t                  : 1;
						uint32_t SBKRQ            : 1; /// Send break request
						uint32_t MMRQ             : 1; /// Mute mode request
						uint32_t RXFRQ            : 1; /// Receive data flush request
						uint32_t                  : 28;
					};
					#endif
					#ifdef USART_RQR_3
					struct
					{
						uint32_t                  : 1;
						uint32_t SBKRQ            : 1; /// Send break request
						uint32_t MMRQ             : 1; /// Mute mode request
						uint32_t RXFRQ            : 1; /// Receive data flush request
						uint32_t TXFRQ            : 1;
						uint32_t                  : 27;
					};
					#endif
				};
			};
			struct ISR_t
			{
				union
				{
					#ifdef USART_ISR_2
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t                  : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t                  : 5;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t                  : 9;
					};
					#endif
					#ifdef USART_ISR_5
					struct
					{
						uint32_t PE               : 1;
						uint32_t FE               : 1;
						uint32_t NF               : 1;
						uint32_t ORE              : 1;
						uint32_t IDLE             : 1;
						uint32_t RXNE             : 1;
						uint32_t TC               : 1;
						uint32_t TXE              : 1;
						uint32_t                  : 1;
						uint32_t CTSIF            : 1;
						uint32_t CTS              : 1;
						uint32_t                  : 5;
						uint32_t BUSY             : 1;
						uint32_t CMF              : 1;
						uint32_t SBKF             : 1;
						uint32_t RWU              : 1;
						uint32_t WUF              : 1;
						uint32_t TEACK            : 1;
						uint32_t REACK            : 1;
						uint32_t TXFE             : 1; /// TXFIFO Empty
						uint32_t RXFF             : 1; /// RXFIFO Full
						uint32_t                  : 1;
						uint32_t RXFT             : 1; /// RXFIFO threshold flag
						uint32_t TXFT             : 1; /// TXFIFO threshold flag
						uint32_t                  : 4;
					};
					#endif
				};
			};
			struct ICR_t
			{
				#ifdef USART_ICR_3
				struct
				{
					uint32_t PECF             : 1; /// Parity error clear flag
					uint32_t FECF             : 1; /// Framing error clear flag
					uint32_t NCF              : 1; /// Noise detected clear flag
					uint32_t ORECF            : 1; /// Overrun error clear flag
					uint32_t IDLECF           : 1; /// Idle line detected clear flag
					uint32_t                  : 1;
					uint32_t TCCF             : 1; /// Transmission complete clear flag
					uint32_t                  : 2;
					uint32_t CTSCF            : 1; /// CTS clear flag
					uint32_t                  : 7;
					uint32_t CMCF             : 1; /// Character match clear flag
					uint32_t                  : 2;
					uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
					uint32_t                  : 11;
				};
				#endif
			};
			struct PRESC_t { };
			struct HWCFGR2_t
			{
				#ifdef USART_HWCFGR2_1
				struct
				{
					uint32_t CFG1             : 4; /// LUART hardware configuration 1
					uint32_t CFG2             : 4; /// LUART hardware configuration 2
					uint32_t                  : 24;
				};
				#endif
			};
			struct HWCFGR1_t
			{
				#ifdef USART_HWCFGR1_1
				struct
				{
					uint32_t CFG1             : 4; /// LUART hardware configuration 1
					uint32_t CFG2             : 4; /// LUART hardware configuration 2
					uint32_t CFG3             : 4; /// LUART hardware configuration 1
					uint32_t CFG4             : 4; /// LUART hardware configuration 2
					uint32_t CFG5             : 4; /// LUART hardware configuration 2
					uint32_t CFG6             : 4; /// LUART hardware configuration 2
					uint32_t CFG7             : 4; /// LUART hardware configuration 2
					uint32_t CFG8             : 4; /// LUART hardware configuration 2
				};
				#endif
			};
			struct VERR_t
			{
				#ifdef USART_VERR_1
				struct
				{
					uint32_t MINREV           : 4; /// Minor Revision number
					uint32_t MAJREV           : 4; /// Major Revision number
					uint32_t                  : 24;
				};
				#endif
			};
			struct IPIDR_t
			{
				#ifdef USART_IPIDR_1
				struct
				{
					uint32_t IPID             : 32; /// IP Identification
				};
				#endif
			};
			struct SIDR_t
			{
				#ifdef USART_SIDR_1
				struct
				{
					uint32_t SID              : 32; /// Size Identification
				};
				#endif
			};
			struct SR_t { };
		};
		#endif
		struct USART_tmpl_default /// default template for USART 
		{
			struct CR1_t { };
			struct CR2_t { };
			struct CR3_t { };
			struct BRR_t { };
			struct GTPR_t { };
			struct RTOR_t { };
			struct RQR_t { };
			struct ISR_t { };
			struct ICR_t { };
			struct PRESC_t { };
			struct HWCFGR2_t { };
			struct HWCFGR1_t { };
			struct VERR_t { };
			struct IPIDR_t { };
			struct SIDR_t { };
			struct SR_t { };
		};
		template<typename tmpl=USART_tmpl_default>
		class USART /// universal synchronous asynchronous receiver transmitter
		{
			
			struct CR1_t: Reg32_t /// Control register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_CR1_0
					struct
					{
						uint32_t USART_CR1_0_UE   : 1; /// USART enable
						uint32_t USART_CR1_0_UESM : 1; /// USART enable in Stop mode
						uint32_t RE               : 1; /// Receiver enable
						uint32_t TE               : 1; /// Transmitter enable
						uint32_t IDLEIE           : 1; /// IDLE interrupt enable
						uint32_t RXNEIE           : 1; /// RXNE interrupt enable
						uint32_t TCIE             : 1; /// Transmission complete interrupt enable
						uint32_t TXEIE            : 1; /// interrupt enable
						uint32_t PEIE             : 1; /// PE interrupt enable
						uint32_t PS               : 1; /// Parity selection
						uint32_t PCE              : 1; /// Parity control enable
						uint32_t WAKE             : 1; /// Receiver wakeup method
						uint32_t USART_CR1_0_M0   : 1; /// Word length
						uint32_t USART_CR1_0_MME  : 1; /// Mute mode enable
						uint32_t USART_CR1_0_CMIE : 1; /// Character match interrupt enable
						uint32_t OVER8            : 1; /// Oversampling mode
						uint32_t USART_CR1_0_DEDT : 5; /// Driver Enable deassertion time
						uint32_t USART_CR1_0_DEAT : 5; /// Driver Enable assertion time
						uint32_t USART_CR1_0_RTOIE : 1; /// Receiver timeout interrupt enable
						uint32_t USART_CR1_0_EOBIE : 1; /// End of Block interrupt enable
						uint32_t USART_CR1_0_M1   : 1; /// Word length
						uint32_t USART_CR1_0_FIFOEN : 1; /// FIFO mode enable
						uint32_t USART_CR1_0_TXFEIE : 1; /// TXFIFO empty interrupt enable
						uint32_t USART_CR1_0_RXFFIE : 1; /// RXFIFO Full interrupt enable
					};
					#endif
					#ifdef USART_CR1_1
					struct
					{
						uint32_t USART_CR1_1_SBK  : 1; /// Send break
						uint32_t USART_CR1_1_RWU  : 1; /// Receiver wakeup
						uint32_t                  : 10;
						uint32_t USART_CR1_1_M    : 1; /// Word length
						uint32_t USART_CR1_1_UE   : 1; /// USART enable
						uint32_t                  : 2;
						uint32_t USART_CR1_1_DEDT0 : 1;
						uint32_t USART_CR1_1_DEDT1 : 1;
						uint32_t USART_CR1_1_DEDT2 : 1;
						uint32_t USART_CR1_1_DEDT3 : 1;
						uint32_t USART_CR1_1_DEDT4 : 1; /// Driver Enable de-assertion time
						uint32_t USART_CR1_1_DEAT0 : 1;
						uint32_t USART_CR1_1_DEAT1 : 1;
						uint32_t USART_CR1_1_DEAT2 : 1;
						uint32_t USART_CR1_1_DEAT3 : 1;
						uint32_t USART_CR1_1_DEAT4 : 1; /// Driver Enable assertion time
						uint32_t                  : 6;
					};
					#endif
					tmpl::CR1_t;
				};
				
			};
			struct CR2_t: Reg32_t /// Control register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_CR2_0
					struct
					{
						uint32_t USART_CR2_0_SLVEN : 1; /// Synchronous Slave mode enable
						uint32_t                  : 2;
						uint32_t USART_CR2_0_DIS_NSS : 1; /// When the DSI_NSS bit is set, the NSS pin input will be ignored
						uint32_t USART_CR2_0_ADDM7 : 1; /// 7-bit Address Detection/4-bit Address Detection
						uint32_t LBDL             : 1; /// LIN break detection length
						uint32_t LBDIE            : 1; /// LIN break detection interrupt enable
						uint32_t                  : 1;
						uint32_t LBCL             : 1; /// Last bit clock pulse
						uint32_t CPHA             : 1; /// Clock phase
						uint32_t CPOL             : 1; /// Clock polarity
						uint32_t CLKEN            : 1; /// Clock enable
						uint32_t STOP             : 2; /// STOP bits
						uint32_t LINEN            : 1; /// LIN mode enable
						uint32_t USART_CR2_0_SWAP : 1; /// Swap TX/RX pins
						uint32_t USART_CR2_0_RXINV : 1; /// RX pin active level inversion
						uint32_t USART_CR2_0_TXINV : 1; /// TX pin active level inversion
						uint32_t USART_CR2_0_DATAINV : 1; /// Binary data inversion
						uint32_t USART_CR2_0_MSBFIRST : 1; /// Most significant bit first
						uint32_t USART_CR2_0_ABREN : 1; /// Auto baud rate enable
						uint32_t USART_CR2_0_ABRMOD : 2; /// Auto baud rate mode
						uint32_t USART_CR2_0_RTOEN : 1; /// Receiver timeout enable
						uint32_t USART_CR2_0_ADD0_3 : 4; /// Address of the USART node
						uint32_t USART_CR2_0_ADD4_7 : 4; /// Address of the USART node
					};
					#endif
					#ifdef USART_CR2_1
					struct
					{
						uint32_t USART_CR2_1_ADD  : 4; /// Address of the USART node
						uint32_t                  : 17;
						uint32_t USART_CR2_1_ABRMOD0 : 1;
						uint32_t USART_CR2_1_ABRMOD1 : 1; /// Auto baud rate mode
						uint32_t                  : 1;
						uint32_t USART_CR2_1_ADD0 : 4; /// Address of the USART node
						uint32_t USART_CR2_1_ADD4 : 4; /// Address of the USART node
					};
					#endif
					tmpl::CR2_t;
				};
				
			};
			struct CR3_t: Reg32_t /// Control register 3
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_CR3_0
					struct
					{
						uint32_t EIE              : 1; /// Error interrupt enable
						uint32_t IREN             : 1; /// Ir mode enable
						uint32_t IRLP             : 1; /// Ir low-power
						uint32_t HDSEL            : 1; /// Half-duplex selection
						uint32_t NACK             : 1; /// Smartcard NACK enable
						uint32_t SCEN             : 1; /// Smartcard mode enable
						uint32_t DMAR             : 1; /// DMA enable receiver
						uint32_t DMAT             : 1; /// DMA enable transmitter
						uint32_t RTSE             : 1; /// RTS enable
						uint32_t CTSE             : 1; /// CTS enable
						uint32_t CTSIE            : 1; /// CTS interrupt enable
						uint32_t ONEBIT           : 1; /// One sample bit method enable
						uint32_t USART_CR3_0_OVRDIS : 1; /// Overrun Disable
						uint32_t USART_CR3_0_DDRE : 1; /// DMA Disable on Reception Error
						uint32_t USART_CR3_0_DEM  : 1; /// Driver enable mode
						uint32_t USART_CR3_0_DEP  : 1; /// Driver enable polarity selection
						uint32_t                  : 1;
						uint32_t USART_CR3_0_SCARCNT : 3; /// Smartcard auto-retry count
						uint32_t USART_CR3_0_WUS  : 2; /// Wakeup from Stop mode interrupt flag selection
						uint32_t USART_CR3_0_WUFIE : 1; /// Wakeup from Stop mode interrupt enable
						uint32_t USART_CR3_0_TXFTIE : 1; /// threshold interrupt enable
						uint32_t USART_CR3_0_TCBGTIE : 1; /// Tr Complete before guard time, interrupt enable
						uint32_t USART_CR3_0_RXFTCFG : 3; /// Receive FIFO threshold configuration
						uint32_t USART_CR3_0_RXFTIE : 1; /// RXFIFO threshold interrupt enable
						uint32_t USART_CR3_0_TXFTCFG : 3; /// TXFIFO threshold configuration
					};
					#endif
					tmpl::CR3_t;
				};
				
			};
			struct BRR_t: Reg32_t /// Baud rate register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_BRR_0
					struct
					{
						uint32_t BRR_0_3          : 4; /// DIV_Fraction
						uint32_t BRR_4_15         : 12; /// DIV_Mantissa
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_4
					struct
					{
						uint32_t DIV_Fraction     : 4; /// fraction of USARTDIV
						uint32_t DIV_Mantissa     : 12; /// mantissa of USARTDIV
						uint32_t                  : 16;
					};
					#endif
					#ifdef USART_BRR_5
					struct
					{
						uint32_t BRR              : 16; /// USARTDIV
						uint32_t                  : 16;
					};
					#endif
					tmpl::BRR_t;
				};
				
			};
			struct GTPR_t: Reg32_t /// Guard time and prescaler register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_GTPR_0
					struct
					{
						uint32_t PSC              : 8; /// Prescaler value
						uint32_t GT               : 8; /// Guard time value
						uint32_t                  : 16;
					};
					#endif
					tmpl::GTPR_t;
				};
				
			};
			#ifdef USART_RTOR
			struct RTOR_t: Reg32_t /// Receiver timeout register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_RTOR_0
					struct
					{
						uint32_t RTO              : 24; /// Receiver timeout value
						uint32_t BLEN             : 8; /// Block Length
					};
					#endif
					tmpl::RTOR_t;
				};
				
			};
			#endif
			#ifdef USART_RQR
			struct RQR_t: Reg32_t /// Request register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_RQR_0
					struct
					{
						uint32_t ABRRQ            : 1; /// Auto baud rate request
						uint32_t SBKRQ            : 1; /// Send break request
						uint32_t MMRQ             : 1; /// Mute mode request
						uint32_t RXFRQ            : 1; /// Receive data flush request
						uint32_t TXFRQ            : 1; /// Transmit data flush request
						uint32_t                  : 27;
					};
					#endif
					tmpl::RQR_t;
				};
				
			};
			#endif
			#ifdef USART_ISR
			struct ISR_t: Reg32_t /// Interrupt & status register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_ISR_0
					struct
					{
						uint32_t PE               : 1; /// Parity error
						uint32_t FE               : 1; /// Framing error
						uint32_t NF               : 1; /// Noise detected flag
						uint32_t ORE              : 1; /// Overrun error
						uint32_t IDLE             : 1; /// Idle line detected
						uint32_t RXNE             : 1; /// Read data register not empty
						uint32_t TC               : 1; /// Transmission complete
						uint32_t TXE              : 1; /// Transmit data register empty
						uint32_t LBDF             : 1; /// LIN break detection flag
						uint32_t CTSIF            : 1; /// CTS interrupt flag
						uint32_t CTS              : 1; /// CTS flag
						uint32_t RTOF             : 1; /// Receiver timeout
						uint32_t EOBF             : 1; /// End of block flag
						uint32_t USART_ISR_0_UDR  : 1; /// SPI slave underrun error flag
						uint32_t ABRE             : 1; /// Auto baud rate error
						uint32_t ABRF             : 1; /// Auto baud rate flag
						uint32_t BUSY             : 1; /// Busy flag
						uint32_t CMF              : 1; /// character match flag
						uint32_t SBKF             : 1; /// Send break flag
						uint32_t USART_ISR_0_RWU  : 1; /// Receiver wakeup from Mute mode
						uint32_t USART_ISR_0_WUF  : 1; /// Wakeup from Stop mode flag
						uint32_t TEACK            : 1; /// Transmit enable acknowledge flag
						uint32_t USART_ISR_0_REACK : 1; /// Receive enable acknowledge flag
						uint32_t USART_ISR_0_TXFE : 1; /// TXFIFO Empty
						uint32_t USART_ISR_0_RXFF : 1; /// RXFIFO Full
						uint32_t USART_ISR_0_TCBGT : 1; /// Transmission complete before guard time flag
						uint32_t USART_ISR_0_RXFT : 1; /// RXFIFO threshold flag
						uint32_t USART_ISR_0_TXFT : 1; /// TXFIFO threshold flag
						uint32_t                  : 4;
					};
					#endif
					tmpl::ISR_t;
				};
				
			};
			#endif
			#ifdef USART_ICR
			struct ICR_t: Reg32_t /// Interrupt flag clear register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_ICR_0
					struct
					{
						uint32_t PECF             : 1; /// Parity error clear flag
						uint32_t FECF             : 1; /// Framing error clear flag
						uint32_t NCF              : 1; /// Noise detected clear flag
						uint32_t ORECF            : 1; /// Overrun error clear flag
						uint32_t IDLECF           : 1; /// Idle line detected clear flag
						uint32_t USART_ICR_0_TXFECF : 1; /// TXFIFO empty clear flag
						uint32_t TCCF             : 1; /// Transmission complete clear flag
						uint32_t USART_ICR_0_TCBGTCF : 1; /// Transmission complete before Guard time clear flag
						uint32_t LBDCF            : 1; /// LIN break detection clear flag
						uint32_t CTSCF            : 1; /// CTS clear flag
						uint32_t                  : 1;
						uint32_t RTOCF            : 1; /// Receiver timeout clear flag
						uint32_t EOBCF            : 1; /// End of block clear flag
						uint32_t USART_ICR_0_UDRCF : 1; /// SPI slave underrun clear flag
						uint32_t                  : 3;
						uint32_t CMCF             : 1; /// Character match clear flag
						uint32_t                  : 2;
						uint32_t USART_ICR_0_WUCF : 1; /// Wakeup from Stop mode clear flag
						uint32_t                  : 11;
					};
					#endif
					#ifdef USART_ICR_1
					struct
					{
						uint32_t                  : 7;
						uint32_t TCBGTC           : 1; /// Transmission complete before Guard time clear flag
						uint32_t                  : 24;
					};
					#endif
					tmpl::ICR_t;
				};
				
			};
			#endif
			#ifdef USART_RDR
			struct RDR_t: Reg32_t /// Receive data register
			{
				using Reg32_t::operator=;
				uint32_t RDR              : 9; /// Receive data value
				uint32_t                  : 23;
				
			};
			#endif
			#ifdef USART_TDR
			struct TDR_t: Reg32_t /// Transmit data register
			{
				using Reg32_t::operator=;
				uint32_t TDR              : 9; /// Transmit data value
				uint32_t                  : 23;
				
			};
			#endif
			#ifdef USART_PRESC
			struct PRESC_t: Reg32_t /// Prescaler register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_PRESC_0
					struct
					{
						uint32_t PRESCALER        : 4; /// Clock prescaler
						uint32_t                  : 28;
					};
					#endif
					tmpl::PRESC_t;
				};
				
			};
			#endif
			#ifdef USART_HWCFGR2
			struct HWCFGR2_t: Reg32_t /// USART Hardware Configuration register 2
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_HWCFGR2_0
					struct
					{
						uint32_t CFG1             : 4;
						uint32_t CFG2             : 4;
						uint32_t                  : 24;
					};
					#endif
					tmpl::HWCFGR2_t;
				};
				
			};
			#endif
			#ifdef USART_HWCFGR1
			struct HWCFGR1_t: Reg32_t /// USART Hardware Configuration register 1
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_HWCFGR1_0
					struct
					{
						uint32_t CFG1             : 4;
						uint32_t CFG2             : 4;
						uint32_t CFG3             : 4;
						uint32_t CFG4             : 4;
						uint32_t CFG5             : 4;
						uint32_t CFG6             : 4;
						uint32_t CFG7             : 4;
						uint32_t CFG8             : 4;
					};
					#endif
					tmpl::HWCFGR1_t;
				};
				
			};
			#endif
			#ifdef USART_VERR
			struct VERR_t: Reg32_t /// EXTI IP Version register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_VERR_0
					struct
					{
						uint32_t MINREV           : 4; /// Minor Revision number
						uint32_t MAJREV           : 4; /// Major Revision number
						uint32_t                  : 24;
					};
					#endif
					tmpl::VERR_t;
				};
				
			};
			#endif
			#ifdef USART_IPIDR
			struct IPIDR_t: Reg32_t /// EXTI Identification register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_IPIDR_0
					struct
					{
						uint32_t IPID             : 32; /// IP Identification
					};
					#endif
					tmpl::IPIDR_t;
				};
				
			};
			#endif
			#ifdef USART_SIDR
			struct SIDR_t: Reg32_t /// EXTI Size ID register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_SIDR_0
					struct
					{
						uint32_t SID              : 32; /// Size Identification
					};
					#endif
					tmpl::SIDR_t;
				};
				
			};
			#endif
			#ifdef USART_SR
			struct SR_t: Reg32_t /// Status register
			{
				using Reg32_t::operator=;
				union
				{
					#ifdef USART_SR_2
					struct
					{
						uint32_t PE               : 1; /// Parity error
						uint32_t FE               : 1; /// Framing error
						uint32_t NF               : 1; /// Noise detected flag
						uint32_t ORE              : 1; /// Overrun error
						uint32_t IDLE             : 1; /// IDLE line detected
						uint32_t RXNE             : 1; /// Read data register not empty
						uint32_t TC               : 1; /// Transmission complete
						uint32_t TXE              : 1; /// Transmit data register empty
						uint32_t LBD              : 1; /// LIN break detection flag
						uint32_t CTS              : 1; /// CTS flag
						uint32_t                  : 22;
					};
					#endif
					tmpl::SR_t;
				};
				
			};
			#endif
			#ifdef USART_DR
			struct DR_t: Reg32_t /// Data register
			{
				using Reg32_t::operator=;
				uint32_t DR               : 9; /// Data value
				uint32_t                  : 23;
				
			};
			#endif
			union
			{
				#ifdef USART_MAP0
				struct
				{
					CR1_t CR1; /// Control register 1
					CR2_t CR2; /// Control register 2
					CR3_t CR3; /// Control register 3
					BRR_t BRR; /// Baud rate register
					GTPR_t GTPR; /// Guard time and prescaler register
					RTOR_t RTOR; /// Receiver timeout register
					RQR_t RQR; /// Request register
					ISR_t ISR; /// Interrupt & status register
					ICR_t ICR; /// Interrupt flag clear register
					RDR_t RDR; /// Receive data register
					TDR_t TDR; /// Transmit data register
					USART_MAP0_PRESC; /// Prescaler register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
					USART_MAP0_HWCFGR2; /// USART Hardware Configuration register 2
					USART_MAP0_HWCFGR1; /// USART Hardware Configuration register 1
					USART_MAP0_VERR; /// EXTI IP Version register
					USART_MAP0_IPIDR; /// EXTI Identification register
					USART_MAP0_SIDR; /// EXTI Size ID register
				};
				#endif
				#ifdef USART_MAP1
				struct
				{
					SR_t SR; /// Status register
					DR_t DR; /// Data register
					BRR_t BRR; /// Baud rate register
					CR1_t CR1; /// Control register 1
					CR2_t CR2; /// Control register 2
					CR3_t CR3; /// Control register 3
					GTPR_t GTPR; /// Guard time and prescaler register
					__SOOL_PERIPH_PADDING_4;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_512;
				};
				#endif
			};
			private:
			#ifndef __SOOL_DEBUG_NOPHY
				USART() = delete;
			#endif
			
		};
		#ifdef PERIPH_UART
		class UART /// lower power universal asynchronous receiver transmitter
		{
			
			struct CR1_t: Reg32_t /// Control register 1
			{
				using Reg32_t::operator=;
				uint32_t UE               : 1; /// USART enable
				uint32_t UESM             : 1; /// USART enable in Stop mode
				uint32_t RE               : 1; /// Receiver enable
				uint32_t TE               : 1; /// Transmitter enable
				uint32_t IDLEIE           : 1; /// IDLE interrupt enable
				uint32_t RXNEIE           : 1; /// RXNE interrupt enable
				uint32_t TCIE             : 1; /// Transmission complete interrupt enable
				uint32_t TXEIE            : 1; /// interrupt enable
				uint32_t PEIE             : 1; /// PE interrupt enable
				uint32_t PS               : 1; /// Parity selection
				uint32_t PCE              : 1; /// Parity control enable
				uint32_t WAKE             : 1; /// Receiver wakeup method
				uint32_t M0               : 1; /// Word length
				uint32_t MME              : 1; /// Mute mode enable
				uint32_t CMIE             : 1; /// Character match interrupt enable
				uint32_t                  : 1;
				uint32_t DEDT0            : 1;
				uint32_t DEDT1            : 1;
				uint32_t DEDT2            : 1;
				uint32_t DEDT3            : 1;
				uint32_t DEDT4            : 1; /// Driver Enable de-assertion time
				uint32_t DEAT0            : 1;
				uint32_t DEAT1            : 1;
				uint32_t DEAT2            : 1;
				uint32_t DEAT3            : 1;
				uint32_t DEAT4            : 1; /// Driver Enable assertion time
				uint32_t                  : 2;
				uint32_t M1               : 1; /// Word length
				uint32_t                  : 3;
				
			};
			struct CR2_t: Reg32_t /// Control register 2
			{
				using Reg32_t::operator=;
				uint32_t                  : 4;
				uint32_t ADDM7            : 1; /// 7-bit Address Detection/4-bit Address Detection
				uint32_t                  : 6;
				uint32_t CLKEN            : 1; /// Clock enable
				uint32_t STOP             : 2; /// STOP bits
				uint32_t                  : 1;
				uint32_t SWAP             : 1; /// Swap TX/RX pins
				uint32_t RXINV            : 1; /// RX pin active level inversion
				uint32_t TXINV            : 1; /// TX pin active level inversion
				uint32_t DATAINV          : 1; /// Binary data inversion
				uint32_t MSBFIRST         : 1; /// Most significant bit first
				uint32_t                  : 4;
				uint32_t ADD0_3           : 4; /// Address of the USART node
				uint32_t ADD4_7           : 4; /// Address of the USART node
				
			};
			struct CR3_t: Reg32_t /// Control register 3
			{
				using Reg32_t::operator=;
				uint32_t EIE              : 1; /// Error interrupt enable
				uint32_t                  : 2;
				uint32_t HDSEL            : 1; /// Half-duplex selection
				uint32_t                  : 2;
				uint32_t DMAR             : 1; /// DMA enable receiver
				uint32_t DMAT             : 1; /// DMA enable transmitter
				uint32_t RTSE             : 1; /// RTS enable
				uint32_t CTSE             : 1; /// CTS enable
				uint32_t CTSIE            : 1; /// CTS interrupt enable
				uint32_t                  : 1;
				uint32_t OVRDIS           : 1; /// Overrun Disable
				uint32_t DDRE             : 1; /// DMA Disable on Reception Error
				uint32_t DEM              : 1; /// Driver enable mode
				uint32_t DEP              : 1; /// Driver enable polarity selection
				uint32_t                  : 4;
				uint32_t WUS              : 2; /// Wakeup from Stop mode interrupt flag selection
				uint32_t WUFIE            : 1; /// Wakeup from Stop mode interrupt enable
				uint32_t                  : 9;
				
			};
			struct BRR_t: Reg32_t /// Baud rate register
			{
				using Reg32_t::operator=;
				uint32_t BRR              : 20;
				uint32_t                  : 12;
				
			};
			struct RQR_t: Reg32_t /// Request register
			{
				using Reg32_t::operator=;
				uint32_t                  : 1;
				uint32_t SBKRQ            : 1; /// Send break request
				uint32_t MMRQ             : 1; /// Mute mode request
				uint32_t RXFRQ            : 1; /// Receive data flush request
				uint32_t                  : 28;
				
			};
			struct ISR_t: Reg32_t /// Interrupt & status register
			{
				using Reg32_t::operator=;
				uint32_t PE               : 1;
				uint32_t FE               : 1;
				uint32_t NF               : 1;
				uint32_t ORE              : 1;
				uint32_t IDLE             : 1;
				uint32_t RXNE             : 1;
				uint32_t TC               : 1;
				uint32_t TXE              : 1;
				uint32_t                  : 1;
				uint32_t CTSIF            : 1;
				uint32_t CTS              : 1;
				uint32_t                  : 5;
				uint32_t BUSY             : 1;
				uint32_t CMF              : 1;
				uint32_t SBKF             : 1;
				uint32_t RWU              : 1;
				uint32_t WUF              : 1;
				uint32_t TEACK            : 1;
				uint32_t REACK            : 1;
				uint32_t                  : 9;
				
			};
			struct ICR_t: Reg32_t /// Interrupt flag clear register
			{
				using Reg32_t::operator=;
				uint32_t PECF             : 1; /// Parity error clear flag
				uint32_t FECF             : 1; /// Framing error clear flag
				uint32_t NCF              : 1; /// Noise detected clear flag
				uint32_t ORECF            : 1; /// Overrun error clear flag
				uint32_t IDLECF           : 1; /// Idle line detected clear flag
				uint32_t                  : 1;
				uint32_t TCCF             : 1; /// Transmission complete clear flag
				uint32_t                  : 2;
				uint32_t CTSCF            : 1; /// CTS clear flag
				uint32_t                  : 7;
				uint32_t CMCF             : 1; /// Character match clear flag
				uint32_t                  : 2;
				uint32_t WUCF             : 1; /// Wakeup from Stop mode clear flag
				uint32_t                  : 11;
				
			};
			struct RDR_t: Reg32_t /// Receive data register
			{
				using Reg32_t::operator=;
				uint32_t RDR              : 9; /// Receive data value
				uint32_t                  : 23;
				
			};
			struct TDR_t: Reg32_t /// Transmit data register
			{
				using Reg32_t::operator=;
				uint32_t TDR              : 9; /// Transmit data value
				uint32_t                  : 23;
				
			};
			CR1_t CR1; /// Control register 1
			CR2_t CR2; /// Control register 2
			CR3_t CR3; /// Control register 3
			BRR_t BRR; /// Baud rate register
			__SOOL_PERIPH_PADDING_8;
			RQR_t RQR; /// Request register
			ISR_t ISR; /// Interrupt & status register
			ICR_t ICR; /// Interrupt flag clear register
			RDR_t RDR; /// Receive data register
			TDR_t TDR; /// Transmit data register
			private:
			#ifndef __SOOL_DEBUG_NOPHY
				UART() = delete;
			#endif
			
		};
		#endif

#if	defined(STM32MP1     )
#define USART1_BASE_ADDR ((uint32_t)0x5c000000U)
#define USART1_TMPL
#define USART2_BASE_ADDR ((uint32_t)0x4000e000U)
#define USART2_TMPL
#define USART3_BASE_ADDR ((uint32_t)0x4000f000U)
#define USART3_TMPL
#define UART4_BASE_ADDR ((uint32_t)0x40010000U)
#define UART4_TMPL
#define UART5_BASE_ADDR ((uint32_t)0x40011000U)
#define UART5_TMPL
#define USART6_BASE_ADDR ((uint32_t)0x44003000U)
#define USART6_TMPL
#define UART7_BASE_ADDR ((uint32_t)0x40018000U)
#define UART7_TMPL
#define UART8_BASE_ADDR ((uint32_t)0x40019000U)
#define UART8_TMPL
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32H7      )
#define USART1_BASE_ADDR ((uint32_t)0x40011000U)
#define USART1_TMPL USART_tmpl_0
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F4      ) || defined(STM32F7      ) || \
    defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L0      ) || \
    defined(STM32L1      ) || defined(STM32L4      )
#define USART2_BASE_ADDR ((uint32_t)0x40004400U)
#define USART2_TMPL USART_tmpl_0
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32F302xC  ) || defined(STM32F302xE  ) || \
    defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F358xx  ) || defined(STM32F405xx  ) || defined(STM32F407xx  ) || \
    defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32G471xx  ) || defined(STM32G473xx  ) || defined(STM32G474xx  ) || defined(STM32G484xx  ) || \
    defined(STM32L151xB  ) || defined(STM32L151xD  ) || defined(STM32L151xE  ) || defined(STM32L152xB  ) || defined(STM32L152xC  ) || \
    defined(STM32L152xD  ) || defined(STM32L152xE  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || \
    defined(STM32L486xx  ) || defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || \
    defined(STM32L4R5xx  ) || defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || \
    defined(STM32L4S9xx  )
#define UART5_BASE_ADDR ((uint32_t)0x40005000U)
#define UART5_TMPL USART_tmpl_1
#endif

#if	defined(STM32F2      ) || defined(STM32F4      ) || defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32F030x6  ) || \
    defined(STM32F030x8  ) || defined(STM32F030xC  ) || defined(STM32F031x6  ) || defined(STM32F038xx  ) || defined(STM32F048xx  ) || \
    defined(STM32F051x8  ) || defined(STM32F058xx  ) || defined(STM32F070x6  ) || defined(STM32F070xB  ) || defined(STM32F071xB  ) || \
    defined(STM32F078xx  ) || defined(STM32F091xC  ) || defined(STM32F098xx  )
#define USART6_BASE_ADDR ((uint32_t)0x40011400U)
#define USART6_TMPL USART_tmpl_0
#endif

#if	defined(STM32F7      ) || defined(STM32H7      ) || defined(STM32F413xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F469xx  ) || defined(STM32F479xx  )
#define UART7_BASE_ADDR ((uint32_t)0x40007800U)
#define UART7_TMPL USART_tmpl_0
#define UART8_BASE_ADDR ((uint32_t)0x40007c00U)
#define UART8_TMPL USART_tmpl_0
#endif

#if	defined(STM32F0      ) || defined(STM32F2      ) || defined(STM32F3      ) || defined(STM32F7      ) || defined(STM32G4      ) || \
    defined(STM32GB      ) || defined(STM32H7      ) || defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F412Cx  ) || defined(STM32F412Rx  ) || defined(STM32F412Vx  ) || defined(STM32F412Zx  ) || \
    defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || defined(STM32F427xx  ) || \
    defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || defined(STM32F469xx  ) || \
    defined(STM32F479xx  ) || defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  )
#define USART3_BASE_ADDR ((uint32_t)0x40004800U)
#define USART3_TMPL USART_tmpl_2
#endif

#if	defined(STM32F2      ) || defined(STM32F7      ) || defined(STM32G4      ) || defined(STM32H7      ) || defined(STM32F302xC  ) || \
    defined(STM32F302xE  ) || defined(STM32F303xC  ) || defined(STM32F303xE  ) || defined(STM32F358xx  ) || defined(STM32F405xx  ) || \
    defined(STM32F407xx  ) || defined(STM32F413xx  ) || defined(STM32F415xx  ) || defined(STM32F417xx  ) || defined(STM32F423xx  ) || \
    defined(STM32F427xx  ) || defined(STM32F429xx  ) || defined(STM32F437xx  ) || defined(STM32F439xx  ) || defined(STM32F446xx  ) || \
    defined(STM32F469xx  ) || defined(STM32F479xx  ) || defined(STM32L151xB  ) || defined(STM32L151xD  ) || defined(STM32L151xE  ) || \
    defined(STM32L152xB  ) || defined(STM32L152xC  ) || defined(STM32L152xD  ) || defined(STM32L152xE  ) || defined(STM32L431xx  ) || \
    defined(STM32L432xx  ) || defined(STM32L442xx  ) || defined(STM32L451xx  ) || defined(STM32L452xx  ) || defined(STM32L462xx  ) || \
    defined(STM32L471xx  ) || defined(STM32L475xx  ) || defined(STM32L476xx  ) || defined(STM32L485xx  ) || defined(STM32L486xx  ) || \
    defined(STM32L496xx  ) || defined(STM32L4A6xx  ) || defined(STM32L4P5xx  ) || defined(STM32L4Q5xx  ) || defined(STM32L4R5xx  ) || \
    defined(STM32L4R7xx  ) || defined(STM32L4R9xx  ) || defined(STM32L4S5xx  ) || defined(STM32L4S7xx  ) || defined(STM32L4S9xx  )
#define UART4_BASE_ADDR ((uint32_t)0x40004c00U)
#define UART4_TMPL USART_tmpl_3
#endif

#if	defined(STM32F0      ) || defined(STM32F3      ) || defined(STM32G0      ) || defined(STM32G4      ) || defined(STM32GB      ) || \
    defined(STM32L1      ) || defined(STM32L4      ) || defined(STM32WB      ) || defined(STM32L011xx  ) || defined(STM32L021xx  ) || \
    defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || \
    defined(STM32L062xx  ) || defined(STM32L063xx  ) || defined(STM32L071xx  ) || defined(STM32L072xx  ) || defined(STM32L073xx  ) || \
    defined(STM32L081xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define USART1_BASE_ADDR ((uint32_t)0x40013800U)
#define USART1_TMPL USART_tmpl_4
#endif

#if	defined(STM32G4      ) || defined(STM32GB      ) || defined(STM32L4      ) || defined(STM32WB      )
#define LPUART1_BASE_ADDR ((uint32_t)0x40008000U)
#define LPUART1_TMPL USART_tmpl_5
#endif

#if	defined(STM32F413xx  ) || defined(STM32F423xx  )
#define UART9_BASE_ADDR ((uint32_t)0x40011800U)
#define UART10_BASE_ADDR ((uint32_t)0x40011c00U)
#endif

#if	defined(STM32F0      ) || defined(STM32G070xx  ) || defined(STM32G071xx  ) || defined(STM32G081xx  ) || defined(STM32L011xx  ) || \
    defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L072xx  ) || \
    defined(STM32L073xx  ) || defined(STM32L081xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define USART4_BASE_ADDR ((uint32_t)0x40004c00U)
#define USART4_TMPL USART_tmpl_3
#endif

#if	defined(STM32F031x6  ) || defined(STM32F038xx  ) || defined(STM32F048xx  ) || defined(STM32F051x8  ) || defined(STM32F058xx  ) || \
    defined(STM32F071xB  ) || defined(STM32F078xx  ) || defined(STM32F091xC  ) || defined(STM32F098xx  )
#define USART7_BASE_ADDR ((uint32_t)0x40011800U)
#define USART8_BASE_ADDR ((uint32_t)0x40011c00U)
#endif

#if	defined(STM32F030x6  ) || defined(STM32F030x8  ) || defined(STM32F030xC  ) || defined(STM32F031x6  ) || defined(STM32F038xx  ) || \
    defined(STM32F048xx  ) || defined(STM32F051x8  ) || defined(STM32F058xx  ) || defined(STM32F070x6  ) || defined(STM32F070xB  ) || \
    defined(STM32F071xB  ) || defined(STM32F078xx  ) || defined(STM32F091xC  ) || defined(STM32F098xx  ) || defined(STM32L011xx  ) || \
    defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L072xx  ) || \
    defined(STM32L073xx  ) || defined(STM32L081xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define USART5_BASE_ADDR ((uint32_t)0x40005000U)
#define USART5_TMPL USART_tmpl_3
#endif

#if	defined(STM32G0      )
#define LPUART_BASE_ADDR ((uint32_t)0x40008000U)
#define LPUART_TMPL USART_tmpl_5
#endif

#if	defined(STM32L051xx  ) || defined(STM32L052xx  ) || defined(STM32L053xx  ) || defined(STM32L062xx  ) || defined(STM32L063xx  ) || \
    defined(STM32L072xx  ) || defined(STM32L073xx  ) || defined(STM32L082xx  ) || defined(STM32L083xx  )
#define LPUSART1_BASE_ADDR ((uint32_t)0x40004800U)
#define LPUSART1_TMPL USART_tmpl_5
#endif

#if	defined(STM32L010x4  ) || defined(STM32L010x6  ) || defined(STM32L010x8  ) || defined(STM32L010xB  ) || defined(STM32L011xx  ) || \
    defined(STM32L021xx  ) || defined(STM32L031xx  ) || defined(STM32L041xx  ) || defined(STM32L071xx  ) || defined(STM32L081xx  )
#define LPUART1_BASE_ADDR ((uint32_t)0x40004800U)
#define UART_LPUART1
#endif


//Instances for peripheral USART

		#if defined(LPUART_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<LPUART_TMPL> * const LPUART = reinterpret_cast<class USART<LPUART_TMPL>* const>(LPUART_BASE_ADDR);
			#else
				volatile class USART * const LPUART = new USART();
				#undef LPUART_BASE_ADDR
				#define LPUART_BASE_ADDR reinterpret_cast<uint32_t>(LPUART)
			#endif
		#endif

		#if defined(LPUART1_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<LPUART1_TMPL> * const LPUART1 = reinterpret_cast<class USART<LPUART1_TMPL>* const>(LPUART1_BASE_ADDR);
			#else
				volatile class USART * const LPUART1 = new USART();
				#undef LPUART1_BASE_ADDR
				#define LPUART1_BASE_ADDR reinterpret_cast<uint32_t>(LPUART1)
			#endif
		#endif

		#if defined(LPUSART1_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<LPUSART1_TMPL> * const LPUSART1 = reinterpret_cast<class USART<LPUSART1_TMPL>* const>(LPUSART1_BASE_ADDR);
			#else
				volatile class USART * const LPUSART1 = new USART();
				#undef LPUSART1_BASE_ADDR
				#define LPUSART1_BASE_ADDR reinterpret_cast<uint32_t>(LPUSART1)
			#endif
		#endif

		#if defined(UART10_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<> * const UART10 = reinterpret_cast<class USART<>* const>(UART10_BASE_ADDR);
			#else
				volatile class USART * const UART10 = new USART();
				#undef UART10_BASE_ADDR
				#define UART10_BASE_ADDR reinterpret_cast<uint32_t>(UART10)
			#endif
		#endif

		#if defined(UART4_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<UART4_TMPL> * const UART4 = reinterpret_cast<class USART<UART4_TMPL>* const>(UART4_BASE_ADDR);
			#else
				volatile class USART * const UART4 = new USART();
				#undef UART4_BASE_ADDR
				#define UART4_BASE_ADDR reinterpret_cast<uint32_t>(UART4)
			#endif
		#endif

		#if defined(UART5_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<UART5_TMPL> * const UART5 = reinterpret_cast<class USART<UART5_TMPL>* const>(UART5_BASE_ADDR);
			#else
				volatile class USART * const UART5 = new USART();
				#undef UART5_BASE_ADDR
				#define UART5_BASE_ADDR reinterpret_cast<uint32_t>(UART5)
			#endif
		#endif

		#if defined(UART7_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<UART7_TMPL> * const UART7 = reinterpret_cast<class USART<UART7_TMPL>* const>(UART7_BASE_ADDR);
			#else
				volatile class USART * const UART7 = new USART();
				#undef UART7_BASE_ADDR
				#define UART7_BASE_ADDR reinterpret_cast<uint32_t>(UART7)
			#endif
		#endif

		#if defined(UART8_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<UART8_TMPL> * const UART8 = reinterpret_cast<class USART<UART8_TMPL>* const>(UART8_BASE_ADDR);
			#else
				volatile class USART * const UART8 = new USART();
				#undef UART8_BASE_ADDR
				#define UART8_BASE_ADDR reinterpret_cast<uint32_t>(UART8)
			#endif
		#endif

		#if defined(UART9_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<> * const UART9 = reinterpret_cast<class USART<>* const>(UART9_BASE_ADDR);
			#else
				volatile class USART * const UART9 = new USART();
				#undef UART9_BASE_ADDR
				#define UART9_BASE_ADDR reinterpret_cast<uint32_t>(UART9)
			#endif
		#endif

		#if defined(USART1_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<USART1_TMPL> * const USART1 = reinterpret_cast<class USART<USART1_TMPL>* const>(USART1_BASE_ADDR);
			#else
				volatile class USART * const USART1 = new USART();
				#undef USART1_BASE_ADDR
				#define USART1_BASE_ADDR reinterpret_cast<uint32_t>(USART1)
			#endif
		#endif

		#if defined(USART2_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<USART2_TMPL> * const USART2 = reinterpret_cast<class USART<USART2_TMPL>* const>(USART2_BASE_ADDR);
			#else
				volatile class USART * const USART2 = new USART();
				#undef USART2_BASE_ADDR
				#define USART2_BASE_ADDR reinterpret_cast<uint32_t>(USART2)
			#endif
		#endif

		#if defined(USART3_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<USART3_TMPL> * const USART3 = reinterpret_cast<class USART<USART3_TMPL>* const>(USART3_BASE_ADDR);
			#else
				volatile class USART * const USART3 = new USART();
				#undef USART3_BASE_ADDR
				#define USART3_BASE_ADDR reinterpret_cast<uint32_t>(USART3)
			#endif
		#endif

		#if defined(USART4_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<USART4_TMPL> * const USART4 = reinterpret_cast<class USART<USART4_TMPL>* const>(USART4_BASE_ADDR);
			#else
				volatile class USART * const USART4 = new USART();
				#undef USART4_BASE_ADDR
				#define USART4_BASE_ADDR reinterpret_cast<uint32_t>(USART4)
			#endif
		#endif

		#if defined(USART5_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<USART5_TMPL> * const USART5 = reinterpret_cast<class USART<USART5_TMPL>* const>(USART5_BASE_ADDR);
			#else
				volatile class USART * const USART5 = new USART();
				#undef USART5_BASE_ADDR
				#define USART5_BASE_ADDR reinterpret_cast<uint32_t>(USART5)
			#endif
		#endif

		#if defined(USART6_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<USART6_TMPL> * const USART6 = reinterpret_cast<class USART<USART6_TMPL>* const>(USART6_BASE_ADDR);
			#else
				volatile class USART * const USART6 = new USART();
				#undef USART6_BASE_ADDR
				#define USART6_BASE_ADDR reinterpret_cast<uint32_t>(USART6)
			#endif
		#endif

		#if defined(USART7_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<> * const USART7 = reinterpret_cast<class USART<>* const>(USART7_BASE_ADDR);
			#else
				volatile class USART * const USART7 = new USART();
				#undef USART7_BASE_ADDR
				#define USART7_BASE_ADDR reinterpret_cast<uint32_t>(USART7)
			#endif
		#endif

		#if defined(USART8_BASE_ADDR) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class USART<> * const USART8 = reinterpret_cast<class USART<>* const>(USART8_BASE_ADDR);
			#else
				volatile class USART * const USART8 = new USART();
				#undef USART8_BASE_ADDR
				#define USART8_BASE_ADDR reinterpret_cast<uint32_t>(USART8)
			#endif
		#endif

//Instances for peripheral UART

		#if defined(UART_LPUART1) 
			#ifndef __SOOL_DEBUG_NOPHY
				volatile class UART * const LPUART1 = reinterpret_cast<class UART* const>(LPUART1_BASE_ADDR);
			#else
				volatile class UART * const LPUART1 = new UART();
				#undef LPUART1_BASE_ADDR
				#define LPUART1_BASE_ADDR reinterpret_cast<uint32_t>(LPUART1)
			#endif
		#endif
		
		
	};
};
#undef USART_CR2_0_ABREN
#undef LPUART_TMPL
#undef USART_CR2_2
#undef USART_CR1_1_DEDT4
#undef USART_CR1_7
#undef USART_SIDR_0
#undef USART2_TMPL
#undef USART_CR3_0_WUFIE
#undef USART_CR1_1_SBK
#undef USART_ISR_0_REACK
#undef USART_CR1_1_M
#undef USART_ICR_0_TXFECF
#undef USART_PRESC_1
#undef USART_VERR_1
#undef USART_IPIDR_0
#undef USART_RTOR_0
#undef USART_BRR_2
#undef USART_USART_tmpl_4
#undef USART_CR1_3
#undef USART_CR3_0_DDRE
#undef LPUSART1_TMPL
#undef USART_CR3_9
#undef UART5_TMPL
#undef USART_ICR_0_WUCF
#undef USART_CR2_0
#undef USART_CR3_6
#undef USART_USART_tmpl_3
#undef USART_SR_1
#undef USART_GTPR_1
#undef USART_USART_tmpl_1
#undef UART_LPUART1
#undef USART_ISR_0
#undef USART_CR2_0_ABRMOD
#undef USART_CR3_5
#undef USART_CR1_0_MME
#undef USART_BRR_0
#undef USART_CR3_0_SCARCNT
#undef USART_ISR_3
#undef LPUART1_TMPL
#undef USART_CR2_0_RXINV
#undef USART_CR1_1_RWU
#undef USART_ICR_2
#undef USART_CR1_1_DEDT2
#undef USART_CR3_0_TXFTIE
#undef USART_ICR_4
#undef USART_CR1_1_DEAT1
#undef USART_CR1_0_UESM
#undef USART_ISR_0_WUF
#undef USART_CR3_4
#undef UART7_TMPL
#undef USART_CR2_1_ADD4
#undef USART5_TMPL
#undef USART_CR3_0_DEP
#undef USART_MAP0_PRESC
#undef USART_MAP0_SIDR
#undef USART_ISR_0_TXFT
#undef USART_CR1_0_UE
#undef USART1_TMPL
#undef USART_CR3_0_OVRDIS
#undef USART_CR2_8
#undef USART_CR3_7
#undef USART_CR1_0_DEDT
#undef USART_CR2_6
#undef USART_CR1_6
#undef USART_BRR_4
#undef USART_ISR_6
#undef USART_BRR_3
#undef USART_CR3_11
#undef USART_ICR_5
#undef USART_CR1_0_M0
#undef USART_CR2_0_DATAINV
#undef USART_CR2_0_ADD4_7
#undef USART_CR1_1_DEDT1
#undef USART_CR1_2
#undef USART_CR3_8
#undef USART_BRR_5
#undef USART_CR2_4
#undef USART_SIDR_1
#undef USART_CR2_1_ADD
#undef USART_CR1_1_DEAT3
#undef USART_ISR_2
#undef USART_ICR_0
#undef USART_CR2_7
#undef USART_CR3_0_TCBGTIE
#undef USART_HWCFGR1_1
#undef USART6_TMPL
#undef USART_USART_tmpl_2
#undef USART_CR2_0_RTOEN
#undef USART_BRR_1
#undef USART_ICR_3
#undef USART_CR3_0_DEM
#undef USART_HWCFGR2_1
#undef USART_ISR_0_RXFT
#undef USART_CR1_0_RXFFIE
#undef UART4_TMPL
#undef USART_HWCFGR1_0
#undef USART_CR2_0_MSBFIRST
#undef USART_USART_tmpl_5
#undef USART_MAP0_VERR
#undef USART_CR1_0_RTOIE
#undef USART_CR1_1_DEAT4
#undef USART_CR1_4
#undef USART_SR_2
#undef USART_SR_0
#undef USART_ISR_1
#undef USART_BRR_7
#undef USART_USART_tmpl_0
#undef USART3_TMPL
#undef USART_MAP1
#undef USART_ISR_0_RWU
#undef USART_PRESC_0
#undef USART_CR2_1_ABRMOD1
#undef USART_CR2_1_ADD0
#undef USART_CR3_0_RXFTCFG
#undef USART_ISR_0_TCBGT
#undef USART_CR3_12
#undef USART_CR1_1_DEAT2
#undef USART_CR3_1
#undef USART4_TMPL
#undef USART_CR1_1_DEDT0
#undef USART_RQR_3
#undef USART_CR2_0_ADD0_3
#undef USART_IPIDR_1
#undef USART_RTOR_1
#undef USART_CR1_0_TXFEIE
#undef USART_CR3_0_RXFTIE
#undef USART_CR1_5
#undef USART_BRR_6
#undef USART_RQR_2
#undef USART_RQR_0
#undef USART_RQR_1
#undef USART_ISR_0_TXFE
#undef USART_MAP0_IPIDR
#undef PERIPH_UART
#undef USART_CR2_1
#undef USART_CR2_1_ABRMOD0
#undef USART_ISR_5
#undef USART_ISR_0_RXFF
#undef USART_CR3_0_TXFTCFG
#undef USART_CR2_0_SWAP
#undef USART_ICR_0_TCBGTCF
#undef USART_CR2_0_TXINV
#undef USART_CR1_1
#undef USART_CR1_0_DEAT
#undef USART_CR1_1_DEDT3
#undef USART_CR1_0_FIFOEN
#undef USART_GTPR_0
#undef USART_CR3_10
#undef USART_ICR_0_UDRCF
#undef USART_CR2_5
#undef USART_CR3_0
#undef USART_CR1_0_EOBIE
#undef USART_MAP0_HWCFGR1
#undef USART_CR1_1_UE
#undef USART_CR1_1_DEAT0
#undef USART_MAP0
#undef USART_ICR_1
#undef USART_CR1_0_M1
#undef USART_CR3_3
#undef USART_MAP0_HWCFGR2
#undef USART_ISR_0_UDR
#undef USART_CR1_0
#undef UART8_TMPL
#undef USART_CR3_0_WUS
#undef USART_CR2_3
#undef USART_CR3_2
#undef USART_HWCFGR2_0
#undef USART_CR2_0_DIS_NSS
#undef USART_CR1_0_CMIE
#undef USART_CR2_0_SLVEN
#undef USART_ISR_4
#undef USART_CR2_0_ADDM7
#undef USART_VERR_0

#endif

#endif //__SOOL_CORE_USART_H