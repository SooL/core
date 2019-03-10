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
#ifndef __SOOL_GPIO_H
#define __SOOL_GPIO_H

#include "lib_utils/peripheral_include.h"
#include "RCC.h"


//region defines

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    )
#define GPIO_AFR
#define GPIO_AFRH
#define GPIO_AFRL
#define GPIO_MODER
#define GPIO_OSPEEDR
#define GPIO_OTYPER
#define GPIO_PUPDR
#define GPIO_MAP0_MODER      MODER_TypeDef MODER
#define GPIO_MAP0_OTYPER     OTYPER_TypeDef OTYPER
#define GPIO_MAP0_OSPEEDR    OSPEEDR_TypeDef OSPEEDR
#define GPIO_MAP0_PUPDR      PUPDR_TypeDef PUPDR
#define GPIO_MAP0_IDR        IDR_TypeDef IDR
#define GPIO_MAP0_ODR        ODR_TypeDef ODR
#define GPIO_MAP0_LCKR       LCKR_TypeDef LCKR
#define GPIO_MAP0_AFR        AFR_TypeDef AFR
#define GPIO_MAP1_AFRL       AFRL_TypeDef AFRL
#define GPIO_MAP1_AFRH       AFRH_TypeDef AFRH
#else
#define GPIO_MAP0_MODER __SOOL_PERIPH_PADDING_4
#define GPIO_MAP0_OTYPER __SOOL_PERIPH_PADDING_4
#define GPIO_MAP0_OSPEEDR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP0_PUPDR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP0_IDR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP0_ODR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP0_LCKR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP0_AFR __SOOL_PERIPH_PADDING_8
#define GPIO_MAP1_AFRL __SOOL_PERIPH_PADDING_4
#define GPIO_MAP1_AFRH __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    )
#define GPIO_AFR_0
#define GPIO_AFRH_0
#define GPIO_AFRL_0
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define GPIO_AFR_1
#define GPIO_AFRH_1
#define GPIO_AFRL_1
#endif

#if defined(STM32L471xx ) || defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) ||\
    defined(STM32L486xx )
#define GPIO_ASCR
#define GPIO_MAP0_ASCR       ASCR_TypeDef ASCR
#else
#define GPIO_MAP0_ASCR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F3     ) || defined(STM32L0     ) ||\
    defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) ||\
    defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) ||\
    defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) ||\
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) ||\
    defined(STM32L4     ) || defined(STM32L4P    )
#define GPIO_BRR
#endif

#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) ||\
    defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    )
#define GPIO_BSRR
#endif

#if defined(STM32H7     )
#define GPIO_BSRRH
#define GPIO_BSRRL
#define GPIO_MAP2_BSRRL      BSRRL_TypeDef BSRRL
#define GPIO_MAP2_BSRRH      BSRRH_TypeDef BSRRH
#else
#define GPIO_MAP2_BSRRL __SOOL_PERIPH_PADDING_2
#define GPIO_MAP2_BSRRH __SOOL_PERIPH_PADDING_2
#endif

#if defined(STM32F1     )
#define GPIO_CRH
#define GPIO_CRL
#define GPIO_MAP1_CRL        CRL_TypeDef CRL
#define GPIO_MAP1_CRH        CRH_TypeDef CRH
#define GPIO_MAP1_IDR        IDR_TypeDef IDR
#define GPIO_MAP1_ODR        ODR_TypeDef ODR
#define GPIO_MAP1_BSRR       BSRR_TypeDef BSRR
#define GPIO_MAP1_BRR        BRR_TypeDef BRR
#define GPIO_MAP1_LCKR       LCKR_TypeDef LCKR
#else
#define GPIO_MAP1_CRL __SOOL_PERIPH_PADDING_4
#define GPIO_MAP1_CRH __SOOL_PERIPH_PADDING_4
#define GPIO_MAP1_IDR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP1_ODR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP1_BSRR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP1_BRR __SOOL_PERIPH_PADDING_4
#define GPIO_MAP1_LCKR __SOOL_PERIPH_PADDING_4
#endif

#define GPIO_IDR
#define GPIO_LCKR
#define GPIO_ODR

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) ||\
    defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F410Cx ) || defined(STM32F410Rx ) ||\
    defined(STM32F410Tx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32L0     ) ||\
    defined(STM32L4     ) || defined(STM32L4P    )
#define GPIO_OSPEEDR_0
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define GPIO_OSPEEDR_1
#endif

#if defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) || defined(STM32F7     ) ||\
    defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define GPIO_OSPEEDR_1_OSPEEDR0 OSPEEDR0             // 2 bits @ 0
#else
#define GPIO_OSPEEDR_1_OSPEEDR0
#endif

#if defined(STM32H7     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define GPIO_OTYPER_1
#define GPIO_OTYPER_2
#endif

#if defined(STM32F0     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) ||\
    defined(STM32F7     ) || defined(STM32L0     ) || defined(STM32L1     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define GPIO_MAP0_BSRR       BSRR_TypeDef BSRR
#else
#define GPIO_MAP0_BSRR __SOOL_PERIPH_PADDING_4
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L0     ) || defined(STM32L100xC ) ||\
    defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) ||\
    defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || defined(STM32L152xD ) ||\
    defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || defined(STM32L162xCA) ||\
    defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define GPIO_MAP0_BRR        BRR_TypeDef BRR
#else
#define GPIO_MAP0_BRR __SOOL_PERIPH_PADDING_4
#endif

//endregion

namespace sool
{
	namespace core
	{
		class GPIO
		{
			public:
			//##################################################################################################
			//#                                              Pin                                              #
			//##################################################################################################
				enum class Pin : uint32_t
				{
					None = (0),
					P0 = (1U << 0U),
					P1 = (1U << 1U),
					P2 = (1U << 2U),
					P3 = (1U << 3U),
					P4 = (1U << 4U),
					P5 = (1U << 5U),
					P6 = (1U << 6U),
					P7 = (1U << 7U),
					P8 = (1U << 8U),
					P9 = (1U << 9U),
					P10 = (1U << 10U),
					P11 = (1U << 11U),
					P12 = (1U << 12U),
					P13 = (1U << 13U),
					P14 = (1U << 14U),
					P15 = (1U << 15U),
					All = 0xFFFF
				};
			
			//##################################################################################################
			//#                                             enums                                              #
			//##################################################################################################
				enum class Mode : std::uint8_t
				{
					Input = 0, IN = 0,
			#ifndef STM32F1
					Output = 1, OUT = 1,
					AlternateFunction = 2, AF = 2,
					Analog = 3,
			#else
					Output_10MHz = 1, OUT_10M = 1,
					Output_2MHz = 2, OUT_2M = 2,
					Output_50MHz = 3, OUT_50M = 3,
			#endif
					Mask = 3
				};
			#ifndef STM32F1
				enum class OutType : std::uint8_t
				{
					PushPull = 0,
					OpenDrain = 1,
					Mask = 1
				};
			
				enum class Speed : std::uint8_t
				{
					Slow = 0,
					Medium = 1,
					High = 2,
					VeryHigh = 3,
					Mask = 3
				};
			
				enum class PuPd : std::uint8_t
				{
					NoPull = 0,
					PullUp = 1,
					PullDown = 2,
					Mask = 3
				};
			
				enum class AF : std::uint8_t
				{
					AF0 = 0x0U,
					AF1 = 0x1U,
					AF2 = 0x2U,
					AF3 = 0x3U,
					AF4 = 0x4U,
					AF5 = 0x5U,
					AF6 = 0x6U,
					AF7 = 0x7U,
					AF8 = 0x8U,
					AF9 = 0x9U,
					AF10 = 0xAU,
					AF11 = 0xBU,
					AF12 = 0xCU,
					AF13 = 0xDU,
					AF14 = 0xEU,
					AF15 = 0xFU,
					Mask = 0xFU
				};
			#ifdef GPIO_ASCR
				enum class ASC : std::uint8_t
				{
					Disconnected = 0,
					Connected = 1,
					Mask = 1
				};
			#endif
			#else
				enum class CNF : std::uint8_t
				{
					IN_Analog = 0,
					IN_Floating = 1,
					IN_PuPd = 2,
					OUT_GP_PushPull = 0,
					OUT_GP_OpenDrain = 1,
					OUT_AF_PushPull = 2,
					OUT_AF_OpenDrain = 3,
					Mask = 3
				};
			#endif
			
				struct PinConfig
				{
					Mode mode:2;
			
					PinConfig(const Mode &mode) : mode(mode), modif(1)
					{};
			#ifndef STM32F1
					OutType outType:1;
					Speed speed:2;
					PuPd pupd:2;
					AF af:4;
			
					PinConfig(const OutType &oType) : outType(oType), modif(2)
					{};
			
					PinConfig(const Speed &speed) : speed(speed), modif(4)
					{};
			
					PinConfig(const PuPd &pupd) : pupd(pupd), modif(8)
					{};
			
					PinConfig(const AF &af) : af(af), modif(16)
					{};
			#ifdef GPIO_ASCR
					ASC asc: 1;
					PinConfig(const ASC& asc):asc(asc), modif(32){};
			#endif
			#else
					CNF cnf : 2;
					PinConfig(const CNF& cnf):cnf(cnf), modif(2){};
			#endif
					uint8_t modif;
				};
			

		public :

#ifdef GPIO_AFR
			struct AFR_TypeDef : public ArrayRegBase_t<uint64_t, uint32_t>
			{
				using ArrayRegBase_t<uint64_t, uint32_t>::operator=;
			
				union
				{
					#ifdef GPIO_AFR_0
					struct
					{
						uint32_t AFSEL0               :4;
						uint32_t AFSEL1               :4;
						uint32_t AFSEL2               :4;
						uint32_t AFSEL3               :4;
						uint32_t AFSEL4               :4;
						uint32_t AFSEL5               :4;
						uint32_t AFSEL6               :4;
						uint32_t AFSEL7               :4;
						uint32_t AFSEL8               :4;
						uint32_t AFSEL9               :4;
						uint32_t AFSEL10              :4;
						uint32_t AFSEL11              :4;
						uint32_t AFSEL12              :4;
						uint32_t AFSEL13              :4;
						uint32_t AFSEL14              :4;
						uint32_t AFSEL15              :4;
					};
					#endif
					#ifdef GPIO_AFR_1
					struct
					{
						uint32_t AFRL0                :4;
						uint32_t AFRL1                :4;
						uint32_t AFRL2                :4;
						uint32_t AFRL3                :4;
						uint32_t AFRL4                :4;
						uint32_t AFRL5                :4;
						uint32_t AFRL6                :4;
						uint32_t AFRL7                :4;
						uint32_t AFRH0                :4;
						uint32_t AFRH1                :4;
						uint32_t AFRH2                :4;
						uint32_t AFRH3                :4;
						uint32_t AFRH4                :4;
						uint32_t AFRH5                :4;
						uint32_t AFRH6                :4;
						uint32_t AFRH7                :4;
					};
					#endif
				};
				
			};
#endif

#ifdef GPIO_AFRH
			struct AFRH_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef GPIO_AFRH_0
					struct
					{
						uint32_t AFSEL8               :4;
						uint32_t AFSEL9               :4;
						uint32_t AFSEL10              :4;
						uint32_t AFSEL11              :4;
						uint32_t AFSEL12              :4;
						uint32_t AFSEL13              :4;
						uint32_t AFSEL14              :4;
						uint32_t AFSEL15              :4;
					};
					#endif
					#ifdef GPIO_AFRH_1
					struct
					{
						uint32_t AFRH0                :4;
						uint32_t AFRH1                :4;
						uint32_t AFRH2                :4;
						uint32_t AFRH3                :4;
						uint32_t AFRH4                :4;
						uint32_t AFRH5                :4;
						uint32_t AFRH6                :4;
						uint32_t AFRH7                :4;
					};
					#endif
				};
				
			};
#endif

#ifdef GPIO_AFRL
			struct AFRL_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef GPIO_AFRL_0
					struct
					{
						uint32_t AFSEL0               :4;
						uint32_t AFSEL1               :4;
						uint32_t AFSEL2               :4;
						uint32_t AFSEL3               :4;
						uint32_t AFSEL4               :4;
						uint32_t AFSEL5               :4;
						uint32_t AFSEL6               :4;
						uint32_t AFSEL7               :4;
					};
					#endif
					#ifdef GPIO_AFRL_1
					struct
					{
						uint32_t AFRL0                :4;
						uint32_t AFRL1                :4;
						uint32_t AFRL2                :4;
						uint32_t AFRL3                :4;
						uint32_t AFRL4                :4;
						uint32_t AFRL5                :4;
						uint32_t AFRL6                :4;
						uint32_t AFRL7                :4;
					};
					#endif
				};
				
			};
#endif

#ifdef GPIO_ASCR
			struct ASCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t ASC0                 :1;
						uint32_t ASC1                 :1;
						uint32_t ASC2                 :1;
						uint32_t ASC3                 :1;
						uint32_t ASC4                 :1;
						uint32_t ASC5                 :1;
						uint32_t ASC6                 :1;
						uint32_t ASC7                 :1;
						uint32_t ASC8                 :1;
						uint32_t ASC9                 :1;
						uint32_t ASC10                :1;
						uint32_t ASC11                :1;
						uint32_t ASC12                :1;
						uint32_t ASC13                :1;
						uint32_t ASC14                :1;
						uint32_t ASC15                :1;
						uint32_t                      :16;
					};
					struct
					{
						uint32_t EN0                  :1;
						uint32_t EN1                  :1;
						uint32_t EN2                  :1;
						uint32_t EN3                  :1;
						uint32_t EN4                  :1;
						uint32_t EN5                  :1;
						uint32_t EN6                  :1;
						uint32_t EN7                  :1;
						uint32_t EN8                  :1;
						uint32_t EN9                  :1;
						uint32_t EN10                 :1;
						uint32_t EN11                 :1;
						uint32_t EN12                 :1;
						uint32_t EN13                 :1;
						uint32_t EN14                 :1;
						uint32_t EN15                 :1;
						uint32_t                      :16;
					};
				};
				
			};
#endif

#ifdef GPIO_BRR
			struct BRR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t BR0                  :1;
					uint32_t BR1                  :1;
					uint32_t BR2                  :1;
					uint32_t BR3                  :1;
					uint32_t BR4                  :1;
					uint32_t BR5                  :1;
					uint32_t BR6                  :1;
					uint32_t BR7                  :1;
					uint32_t BR8                  :1;
					uint32_t BR9                  :1;
					uint32_t BR10                 :1;
					uint32_t BR11                 :1;
					uint32_t BR12                 :1;
					uint32_t BR13                 :1;
					uint32_t BR14                 :1;
					uint32_t BR15                 :1;
					uint32_t                      :16;
			
				
			};
#endif

#ifdef GPIO_BSRR
			struct BSRR_TypeDef : public ArrayRegBase_t<uint32_t, uint16_t>
			{
				using ArrayRegBase_t<uint32_t, uint16_t>::operator=;
				
					uint32_t BS0                  :1;
					uint32_t BS1                  :1;
					uint32_t BS2                  :1;
					uint32_t BS3                  :1;
					uint32_t BS4                  :1;
					uint32_t BS5                  :1;
					uint32_t BS6                  :1;
					uint32_t BS7                  :1;
					uint32_t BS8                  :1;
					uint32_t BS9                  :1;
					uint32_t BS10                 :1;
					uint32_t BS11                 :1;
					uint32_t BS12                 :1;
					uint32_t BS13                 :1;
					uint32_t BS14                 :1;
					uint32_t BS15                 :1;
					uint32_t BR0                  :1;
					uint32_t BR1                  :1;
					uint32_t BR2                  :1;
					uint32_t BR3                  :1;
					uint32_t BR4                  :1;
					uint32_t BR5                  :1;
					uint32_t BR6                  :1;
					uint32_t BR7                  :1;
					uint32_t BR8                  :1;
					uint32_t BR9                  :1;
					uint32_t BR10                 :1;
					uint32_t BR11                 :1;
					uint32_t BR12                 :1;
					uint32_t BR13                 :1;
					uint32_t BR14                 :1;
					uint32_t BR15                 :1;
			
				
			};
#endif

#ifdef GPIO_BSRRH
			struct BSRRH_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;
				
					uint16_t BR0                  :1;
					uint16_t BR1                  :1;
					uint16_t BR2                  :1;
					uint16_t BR3                  :1;
					uint16_t BR4                  :1;
					uint16_t BR5                  :1;
					uint16_t BR6                  :1;
					uint16_t BR7                  :1;
					uint16_t BR8                  :1;
					uint16_t BR9                  :1;
					uint16_t BR10                 :1;
					uint16_t BR11                 :1;
					uint16_t BR12                 :1;
					uint16_t BR13                 :1;
					uint16_t BR14                 :1;
					uint16_t BR15                 :1;
			
				
			};
#endif

#ifdef GPIO_BSRRL
			struct BSRRL_TypeDef : public Reg16_t
			{
				using Reg16_t::operator=;
				
					uint16_t BS0                  :1;
					uint16_t BS1                  :1;
					uint16_t BS2                  :1;
					uint16_t BS3                  :1;
					uint16_t BS4                  :1;
					uint16_t BS5                  :1;
					uint16_t BS6                  :1;
					uint16_t BS7                  :1;
					uint16_t BS8                  :1;
					uint16_t BS9                  :1;
					uint16_t BS10                 :1;
					uint16_t BS11                 :1;
					uint16_t BS12                 :1;
					uint16_t BS13                 :1;
					uint16_t BS14                 :1;
					uint16_t BS15                 :1;
			
				
			};
#endif

#ifdef GPIO_CRH
			struct CRH_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t MODE8                :2;
					uint32_t CNF8                 :2;
					uint32_t MODE9                :2;
					uint32_t CNF9                 :2;
					uint32_t MODE10               :2;
					uint32_t CNF10                :2;
					uint32_t MODE11               :2;
					uint32_t CNF11                :2;
					uint32_t MODE12               :2;
					uint32_t CNF12                :2;
					uint32_t MODE13               :2;
					uint32_t CNF13                :2;
					uint32_t MODE14               :2;
					uint32_t CNF14                :2;
					uint32_t MODE15               :2;
					uint32_t CNF15                :2;
			
				
			};
#endif

#ifdef GPIO_CRL
			struct CRL_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t MODE0                :2;
					uint32_t CNF0                 :2;
					uint32_t MODE1                :2;
					uint32_t CNF1                 :2;
					uint32_t MODE2                :2;
					uint32_t CNF2                 :2;
					uint32_t MODE3                :2;
					uint32_t CNF3                 :2;
					uint32_t MODE4                :2;
					uint32_t CNF4                 :2;
					uint32_t MODE5                :2;
					uint32_t CNF5                 :2;
					uint32_t MODE6                :2;
					uint32_t CNF6                 :2;
					uint32_t MODE7                :2;
					uint32_t CNF7                 :2;
			
				
			};
#endif

#ifdef GPIO_IDR
			struct IDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				uint32_t ID0                  :1;
				uint32_t ID1                  :1;
				uint32_t ID2                  :1;
				uint32_t ID3                  :1;
				uint32_t ID4                  :1;
				uint32_t ID5                  :1;
				uint32_t ID6                  :1;
				uint32_t ID7                  :1;
				uint32_t ID8                  :1;
				uint32_t ID9                  :1;
				uint32_t ID10                 :1;
				uint32_t ID11                 :1;
				uint32_t ID12                 :1;
				uint32_t ID13                 :1;
				uint32_t ID14                 :1;
				uint32_t ID15                 :1;
				uint32_t                      :16;

				
			};
#endif

#ifdef GPIO_LCKR
			struct LCKR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				uint32_t LCK0                 :1;
				uint32_t LCK1                 :1;
				uint32_t LCK2                 :1;
				uint32_t LCK3                 :1;
				uint32_t LCK4                 :1;
				uint32_t LCK5                 :1;
				uint32_t LCK6                 :1;
				uint32_t LCK7                 :1;
				uint32_t LCK8                 :1;
				uint32_t LCK9                 :1;
				uint32_t LCK10                :1;
				uint32_t LCK11                :1;
				uint32_t LCK12                :1;
				uint32_t LCK13                :1;
				uint32_t LCK14                :1;
				uint32_t LCK15                :1;
				uint32_t LCKK                 :1;
				uint32_t                      :15;

				
			};
#endif

#ifdef GPIO_MODER
			struct MODER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t MODE0                :2;
					uint32_t MODE1                :2;
					uint32_t MODE2                :2;
					uint32_t MODE3                :2;
					uint32_t MODE4                :2;
					uint32_t MODE5                :2;
					uint32_t MODE6                :2;
					uint32_t MODE7                :2;
					uint32_t MODE8                :2;
					uint32_t MODE9                :2;
					uint32_t MODE10               :2;
					uint32_t MODE11               :2;
					uint32_t MODE12               :2;
					uint32_t MODE13               :2;
					uint32_t MODE14               :2;
					uint32_t MODE15               :2;
			
				
			};
#endif

#ifdef GPIO_ODR
			struct ODR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				uint32_t OD0                  :1;
				uint32_t OD1                  :1;
				uint32_t OD2                  :1;
				uint32_t OD3                  :1;
				uint32_t OD4                  :1;
				uint32_t OD5                  :1;
				uint32_t OD6                  :1;
				uint32_t OD7                  :1;
				uint32_t OD8                  :1;
				uint32_t OD9                  :1;
				uint32_t OD10                 :1;
				uint32_t OD11                 :1;
				uint32_t OD12                 :1;
				uint32_t OD13                 :1;
				uint32_t OD14                 :1;
				uint32_t OD15                 :1;
				uint32_t                      :16;

					const GPIO::ODR_TypeDef &operator=(const Pin &p) volatile;
				
					const GPIO::ODR_TypeDef &operator|=(const Pin &p) volatile;
				
					const GPIO::ODR_TypeDef &operator&=(const Pin &p) volatile;
				
					const GPIO::ODR_TypeDef &operator^=(const Pin &p) volatile;
				
					const GPIO::ODR_TypeDef &operator+=(const Pin &p) volatile;
				
					const GPIO::ODR_TypeDef &operator-=(const Pin &p) volatile;
				
			};
#endif

#ifdef GPIO_OSPEEDR
			struct OSPEEDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					#ifdef GPIO_OSPEEDR_0
					struct
					{
						uint32_t OSPEED0              :2;
						uint32_t OSPEED1              :2;
						uint32_t OSPEED2              :2;
						uint32_t OSPEED3              :2;
						uint32_t OSPEED4              :2;
						uint32_t OSPEED5              :2;
						uint32_t OSPEED6              :2;
						uint32_t OSPEED7              :2;
						uint32_t OSPEED8              :2;
						uint32_t OSPEED9              :2;
						uint32_t OSPEED10             :2;
						uint32_t OSPEED11             :2;
						uint32_t OSPEED12             :2;
						uint32_t OSPEED13             :2;
						uint32_t OSPEED14             :2;
						uint32_t OSPEED15             :2;
					};
					#endif
					#ifdef GPIO_OSPEEDR_1
					struct
					{
						uint32_t GPIO_OSPEEDR_1_OSPEEDR0 :2;
						uint32_t OSPEEDR1             :2;
						uint32_t OSPEEDR2             :2;
						uint32_t OSPEEDR3             :2;
						uint32_t OSPEEDR4             :2;
						uint32_t OSPEEDR5             :2;
						uint32_t OSPEEDR6             :2;
						uint32_t OSPEEDR7             :2;
						uint32_t OSPEEDR8             :2;
						uint32_t OSPEEDR9             :2;
						uint32_t OSPEEDR10            :2;
						uint32_t OSPEEDR11            :2;
						uint32_t OSPEEDR12            :2;
						uint32_t OSPEEDR13            :2;
						uint32_t OSPEEDR14            :2;
						uint32_t OSPEEDR15            :2;
					};
					#endif
				};
				
			};
#endif

#ifdef GPIO_OTYPER
			struct OTYPER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
			
				union
				{
					struct
					{
						uint32_t OT0                  :1;
						uint32_t OT1                  :1;
						uint32_t OT2                  :1;
						uint32_t OT3                  :1;
						uint32_t OT4                  :1;
						uint32_t OT5                  :1;
						uint32_t OT6                  :1;
						uint32_t OT7                  :1;
						uint32_t OT8                  :1;
						uint32_t OT9                  :1;
						uint32_t OT10                 :1;
						uint32_t OT11                 :1;
						uint32_t OT12                 :1;
						uint32_t OT13                 :1;
						uint32_t OT14                 :1;
						uint32_t OT15                 :1;
						uint32_t                      :16;
					};
					#ifdef GPIO_OTYPER_1
					struct
					{
						uint32_t                      :1;
						uint32_t IDR1                 :1;
						uint32_t IDR2                 :1;
						uint32_t IDR3                 :1;
						uint32_t IDR4                 :1;
						uint32_t IDR5                 :1;
						uint32_t IDR6                 :1;
						uint32_t IDR7                 :1;
						uint32_t IDR8                 :1;
						uint32_t IDR9                 :1;
						uint32_t IDR10                :1;
						uint32_t IDR11                :1;
						uint32_t IDR12                :1;
						uint32_t IDR13                :1;
						uint32_t IDR14                :1;
						uint32_t IDR15                :1;
						uint32_t                      :16;
					};
					#endif
					#ifdef GPIO_OTYPER_2
					struct
					{
						uint32_t                      :1;
						uint32_t ODR1                 :1;
						uint32_t ODR2                 :1;
						uint32_t ODR3                 :1;
						uint32_t ODR4                 :1;
						uint32_t ODR5                 :1;
						uint32_t ODR6                 :1;
						uint32_t ODR7                 :1;
						uint32_t ODR8                 :1;
						uint32_t ODR9                 :1;
						uint32_t ODR10                :1;
						uint32_t ODR11                :1;
						uint32_t ODR12                :1;
						uint32_t ODR13                :1;
						uint32_t ODR14                :1;
						uint32_t ODR15                :1;
						uint32_t                      :16;
					};
					#endif
				};
				
			};
#endif

#ifdef GPIO_PUPDR
			struct PUPDR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;
				
					uint32_t PUPD0                :2;
					uint32_t PUPD1                :2;
					uint32_t PUPD2                :2;
					uint32_t PUPD3                :2;
					uint32_t PUPD4                :2;
					uint32_t PUPD5                :2;
					uint32_t PUPD6                :2;
					uint32_t PUPD7                :2;
					uint32_t PUPD8                :2;
					uint32_t PUPD9                :2;
					uint32_t PUPD10               :2;
					uint32_t PUPD11               :2;
					uint32_t PUPD12               :2;
					uint32_t PUPD13               :2;
					uint32_t PUPD14               :2;
					uint32_t PUPD15               :2;
			
				
			};
#endif

			union
			{

				struct
				{
					GPIO_MAP0_MODER;     // @0x000
					GPIO_MAP0_OTYPER;    // @0x004
					GPIO_MAP0_OSPEEDR;   // @0x008
					GPIO_MAP0_PUPDR;     // @0x00c
					GPIO_MAP0_IDR;       // @0x010
					GPIO_MAP0_ODR;       // @0x014
					GPIO_MAP0_BSRR;      // @0x018
					GPIO_MAP0_LCKR;      // @0x01c
					GPIO_MAP0_AFR;       // @0x020
					GPIO_MAP0_BRR;       // @0x028
					GPIO_MAP0_ASCR;      // @0x02c
				};
				struct
				{
					GPIO_MAP1_CRL;       // @0x000
					GPIO_MAP1_CRH;       // @0x004
					GPIO_MAP1_IDR;       // @0x008
					GPIO_MAP1_ODR;       // @0x00c
					GPIO_MAP1_BSRR;      // @0x010
					GPIO_MAP1_BRR;       // @0x014
					GPIO_MAP1_LCKR;      // @0x018
					__SOOL_PERIPH_PADDING_4;
					GPIO_MAP1_AFRL;      // @0x020
					GPIO_MAP1_AFRH;      // @0x024
					__SOOL_PERIPH_PADDING_8;
				};
				struct
				{
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_8;
					GPIO_MAP2_BSRRL;     // @0x018
					GPIO_MAP2_BSRRH;     // @0x01a
					__SOOL_PERIPH_PADDING_16;
					__SOOL_PERIPH_PADDING_4;
				};
			};
		private:
			GPIO() = delete;
			//##################################################################################################
			//#                                              methods                                           #
			//##################################################################################################
			private:
				static constexpr uint32_t get_clock_enable_bit(const uint32_t addr);
			
			public:
				static constexpr const Pin pin(unsigned int id);
			
				void enable_clock() volatile;
			
				void disable_clock() volatile;
			
				bool is_clock_enabled() const volatile;
			
				void set_AF(Pin pins, GPIO::AF af) volatile;
			
				bool set_locked(Pin pins, bool locked) volatile;
			
			
		};

		//region instances
#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L4     ) || defined(STM32L4P    )
		#define GPIOA_BASE_ADDR ((uint32_t)0x48000000U)
#define GPIOB_BASE_ADDR ((uint32_t)0x48000400U)
#define GPIOC_BASE_ADDR ((uint32_t)0x48000800U)
#endif

#if defined(STM32F1     )
		#define GPIOA_BASE_ADDR ((uint32_t)0x40010800U)
#define GPIOB_BASE_ADDR ((uint32_t)0x40010C00U)
#define GPIOC_BASE_ADDR ((uint32_t)0x40011000U)
#define GPIOD_BASE_ADDR ((uint32_t)0x40011400U)
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     ) || defined(STM32L1     )
		#define GPIOA_BASE_ADDR ((uint32_t)0x40020000U)
#define GPIOB_BASE_ADDR ((uint32_t)0x40020400U)
#define GPIOC_BASE_ADDR ((uint32_t)0x40020800U)
#endif

#if defined(STM32H7     )
		#define GPIOA_BASE_ADDR ((uint32_t)0x58020000U)
#define GPIOB_BASE_ADDR ((uint32_t)0x58020400U)
#define GPIOC_BASE_ADDR ((uint32_t)0x58020800U)
#define GPIOD_BASE_ADDR ((uint32_t)0x58020C00U)
#define GPIOF_BASE_ADDR ((uint32_t)0x58021400U)
#define GPIOE_BASE_ADDR ((uint32_t)0x58021000U)
#define GPIOG_BASE_ADDR ((uint32_t)0x58021800U)
#define GPIOH_BASE_ADDR ((uint32_t)0x58021C00U)
#define GPIOI_BASE_ADDR ((uint32_t)0x58022000U)
#define GPIOJ_BASE_ADDR ((uint32_t)0x58022400U)
#define GPIOK_BASE_ADDR ((uint32_t)0x58022800U)
#endif

#if defined(STM32L0     )
		#define GPIOA_BASE_ADDR ((uint32_t)0x50000000U)
#define GPIOB_BASE_ADDR ((uint32_t)0x50000400U)
#define GPIOC_BASE_ADDR ((uint32_t)0x50000800U)
#endif

#if defined(STM32F030x6 ) || defined(STM32F030x8 ) || defined(STM32F030xC ) || defined(STM32F051x8 ) ||\
    defined(STM32F058xx ) || defined(STM32F070x6 ) || defined(STM32F070xB ) || defined(STM32F071xB ) ||\
    defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) || defined(STM32F098xx ) ||\
    defined(STM32F3     ) || defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) ||\
    defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define GPIOD_BASE_ADDR ((uint32_t)0x48000C00U)
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) ||\
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L1     )
#define GPIOD_BASE_ADDR ((uint32_t)0x40020C00U)
#endif

#if defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || defined(STM32L061xx ) ||\
    defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || defined(STM32L072xx ) ||\
    defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || defined(STM32L083xx )
#define GPIOD_BASE_ADDR ((uint32_t)0x50000C00U)
#endif

#if defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L471xx ) || defined(STM32L475xx ) ||\
    defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) || defined(STM32L496xx ) ||\
    defined(STM32L4A6xx ) || defined(STM32L4P    )
#define GPIOF_BASE_ADDR ((uint32_t)0x48001400U)
#endif

#if defined(STM32F100xE ) || defined(STM32F101xE ) || defined(STM32F101xG ) || defined(STM32F103xE ) ||\
    defined(STM32F103xG )
		#define GPIOF_BASE_ADDR ((uint32_t)0x40011C00U)
#define GPIOG_BASE_ADDR ((uint32_t)0x40012000U)
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
		#define GPIOF_BASE_ADDR ((uint32_t)0x40021400U)
#define GPIOG_BASE_ADDR ((uint32_t)0x40021800U)
#endif

#if defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) || defined(STM32L151xE ) ||\
    defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) ||\
    defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
		#define GPIOF_BASE_ADDR ((uint32_t)0x40021800U)
#define GPIOG_BASE_ADDR ((uint32_t)0x40021C00U)
#endif

#if defined(STM32F071xB ) || defined(STM32F072xB ) || defined(STM32F078xx ) || defined(STM32F091xC ) ||\
    defined(STM32F098xx ) || defined(STM32F302xC ) || defined(STM32F302xE ) || defined(STM32F303xC ) ||\
    defined(STM32F303xE ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F398xx ) || defined(STM32L431xx ) || defined(STM32L433xx ) || defined(STM32L443xx ) ||\
    defined(STM32L451xx ) || defined(STM32L452xx ) || defined(STM32L462xx ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define GPIOE_BASE_ADDR ((uint32_t)0x48001000U)
#endif

#if defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101xB ) || defined(STM32F101xE ) ||\
    defined(STM32F101xG ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC )
#define GPIOE_BASE_ADDR ((uint32_t)0x40011800U)
#endif

#if defined(STM32F2     ) || defined(STM32F401xC ) || defined(STM32F401xE ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F411xE ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) ||\
    defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) ||\
    defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) ||\
    defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L151xB ) || defined(STM32L151xBA) ||\
    defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || defined(STM32L151xDx) ||\
    defined(STM32L151xE ) || defined(STM32L152xB ) || defined(STM32L152xBA) || defined(STM32L152xC ) ||\
    defined(STM32L152xCA) || defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) ||\
    defined(STM32L162xC ) || defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) ||\
    defined(STM32L162xE )
#define GPIOE_BASE_ADDR ((uint32_t)0x40021000U)
#endif

#if defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx )
#define GPIOE_BASE_ADDR ((uint32_t)0x50001000U)
#endif

#if defined(STM32F302xE ) || defined(STM32F303xE ) || defined(STM32F398xx ) || defined(STM32L471xx ) ||\
    defined(STM32L475xx ) || defined(STM32L476xx ) || defined(STM32L485xx ) || defined(STM32L486xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define GPIOG_BASE_ADDR ((uint32_t)0x48001800U)
#endif

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     )
#define GPIOH_BASE_ADDR ((uint32_t)0x40021C00U)
#endif

#if defined(STM32F302xE ) || defined(STM32F303xE ) || defined(STM32F398xx ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define GPIOH_BASE_ADDR ((uint32_t)0x48001C00U)
#endif

#if defined(STM32L031xx ) || defined(STM32L041xx ) || defined(STM32L051xx ) || defined(STM32L052xx ) ||\
    defined(STM32L053xx ) || defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) ||\
    defined(STM32L071xx ) || defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) ||\
    defined(STM32L082xx ) || defined(STM32L083xx )
#define GPIOH_BASE_ADDR ((uint32_t)0x50001C00U)
#endif

#if defined(STM32L1     )
#define GPIOH_BASE_ADDR ((uint32_t)0x40021400U)
#endif

#if defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F415xx ) ||\
    defined(STM32F417xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     )
#define GPIOI_BASE_ADDR ((uint32_t)0x40022000U)
#endif

#if defined(STM32L496xx ) || defined(STM32L4A6xx ) || defined(STM32L4P    )
#define GPIOI_BASE_ADDR ((uint32_t)0x48002000U)
#endif

#if defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) ||\
    defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) ||\
    defined(STM32F777xx ) || defined(STM32F779xx )
		#define GPIOJ_BASE_ADDR ((uint32_t)0x40022400U)
#define GPIOK_BASE_ADDR ((uint32_t)0x40022800U)
#endif

#ifdef GPIOA_BASE_ADDR
		volatile class GPIO * const GPIOA = reinterpret_cast<class GPIO* const>(GPIOA_BASE_ADDR);
#endif
#ifdef GPIOB_BASE_ADDR
		volatile class GPIO * const GPIOB = reinterpret_cast<class GPIO* const>(GPIOB_BASE_ADDR);
#endif
#ifdef GPIOC_BASE_ADDR
		volatile class GPIO * const GPIOC = reinterpret_cast<class GPIO* const>(GPIOC_BASE_ADDR);
#endif
#ifdef GPIOD_BASE_ADDR
		volatile class GPIO * const GPIOD = reinterpret_cast<class GPIO* const>(GPIOD_BASE_ADDR);
#endif
#ifdef GPIOF_BASE_ADDR
		volatile class GPIO * const GPIOF = reinterpret_cast<class GPIO* const>(GPIOF_BASE_ADDR);
#endif
#ifdef GPIOE_BASE_ADDR
		volatile class GPIO * const GPIOE = reinterpret_cast<class GPIO* const>(GPIOE_BASE_ADDR);
#endif
#ifdef GPIOG_BASE_ADDR
		volatile class GPIO * const GPIOG = reinterpret_cast<class GPIO* const>(GPIOG_BASE_ADDR);
#endif
#ifdef GPIOH_BASE_ADDR
		volatile class GPIO * const GPIOH = reinterpret_cast<class GPIO* const>(GPIOH_BASE_ADDR);
#endif
#ifdef GPIOI_BASE_ADDR
		volatile class GPIO * const GPIOI = reinterpret_cast<class GPIO* const>(GPIOI_BASE_ADDR);
#endif
#ifdef GPIOJ_BASE_ADDR
		volatile class GPIO * const GPIOJ = reinterpret_cast<class GPIO* const>(GPIOJ_BASE_ADDR);
#endif
#ifdef GPIOK_BASE_ADDR
		volatile class GPIO * const GPIOK = reinterpret_cast<class GPIO* const>(GPIOK_BASE_ADDR);
#endif
//endregion



template<unsigned char num>
struct StandAlone_Pin
{
#ifndef STM32F1
	union
	{
		GPIO port;
		struct
		{
			uint32_t : num * 2;
			GPIO::Mode mode            : 2;
			uint32_t :(32 - (num + 1) * 2);
			uint32_t : num * 1;
			GPIO::OutType outType    : 1;
			uint32_t :(32 - (num + 1) * 1);
			uint32_t : num * 2;
			GPIO::Speed speed        : 2;
			uint32_t :(32 - (num + 1) * 2);
			uint32_t : num * 2;
			GPIO::PuPd pupd            : 2;
			uint32_t :(32 - (num + 1) * 2);
			uint64_t : 64; // IDR,ODR
			uint64_t : 64; // BSRR,LCKR
			uint64_t : num * 4;
			GPIO::AF af                : 4;
			uint64_t :(64 - (num + 1) * 4);
#ifdef GPIO_ASCR
			uint32_t : 32; //BRR
			uint32_t: num*1; GPIO::ASC asc			: 1; uint32_t :(32 - (num+1)*1);
#endif
		};
	};

	const GPIO::OutType &operator=(const GPIO::OutType &oType) volatile;

	const GPIO::Speed &operator=(const GPIO::Speed &speed) volatile;

	const GPIO::PuPd &operator=(const GPIO::PuPd &pupd) volatile;

	const GPIO::AF &operator=(const GPIO::AF &af) volatile;

#ifdef GPIO_ASCR
	const GPIO::ASC& operator=(const GPIO::ASC& asc);
#endif

#else
	union
	{
		GPIO port;
		struct
		{
			uint32_t :num*4; GPIO::Mode mode :2; GPIO::CNF cnf :2; uint32_t : (64 - (num+1)*4);
		};
	};
	const GPIO::CNF& operator=(const CNF& cnf);
#endif

	const GPIO::Mode &operator=(const GPIO::Mode &mode) volatile;

	const GPIO::PinConfig &operator=(const GPIO::PinConfig &config) volatile;

	operator GPIO::PinConfig const() volatile;

	bool read() volatile;

	void write(bool value) volatile;

	void toggle() volatile;

	const GPIO::Pin pin() volatile;
} __attribute__((__aligned__(4)));
//#################################################################################################
//#                                  GPIO methods and operators                                   #
//#################################################################################################

inline constexpr const GPIO::Pin GPIO::pin(const unsigned int pin_num)
{
	return static_cast<GPIO::Pin>(1 << pin_num);
}

inline constexpr uint32_t GPIO::get_clock_enable_bit(const uint32_t addr)
{
#if defined(STM32F0     ) || defined(STM32F3     )
	unsigned int offset = 17u;
#else
	unsigned int offset = 0u;
#endif
	switch (addr) {
#ifdef GPIOA_BASE_ADDR
		case GPIOA_BASE_ADDR: return 1u << (offset + 0);
#endif
#ifdef GPIOB_BASE_ADDR
		case GPIOB_BASE_ADDR: return 1u << (offset + 1);
#endif
#ifdef GPIOC_BASE_ADDR
		case GPIOC_BASE_ADDR: return 1u << (offset + 2);
#endif
#ifdef GPIOD_BASE_ADDR
		case GPIOD_BASE_ADDR: return 1u << (offset + 3);
#endif
#ifdef GPIOE_BASE_ADDR
		case GPIOE_BASE_ADDR: return 1u << (offset + 4);
#endif
#ifdef GPIOF_BASE_ADDR
		case GPIOF_BASE_ADDR: return 1u << (offset + 5);
#endif
#ifdef GPIOG_BASE_ADDR
		case GPIOG_BASE_ADDR: return 1u << (offset + 6);
#endif
#ifdef GPIOH_BASE_ADDR
		case GPIOH_BASE_ADDR: return 1u << (offset + 7);
#endif
#ifdef GPIOI_BASE_ADDR
		case GPIOI_BASE_ADDR: return 1u << (offset + 8);
#endif
#ifdef GPIOJ_BASE_ADDR
		case GPIOJ_BASE_ADDR: return 1u << (offset + 9);
#endif
#ifdef GPIOK_BASE_ADDR
		case GPIOK_BASE_ADDR: return 1u << (offset + 10);
#endif
		default:
			return 0;
	}
}

inline void GPIO::enable_clock() volatile
{
	const unsigned int bit = GPIO::get_clock_enable_bit((unsigned int) reinterpret_cast<const std::size_t>(this));

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     )
	RCC->AHB1ENR |= bit;
#elif defined(STM32L4     ) || defined(STM32L4P    )
	RCC->AHB2ENR |= bit;
#elif defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L1     )
	RCC->AHBENR |= bit;
#elif defined(RCC_AHB4ENR)
	RCC->AHB4ENR |= bit;
#endif
}

inline void GPIO::disable_clock() volatile
{
	const unsigned int mask = ~GPIO::get_clock_enable_bit((unsigned int) reinterpret_cast<const std::size_t>(this));

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     )
	RCC->AHB1ENR &= mask;
#elif defined(STM32L4     ) || defined(STM32L4P    )
	RCC->AHB2ENR &= mask;
#elif defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L1     )
	RCC->AHBENR &= mask;
#elif defined(RCC_AHB4ENR)
	RCC->AHB4ENR &= mask;
#endif
}

inline bool GPIO::is_clock_enabled() const volatile
{
	const unsigned int bit = GPIO::get_clock_enable_bit((unsigned int) reinterpret_cast<const std::size_t>(this));

#if defined(STM32F2     ) || defined(STM32F4     ) || defined(STM32F7     )
	return (RCC->AHB1ENR & bit) == bit;
#elif defined(STM32L4     ) || defined(STM32L4P    )
	return (RCC->AHB2ENR & bit) == bit;
#elif defined(STM32F0     ) || defined(STM32F3     ) || defined(STM32L1     )
	return (RCC->AHBENR & bit) == bit;
#elif defined(RCC_AHB4ENR)
	return (RCC->AHB4ENR & bit) == bit;
#endif
}

//##################################################################################################
//#                                    Pin methods and operators                                   #
//##################################################################################################
inline constexpr GPIO::Pin operator|(const GPIO::Pin &a, const GPIO::Pin &b)
{ return static_cast<GPIO::Pin>(static_cast<const uint32_t>(a) | static_cast<const uint32_t>(b)); }

inline constexpr GPIO::Pin operator&(const GPIO::Pin &a, const GPIO::Pin &b)
{ return static_cast<GPIO::Pin>(static_cast<const uint32_t>(a) & static_cast<const uint32_t>(b)); }

inline constexpr GPIO::Pin operator~(const GPIO::Pin &a)
{ return static_cast<GPIO::Pin>(~static_cast<const uint32_t>(a)); }

inline constexpr GPIO::Pin operator+(const GPIO::Pin &a, const GPIO::Pin &b)
{ return a | b; }

inline constexpr GPIO::Pin operator-(const GPIO::Pin &a, const GPIO::Pin &b)
{ return a & (~b); }

inline constexpr GPIO::Pin &operator|=(GPIO::Pin &a, const GPIO::Pin &b)
{ return a = a | b; }


inline constexpr const uint32_t operator*(const GPIO::Pin &pins, const GPIO::Mode &mode)
{
	uint32_t v = 0, i = 16;
	while (i--) {
		if ((pins & GPIO::pin(i)) != GPIO::Pin::None)
			v |= static_cast<uint32_t>(mode) << (i * 2);
	}
	return v;
}

inline constexpr const uint32_t operator*(const GPIO::Mode &mode, const GPIO::Pin &pins)
{ return pins * mode; }

inline constexpr const uint32_t operator*(const GPIO::Pin &pins, const GPIO::OutType &type)
{ return static_cast<uint32_t>(pins) * static_cast<uint32_t>(type); }

inline constexpr const uint32_t operator*(const GPIO::OutType &type, const GPIO::Pin &pins)
{ return pins * type; }

inline constexpr const uint32_t operator*(const GPIO::Pin &pins, const GPIO::Speed &speed)
{
	uint32_t v = 0, i = 16;
	while (i--) {
		if ((pins & GPIO::pin(i)) != GPIO::Pin::None)
			v |= static_cast<uint32_t>(speed) << (i * 2);
	}
	return v;
}

inline constexpr const uint32_t operator*(const GPIO::Speed &speed, const GPIO::Pin &pins)
{ return pins * speed; }

inline constexpr const uint32_t operator*(const GPIO::Pin &pins, const GPIO::PuPd &pupd)
{
	uint32_t v = 0, i = 16;
	while (i--) {
		if ((pins & GPIO::pin(i)) != GPIO::Pin::None)
			v |= static_cast<uint32_t>(pupd) << (i * 2);
	}
	return v;
}

inline constexpr const uint32_t operator*(const GPIO::PuPd &pupd, const GPIO::Pin &pins)
{ return pins * pupd; }

inline constexpr const uint64_t operator*(const GPIO::Pin &pins, const GPIO::AF &af)
{
	uint64_t v = 0;
	uint32_t i = 16;
	while (i--) {
		if ((pins & GPIO::pin(i)) != GPIO::Pin::None)
			v |= ((uint64_t)
		static_cast<uint64_t>(af)) << (i * 4);
	}
	return v;
}

inline constexpr const uint64_t operator*(const GPIO::AF &af, const GPIO::Pin &pins)
{ return pins * af; }


inline const GPIO::ODR_TypeDef &GPIO::ODR_TypeDef::operator=(const GPIO::Pin &p) volatile
{
	*this = static_cast<uint32_t>(p);
	return *const_cast<const GPIO::ODR_TypeDef *>(this);
}

inline const GPIO::ODR_TypeDef &GPIO::ODR_TypeDef::operator&=(const GPIO::Pin &p) volatile
{
	*this &= static_cast<uint32_t>(p);
	return *const_cast<const GPIO::ODR_TypeDef *>(this);
}

inline const GPIO::ODR_TypeDef &GPIO::ODR_TypeDef::operator|=(const GPIO::Pin &p) volatile
{
	*reinterpret_cast<volatile uint32_t *>(this) |= static_cast<uint32_t>(p);
	return *const_cast<const GPIO::ODR_TypeDef *>(this);
}

inline const GPIO::ODR_TypeDef &GPIO::ODR_TypeDef::operator^=(const GPIO::Pin &p) volatile
{
	*this ^= static_cast<uint32_t>(p);
	return *const_cast<const GPIO::ODR_TypeDef *>(this);
}

inline const GPIO::ODR_TypeDef &GPIO::ODR_TypeDef::operator+=(const GPIO::Pin &p) volatile
{
	*this |= p;
	return *const_cast<const GPIO::ODR_TypeDef *>(this);
}

inline const GPIO::ODR_TypeDef &GPIO::ODR_TypeDef::operator-=(const GPIO::Pin &p) volatile
{
	*this &= ~p;
	return *const_cast<const GPIO::ODR_TypeDef *>(this);
}

//region PinConfig operators
inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::Mode &mode)
{
	GPIO::PinConfig result = pin_conf;
	result.mode = mode;
	result.modif |= 1;
	return result;
}

#ifndef STM32F1

inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::OutType &oType)
{
	GPIO::PinConfig result = pin_conf;
	result.outType = oType;
	result.modif |= 2;
	return result;
}

inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::Speed &speed)
{
	GPIO::PinConfig result = pin_conf;
	result.speed = speed;
	result.modif |= 4;
	return result;
}

inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::PuPd &pupd)
{
	GPIO::PinConfig result = pin_conf;
	result.pupd = pupd;
	result.modif |= 8;
	return result;
}

inline const GPIO::PinConfig operator|(const GPIO::PinConfig &pin_conf, const GPIO::AF &af)
{
	GPIO::PinConfig result = pin_conf;
	result.af = af;
	result.modif |= 16;
	return result;
}

#ifdef GPIO_ASC
inline const GPIO::PinConfig operator|(const GPIO::PinConfig& pin_conf, const GPIO::ASC& asc)
{
	GPIO::PinConfig result = pin_config;
	result.asc = asc;
	result.modif |= 32;
	return result;
}
#endif
#else
inline const GPIO::PinConfig operator|(const GPIO::PinConfig& pin_conf, const GPIO::CNF& cnf)
{
	GPIO::PinConfig result = pin_conf;
	result.cnf = cnf;
	result.modif |= 2;
	return result;
}
#endif

//endregion
template<unsigned char num>
inline const GPIO::PinConfig &StandAlone_Pin<num>::operator=(const GPIO::PinConfig &config) volatile
{
	if (config.modif & 1) this->mode = config.mode;
#ifndef STM32F1
	if (config.modif & 2)this->outType = config.outType;
	if (config.modif & 4)this->speed = config.speed;
	if (config.modif & 8)this->pupd = config.pupd;
	if (config.modif & 16)this->af = config.af;
#ifdef GPIO_ASCR
	if(config.modif & 32)this->asc = config.asc;
#endif
#else
	if(config.modif & 2)this->cnf = config.cnf;
#endif
	return config;
}

template<unsigned char num>
inline const GPIO::Mode &StandAlone_Pin<num>::operator=(const GPIO::Mode &mode) volatile
{
	this->mode = mode;
	return mode;
}

#ifndef STM32F1

template<unsigned char num>
inline const GPIO::OutType &StandAlone_Pin<num>::operator=(const GPIO::OutType &oType) volatile
{
	this->outType = oType;
	return oType;
}

template<unsigned char num>
inline const GPIO::Speed &StandAlone_Pin<num>::operator=(const GPIO::Speed &speed) volatile
{
	this->speed = speed;
	return speed;
}

template<unsigned char num>
inline const GPIO::PuPd &StandAlone_Pin<num>::operator=(const GPIO::PuPd &pupd) volatile
{
	this->pupd = pupd;
	return pupd;
}

template<unsigned char num>
inline const GPIO::AF &StandAlone_Pin<num>::operator=(const GPIO::AF &af) volatile
{
	this->af = af;
	return af;
}

template<unsigned char num>
inline StandAlone_Pin<num>::operator GPIO::PinConfig const() volatile
{
	const GPIO::Mode mode = this->mode;
	GPIO::PinConfig config(mode);
#ifndef STM32F1
	config.modif = 0b11111;
	config.outType = this->outType;
	config.speed = this->speed;
	config.pupd = this->pupd;
	config.af = this->af;
#ifdef GPIO_ASCR
	config.asc = this->asc;
#endif
#else
	config.modif = 0b11;
	config.cnf = this->cnf;
#endif
	return config;
}

#ifdef GPIO_ASCR
template<unsigned char num>
inline const GPIO::ASC& StandAlone_Pin<num>::operator=(const GPIO::ASC& asc)
{
	this->asc = asc;
	return asc;
}
#endif
#else // STM32F1
template<unsigned char num>
inline const GPIO::CNF& StandAlone_Pin<num>::operator=(const GPIO::CNF& cnf)
{
	this->cnf = cnf;
	return cnf;
}
#endif

template<unsigned char num>
inline bool StandAlone_Pin<num>::read() volatile
{
	return (bool) ((reinterpret_cast<volatile GPIO *>(this))->IDR & (1 << num));
}

template<unsigned char num>
inline void StandAlone_Pin<num>::write(bool value) volatile
{
	(reinterpret_cast<volatile GPIO *>(this))->BSRR = value ? (1 << num) : (1 << (num + 16));
}

template<unsigned char num>
inline void StandAlone_Pin<num>::toggle() volatile
{
	(reinterpret_cast<volatile GPIO *>(this))->ODR ^= (1 << num);
}

template<unsigned char num>
inline const GPIO::Pin StandAlone_Pin<num>::pin() volatile
{
	return GPIO::Pin(num);
}

//region PXn definitions
#ifdef GPIOA_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PA0 ;
extern volatile StandAlone_Pin< 1>& PA1 ;
extern volatile StandAlone_Pin< 2>& PA2 ;
extern volatile StandAlone_Pin< 3>& PA3 ;
extern volatile StandAlone_Pin< 4>& PA4 ;
extern volatile StandAlone_Pin< 5>& PA5 ;
extern volatile StandAlone_Pin< 6>& PA6 ;
extern volatile StandAlone_Pin< 7>& PA7 ;
extern volatile StandAlone_Pin< 8>& PA8 ;
extern volatile StandAlone_Pin< 9>& PA9 ;
extern volatile StandAlone_Pin<10>& PA10;
extern volatile StandAlone_Pin<11>& PA11;
extern volatile StandAlone_Pin<12>& PA12;
extern volatile StandAlone_Pin<13>& PA13;
extern volatile StandAlone_Pin<14>& PA14;
extern volatile StandAlone_Pin<15>& PA15;
#endif
#ifdef GPIOB_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PB0 ;
extern volatile StandAlone_Pin< 1>& PB1 ;
extern volatile StandAlone_Pin< 2>& PB2 ;
extern volatile StandAlone_Pin< 3>& PB3 ;
extern volatile StandAlone_Pin< 4>& PB4 ;
extern volatile StandAlone_Pin< 5>& PB5 ;
extern volatile StandAlone_Pin< 6>& PB6 ;
extern volatile StandAlone_Pin< 7>& PB7 ;
extern volatile StandAlone_Pin< 8>& PB8 ;
extern volatile StandAlone_Pin< 9>& PB9 ;
extern volatile StandAlone_Pin<10>& PB10;
extern volatile StandAlone_Pin<11>& PB11;
extern volatile StandAlone_Pin<12>& PB12;
extern volatile StandAlone_Pin<13>& PB13;
extern volatile StandAlone_Pin<14>& PB14;
extern volatile StandAlone_Pin<15>& PB15;
#endif
#ifdef GPIOC_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PC0 ;
extern volatile StandAlone_Pin< 1>& PC1 ;
extern volatile StandAlone_Pin< 2>& PC2 ;
extern volatile StandAlone_Pin< 3>& PC3 ;
extern volatile StandAlone_Pin< 4>& PC4 ;
extern volatile StandAlone_Pin< 5>& PC5 ;
extern volatile StandAlone_Pin< 6>& PC6 ;
extern volatile StandAlone_Pin< 7>& PC7 ;
extern volatile StandAlone_Pin< 8>& PC8 ;
extern volatile StandAlone_Pin< 9>& PC9 ;
extern volatile StandAlone_Pin<10>& PC10;
extern volatile StandAlone_Pin<11>& PC11;
extern volatile StandAlone_Pin<12>& PC12;
extern volatile StandAlone_Pin<13>& PC13;
extern volatile StandAlone_Pin<14>& PC14;
extern volatile StandAlone_Pin<15>& PC15;
#endif
#ifdef GPIOD_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PD0 ;
extern volatile StandAlone_Pin< 1>& PD1 ;
extern volatile StandAlone_Pin< 2>& PD2 ;
extern volatile StandAlone_Pin< 3>& PD3 ;
extern volatile StandAlone_Pin< 4>& PD4 ;
extern volatile StandAlone_Pin< 5>& PD5 ;
extern volatile StandAlone_Pin< 6>& PD6 ;
extern volatile StandAlone_Pin< 7>& PD7 ;
extern volatile StandAlone_Pin< 8>& PD8 ;
extern volatile StandAlone_Pin< 9>& PD9 ;
extern volatile StandAlone_Pin<10>& PD10;
extern volatile StandAlone_Pin<11>& PD11;
extern volatile StandAlone_Pin<12>& PD12;
extern volatile StandAlone_Pin<13>& PD13;
extern volatile StandAlone_Pin<14>& PD14;
extern volatile StandAlone_Pin<15>& PD15;
#endif
#ifdef GPIOE_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PE0 ;
extern volatile StandAlone_Pin< 1>& PE1 ;
extern volatile StandAlone_Pin< 2>& PE2 ;
extern volatile StandAlone_Pin< 3>& PE3 ;
extern volatile StandAlone_Pin< 4>& PE4 ;
extern volatile StandAlone_Pin< 5>& PE5 ;
extern volatile StandAlone_Pin< 6>& PE6 ;
extern volatile StandAlone_Pin< 7>& PE7 ;
extern volatile StandAlone_Pin< 8>& PE8 ;
extern volatile StandAlone_Pin< 9>& PE9 ;
extern volatile StandAlone_Pin<10>& PE10;
extern volatile StandAlone_Pin<11>& PE11;
extern volatile StandAlone_Pin<12>& PE12;
extern volatile StandAlone_Pin<13>& PE13;
extern volatile StandAlone_Pin<14>& PE14;
extern volatile StandAlone_Pin<15>& PE15;
#endif
#ifdef GPIOF_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PF0 ;
extern volatile StandAlone_Pin< 1>& PF1 ;
extern volatile StandAlone_Pin< 2>& PF2 ;
extern volatile StandAlone_Pin< 3>& PF3 ;
extern volatile StandAlone_Pin< 4>& PF4 ;
extern volatile StandAlone_Pin< 5>& PF5 ;
extern volatile StandAlone_Pin< 6>& PF6 ;
extern volatile StandAlone_Pin< 7>& PF7 ;
extern volatile StandAlone_Pin< 8>& PF8 ;
extern volatile StandAlone_Pin< 9>& PF9 ;
extern volatile StandAlone_Pin<10>& PF10;
extern volatile StandAlone_Pin<11>& PF11;
extern volatile StandAlone_Pin<12>& PF12;
extern volatile StandAlone_Pin<13>& PF13;
extern volatile StandAlone_Pin<14>& PF14;
extern volatile StandAlone_Pin<15>& PF15;
#endif
#ifdef GPIOG_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PG0 ;
extern volatile StandAlone_Pin< 1>& PG1 ;
extern volatile StandAlone_Pin< 2>& PG2 ;
extern volatile StandAlone_Pin< 3>& PG3 ;
extern volatile StandAlone_Pin< 4>& PG4 ;
extern volatile StandAlone_Pin< 5>& PG5 ;
extern volatile StandAlone_Pin< 6>& PG6 ;
extern volatile StandAlone_Pin< 7>& PG7 ;
extern volatile StandAlone_Pin< 8>& PG8 ;
extern volatile StandAlone_Pin< 9>& PG9 ;
extern volatile StandAlone_Pin<10>& PG10;
extern volatile StandAlone_Pin<11>& PG11;
extern volatile StandAlone_Pin<12>& PG12;
extern volatile StandAlone_Pin<13>& PG13;
extern volatile StandAlone_Pin<14>& PG14;
extern volatile StandAlone_Pin<15>& PG15;
#endif
#ifdef GPIOH_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PH0 ;
extern volatile StandAlone_Pin< 1>& PH1 ;
extern volatile StandAlone_Pin< 2>& PH2 ;
extern volatile StandAlone_Pin< 3>& PH3 ;
extern volatile StandAlone_Pin< 4>& PH4 ;
extern volatile StandAlone_Pin< 5>& PH5 ;
extern volatile StandAlone_Pin< 6>& PH6 ;
extern volatile StandAlone_Pin< 7>& PH7 ;
extern volatile StandAlone_Pin< 8>& PH8 ;
extern volatile StandAlone_Pin< 9>& PH9 ;
extern volatile StandAlone_Pin<10>& PH10;
extern volatile StandAlone_Pin<11>& PH11;
extern volatile StandAlone_Pin<12>& PH12;
extern volatile StandAlone_Pin<13>& PH13;
extern volatile StandAlone_Pin<14>& PH14;
extern volatile StandAlone_Pin<15>& PH15;
#endif
#ifdef GPIOI_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PI0 ;
extern volatile StandAlone_Pin< 1>& PI1 ;
extern volatile StandAlone_Pin< 2>& PI2 ;
extern volatile StandAlone_Pin< 3>& PI3 ;
extern volatile StandAlone_Pin< 4>& PI4 ;
extern volatile StandAlone_Pin< 5>& PI5 ;
extern volatile StandAlone_Pin< 6>& PI6 ;
extern volatile StandAlone_Pin< 7>& PI7 ;
extern volatile StandAlone_Pin< 8>& PI8 ;
extern volatile StandAlone_Pin< 9>& PI9 ;
extern volatile StandAlone_Pin<10>& PI10;
extern volatile StandAlone_Pin<11>& PI11;
extern volatile StandAlone_Pin<12>& PI12;
extern volatile StandAlone_Pin<13>& PI13;
extern volatile StandAlone_Pin<14>& PI14;
extern volatile StandAlone_Pin<15>& PI15;
#endif
#ifdef GPIOJ_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PJ0 ;
extern volatile StandAlone_Pin< 1>& PJ1 ;
extern volatile StandAlone_Pin< 2>& PJ2 ;
extern volatile StandAlone_Pin< 3>& PJ3 ;
extern volatile StandAlone_Pin< 4>& PJ4 ;
extern volatile StandAlone_Pin< 5>& PJ5 ;
extern volatile StandAlone_Pin< 6>& PJ6 ;
extern volatile StandAlone_Pin< 7>& PJ7 ;
extern volatile StandAlone_Pin< 8>& PJ8 ;
extern volatile StandAlone_Pin< 9>& PJ9 ;
extern volatile StandAlone_Pin<10>& PJ10;
extern volatile StandAlone_Pin<11>& PJ11;
extern volatile StandAlone_Pin<12>& PJ12;
extern volatile StandAlone_Pin<13>& PJ13;
extern volatile StandAlone_Pin<14>& PJ14;
extern volatile StandAlone_Pin<15>& PJ15;
#endif
#ifdef GPIOK_BASE_ADDR
extern volatile StandAlone_Pin< 0>& PK0 ;
extern volatile StandAlone_Pin< 1>& PK1 ;
extern volatile StandAlone_Pin< 2>& PK2 ;
extern volatile StandAlone_Pin< 3>& PK3 ;
extern volatile StandAlone_Pin< 4>& PK4 ;
extern volatile StandAlone_Pin< 5>& PK5 ;
extern volatile StandAlone_Pin< 6>& PK6 ;
extern volatile StandAlone_Pin< 7>& PK7 ;
extern volatile StandAlone_Pin< 8>& PK8 ;
extern volatile StandAlone_Pin< 9>& PK9 ;
extern volatile StandAlone_Pin<10>& PK10;
extern volatile StandAlone_Pin<11>& PK11;
extern volatile StandAlone_Pin<12>& PK12;
extern volatile StandAlone_Pin<13>& PK13;
extern volatile StandAlone_Pin<14>& PK14;
extern volatile StandAlone_Pin<15>& PK15;
#endif
//endregion

	};
};
//region undef
#undef GPIO_MAP0_MODER
#undef GPIO_MAP0_OTYPER
#undef GPIO_MAP0_OSPEEDR
#undef GPIO_MAP0_PUPDR
#undef GPIO_MAP0_IDR
#undef GPIO_MAP0_ODR
#undef GPIO_MAP0_LCKR
#undef GPIO_MAP0_AFR
#undef GPIO_MAP1_AFRL
#undef GPIO_MAP1_AFRH
#undef GPIO_MAP0_ASCR
#undef GPIO_MAP2_BSRRL
#undef GPIO_MAP2_BSRRH
#undef GPIO_MAP1_CRL
#undef GPIO_MAP1_CRH
#undef GPIO_MAP1_IDR
#undef GPIO_MAP1_ODR
#undef GPIO_MAP1_BSRR
#undef GPIO_MAP1_BRR
#undef GPIO_MAP1_LCKR
#undef GPIO_OSPEEDR_1_OSPEEDR0
#undef GPIO_MAP0_BSRR
#undef GPIO_MAP0_BRR
//endregion
#endif
