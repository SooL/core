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
#ifndef __SOOL_I2C_H
#define __SOOL_I2C_H



#include "lib_utils/peripheral_include.h"

//region defines

#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32L1     )
#define I2C_CCR
#define I2C_CR1_1_SMBUS      SMBUS                // 1 bits @ 1
#define I2C_CR1_1_SMBTYPE    SMBTYPE              // 1 bits @ 3
#define I2C_CR1_1_ENARP      ENARP                // 1 bits @ 4
#define I2C_CR1_1_ENPEC      ENPEC                // 1 bits @ 5
#define I2C_CR1_1_ENGC       ENGC                 // 1 bits @ 6
#define I2C_CR1_1_NOSTRETCH  NOSTRETCH            // 1 bits @ 7
#define I2C_CR1_1_PEC        PEC                  // 1 bits @ 12
#define I2C_CR1_1_ALERT      ALERT                // 1 bits @ 13
#define I2C_CR1_1_SWRST      SWRST                // 1 bits @ 15
#define I2C_CR1_2
#define I2C_CR2_1
#define I2C_DR
#define I2C_OAR1_1
#define I2C_OAR1_2
#define I2C_OAR2_0_ENDUAL    ENDUAL               // 1 bits @ 0
#define I2C_OAR2_1_ADD2      ADD2                 // 7 bits @ 1
#define I2C_SR1
#define I2C_SR2
#define I2C_TRISE
#define I2C_MAP1_DR          DR_TypeDef DR
#define I2C_MAP1_SR1         SR1_TypeDef SR1
#define I2C_MAP1_SR2         SR2_TypeDef SR2
#define I2C_MAP1_CCR         CCR_TypeDef CCR
#define I2C_MAP1_TRISE       TRISE_TypeDef TRISE
#else
#define I2C_CR1_1_SMBUS
#define I2C_CR1_1_SMBTYPE
#define I2C_CR1_1_ENARP
#define I2C_CR1_1_ENPEC
#define I2C_CR1_1_ENGC
#define I2C_CR1_1_NOSTRETCH
#define I2C_CR1_1_PEC
#define I2C_CR1_1_ALERT
#define I2C_CR1_1_SWRST
#define I2C_OAR2_0_ENDUAL
#define I2C_OAR2_1_ADD2
#define I2C_MAP1_DR __SOOL_PERIPH_PADDING_4
#define I2C_MAP1_SR1 __SOOL_PERIPH_PADDING_4
#define I2C_MAP1_SR2 __SOOL_PERIPH_PADDING_4
#define I2C_MAP1_CCR __SOOL_PERIPH_PADDING_4
#define I2C_MAP1_TRISE __SOOL_PERIPH_PADDING_4
#endif

#define I2C_CR1
#define I2C_CR2
#define I2C_OAR1
#define I2C_OAR2

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32F7     ) || defined(STM32H7     ) ||\
    defined(STM32L0     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define I2C_CR1_0_TXIE       TXIE                 // 1 bits @ 1
#define I2C_CR1_0_RXIE       RXIE                 // 1 bits @ 2
#define I2C_CR1_0_ADDRIE     ADDRIE               // 1 bits @ 3
#define I2C_CR1_0_NACKIE     NACKIE               // 1 bits @ 4
#define I2C_CR1_0_STOPIE     STOPIE               // 1 bits @ 5
#define I2C_CR1_0_TCIE       TCIE                 // 1 bits @ 6
#define I2C_CR1_0_ERRIE      ERRIE                // 1 bits @ 7
#define I2C_CR1_0_ANFOFF     ANFOFF               // 1 bits @ 12
#define I2C_CR1_0_TXDMAEN    TXDMAEN              // 1 bits @ 14
#define I2C_CR1_0_RXDMAEN    RXDMAEN              // 1 bits @ 15
#define I2C_CR1_0_SBC        SBC                  // 1 bits @ 16
#define I2C_CR1_0_NOSTRETCH  NOSTRETCH            // 1 bits @ 17
#define I2C_CR1_0_GCEN       GCEN                 // 1 bits @ 19
#define I2C_CR1_0_SMBHEN     SMBHEN               // 1 bits @ 20
#define I2C_CR1_0_SMBDEN     SMBDEN               // 1 bits @ 21
#define I2C_CR1_0_ALERTEN    ALERTEN              // 1 bits @ 22
#define I2C_CR1_0_PECEN      PECEN                // 1 bits @ 23
#define I2C_CR2_0
#define I2C_ICR
#define I2C_ISR
#define I2C_OAR1_0
#define I2C_OAR2_0_OA2       OA2                  // 7 bits @ 1
#define I2C_OAR2_0_OA2MSK    OA2MSK               // 3 bits @ 8
#define I2C_OAR2_0_OA2EN     OA2EN                // 1 bits @ 15
#define I2C_PECR
#define I2C_RXDR
#define I2C_TIMEOUTR
#define I2C_TIMINGR
#define I2C_TXDR
#define I2C_MAP0_TIMINGR     TIMINGR_TypeDef TIMINGR
#define I2C_MAP0_TIMEOUTR    TIMEOUTR_TypeDef TIMEOUTR
#define I2C_MAP0_ISR         ISR_TypeDef ISR
#define I2C_MAP0_ICR         ICR_TypeDef ICR
#define I2C_MAP0_PECR        PECR_TypeDef PECR
#define I2C_MAP0_RXDR        RXDR_TypeDef RXDR
#define I2C_MAP0_TXDR        TXDR_TypeDef TXDR
#else
#define I2C_CR1_0_TXIE
#define I2C_CR1_0_RXIE
#define I2C_CR1_0_ADDRIE
#define I2C_CR1_0_NACKIE
#define I2C_CR1_0_STOPIE
#define I2C_CR1_0_TCIE
#define I2C_CR1_0_ERRIE
#define I2C_CR1_0_ANFOFF
#define I2C_CR1_0_TXDMAEN
#define I2C_CR1_0_RXDMAEN
#define I2C_CR1_0_SBC
#define I2C_CR1_0_NOSTRETCH
#define I2C_CR1_0_GCEN
#define I2C_CR1_0_SMBHEN
#define I2C_CR1_0_SMBDEN
#define I2C_CR1_0_ALERTEN
#define I2C_CR1_0_PECEN
#define I2C_OAR2_0_OA2
#define I2C_OAR2_0_OA2MSK
#define I2C_OAR2_0_OA2EN
#define I2C_MAP0_TIMINGR __SOOL_PERIPH_PADDING_4
#define I2C_MAP0_TIMEOUTR __SOOL_PERIPH_PADDING_4
#define I2C_MAP0_ISR __SOOL_PERIPH_PADDING_4
#define I2C_MAP0_ICR __SOOL_PERIPH_PADDING_4
#define I2C_MAP0_PECR __SOOL_PERIPH_PADDING_4
#define I2C_MAP0_RXDR __SOOL_PERIPH_PADDING_4
#define I2C_MAP0_TXDR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F030x4 )
#define I2C_CR1_0_DFN        DFN                  // 4 bits @ 8
#else
#define I2C_CR1_0_DFN
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32H7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define I2C_CR1_0_SWRST      SWRST                // 1 bits @ 13
#else
#define I2C_CR1_0_SWRST
#endif

#if defined(STM32F030x4 ) || defined(STM32F031x6 ) || defined(STM32F038xx ) || defined(STM32F042x6 ) ||\
    defined(STM32F048xx ) || defined(STM32F051x8 ) || defined(STM32F058xx ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F3     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define I2C_CR1_0_WUPEN      WUPEN                // 1 bits @ 18
#else
#define I2C_CR1_0_WUPEN
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) ||\
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    )
#define I2C_CR1_1
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) ||\
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F3     ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    )
#define I2C_CR1_1_DNF        DNF                  // 4 bits @ 8
#else
#define I2C_CR1_1_DNF
#endif

#if defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F423xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
#define I2C_FLTR
#define I2C_MAP1_FLTR        FLTR_TypeDef FLTR
#else
#define I2C_MAP1_FLTR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F100xB )
#define I2C_OAR1_1_ADD17     ADD17                // 7 bits @ 1
#define I2C_OAR1_1_ADD89     ADD89                // 2 bits @ 8
#else
#define I2C_OAR1_1_ADD17
#define I2C_OAR1_1_ADD89
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) ||\
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F3     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define I2C_OAR2_0_OA2NOMASK OA2NOMASK            // 0 bits @ 0
#define I2C_OAR2_1_OA2MASK01 OA2MASK01            // 1 bits @ 8
#define I2C_OAR2_1_OA2MASK02 OA2MASK02            // 1 bits @ 9
#define I2C_OAR2_1_OA2MASK04 OA2MASK04            // 1 bits @ 10
#define I2C_OAR2_2
#define I2C_OAR2_3
#define I2C_OAR2_4
#else
#define I2C_OAR2_0_OA2NOMASK
#define I2C_OAR2_1_OA2MASK01
#define I2C_OAR2_1_OA2MASK02
#define I2C_OAR2_1_OA2MASK04
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F031x6 ) ||\
    defined(STM32F038xx ) || defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define I2C_OAR2_1
#endif

//endregion
namespace sool
{
	namespace core
	{
//region related-types
		
//endregion
//region peripheral-declaration

		class I2C
		{
			

		public :

#ifdef I2C_CCR
			struct CCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t CCR                  :12;
					uint32_t                      :2;
					uint32_t DUTY                 :1;
					uint32_t FS                   :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef I2C_CR1
			struct CR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t PE                   :1;
						uint32_t I2C_CR1_0_TXIE       :1;
						uint32_t I2C_CR1_0_RXIE       :1;
						uint32_t I2C_CR1_0_ADDRIE     :1;
						uint32_t I2C_CR1_0_NACKIE     :1;
						uint32_t I2C_CR1_0_STOPIE     :1;
						uint32_t I2C_CR1_0_TCIE       :1;
						uint32_t I2C_CR1_0_ERRIE      :1;
						uint32_t I2C_CR1_0_DFN        :4;
						uint32_t I2C_CR1_0_ANFOFF     :1;
						uint32_t I2C_CR1_0_SWRST      :1;
						uint32_t I2C_CR1_0_TXDMAEN    :1;
						uint32_t I2C_CR1_0_RXDMAEN    :1;
						uint32_t I2C_CR1_0_SBC        :1;
						uint32_t I2C_CR1_0_NOSTRETCH  :1;
						uint32_t I2C_CR1_0_WUPEN      :1;
						uint32_t I2C_CR1_0_GCEN       :1;
						uint32_t I2C_CR1_0_SMBHEN     :1;
						uint32_t I2C_CR1_0_SMBDEN     :1;
						uint32_t I2C_CR1_0_ALERTEN    :1;
						uint32_t I2C_CR1_0_PECEN      :1;
						uint32_t                      :8;
					};
#ifdef I2C_CR1_1
					struct
					{
						uint32_t                      :1;
						uint32_t I2C_CR1_1_SMBUS      :1;
						uint32_t                      :1;
						uint32_t I2C_CR1_1_SMBTYPE    :1;
						uint32_t I2C_CR1_1_ENARP      :1;
						uint32_t I2C_CR1_1_ENPEC      :1;
						uint32_t I2C_CR1_1_ENGC       :1;
						uint32_t I2C_CR1_1_NOSTRETCH  :1;
						uint32_t I2C_CR1_1_DNF        :4;
						uint32_t I2C_CR1_1_PEC        :1;
						uint32_t I2C_CR1_1_ALERT      :1;
						uint32_t                      :1;
						uint32_t I2C_CR1_1_SWRST      :1;
						uint32_t                      :16;
					};
#endif
#ifdef I2C_CR1_2
					struct
					{
						uint32_t                      :8;
						uint32_t START                :1;
						uint32_t STOP                 :1;
						uint32_t ACK                  :1;
						uint32_t POS                  :1;
						uint32_t                      :20;
					};
#endif
				};
				
			};
#endif

#ifdef I2C_CR2
			struct CR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef I2C_CR2_0
					struct
					{
						uint32_t SADD                 :10;
						uint32_t RD_WRN               :1;
						uint32_t ADD10                :1;
						uint32_t HEAD10R              :1;
						uint32_t START                :1;
						uint32_t STOP                 :1;
						uint32_t NACK                 :1;
						uint32_t NBYTES               :8;
						uint32_t RELOAD               :1;
						uint32_t AUTOEND              :1;
						uint32_t PECBYTE              :1;
						uint32_t                      :5;
					};
#endif
#ifdef I2C_CR2_1
					struct
					{
						uint32_t FREQ                 :6;
						uint32_t                      :2;
						uint32_t ITERREN              :1;
						uint32_t ITEVTEN              :1;
						uint32_t ITBUFEN              :1;
						uint32_t DMAEN                :1;
						uint32_t LAST                 :1;
						uint32_t                      :19;
					};
#endif
				};
				
			};
#endif

#ifdef I2C_DR
			struct DR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t DR                   :8;
					uint32_t                      :24;

				
			};
#endif

#ifdef I2C_FLTR
			struct FLTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t DNF                  :4;
					uint32_t ANOFF                :1;
					uint32_t                      :27;

				
			};
#endif

#ifdef I2C_ICR
			struct ICR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t                      :3;
					uint32_t ADDRCF               :1;
					uint32_t NACKCF               :1;
					uint32_t STOPCF               :1;
					uint32_t                      :2;
					uint32_t BERRCF               :1;
					uint32_t ARLOCF               :1;
					uint32_t OVRCF                :1;
					uint32_t PECCF                :1;
					uint32_t TIMOUTCF             :1;
					uint32_t ALERTCF              :1;
					uint32_t                      :18;

				
			};
#endif

#ifdef I2C_ISR
			struct ISR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TXE                  :1;
					uint32_t TXIS                 :1;
					uint32_t RXNE                 :1;
					uint32_t ADDR                 :1;
					uint32_t NACKF                :1;
					uint32_t STOPF                :1;
					uint32_t TC                   :1;
					uint32_t TCR                  :1;
					uint32_t BERR                 :1;
					uint32_t ARLO                 :1;
					uint32_t OVR                  :1;
					uint32_t PECERR               :1;
					uint32_t TIMEOUT              :1;
					uint32_t ALERT                :1;
					uint32_t                      :1;
					uint32_t BUSY                 :1;
					uint32_t DIR                  :1;
					uint32_t ADDCODE              :7;
					uint32_t                      :8;

				
			};
#endif

#ifdef I2C_OAR1
			struct OAR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
#ifdef I2C_OAR1_0
					struct
					{
						uint32_t OA1                  :10;
						uint32_t OA1MODE              :1;
						uint32_t                      :4;
						uint32_t OA1EN                :1;
						uint32_t                      :16;
					};
#endif
#ifdef I2C_OAR1_1
					struct
					{
						uint32_t ADD0                 :1;
						uint32_t I2C_OAR1_1_ADD17     :7;
						uint32_t I2C_OAR1_1_ADD89     :2;
						uint32_t                      :5;
						uint32_t ADDMODE              :1;
						uint32_t                      :16;
					};
#endif
#ifdef I2C_OAR1_2
					struct
					{
						uint32_t                      :1;
						uint32_t ADD1                 :1;
						uint32_t ADD2                 :1;
						uint32_t ADD3                 :1;
						uint32_t ADD4                 :1;
						uint32_t ADD5                 :1;
						uint32_t ADD6                 :1;
						uint32_t ADD7                 :1;
						uint32_t ADD8                 :1;
						uint32_t ADD9                 :1;
						uint32_t                      :22;
					};
#endif
				};
				
			};
#endif

#ifdef I2C_OAR2
			struct OAR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t I2C_OAR2_0_OA2NOMASK :0;
						uint32_t I2C_OAR2_0_ENDUAL    :1;
						uint32_t I2C_OAR2_0_OA2       :7;
						uint32_t I2C_OAR2_0_OA2MSK    :3;
						uint32_t                      :4;
						uint32_t I2C_OAR2_0_OA2EN     :1;
						uint32_t                      :16;
					};
#ifdef I2C_OAR2_1
					struct
					{
						uint32_t                      :1;
						uint32_t I2C_OAR2_1_ADD2      :7;
						uint32_t I2C_OAR2_1_OA2MASK01 :1;
						uint32_t I2C_OAR2_1_OA2MASK02 :1;
						uint32_t I2C_OAR2_1_OA2MASK04 :1;
						uint32_t                      :21;
					};
#endif
#ifdef I2C_OAR2_2
					struct
					{
						uint32_t                      :8;
						uint32_t OA2MASK03            :2;
						uint32_t                      :22;
					};
#endif
#ifdef I2C_OAR2_3
					struct
					{
						uint32_t                      :9;
						uint32_t OA2MASK06            :2;
						uint32_t                      :21;
					};
#endif
#ifdef I2C_OAR2_4
					struct
					{
						uint32_t                      :8;
						uint32_t OA2MASK07            :3;
						uint32_t                      :21;
					};
#endif
				};
				
			};
#endif

#ifdef I2C_PECR
			struct PECR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t PEC                  :8;
					uint32_t                      :24;

				
			};
#endif

#ifdef I2C_RXDR
			struct RXDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t RXDATA               :8;
					uint32_t                      :24;

				
			};
#endif

#ifdef I2C_SR1
			struct SR1_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t SB                   :1;
					uint32_t ADDR                 :1;
					uint32_t BTF                  :1;
					uint32_t ADD10                :1;
					uint32_t STOPF                :1;
					uint32_t                      :1;
					uint32_t RXNE                 :1;
					uint32_t TXE                  :1;
					uint32_t BERR                 :1;
					uint32_t ARLO                 :1;
					uint32_t AF                   :1;
					uint32_t OVR                  :1;
					uint32_t PECERR               :1;
					uint32_t                      :1;
					uint32_t TIMEOUT              :1;
					uint32_t SMBALERT             :1;
					uint32_t                      :16;

				
			};
#endif

#ifdef I2C_SR2
			struct SR2_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t MSL                  :1;
					uint32_t BUSY                 :1;
					uint32_t TRA                  :1;
					uint32_t                      :1;
					uint32_t GENCALL              :1;
					uint32_t SMBDEFAULT           :1;
					uint32_t SMBHOST              :1;
					uint32_t DUALF                :1;
					uint32_t PEC                  :8;
					uint32_t                      :16;

				
			};
#endif

#ifdef I2C_TIMEOUTR
			struct TIMEOUTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TIMEOUTA             :12;
					uint32_t TIDLE                :1;
					uint32_t                      :2;
					uint32_t TIMOUTEN             :1;
					uint32_t TIMEOUTB             :12;
					uint32_t                      :3;
					uint32_t TEXTEN               :1;

				
			};
#endif

#ifdef I2C_TIMINGR
			struct TIMINGR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t SCLL                 :8;
					uint32_t SCLH                 :8;
					uint32_t SDADEL               :4;
					uint32_t SCLDEL               :4;
					uint32_t                      :4;
					uint32_t PRESC                :4;

				
			};
#endif

#ifdef I2C_TRISE
			struct TRISE_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TRISE                :6;
					uint32_t                      :26;

				
			};
#endif

#ifdef I2C_TXDR
			struct TXDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TXDATA               :8;
					uint32_t                      :24;

				
			};
#endif

			union
			{

				struct
				{
					CR1_TypeDef CR1;     // @0x000
					CR2_TypeDef CR2;     // @0x004
					OAR1_TypeDef OAR1;   // @0x008
					OAR2_TypeDef OAR2;   // @0x00c
					I2C_MAP0_TIMINGR;    // @0x010
					I2C_MAP0_TIMEOUTR;   // @0x014
					I2C_MAP0_ISR;        // @0x018
					I2C_MAP0_ICR;        // @0x01c
					I2C_MAP0_PECR;       // @0x020
					I2C_MAP0_RXDR;       // @0x024
					I2C_MAP0_TXDR;       // @0x028
				};
				struct
				{
					__SOOL_PERIPH_PADDING_16;
					I2C_MAP1_DR;         // @0x010
					I2C_MAP1_SR1;        // @0x014
					I2C_MAP1_SR2;        // @0x018
					I2C_MAP1_CCR;        // @0x01c
					I2C_MAP1_TRISE;      // @0x020
					I2C_MAP1_FLTR;       // @0x024
					__SOOL_PERIPH_PADDING_4;
				};
			};
		private:
			I2C() = delete;
			
		};

//endregion
//region instances
#define I2C1_BASE_ADDR ((uint32_t)0x40005400U)
#if defined(STM32F030x4 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070xB ) || defined(STM32F071xB ) || defined(STM32F072xB ) ||\
    defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F100xB ) ||\
    defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) || defined(STM32F101xG ) ||\
    defined(STM32F102xB ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F301x8 ) ||\
    defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F318xx ) || defined(STM32F358xx ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F4     ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) ||\
    defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) ||\
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) ||\
    defined(STM32L083xx ) || defined(STM32L1     ) || defined(STM32L431xx ) || defined(STM32L433xx ) ||\
    defined(STM32L443xx ) || defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) ||\
    defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define I2C2_BASE_ADDR ((uint32_t)0x40005800U)
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) ||\
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define I2C3_BASE_ADDR ((uint32_t)0x40005C00U)
#endif

#if defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F302xE ) || defined(STM32F303xE ) ||\
    defined(STM32F318xx ) || defined(STM32F398xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) ||\
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define I2C3_BASE_ADDR ((uint32_t)0x40007800U)
#endif

#if defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F765xx ) ||\
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx )
#define I2C4_BASE_ADDR ((uint32_t)0x40006000U)
#endif

#if defined(STM32H7     )
#define I2C4_BASE_ADDR ((uint32_t)0x58001C00U)
#endif

#if defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) || defined(STM32L4P    )
#define I2C4_BASE_ADDR ((uint32_t)0x40008400U)
#endif

#ifdef I2C1_BASE_ADDR
		volatile class I2C * const I2C1 = reinterpret_cast<class I2C* const>(I2C1_BASE_ADDR);
#endif
#ifdef I2C2_BASE_ADDR
		volatile class I2C * const I2C2 = reinterpret_cast<class I2C* const>(I2C2_BASE_ADDR);
#endif
#ifdef I2C3_BASE_ADDR
		volatile class I2C * const I2C3 = reinterpret_cast<class I2C* const>(I2C3_BASE_ADDR);
#endif
#ifdef I2C4_BASE_ADDR
		volatile class I2C * const I2C4 = reinterpret_cast<class I2C* const>(I2C4_BASE_ADDR);
#endif
//endregion
//region peripheral-definition
		
//endregion
	};
};
//region undef
#undef I2C_CR1_1_SMBUS
#undef I2C_CR1_1_SMBTYPE
#undef I2C_CR1_1_ENARP
#undef I2C_CR1_1_ENPEC
#undef I2C_CR1_1_ENGC
#undef I2C_CR1_1_NOSTRETCH
#undef I2C_CR1_1_PEC
#undef I2C_CR1_1_ALERT
#undef I2C_CR1_1_SWRST
#undef I2C_OAR2_0_ENDUAL
#undef I2C_OAR2_1_ADD2
#undef I2C_MAP1_DR
#undef I2C_MAP1_SR1
#undef I2C_MAP1_SR2
#undef I2C_MAP1_CCR
#undef I2C_MAP1_TRISE
#undef I2C_CR1_0_TXIE
#undef I2C_CR1_0_RXIE
#undef I2C_CR1_0_ADDRIE
#undef I2C_CR1_0_NACKIE
#undef I2C_CR1_0_STOPIE
#undef I2C_CR1_0_TCIE
#undef I2C_CR1_0_ERRIE
#undef I2C_CR1_0_ANFOFF
#undef I2C_CR1_0_TXDMAEN
#undef I2C_CR1_0_RXDMAEN
#undef I2C_CR1_0_SBC
#undef I2C_CR1_0_NOSTRETCH
#undef I2C_CR1_0_GCEN
#undef I2C_CR1_0_SMBHEN
#undef I2C_CR1_0_SMBDEN
#undef I2C_CR1_0_ALERTEN
#undef I2C_CR1_0_PECEN
#undef I2C_OAR2_0_OA2
#undef I2C_OAR2_0_OA2MSK
#undef I2C_OAR2_0_OA2EN
#undef I2C_MAP0_TIMINGR
#undef I2C_MAP0_TIMEOUTR
#undef I2C_MAP0_ISR
#undef I2C_MAP0_ICR
#undef I2C_MAP0_PECR
#undef I2C_MAP0_RXDR
#undef I2C_MAP0_TXDR
#undef I2C_CR1_0_DFN
#undef I2C_CR1_0_SWRST
#undef I2C_CR1_0_WUPEN
#undef I2C_CR1_1_DNF
#undef I2C_MAP1_FLTR
#undef I2C_OAR1_1_ADD17
#undef I2C_OAR1_1_ADD89
#undef I2C_OAR2_0_OA2NOMASK
#undef I2C_OAR2_1_OA2MASK01
#undef I2C_OAR2_1_OA2MASK02
#undef I2C_OAR2_1_OA2MASK04

//endregion
#endif // chips selection
#endif //__SOOL_I2C_H
