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
#ifndef __SOOL_USART_H
#define __SOOL_USART_H

#include "lib_utils/peripheral_include.h"
#include "RCC.h"


//region defines

#define USART_BRR
#define USART_CR1
#define USART_CR2
#define USART_CR3
#define USART_GTPR

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART_BRR_0
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F4     ) 
#define USART_BRR_1
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART_CR1_0_UE       UE                   // 1 bits @ 0
#define USART_CR1_0_MME      MME                  // 1 bits @ 13
#define USART_CR1_0_CMIE     CMIE                 // 1 bits @ 14
#define USART_CR1_0_DEDT     DEDT                 // 5 bits @ 16
#define USART_CR1_0_DEAT     DEAT                 // 5 bits @ 21
#define USART_CR1_0_RTOIE    RTOIE                // 1 bits @ 26
#define USART_CR1_0_EOBIE    EOBIE                // 1 bits @ 27
#define USART_CR2_0_ADDM7    ADDM7                // 1 bits @ 4
#define USART_CR2_0_SWAP     SWAP                 // 1 bits @ 15
#define USART_CR2_0_RXINV    RXINV                // 1 bits @ 16
#define USART_CR2_0_TXINV    TXINV                // 1 bits @ 17
#define USART_CR2_0_DATAINV  DATAINV              // 1 bits @ 18
#define USART_CR2_0_MSBFIRST MSBFIRST             // 1 bits @ 19
#define USART_CR2_0_ABREN    ABREN                // 1 bits @ 20
#define USART_CR2_0_ABRMODE  ABRMODE              // 2 bits @ 21
#define USART_CR2_0_RTOEN    RTOEN                // 1 bits @ 23
#define USART_CR2_0_ADD      ADD                  // 8 bits @ 24
#define USART_CR3_0_OVRDIS   OVRDIS               // 1 bits @ 12
#define USART_CR3_0_DDRE     DDRE                 // 1 bits @ 13
#define USART_CR3_0_DEM      DEM                  // 1 bits @ 14
#define USART_CR3_0_DEP      DEP                  // 1 bits @ 15
#define USART_ICR
#define USART_ISR
#define USART_RDR
#define USART_RQR
#define USART_RTOR
#define USART_TDR
#define USART_MAP0_CR1       CR1_TypeDef CR1
#define USART_MAP0_CR2       CR2_TypeDef CR2
#define USART_MAP0_CR3       CR3_TypeDef CR3
#define USART_MAP0_BRR       BRR_TypeDef BRR
#define USART_MAP0_GTPR      GTPR_TypeDef GTPR
#define USART_MAP0_RTOR      RTOR_TypeDef RTOR
#define USART_MAP0_RQR       RQR_TypeDef RQR
#define USART_MAP0_ISR       ISR_TypeDef ISR
#define USART_MAP0_ICR       ICR_TypeDef ICR
#define USART_MAP0_RDR       RDR_TypeDef RDR
#define USART_MAP0_TDR       TDR_TypeDef TDR
#else
#define USART_CR1_0_UE
#define USART_CR1_0_MME
#define USART_CR1_0_CMIE
#define USART_CR1_0_DEDT
#define USART_CR1_0_DEAT
#define USART_CR1_0_RTOIE
#define USART_CR1_0_EOBIE
#define USART_CR2_0_ADDM7
#define USART_CR2_0_SWAP
#define USART_CR2_0_RXINV
#define USART_CR2_0_TXINV
#define USART_CR2_0_DATAINV
#define USART_CR2_0_MSBFIRST
#define USART_CR2_0_ABREN
#define USART_CR2_0_ABRMODE
#define USART_CR2_0_RTOEN
#define USART_CR2_0_ADD
#define USART_CR3_0_OVRDIS
#define USART_CR3_0_DDRE
#define USART_CR3_0_DEM
#define USART_CR3_0_DEP
#define USART_MAP0_CR1 __SOOL_PERIPH_PADDING_4
#define USART_MAP0_CR2 __SOOL_PERIPH_PADDING_4
#define USART_MAP0_CR3 __SOOL_PERIPH_PADDING_4
#define USART_MAP0_BRR __SOOL_PERIPH_PADDING_4
#define USART_MAP0_GTPR __SOOL_PERIPH_PADDING_4
#define USART_MAP0_RTOR __SOOL_PERIPH_PADDING_4
#define USART_MAP0_RQR __SOOL_PERIPH_PADDING_4
#define USART_MAP0_ISR __SOOL_PERIPH_PADDING_4
#define USART_MAP0_ICR __SOOL_PERIPH_PADDING_4
#define USART_MAP0_RDR __SOOL_PERIPH_PADDING_4
#define USART_MAP0_TDR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) ||\
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F3     ) ||\
    defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART_CR1_0_UESM     UESM                 // 1 bits @ 1
#define USART_CR3_0_WUS      WUS                  // 2 bits @ 20
#define USART_CR3_0_WUFIE    WUFIE                // 1 bits @ 22
#define USART_ICR_0_WUCF     WUCF                 // 1 bits @ 20
#define USART_ISR_0_WUF      WUF                  // 1 bits @ 20
#else
#define USART_CR1_0_UESM
#define USART_CR3_0_WUS
#define USART_CR3_0_WUFIE
#define USART_ICR_0_WUCF
#define USART_ISR_0_WUF
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) ||\
    defined(STM32L1     ) || defined(STM32L4     ) 
#define USART_CR1_0_RXNEIE   RXNEIE               // 1 bits @ 5
#define USART_CR1_0_TXEIE    TXEIE                // 1 bits @ 7
#else
#define USART_CR1_0_RXNEIE
#define USART_CR1_0_TXEIE
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F031x6 ) || defined(STM32F038xx ) ||\
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F1     ) || defined(STM32F2     ) ||\
    defined(STM32F302xC ) || defined(STM32F303xC ) || defined(STM32F358xx ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F4     ) || defined(STM32L1     ) 
#define USART_CR1_0_M        M                    // 1 bits @ 12
#else
#define USART_CR1_0_M
#endif

#if defined(STM32F0     ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F2     ) ||\
    defined(STM32F3     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART_CR1_0_OVER8    OVER8                // 1 bits @ 15
#define USART_CR3_0_ONEBIT   ONEBIT               // 1 bits @ 11
#else
#define USART_CR1_0_OVER8
#define USART_CR3_0_ONEBIT
#endif

#if defined(STM32F030xC ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F070x6 ) ||\
    defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xE ) || defined(STM32F318xx ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F398xx ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART_CR1_0_M1       M1                   // 1 bits @ 28
#else
#define USART_CR1_0_M1
#endif

#if defined(STM32H7     ) || defined(STM32L4P    ) 
#define USART_CR1_0_FIFOEN   FIFOEN               // 1 bits @ 29
#define USART_CR1_0_TXFEIE   TXFEIE               // 1 bits @ 30
#define USART_CR1_0_RXFFIE   RXFFIE               // 1 bits @ 31
#define USART_CR2_0_SLVEN    SLVEN                // 1 bits @ 0
#define USART_CR2_0_DIS_NSS  DIS_NSS              // 1 bits @ 3
#define USART_CR3_0_TXFTIE   TXFTIE               // 1 bits @ 23
#define USART_CR3_0_RXFTCFG  RXFTCFG              // 3 bits @ 25
#define USART_CR3_0_RXFTIE   RXFTIE               // 1 bits @ 28
#define USART_CR3_0_TXFTCFG  TXFTCFG              // 3 bits @ 29
#define USART_ICR_0_TXFECF   TXFECF               // 1 bits @ 5
#define USART_ICR_0_UDRCF    UDRCF                // 1 bits @ 13
#define USART_ISR_0_UDR      UDR                  // 1 bits @ 13
#define USART_ISR_0_TXFE     TXFE                 // 1 bits @ 23
#define USART_ISR_0_RXFF     RXFF                 // 1 bits @ 24
#define USART_ISR_0_RXFT     RXFT                 // 1 bits @ 26
#define USART_ISR_0_TXFT     TXFT                 // 1 bits @ 27
#define USART_PRESC
#define USART_MAP0_PRESC     PRESC_TypeDef PRESC
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
#define USART_ICR_0_TXFECF
#define USART_ICR_0_UDRCF
#define USART_ISR_0_UDR
#define USART_ISR_0_TXFE
#define USART_ISR_0_RXFF
#define USART_ISR_0_RXFT
#define USART_ISR_0_TXFT
#define USART_MAP0_PRESC __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART_CR1_1
#endif

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32L1     ) 
#define USART_CR1_1_SBK      SBK                  // 1 bits @ 0
#define USART_CR1_1_RWU      RWU                  // 1 bits @ 1
#define USART_CR1_1_UE       UE                   // 1 bits @ 13
#define USART_CR2_1
#define USART_DR
#define USART_SR
#define USART_MAP1_SR        SR_TypeDef SR
#define USART_MAP1_DR        DR_TypeDef DR
#define USART_MAP1_BRR       BRR_TypeDef BRR
#define USART_MAP1_CR1       CR1_TypeDef CR1
#define USART_MAP1_CR2       CR2_TypeDef CR2
#define USART_MAP1_CR3       CR3_TypeDef CR3
#define USART_MAP1_GTPR      GTPR_TypeDef GTPR
#else
#define USART_CR1_1_SBK
#define USART_CR1_1_RWU
#define USART_CR1_1_UE
#define USART_MAP1_SR __SOOL_PERIPH_PADDING_4
#define USART_MAP1_DR __SOOL_PERIPH_PADDING_4
#define USART_MAP1_BRR __SOOL_PERIPH_PADDING_4
#define USART_MAP1_CR1 __SOOL_PERIPH_PADDING_4
#define USART_MAP1_CR2 __SOOL_PERIPH_PADDING_4
#define USART_MAP1_CR3 __SOOL_PERIPH_PADDING_4
#define USART_MAP1_GTPR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F7     ) 
#define USART_CR1_2
#endif

#if defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) ||\
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F1     ) ||\
    defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define USART_CR2_0_LBDL     LBDL                 // 1 bits @ 5
#define USART_CR2_0_LBDIE    LBDIE                // 1 bits @ 6
#define USART_CR2_0_LINEN    LINEN                // 1 bits @ 14
#define USART_CR3_0_IREN     IREN                 // 1 bits @ 1
#define USART_CR3_0_IRLP     IRLP                 // 1 bits @ 2
#define USART_CR3_0_NACK     NACK                 // 1 bits @ 4
#define USART_CR3_0_SCEN     SCEN                 // 1 bits @ 5
#else
#define USART_CR2_0_LBDL
#define USART_CR2_0_LBDIE
#define USART_CR2_0_LINEN
#define USART_CR3_0_IREN
#define USART_CR3_0_IRLP
#define USART_CR3_0_NACK
#define USART_CR3_0_SCEN
#endif

#if defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) ||\
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F3     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    ) 
#define USART_CR3_0_SCARCNT  SCARCNT              // 3 bits @ 17
#define USART_ICR_0_LBDCF    LBDCF                // 1 bits @ 8
#define USART_ICR_0_EOBCF    EOBCF                // 1 bits @ 12
#define USART_ISR_0_LBDF     LBDF                 // 1 bits @ 8
#define USART_ISR_0_EOBF     EOBF                 // 1 bits @ 12
#define USART_RQR_TXFRQ      TXFRQ                // 1 bits @ 4
#else
#define USART_CR3_0_SCARCNT
#define USART_ICR_0_LBDCF
#define USART_ICR_0_EOBCF
#define USART_ISR_0_LBDF
#define USART_ISR_0_EOBF
#define USART_RQR_TXFRQ
#endif

#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) ||\
    defined(STM32H7     ) || defined(STM32L011xx ) || defined(STM32L021xx ) || defined(STM32L431xx ) ||\
    defined(STM32L432xx ) || defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) ||\
    defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define USART_CR3_0_TCBGTIE  TCBGTIE              // 1 bits @ 24
#define USART_ISR_0_TCBGT    TCBGT                // 1 bits @ 25
#else
#define USART_CR3_0_TCBGTIE
#define USART_ISR_0_TCBGT
#endif

#if defined(STM32L0     ) 
#define USART_CR3_1
#endif

#if defined(STM32F722xx ) || defined(STM32F723xx ) || defined(STM32F732xx ) || defined(STM32F733xx ) ||\
    defined(STM32L011xx ) || defined(STM32L021xx ) || defined(STM32L431xx ) || defined(STM32L432xx ) ||\
    defined(STM32L433xx ) || defined(STM32L442xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) ||\
    defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) ||\
    defined(STM32L4P    ) 
#define USART_ICR_0_TCBGTCF  TCBGTCF              // 1 bits @ 7
#else
#define USART_ICR_0_TCBGTCF
#endif

#if defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART_ICR_1
#endif

#if defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART_ICR_1_NECF     NECF                 // 1 bits @ 2
#else
#define USART_ICR_1_NECF
#endif

#if defined(STM32H7     ) 
#define USART_ICR_1_TCBGT    TCBGT                // 1 bits @ 7
#else
#define USART_ICR_1_TCBGT
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L0     ) || defined(STM32L4     ) 
#define USART_ISR_0_RXNE     RXNE                 // 1 bits @ 5
#define USART_ISR_0_TXE      TXE                  // 1 bits @ 7
#else
#define USART_ISR_0_RXNE
#define USART_ISR_0_TXE
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32H7     ) || defined(STM32L0     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART_ISR_0_REACK    REACK                // 1 bits @ 22
#else
#define USART_ISR_0_REACK
#endif

#if defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) 
#define USART_ISR_1
#endif

#if defined(STM32L4P    ) 
#define USART_VERR
#define USART_MAP0_VERR      VERR_TypeDef VERR
#else
#define USART_MAP0_VERR __SOOL_PERIPH_PADDING_4
#endif

//endregion

namespace sool
{
	namespace core
	{
		class USART
		{
			
			
			public :
			
			#ifdef USART_BRR
			struct BRR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef USART_BRR_0
					struct
					{
						uint32_t DIV_FRACTION         :4;
						uint32_t DIV_MANTISSA         :12;
						uint32_t                      :16;
					};
					#endif
					#ifdef USART_BRR_1
					struct
					{
						uint32_t DIV_Fraction         :4;
						uint32_t DIV_Mantissa         :12;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef USART_CR1
			struct CR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t USART_CR1_0_UE       :1;
						uint32_t USART_CR1_0_UESM     :1;
						uint32_t RE                   :1;
						uint32_t TE                   :1;
						uint32_t IDLEIE               :1;
						uint32_t USART_CR1_0_RXNEIE   :1;
						uint32_t TCIE                 :1;
						uint32_t USART_CR1_0_TXEIE    :1;
						uint32_t PEIE                 :1;
						uint32_t PS                   :1;
						uint32_t PCE                  :1;
						uint32_t WAKE                 :1;
						uint32_t USART_CR1_0_M        :1;
						uint32_t USART_CR1_0_MME      :1;
						uint32_t USART_CR1_0_CMIE     :1;
						uint32_t USART_CR1_0_OVER8    :1;
						uint32_t USART_CR1_0_DEDT     :5;
						uint32_t USART_CR1_0_DEAT     :5;
						uint32_t USART_CR1_0_RTOIE    :1;
						uint32_t USART_CR1_0_EOBIE    :1;
						uint32_t USART_CR1_0_M1       :1;
						uint32_t USART_CR1_0_FIFOEN   :1;
						uint32_t USART_CR1_0_TXFEIE   :1;
						uint32_t USART_CR1_0_RXFFIE   :1;
					};
					#ifdef USART_CR1_1
					struct
					{
						uint32_t USART_CR1_1_SBK      :1;
						uint32_t USART_CR1_1_RWU      :1;
						uint32_t                      :10;
						uint32_t M0                   :1;
						uint32_t USART_CR1_1_UE       :1;
						uint32_t                      :18;
					};
					#endif
					#ifdef USART_CR1_2
					struct
					{
						uint32_t M0                   :1;
						uint32_t                      :31;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef USART_CR2
			struct CR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t USART_CR2_0_SLVEN    :1;
						uint32_t                      :2;
						uint32_t USART_CR2_0_DIS_NSS  :1;
						uint32_t USART_CR2_0_ADDM7    :1;
						uint32_t USART_CR2_0_LBDL     :1;
						uint32_t USART_CR2_0_LBDIE    :1;
						uint32_t                      :1;
						uint32_t LBCL                 :1;
						uint32_t CPHA                 :1;
						uint32_t CPOL                 :1;
						uint32_t CLKEN                :1;
						uint32_t STOP                 :2;
						uint32_t USART_CR2_0_LINEN    :1;
						uint32_t USART_CR2_0_SWAP     :1;
						uint32_t USART_CR2_0_RXINV    :1;
						uint32_t USART_CR2_0_TXINV    :1;
						uint32_t USART_CR2_0_DATAINV  :1;
						uint32_t USART_CR2_0_MSBFIRST :1;
						uint32_t USART_CR2_0_ABREN    :1;
						uint32_t USART_CR2_0_ABRMODE  :2;
						uint32_t USART_CR2_0_RTOEN    :1;
						uint32_t USART_CR2_0_ADD      :8;
					};
					#ifdef USART_CR2_1
					struct
					{
						uint32_t ADD                  :4;
						uint32_t                      :28;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef USART_CR3
			struct CR3_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t EIE                  :1;
						uint32_t USART_CR3_0_IREN     :1;
						uint32_t USART_CR3_0_IRLP     :1;
						uint32_t HDSEL                :1;
						uint32_t USART_CR3_0_NACK     :1;
						uint32_t USART_CR3_0_SCEN     :1;
						uint32_t DMAR                 :1;
						uint32_t DMAT                 :1;
						uint32_t RTSE                 :1;
						uint32_t CTSE                 :1;
						uint32_t CTSIE                :1;
						uint32_t USART_CR3_0_ONEBIT   :1;
						uint32_t USART_CR3_0_OVRDIS   :1;
						uint32_t USART_CR3_0_DDRE     :1;
						uint32_t USART_CR3_0_DEM      :1;
						uint32_t USART_CR3_0_DEP      :1;
						uint32_t                      :1;
						uint32_t USART_CR3_0_SCARCNT  :3;
						uint32_t USART_CR3_0_WUS      :2;
						uint32_t USART_CR3_0_WUFIE    :1;
						uint32_t USART_CR3_0_TXFTIE   :1;
						uint32_t USART_CR3_0_TCBGTIE  :1;
						uint32_t USART_CR3_0_RXFTCFG  :3;
						uint32_t USART_CR3_0_RXFTIE   :1;
						uint32_t USART_CR3_0_TXFTCFG  :3;
					};
					#ifdef USART_CR3_1
					struct
					{
						uint32_t                      :23;
						uint32_t UCESM                :1;
						uint32_t                      :8;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef USART_DR
			struct DR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t DR                   :9;
					uint32_t                      :23;
			
				
			};
			#endif
			
			#ifdef USART_GTPR
			struct GTPR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PSC                  :8;
					uint32_t GT                   :8;
					uint32_t                      :16;
			
				
			};
			#endif
			
			#ifdef USART_ICR
			struct ICR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t PECF                 :1;
						uint32_t FECF                 :1;
						uint32_t NCF                  :1;
						uint32_t ORECF                :1;
						uint32_t IDLECF               :1;
						uint32_t USART_ICR_0_TXFECF   :1;
						uint32_t TCCF                 :1;
						uint32_t USART_ICR_0_TCBGTCF  :1;
						uint32_t USART_ICR_0_LBDCF    :1;
						uint32_t CTSCF                :1;
						uint32_t                      :1;
						uint32_t RTOCF                :1;
						uint32_t USART_ICR_0_EOBCF    :1;
						uint32_t USART_ICR_0_UDRCF    :1;
						uint32_t                      :3;
						uint32_t CMCF                 :1;
						uint32_t                      :2;
						uint32_t USART_ICR_0_WUCF     :1;
						uint32_t                      :11;
					};
					#ifdef USART_ICR_1
					struct
					{
						uint32_t                      :2;
						uint32_t USART_ICR_1_NECF     :1;
						uint32_t                      :4;
						uint32_t USART_ICR_1_TCBGT    :1;
						uint32_t                      :24;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef USART_ISR
			struct ISR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t PE                   :1;
						uint32_t FE                   :1;
						uint32_t NE                   :1;
						uint32_t ORE                  :1;
						uint32_t IDLE                 :1;
						uint32_t USART_ISR_0_RXNE     :1;
						uint32_t TC                   :1;
						uint32_t USART_ISR_0_TXE      :1;
						uint32_t USART_ISR_0_LBDF     :1;
						uint32_t CTSIF                :1;
						uint32_t CTS                  :1;
						uint32_t RTOF                 :1;
						uint32_t USART_ISR_0_EOBF     :1;
						uint32_t USART_ISR_0_UDR      :1;
						uint32_t ABRE                 :1;
						uint32_t ABRF                 :1;
						uint32_t BUSY                 :1;
						uint32_t CMF                  :1;
						uint32_t SBKF                 :1;
						uint32_t RWU                  :1;
						uint32_t USART_ISR_0_WUF      :1;
						uint32_t TEACK                :1;
						uint32_t USART_ISR_0_REACK    :1;
						uint32_t USART_ISR_0_TXFE     :1;
						uint32_t USART_ISR_0_RXFF     :1;
						uint32_t USART_ISR_0_TCBGT    :1;
						uint32_t USART_ISR_0_RXFT     :1;
						uint32_t USART_ISR_0_TXFT     :1;
						uint32_t                      :4;
					};
					#ifdef USART_ISR_1
					struct
					{
						uint32_t                      :8;
						uint32_t LBD                  :1;
						uint32_t                      :23;
					};
					#endif
				};
				
			};
			#endif
			
			#ifdef USART_PRESC
			struct PRESC_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PRESCALER            :4;
					uint32_t                      :28;
			
				
			};
			#endif
			
			#ifdef USART_RDR
			struct RDR_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;
				
					uint32_t RDR                  :9;
					uint32_t                      :23;
			
				
			};
			#endif
			
			#ifdef USART_RQR
			struct RQR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t ABRRQ                :1;
					uint32_t SBKRQ                :1;
					uint32_t MMRQ                 :1;
					uint32_t RXFRQ                :1;
					uint32_t USART_RQR_TXFRQ      :1;
					uint32_t                      :27;
			
				
			};
			#endif
			
			#ifdef USART_RTOR
			struct RTOR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t RTO                  :24;
					uint32_t BLEN                 :8;
			
				
			};
			#endif
			
			#ifdef USART_SR
			struct SR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PE                   :1;
					uint32_t FE                   :1;
					uint32_t NE                   :1;
					uint32_t ORE                  :1;
					uint32_t IDLE                 :1;
					uint32_t RXNE                 :1;
					uint32_t TC                   :1;
					uint32_t TXE                  :1;
					uint32_t LBD                  :1;
					uint32_t CTS                  :1;
					uint32_t                      :22;
			
				
			};
			#endif
			
			#ifdef USART_TDR
			struct TDR_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;
				
					uint32_t TDR                  :9;
					uint32_t                      :23;
			
				
			};
			#endif
			
			#ifdef USART_VERR
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
					USART_MAP0_CR1;      // @0x000
					USART_MAP0_CR2;      // @0x004
					USART_MAP0_CR3;      // @0x008
					USART_MAP0_BRR;      // @0x00c
					USART_MAP0_GTPR;     // @0x010
					USART_MAP0_RTOR;     // @0x014
					USART_MAP0_RQR;      // @0x018
					USART_MAP0_ISR;      // @0x01c
					USART_MAP0_ICR;      // @0x020
					USART_MAP0_RDR;      // @0x024
					USART_MAP0_TDR;      // @0x028
					USART_MAP0_PRESC;    // @0x02c
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_4;
					USART_MAP0_VERR;     // @0x3f4
				};
				struct
				{
					USART_MAP1_SR;       // @0x000
					USART_MAP1_DR;       // @0x004
					USART_MAP1_BRR;      // @0x008
					USART_MAP1_CR1;      // @0x00c
					USART_MAP1_CR2;      // @0x010
					USART_MAP1_CR3;      // @0x014
					USART_MAP1_GTPR;     // @0x018
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_128;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					__SOOL_PERIPH_PADDING_4;
				};
			};
			private:
			USART() = delete;
			private:
				static constexpr uint32_t get_clock_enable_bit(const uint32_t addr);
			
				static constexpr volatile Reg32_t& get_clock_enable_reg(const uint32_t addr);
			
			public:
				void enable_clock() volatile;
			
				void disable_clock() volatile;
			
				bool is_clock_enabled() const volatile;
			
				void init();
			
				const bool is_rx_not_empty() const;
			
				const bool is_tx_empty() const;
			
				const bool tx_sent() const;
			
				USART& operator<<(const uint8_t value);
			
				USART& operator<<(const uint16_t value);
			
				USART& operator>>(uint8_t &variable);
			
				USART& operator>>(uint16_t &variable);
			
		};
		
		//region instances
#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L051xx ) ||\
    defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) ||\
    defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) ||\
    defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART1_BASE_ADDR ((uint32_t)0x40013800U)
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) 
#define USART1_BASE_ADDR ((uint32_t)0x40011000U)
#endif

#if defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F042x6 ) || defined(STM32F048xx ) ||\
    defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) ||\
    defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) ||\
    defined(STM32F098xx ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) ||\
    defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    ) 
#define USART2_BASE_ADDR ((uint32_t)0x40004400U)
#endif

#if defined(STM32F030xC ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) ||\
    defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) || defined(STM32F101xG ) ||\
    defined(STM32F102xB ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L431xx ) ||\
    defined(STM32L433xx ) || defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) ||\
    defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) ||\
    defined(STM32L4P    ) 
#define USART3_BASE_ADDR ((uint32_t)0x40004800U)
#endif

#if defined(STM32F030xC ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L071xx ) ||\
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) ||\
    defined(STM32L083xx ) 
#define USART4_BASE_ADDR ((uint32_t)0x40004C00U)
#endif

#if defined(STM32F030xC ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32L071xx ) ||\
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) ||\
    defined(STM32L083xx ) 
#define USART5_BASE_ADDR ((uint32_t)0x40005000U)
#endif

#if defined(STM32F030xC ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F2     ) ||\
    defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) || defined(STM32F407xx ) ||\
    defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) 
#define USART6_BASE_ADDR ((uint32_t)0x40011400U)
#endif

#if defined(STM32F091xC ) || defined(STM32F098xx ) 
#define USART7_BASE_ADDR ((uint32_t)0x40011800U)
#define USART8_BASE_ADDR ((uint32_t)0x40011C00U)
#endif

#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) ||\
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) ||\
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) ||\
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) ||\
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xD ) ||\
    defined(STM32L162xDx) || defined(STM32L162xE ) || defined(STM32L451xx ) || defined(STM32L452xx ) ||\
    defined(STM32L462xx ) || defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) ||\
    defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) ||\
    defined(STM32L4P    ) 
#define UART4_BASE_ADDR ((uint32_t)0x40004C00U)
#endif

#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) ||\
    defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) ||\
    defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F358xx ) || defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) ||\
    defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) ||\
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xD ) ||\
    defined(STM32L162xDx) || defined(STM32L162xE ) || defined(STM32L471xx ) || defined(STM32L475xx ) ||\
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) || defined(STM32L4P    ) 
#define UART5_BASE_ADDR ((uint32_t)0x40005000U)
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) 
#define UART7_BASE_ADDR ((uint32_t)0x40007800U)
#define UART8_BASE_ADDR ((uint32_t)0x40007C00U)
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx ) 
#define UART9_BASE_ADDR ((uint32_t)0x40011800U)
#define UART10_BASE_ADDR ((uint32_t)0x40011C00U)
#endif

#if defined(STM32H7     ) 
#define LPUART1_BASE_ADDR ((uint32_t)0x58000C00U)
#endif

#if defined(STM32L0     ) 
#define LPUART1_BASE_ADDR ((uint32_t)0x40004800U)
#endif

#if defined(STM32L4     ) || defined(STM32L4P    ) 
#define LPUART1_BASE_ADDR ((uint32_t)0x40008000U)
#endif

#ifdef USART1_BASE_ADDR
volatile class USART * const USART1 = reinterpret_cast<class USART* const>(USART1_BASE_ADDR);
#endif
#ifdef USART2_BASE_ADDR
volatile class USART * const USART2 = reinterpret_cast<class USART* const>(USART2_BASE_ADDR);
#endif
#ifdef USART3_BASE_ADDR
volatile class USART * const USART3 = reinterpret_cast<class USART* const>(USART3_BASE_ADDR);
#endif
#ifdef USART4_BASE_ADDR
volatile class USART * const USART4 = reinterpret_cast<class USART* const>(USART4_BASE_ADDR);
#endif
#ifdef USART5_BASE_ADDR
volatile class USART * const USART5 = reinterpret_cast<class USART* const>(USART5_BASE_ADDR);
#endif
#ifdef USART6_BASE_ADDR
volatile class USART * const USART6 = reinterpret_cast<class USART* const>(USART6_BASE_ADDR);
#endif
#ifdef USART7_BASE_ADDR
volatile class USART * const USART7 = reinterpret_cast<class USART* const>(USART7_BASE_ADDR);
#endif
#ifdef USART8_BASE_ADDR
volatile class USART * const USART8 = reinterpret_cast<class USART* const>(USART8_BASE_ADDR);
#endif
#ifdef UART4_BASE_ADDR
volatile class USART * const UART4 = reinterpret_cast<class USART* const>(UART4_BASE_ADDR);
#endif
#ifdef UART5_BASE_ADDR
volatile class USART * const UART5 = reinterpret_cast<class USART* const>(UART5_BASE_ADDR);
#endif
#ifdef UART7_BASE_ADDR
volatile class USART * const UART7 = reinterpret_cast<class USART* const>(UART7_BASE_ADDR);
#endif
#ifdef UART8_BASE_ADDR
volatile class USART * const UART8 = reinterpret_cast<class USART* const>(UART8_BASE_ADDR);
#endif
#ifdef UART9_BASE_ADDR
volatile class USART * const UART9 = reinterpret_cast<class USART* const>(UART9_BASE_ADDR);
#endif
#ifdef UART10_BASE_ADDR
volatile class USART * const UART10 = reinterpret_cast<class USART* const>(UART10_BASE_ADDR);
#endif
#ifdef LPUART1_BASE_ADDR
volatile class USART * const LPUART1 = reinterpret_cast<class USART* const>(LPUART1_BASE_ADDR);
#endif
//endregion


inline constexpr uint32_t USART::get_clock_enable_bit(const uint32_t addr)
{
	switch (addr) {
#ifdef USART1_BASE_ADDR
		case USART1_BASE_ADDR :
#if defined(STM32F2) || defined(STM32F4) || defined(STM32F7) || defined(STM32H7)
				return 1 << 4;
#else
				return 1 << 14;
#endif
#endif
#ifdef USART2_BASE_ADDR
		case USART2_BASE_ADDR :
#ifdef RCC_APB1ENR1
				return 1 << 14;
#else
				return 1 << 17;
#endif
#endif
#ifdef USART3_BASE_ADDR
		case USART3_BASE_ADDR :
				return 1 << 18;
#endif
#ifdef USART4_BASE_ADDR
		case USART4_BASE_ADDR : return 1 << 19;
#endif
#ifdef USART5_BASE_ADDR
		case USART5_BASE_ADDR : return 1 << 20;
#endif
#ifdef USART6_BASE_ADDR
		case USART6_BASE_ADDR : return 1 << 5;
#endif
#ifdef USART7_BASE_ADDR
		case USART7_BASE_ADDR :
#ifdef STM32F0
				return 1 << 6;
#else
				return 1 << 30;
#endif
#endif
#ifdef USART8_BASE_ADDR
		case USART8_BASE_ADDR :
#ifdef STM32F0
				return 1 << 7;
#else
				return 1 << 31;
#endif
#endif
		default :
			return 0;
	}
}

inline constexpr volatile Reg32_t& USART::get_clock_enable_reg(const uint32_t addr)
{
	switch (addr) {
#ifdef USART1_BASE_ADDR
		case USART1_BASE_ADDR : return RCC->APB2ENR;
#endif
#ifdef USART6_BASE_ADDR
		case USART6_BASE_ADDR : return RCC->APB2ENR;
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

inline void USART::enable_clock() volatile
{
	get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
			|= get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
}

inline void USART::disable_clock() volatile
{
	get_clock_enable_reg(reinterpret_cast<const uint32_t>(this))
			&= ~get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
}

inline bool USART::is_clock_enabled() const volatile
{
	return (get_clock_enable_reg(reinterpret_cast<const uint32_t>(this)) & get_clock_enable_bit(reinterpret_cast<const uint32_t>(this)))
	== get_clock_enable_bit(reinterpret_cast<const uint32_t>(this));
}

inline const bool USART::is_rx_not_empty() const
{
#ifdef USART_ISR
	return ISR.RXNE == 1;
#elif defined(USART_SR)
	return SR.RXNE == 1;
#endif
}

inline const bool USART::is_tx_empty() const
{
#ifdef USART_ISR
	return ISR.TXE == 1;
#elif defined(USART_SR)
	return SR.TXE == 1;
#endif

}

inline const bool USART::tx_sent() const
{
#ifdef USART_ISR
	return ISR.TC == 1;
#elif defined(USART_SR)
	return SR.TC == 1;
#endif
}

inline USART& USART::operator<<(const uint8_t value)
{
#ifdef USART_DR
	DR = value;
#else
	TDR = value;
	//TODO send
#endif
	return *this;
}

inline USART& USART::operator<<(const uint16_t value)
{
#ifdef USART_DR
	DR = value;
#else
	TDR = value;
	//TODO send
#endif
	return *this;
}

inline USART& USART::operator>>(uint8_t &variable)
{
#ifdef USART_DR
	variable = DR;
#else
	variable = RDR;
#endif
	return *this;
}

inline USART& USART::operator>>(uint16_t &variable)
{
#ifdef USART_DR
	variable = DR;
#else
	variable = RDR;
#endif
	return *this;
}

	};
};
//region undef
#undef USART_CR1_0_UE
#undef USART_CR1_0_MME
#undef USART_CR1_0_CMIE
#undef USART_CR1_0_DEDT
#undef USART_CR1_0_DEAT
#undef USART_CR1_0_RTOIE
#undef USART_CR1_0_EOBIE
#undef USART_CR2_0_ADDM7
#undef USART_CR2_0_SWAP
#undef USART_CR2_0_RXINV
#undef USART_CR2_0_TXINV
#undef USART_CR2_0_DATAINV
#undef USART_CR2_0_MSBFIRST
#undef USART_CR2_0_ABREN
#undef USART_CR2_0_ABRMODE
#undef USART_CR2_0_RTOEN
#undef USART_CR2_0_ADD
#undef USART_CR3_0_OVRDIS
#undef USART_CR3_0_DDRE
#undef USART_CR3_0_DEM
#undef USART_CR3_0_DEP
#undef USART_MAP0_CR1
#undef USART_MAP0_CR2
#undef USART_MAP0_CR3
#undef USART_MAP0_BRR
#undef USART_MAP0_GTPR
#undef USART_MAP0_RTOR
#undef USART_MAP0_RQR
#undef USART_MAP0_ISR
#undef USART_MAP0_ICR
#undef USART_MAP0_RDR
#undef USART_MAP0_TDR
#undef USART_CR1_0_UESM
#undef USART_CR3_0_WUS
#undef USART_CR3_0_WUFIE
#undef USART_ICR_0_WUCF
#undef USART_ISR_0_WUF
#undef USART_CR1_0_RXNEIE
#undef USART_CR1_0_TXEIE
#undef USART_CR1_0_M
#undef USART_CR1_0_OVER8
#undef USART_CR3_0_ONEBIT
#undef USART_CR1_0_M1
#undef USART_CR1_0_FIFOEN
#undef USART_CR1_0_TXFEIE
#undef USART_CR1_0_RXFFIE
#undef USART_CR2_0_SLVEN
#undef USART_CR2_0_DIS_NSS
#undef USART_CR3_0_TXFTIE
#undef USART_CR3_0_RXFTCFG
#undef USART_CR3_0_RXFTIE
#undef USART_CR3_0_TXFTCFG
#undef USART_ICR_0_TXFECF
#undef USART_ICR_0_UDRCF
#undef USART_ISR_0_UDR
#undef USART_ISR_0_TXFE
#undef USART_ISR_0_RXFF
#undef USART_ISR_0_RXFT
#undef USART_ISR_0_TXFT
#undef USART_MAP0_PRESC
#undef USART_CR1_1_SBK
#undef USART_CR1_1_RWU
#undef USART_CR1_1_UE
#undef USART_MAP1_SR
#undef USART_MAP1_DR
#undef USART_MAP1_BRR
#undef USART_MAP1_CR1
#undef USART_MAP1_CR2
#undef USART_MAP1_CR3
#undef USART_MAP1_GTPR
#undef USART_CR2_0_LBDL
#undef USART_CR2_0_LBDIE
#undef USART_CR2_0_LINEN
#undef USART_CR3_0_IREN
#undef USART_CR3_0_IRLP
#undef USART_CR3_0_NACK
#undef USART_CR3_0_SCEN
#undef USART_CR3_0_SCARCNT
#undef USART_ICR_0_LBDCF
#undef USART_ICR_0_EOBCF
#undef USART_ISR_0_LBDF
#undef USART_ISR_0_EOBF
#undef USART_RQR_TXFRQ
#undef USART_CR3_0_TCBGTIE
#undef USART_ISR_0_TCBGT
#undef USART_ICR_0_TCBGTCF
#undef USART_ICR_1_NECF
#undef USART_ICR_1_TCBGT
#undef USART_ISR_0_RXNE
#undef USART_ISR_0_TXE
#undef USART_ISR_0_REACK
#undef USART_MAP0_VERR
//endregion
#endif
