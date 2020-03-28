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
#ifndef __SOOL_CAN_H
#define __SOOL_CAN_H

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F103x6 ) || defined(STM32F103xB ) ||\
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F2     ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) ||\
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )


#include "lib_utils/peripheral_include.h"

//region defines

#define CAN_BTR
#define CAN_ESR
#define CAN_FA1R
#define CAN_FFA1R
#define CAN_FM1R
#define CAN_FMR
#define CAN_FS1R
#define CAN_IER
#define CAN_MCR
#define CAN_MSR
#define CAN_RF0R
#define CAN_RF1R
#define CAN_TSR

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F103x6 ) || defined(STM32F103xB ) ||\
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F2     ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) ||\
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define CAN_CAN_FIFOMailBox_RDHR
#define CAN_CAN_FIFOMailBox_RDLR
#define CAN_CAN_FIFOMailBox_RDTR
#define CAN_CAN_FIFOMailBox_RIR
#define CAN_CAN_FilterRegister_FR
#define CAN_CAN_TxMailBox_TDHR
#define CAN_CAN_TxMailBox_TDLR
#define CAN_CAN_TxMailBox_TDTR
#define CAN_CAN_TxMailBox_TIR
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F2     ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
#define CAN_FA1R_0
#define CAN_FFA1R_0
#define CAN_FM1R_0
#define CAN_FS1R_0
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx )
#define CAN_FA1R_1_FACT14    FACT14               // 1 bits @ 14
#define CAN_FA1R_1_FACT15    FACT15               // 1 bits @ 15
#define CAN_FA1R_1_FACT16    FACT16               // 1 bits @ 16
#define CAN_FA1R_1_FACT17    FACT17               // 1 bits @ 17
#define CAN_FA1R_1_FACT18    FACT18               // 1 bits @ 18
#define CAN_FA1R_1_FACT19    FACT19               // 1 bits @ 19
#define CAN_FA1R_1_FACT20    FACT20               // 1 bits @ 20
#define CAN_FA1R_1_FACT21    FACT21               // 1 bits @ 21
#define CAN_FA1R_1_FACT22    FACT22               // 1 bits @ 22
#define CAN_FA1R_1_FACT23    FACT23               // 1 bits @ 23
#define CAN_FA1R_1_FACT24    FACT24               // 1 bits @ 24
#define CAN_FA1R_1_FACT25    FACT25               // 1 bits @ 25
#define CAN_FA1R_1_FACT26    FACT26               // 1 bits @ 26
#define CAN_FA1R_1_FACT27    FACT27               // 1 bits @ 27
#define CAN_FFA1R_1_FFA14    FFA14                // 1 bits @ 14
#define CAN_FFA1R_1_FFA15    FFA15                // 1 bits @ 15
#define CAN_FFA1R_1_FFA16    FFA16                // 1 bits @ 16
#define CAN_FFA1R_1_FFA17    FFA17                // 1 bits @ 17
#define CAN_FFA1R_1_FFA18    FFA18                // 1 bits @ 18
#define CAN_FFA1R_1_FFA19    FFA19                // 1 bits @ 19
#define CAN_FFA1R_1_FFA20    FFA20                // 1 bits @ 20
#define CAN_FFA1R_1_FFA21    FFA21                // 1 bits @ 21
#define CAN_FFA1R_1_FFA22    FFA22                // 1 bits @ 22
#define CAN_FFA1R_1_FFA23    FFA23                // 1 bits @ 23
#define CAN_FFA1R_1_FFA24    FFA24                // 1 bits @ 24
#define CAN_FFA1R_1_FFA25    FFA25                // 1 bits @ 25
#define CAN_FFA1R_1_FFA26    FFA26                // 1 bits @ 26
#define CAN_FFA1R_1_FFA27    FFA27                // 1 bits @ 27
#define CAN_FM1R_1_FBM14     FBM14                // 1 bits @ 14
#define CAN_FM1R_1_FBM15     FBM15                // 1 bits @ 15
#define CAN_FM1R_1_FBM16     FBM16                // 1 bits @ 16
#define CAN_FM1R_1_FBM17     FBM17                // 1 bits @ 17
#define CAN_FM1R_1_FBM18     FBM18                // 1 bits @ 18
#define CAN_FM1R_1_FBM19     FBM19                // 1 bits @ 19
#define CAN_FM1R_1_FBM20     FBM20                // 1 bits @ 20
#define CAN_FM1R_1_FBM21     FBM21                // 1 bits @ 21
#define CAN_FM1R_1_FBM22     FBM22                // 1 bits @ 22
#define CAN_FM1R_1_FBM23     FBM23                // 1 bits @ 23
#define CAN_FM1R_1_FBM24     FBM24                // 1 bits @ 24
#define CAN_FM1R_1_FBM25     FBM25                // 1 bits @ 25
#define CAN_FM1R_1_FBM26     FBM26                // 1 bits @ 26
#define CAN_FM1R_1_FBM27     FBM27                // 1 bits @ 27
#define CAN_FS1R_1_FSC14     FSC14                // 1 bits @ 14
#define CAN_FS1R_1_FSC15     FSC15                // 1 bits @ 15
#define CAN_FS1R_1_FSC16     FSC16                // 1 bits @ 16
#define CAN_FS1R_1_FSC17     FSC17                // 1 bits @ 17
#define CAN_FS1R_1_FSC18     FSC18                // 1 bits @ 18
#define CAN_FS1R_1_FSC19     FSC19                // 1 bits @ 19
#define CAN_FS1R_1_FSC20     FSC20                // 1 bits @ 20
#define CAN_FS1R_1_FSC21     FSC21                // 1 bits @ 21
#define CAN_FS1R_1_FSC22     FSC22                // 1 bits @ 22
#define CAN_FS1R_1_FSC23     FSC23                // 1 bits @ 23
#define CAN_FS1R_1_FSC24     FSC24                // 1 bits @ 24
#define CAN_FS1R_1_FSC25     FSC25                // 1 bits @ 25
#define CAN_FS1R_1_FSC26     FSC26                // 1 bits @ 26
#define CAN_FS1R_1_FSC27     FSC27                // 1 bits @ 27
#else
#define CAN_FA1R_1_FACT14
#define CAN_FA1R_1_FACT15
#define CAN_FA1R_1_FACT16
#define CAN_FA1R_1_FACT17
#define CAN_FA1R_1_FACT18
#define CAN_FA1R_1_FACT19
#define CAN_FA1R_1_FACT20
#define CAN_FA1R_1_FACT21
#define CAN_FA1R_1_FACT22
#define CAN_FA1R_1_FACT23
#define CAN_FA1R_1_FACT24
#define CAN_FA1R_1_FACT25
#define CAN_FA1R_1_FACT26
#define CAN_FA1R_1_FACT27
#define CAN_FFA1R_1_FFA14
#define CAN_FFA1R_1_FFA15
#define CAN_FFA1R_1_FFA16
#define CAN_FFA1R_1_FFA17
#define CAN_FFA1R_1_FFA18
#define CAN_FFA1R_1_FFA19
#define CAN_FFA1R_1_FFA20
#define CAN_FFA1R_1_FFA21
#define CAN_FFA1R_1_FFA22
#define CAN_FFA1R_1_FFA23
#define CAN_FFA1R_1_FFA24
#define CAN_FFA1R_1_FFA25
#define CAN_FFA1R_1_FFA26
#define CAN_FFA1R_1_FFA27
#define CAN_FM1R_1_FBM14
#define CAN_FM1R_1_FBM15
#define CAN_FM1R_1_FBM16
#define CAN_FM1R_1_FBM17
#define CAN_FM1R_1_FBM18
#define CAN_FM1R_1_FBM19
#define CAN_FM1R_1_FBM20
#define CAN_FM1R_1_FBM21
#define CAN_FM1R_1_FBM22
#define CAN_FM1R_1_FBM23
#define CAN_FM1R_1_FBM24
#define CAN_FM1R_1_FBM25
#define CAN_FM1R_1_FBM26
#define CAN_FM1R_1_FBM27
#define CAN_FS1R_1_FSC14
#define CAN_FS1R_1_FSC15
#define CAN_FS1R_1_FSC16
#define CAN_FS1R_1_FSC17
#define CAN_FS1R_1_FSC18
#define CAN_FS1R_1_FSC19
#define CAN_FS1R_1_FSC20
#define CAN_FS1R_1_FSC21
#define CAN_FS1R_1_FSC22
#define CAN_FS1R_1_FSC23
#define CAN_FS1R_1_FSC24
#define CAN_FS1R_1_FSC25
#define CAN_FS1R_1_FSC26
#define CAN_FS1R_1_FSC27
#endif

#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define CAN_FA1R_2
#define CAN_FFA1R_2
#define CAN_FM1R_2
#define CAN_FS1R_2
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F103x6 ) || defined(STM32F103xB ) ||\
    defined(STM32F103xE ) || defined(STM32F103xG ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F2     ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F745xx ) || defined(STM32F746xx ) ||\
    defined(STM32F756xx ) || defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) ||\
    defined(STM32F777xx ) || defined(STM32F779xx ) || defined(STM32L496xx ) || defined(STM32L4A6xx )
#define CAN_FMR_CAN2SB       CAN2SB               // 6 bits @ 8
#else
#define CAN_FMR_CAN2SB
#endif

#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx )
#define CAN_MCR_DBF          DBF                  // 1 bits @ 16
#else
#define CAN_MCR_DBF
#endif

#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F105xC ) || defined(STM32F107xC ) ||\
    defined(STM32F2     ) || defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE ) ||\
    defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F328xx ) ||\
    defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) || defined(STM32F378xx ) ||\
    defined(STM32F398xx ) || defined(STM32F405xx ) || defined(STM32F407xx ) || defined(STM32F412Cx ) ||\
    defined(STM32F412Rx ) || defined(STM32F412Vx ) || defined(STM32F412Zx ) || defined(STM32F413xx ) ||\
    defined(STM32F415xx ) || defined(STM32F417xx ) || defined(STM32F423xx ) || defined(STM32F427xx ) ||\
    defined(STM32F429xx ) || defined(STM32F437xx ) || defined(STM32F439xx ) || defined(STM32F446xx ) ||\
    defined(STM32F469xx ) || defined(STM32F479xx ) || defined(STM32F7     ) || defined(STM32L4     ) ||\
    defined(STM32L4P    )
#define CAN_MAP0_sFilterRegister CAN_FilterRegister sFilterRegister[28]
#else
#define CAN_MAP0_sFilterRegister __SOOL_PERIPH_PADDING_128;__SOOL_PERIPH_PADDING_64;__SOOL_PERIPH_PADDING_32
#endif

#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG )
#define CAN_MAP1_sFilterRegister CAN_FilterRegister sFilterRegister[14]
#else
#define CAN_MAP1_sFilterRegister __SOOL_PERIPH_PADDING_64;__SOOL_PERIPH_PADDING_32;__SOOL_PERIPH_PADDING_16
#endif

//endregion
namespace sool
{
	namespace core
	{
//region related-types
		
//endregion
//region peripheral-declaration

		class CAN
		{
			

			public :

			#ifdef CAN_BTR
			struct BTR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t BRP                  :10;
					uint32_t                      :6;
					uint32_t TS1                  :4;
					uint32_t TS2                  :3;
					uint32_t                      :1;
					uint32_t SJW                  :2;
					uint32_t                      :4;
					uint32_t LBKM                 :1;
					uint32_t SILM                 :1;

				
			};
			#endif

			class CAN_FIFOMailBox
			{
				

				public :

				#ifdef CAN_CAN_FIFOMailBox_RDHR
				struct RDHR_TypeDef : public Reg32_t
				{
					using Reg32_t::operator=;

						uint32_t DATA4                :8;
						uint32_t DATA5                :8;
						uint32_t DATA6                :8;
						uint32_t DATA7                :8;

					
				};
				#endif

				#ifdef CAN_CAN_FIFOMailBox_RDLR
				struct RDLR_TypeDef : public Reg32_t
				{
					using Reg32_t::operator=;

						uint32_t DATA0                :8;
						uint32_t DATA1                :8;
						uint32_t DATA2                :8;
						uint32_t DATA3                :8;

					
				};
				#endif

				#ifdef CAN_CAN_FIFOMailBox_RDTR
				struct RDTR_TypeDef : public Reg32_t
				{
					using Reg32_t::operator=;

						uint32_t DLC                  :4;
						uint32_t                      :4;
						uint32_t FMI                  :8;
						uint32_t TIME                 :16;

					
				};
				#endif

				#ifdef CAN_CAN_FIFOMailBox_RIR
				struct RIR_TypeDef : public Reg32_t
				{
					using Reg32_t::operator=;

						uint32_t                      :1;
						uint32_t RTR                  :1;
						uint32_t IDE                  :1;
						uint32_t EXID                 :18;
						uint32_t STID                 :11;

					
				};
				#endif

				union
				{

					struct
					{
						RIR_TypeDef RIR;     // @0x000
						RDTR_TypeDef RDTR;   // @0x004
						RDLR_TypeDef RDLR;   // @0x008
						RDHR_TypeDef RDHR;   // @0x00c
					};
				};
				private:
				CAN_FIFOMailBox() = delete;
				
			};

			class CAN_FilterRegister
			{
				

				public :

				#ifdef CAN_CAN_FilterRegister_FR
				struct FR_TypeDef : public Reg32_t
				{
					using Reg32_t::operator=;

						uint32_t FB0                  :1;
						uint32_t FB1                  :1;
						uint32_t FB2                  :1;
						uint32_t FB3                  :1;
						uint32_t FB4                  :1;
						uint32_t FB5                  :1;
						uint32_t FB6                  :1;
						uint32_t FB7                  :1;
						uint32_t FB8                  :1;
						uint32_t FB9                  :1;
						uint32_t FB10                 :1;
						uint32_t FB11                 :1;
						uint32_t FB12                 :1;
						uint32_t FB13                 :1;
						uint32_t FB14                 :1;
						uint32_t FB15                 :1;
						uint32_t FB16                 :1;
						uint32_t FB17                 :1;
						uint32_t FB18                 :1;
						uint32_t FB19                 :1;
						uint32_t FB20                 :1;
						uint32_t FB21                 :1;
						uint32_t FB22                 :1;
						uint32_t FB23                 :1;
						uint32_t FB24                 :1;
						uint32_t FB25                 :1;
						uint32_t FB26                 :1;
						uint32_t FB27                 :1;
						uint32_t FB28                 :1;
						uint32_t FB29                 :1;
						uint32_t FB30                 :1;
						uint32_t FB31                 :1;

					
				};
				#endif

				union
				{

					struct
					{
						FR_TypeDef FR1;      // @0x000
						FR_TypeDef FR2;      // @0x004
					};
				};
				private:
				CAN_FilterRegister() = delete;
				
			};

			class CAN_TxMailBox
			{
				

				public :

				#ifdef CAN_CAN_TxMailBox_TDHR
				struct TDHR_TypeDef : public Reg32_t
				{
					using Reg32_t::operator=;

						uint32_t DATA4                :8;
						uint32_t DATA5                :8;
						uint32_t DATA6                :8;
						uint32_t DATA7                :8;

					
				};
				#endif

				#ifdef CAN_CAN_TxMailBox_TDLR
				struct TDLR_TypeDef : public Reg32_t
				{
					using Reg32_t::operator=;

						uint32_t DATA0                :8;
						uint32_t DATA1                :8;
						uint32_t DATA2                :8;
						uint32_t DATA3                :8;

					
				};
				#endif

				#ifdef CAN_CAN_TxMailBox_TDTR
				struct TDTR_TypeDef : public Reg32_t
				{
					using Reg32_t::operator=;

						uint32_t DLC                  :4;
						uint32_t                      :4;
						uint32_t TGT                  :1;
						uint32_t                      :7;
						uint32_t TIME                 :16;

					
				};
				#endif

				#ifdef CAN_CAN_TxMailBox_TIR
				struct TIR_TypeDef : public Reg32_t
				{
					using Reg32_t::operator=;

						uint32_t TXRQ                 :1;
						uint32_t RTR                  :1;
						uint32_t IDE                  :1;
						uint32_t EXID                 :18;
						uint32_t STID                 :11;

					
				};
				#endif

				union
				{

					struct
					{
						TIR_TypeDef TIR;     // @0x000
						TDTR_TypeDef TDTR;   // @0x004
						TDLR_TypeDef TDLR;   // @0x008
						TDHR_TypeDef TDHR;   // @0x00c
					};
				};
				private:
				CAN_TxMailBox() = delete;
				
			};

			#ifdef CAN_ESR
			struct ESR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t EWGF                 :1;
					uint32_t EPVF                 :1;
					uint32_t BOFF                 :1;
					uint32_t                      :1;
					uint32_t LEC                  :3;
					uint32_t                      :9;
					uint32_t TEC                  :8;
					uint32_t REC                  :8;

				
			};
			#endif

			#ifdef CAN_FA1R
			struct FA1R_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					#ifdef CAN_FA1R_0
					struct
					{
						uint32_t FACT                 :28;
						uint32_t                      :4;
					};
					#endif
					struct
					{
						uint32_t FACT0                :1;
						uint32_t FACT1                :1;
						uint32_t FACT2                :1;
						uint32_t FACT3                :1;
						uint32_t FACT4                :1;
						uint32_t FACT5                :1;
						uint32_t FACT6                :1;
						uint32_t FACT7                :1;
						uint32_t FACT8                :1;
						uint32_t FACT9                :1;
						uint32_t FACT10               :1;
						uint32_t FACT11               :1;
						uint32_t FACT12               :1;
						uint32_t FACT13               :1;
						uint32_t CAN_FA1R_1_FACT14    :1;
						uint32_t CAN_FA1R_1_FACT15    :1;
						uint32_t CAN_FA1R_1_FACT16    :1;
						uint32_t CAN_FA1R_1_FACT17    :1;
						uint32_t CAN_FA1R_1_FACT18    :1;
						uint32_t CAN_FA1R_1_FACT19    :1;
						uint32_t CAN_FA1R_1_FACT20    :1;
						uint32_t CAN_FA1R_1_FACT21    :1;
						uint32_t CAN_FA1R_1_FACT22    :1;
						uint32_t CAN_FA1R_1_FACT23    :1;
						uint32_t CAN_FA1R_1_FACT24    :1;
						uint32_t CAN_FA1R_1_FACT25    :1;
						uint32_t CAN_FA1R_1_FACT26    :1;
						uint32_t CAN_FA1R_1_FACT27    :1;
						uint32_t                      :4;
					};
					#ifdef CAN_FA1R_2
					struct
					{
						uint32_t FACT                 :14;
						uint32_t                      :18;
					};
					#endif
				};
				
			};
			#endif

			#ifdef CAN_FFA1R
			struct FFA1R_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					#ifdef CAN_FFA1R_0
					struct
					{
						uint32_t FFA                  :28;
						uint32_t                      :4;
					};
					#endif
					struct
					{
						uint32_t FFA0                 :1;
						uint32_t FFA1                 :1;
						uint32_t FFA2                 :1;
						uint32_t FFA3                 :1;
						uint32_t FFA4                 :1;
						uint32_t FFA5                 :1;
						uint32_t FFA6                 :1;
						uint32_t FFA7                 :1;
						uint32_t FFA8                 :1;
						uint32_t FFA9                 :1;
						uint32_t FFA10                :1;
						uint32_t FFA11                :1;
						uint32_t FFA12                :1;
						uint32_t FFA13                :1;
						uint32_t CAN_FFA1R_1_FFA14    :1;
						uint32_t CAN_FFA1R_1_FFA15    :1;
						uint32_t CAN_FFA1R_1_FFA16    :1;
						uint32_t CAN_FFA1R_1_FFA17    :1;
						uint32_t CAN_FFA1R_1_FFA18    :1;
						uint32_t CAN_FFA1R_1_FFA19    :1;
						uint32_t CAN_FFA1R_1_FFA20    :1;
						uint32_t CAN_FFA1R_1_FFA21    :1;
						uint32_t CAN_FFA1R_1_FFA22    :1;
						uint32_t CAN_FFA1R_1_FFA23    :1;
						uint32_t CAN_FFA1R_1_FFA24    :1;
						uint32_t CAN_FFA1R_1_FFA25    :1;
						uint32_t CAN_FFA1R_1_FFA26    :1;
						uint32_t CAN_FFA1R_1_FFA27    :1;
						uint32_t                      :4;
					};
					#ifdef CAN_FFA1R_2
					struct
					{
						uint32_t FFA                  :14;
						uint32_t                      :18;
					};
					#endif
				};
				
			};
			#endif

			#ifdef CAN_FM1R
			struct FM1R_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					#ifdef CAN_FM1R_0
					struct
					{
						uint32_t FBM                  :28;
						uint32_t                      :4;
					};
					#endif
					struct
					{
						uint32_t FBM0                 :1;
						uint32_t FBM1                 :1;
						uint32_t FBM2                 :1;
						uint32_t FBM3                 :1;
						uint32_t FBM4                 :1;
						uint32_t FBM5                 :1;
						uint32_t FBM6                 :1;
						uint32_t FBM7                 :1;
						uint32_t FBM8                 :1;
						uint32_t FBM9                 :1;
						uint32_t FBM10                :1;
						uint32_t FBM11                :1;
						uint32_t FBM12                :1;
						uint32_t FBM13                :1;
						uint32_t CAN_FM1R_1_FBM14     :1;
						uint32_t CAN_FM1R_1_FBM15     :1;
						uint32_t CAN_FM1R_1_FBM16     :1;
						uint32_t CAN_FM1R_1_FBM17     :1;
						uint32_t CAN_FM1R_1_FBM18     :1;
						uint32_t CAN_FM1R_1_FBM19     :1;
						uint32_t CAN_FM1R_1_FBM20     :1;
						uint32_t CAN_FM1R_1_FBM21     :1;
						uint32_t CAN_FM1R_1_FBM22     :1;
						uint32_t CAN_FM1R_1_FBM23     :1;
						uint32_t CAN_FM1R_1_FBM24     :1;
						uint32_t CAN_FM1R_1_FBM25     :1;
						uint32_t CAN_FM1R_1_FBM26     :1;
						uint32_t CAN_FM1R_1_FBM27     :1;
						uint32_t                      :4;
					};
					#ifdef CAN_FM1R_2
					struct
					{
						uint32_t FBM                  :14;
						uint32_t                      :18;
					};
					#endif
				};
				
			};
			#endif

			#ifdef CAN_FMR
			struct FMR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t FINIT                :1;
					uint32_t                      :7;
					uint32_t CAN_FMR_CAN2SB       :6;
					uint32_t                      :18;

				
			};
			#endif

			#ifdef CAN_FS1R
			struct FS1R_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					#ifdef CAN_FS1R_0
					struct
					{
						uint32_t FSC                  :28;
						uint32_t                      :4;
					};
					#endif
					struct
					{
						uint32_t FSC0                 :1;
						uint32_t FSC1                 :1;
						uint32_t FSC2                 :1;
						uint32_t FSC3                 :1;
						uint32_t FSC4                 :1;
						uint32_t FSC5                 :1;
						uint32_t FSC6                 :1;
						uint32_t FSC7                 :1;
						uint32_t FSC8                 :1;
						uint32_t FSC9                 :1;
						uint32_t FSC10                :1;
						uint32_t FSC11                :1;
						uint32_t FSC12                :1;
						uint32_t FSC13                :1;
						uint32_t CAN_FS1R_1_FSC14     :1;
						uint32_t CAN_FS1R_1_FSC15     :1;
						uint32_t CAN_FS1R_1_FSC16     :1;
						uint32_t CAN_FS1R_1_FSC17     :1;
						uint32_t CAN_FS1R_1_FSC18     :1;
						uint32_t CAN_FS1R_1_FSC19     :1;
						uint32_t CAN_FS1R_1_FSC20     :1;
						uint32_t CAN_FS1R_1_FSC21     :1;
						uint32_t CAN_FS1R_1_FSC22     :1;
						uint32_t CAN_FS1R_1_FSC23     :1;
						uint32_t CAN_FS1R_1_FSC24     :1;
						uint32_t CAN_FS1R_1_FSC25     :1;
						uint32_t CAN_FS1R_1_FSC26     :1;
						uint32_t CAN_FS1R_1_FSC27     :1;
						uint32_t                      :4;
					};
					#ifdef CAN_FS1R_2
					struct
					{
						uint32_t FSC                  :14;
						uint32_t                      :18;
					};
					#endif
				};
				
			};
			#endif

			#ifdef CAN_IER
			struct IER_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t TMEIE                :1;
					uint32_t FMPIE0               :1;
					uint32_t FFIE0                :1;
					uint32_t FOVIE0               :1;
					uint32_t FMPIE1               :1;
					uint32_t FFIE1                :1;
					uint32_t FOVIE1               :1;
					uint32_t                      :1;
					uint32_t EWGIE                :1;
					uint32_t EPVIE                :1;
					uint32_t BOFIE                :1;
					uint32_t LECIE                :1;
					uint32_t                      :3;
					uint32_t ERRIE                :1;
					uint32_t WKUIE                :1;
					uint32_t SLKIE                :1;
					uint32_t                      :14;

				
			};
			#endif

			#ifdef CAN_MCR
			struct MCR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t INRQ                 :1;
					uint32_t SLEEP                :1;
					uint32_t TXFP                 :1;
					uint32_t RFLM                 :1;
					uint32_t NART                 :1;
					uint32_t AWUM                 :1;
					uint32_t ABOM                 :1;
					uint32_t TTCM                 :1;
					uint32_t                      :7;
					uint32_t RESET                :1;
					uint32_t CAN_MCR_DBF          :1;
					uint32_t                      :15;

				
			};
			#endif

			#ifdef CAN_MSR
			struct MSR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t INAK                 :1;
					uint32_t SLAK                 :1;
					uint32_t ERRI                 :1;
					uint32_t WKUI                 :1;
					uint32_t SLAKI                :1;
					uint32_t                      :3;
					uint32_t TXM                  :1;
					uint32_t RXM                  :1;
					uint32_t SAMP                 :1;
					uint32_t RX                   :1;
					uint32_t                      :20;

				
			};
			#endif

			#ifdef CAN_RF0R
			struct RF0R_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t FMP0                 :2;
					uint32_t                      :1;
					uint32_t FULL0                :1;
					uint32_t FOVR0                :1;
					uint32_t RFOM0                :1;
					uint32_t                      :26;

				
			};
			#endif

			#ifdef CAN_RF1R
			struct RF1R_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

					uint32_t FMP1                 :2;
					uint32_t                      :1;
					uint32_t FULL1                :1;
					uint32_t FOVR1                :1;
					uint32_t RFOM1                :1;
					uint32_t                      :26;

				
			};
			#endif

			#ifdef CAN_TSR
			struct TSR_TypeDef : public Reg32_t
			{
				using Reg32_t::operator=;

				union
				{
					struct
					{
						uint32_t RQCP0                :1;
						uint32_t TXOK0                :1;
						uint32_t ALST0                :1;
						uint32_t TERR0                :1;
						uint32_t                      :3;
						uint32_t ABRQ0                :1;
						uint32_t RQCP1                :1;
						uint32_t TXOK1                :1;
						uint32_t ALST1                :1;
						uint32_t TERR1                :1;
						uint32_t                      :3;
						uint32_t ABRQ1                :1;
						uint32_t RQCP2                :1;
						uint32_t TXOK2                :1;
						uint32_t ALST2                :1;
						uint32_t TERR2                :1;
						uint32_t                      :3;
						uint32_t ABRQ2                :1;
						uint32_t CODE                 :2;
						uint32_t TME                  :3;
						uint32_t LOW                  :3;
					};
					struct
					{
						uint32_t                      :26;
						uint32_t TME0                 :1;
						uint32_t TME1                 :1;
						uint32_t TME2                 :1;
						uint32_t LOW0                 :1;
						uint32_t LOW1                 :1;
						uint32_t LOW2                 :1;
					};
				};
				
			};
			#endif

			union
			{

				struct
				{
					MCR_TypeDef MCR;     // @0x000
					MSR_TypeDef MSR;     // @0x004
					TSR_TypeDef TSR;     // @0x008
					RF0R_TypeDef RF0R;   // @0x00c
					RF1R_TypeDef RF1R;   // @0x010
					IER_TypeDef IER;     // @0x014
					ESR_TypeDef ESR;     // @0x018
					BTR_TypeDef BTR;     // @0x01c
					__SOOL_PERIPH_PADDING_256;
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_32;
					CAN_TxMailBox sTxMailBox[3]; // @0x180
					CAN_FIFOMailBox sFIFOMailBox[2]; // @0x1b0
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
					FMR_TypeDef FMR;     // @0x200
					FM1R_TypeDef FM1R;   // @0x204
					__SOOL_PERIPH_PADDING_4;
					FS1R_TypeDef FS1R;   // @0x20c
					__SOOL_PERIPH_PADDING_4;
					FFA1R_TypeDef FFA1R; // @0x214
					__SOOL_PERIPH_PADDING_4;
					FA1R_TypeDef FA1R;   // @0x21c
					__SOOL_PERIPH_PADDING_32;
					CAN_MAP0_sFilterRegister; // @0x240
				};
				struct
				{
					__SOOL_PERIPH_PADDING_512;
					__SOOL_PERIPH_PADDING_64;
					CAN_MAP1_sFilterRegister; // @0x240
					__SOOL_PERIPH_PADDING_64;
					__SOOL_PERIPH_PADDING_32;
					__SOOL_PERIPH_PADDING_16;
				};
			};
			private:
			CAN() = delete;
			
		};

//endregion
//region instances
		#if defined(STM32F042x6 ) || defined(STM32F048xx ) || defined(STM32F072xB ) || defined(STM32F078xx ) ||\
    defined(STM32F091xC ) || defined(STM32F098xx ) || defined(STM32F302x8 ) || defined(STM32F302xC ) ||\
    defined(STM32F302xE ) || defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE ) ||\
    defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32F358xx ) || defined(STM32F373xC ) ||\
    defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32L4     ) || defined(STM32L4P    )
#define CAN_BASE_ADDR ((uint32_t)0x40006400U)
#endif

#if defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F103xG ) ||\
    defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F7     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define CAN1_BASE_ADDR ((uint32_t)0x40006400U)
#endif

#if defined(STM32F105xC ) || defined(STM32F107xC ) || defined(STM32F2     ) || defined(STM32F405xx ) ||\
    defined(STM32F407xx ) || defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
    defined(STM32F412Zx ) || defined(STM32F413xx ) || defined(STM32F415xx ) || defined(STM32F417xx ) ||\
    defined(STM32F423xx ) || defined(STM32F427xx ) || defined(STM32F429xx ) || defined(STM32F437xx ) ||\
    defined(STM32F439xx ) || defined(STM32F446xx ) || defined(STM32F469xx ) || defined(STM32F479xx ) ||\
    defined(STM32F745xx ) || defined(STM32F746xx ) || defined(STM32F756xx ) || defined(STM32F765xx ) ||\
    defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) || defined(STM32F779xx ) ||\
    defined(STM32L496xx ) || defined(STM32L4A6xx )
#define CAN2_BASE_ADDR ((uint32_t)0x40006800U)
#endif

#if defined(STM32F413xx ) || defined(STM32F423xx )
#define CAN3_BASE_ADDR ((uint32_t)0x40006C00U)
#endif

#if defined(STM32F765xx ) || defined(STM32F767xx ) || defined(STM32F769xx ) || defined(STM32F777xx ) ||\
    defined(STM32F779xx )
#define CAN3_BASE_ADDR ((uint32_t)0x40003400U)
#endif

#ifdef CAN_BASE_ADDR
volatile class CAN * const CAN = reinterpret_cast<class CAN* const>(CAN_BASE_ADDR);
#endif
#ifdef CAN1_BASE_ADDR
volatile class CAN * const CAN1 = reinterpret_cast<class CAN* const>(CAN1_BASE_ADDR);
#endif
#ifdef CAN2_BASE_ADDR
volatile class CAN * const CAN2 = reinterpret_cast<class CAN* const>(CAN2_BASE_ADDR);
#endif
#ifdef CAN3_BASE_ADDR
volatile class CAN * const CAN3 = reinterpret_cast<class CAN* const>(CAN3_BASE_ADDR);
#endif
//endregion
//region peripheral-definition
		
//endregion
	};
};
//region undef
#undef CAN_FA1R_1_FACT14
#undef CAN_FA1R_1_FACT15
#undef CAN_FA1R_1_FACT16
#undef CAN_FA1R_1_FACT17
#undef CAN_FA1R_1_FACT18
#undef CAN_FA1R_1_FACT19
#undef CAN_FA1R_1_FACT20
#undef CAN_FA1R_1_FACT21
#undef CAN_FA1R_1_FACT22
#undef CAN_FA1R_1_FACT23
#undef CAN_FA1R_1_FACT24
#undef CAN_FA1R_1_FACT25
#undef CAN_FA1R_1_FACT26
#undef CAN_FA1R_1_FACT27
#undef CAN_FFA1R_1_FFA14
#undef CAN_FFA1R_1_FFA15
#undef CAN_FFA1R_1_FFA16
#undef CAN_FFA1R_1_FFA17
#undef CAN_FFA1R_1_FFA18
#undef CAN_FFA1R_1_FFA19
#undef CAN_FFA1R_1_FFA20
#undef CAN_FFA1R_1_FFA21
#undef CAN_FFA1R_1_FFA22
#undef CAN_FFA1R_1_FFA23
#undef CAN_FFA1R_1_FFA24
#undef CAN_FFA1R_1_FFA25
#undef CAN_FFA1R_1_FFA26
#undef CAN_FFA1R_1_FFA27
#undef CAN_FM1R_1_FBM14
#undef CAN_FM1R_1_FBM15
#undef CAN_FM1R_1_FBM16
#undef CAN_FM1R_1_FBM17
#undef CAN_FM1R_1_FBM18
#undef CAN_FM1R_1_FBM19
#undef CAN_FM1R_1_FBM20
#undef CAN_FM1R_1_FBM21
#undef CAN_FM1R_1_FBM22
#undef CAN_FM1R_1_FBM23
#undef CAN_FM1R_1_FBM24
#undef CAN_FM1R_1_FBM25
#undef CAN_FM1R_1_FBM26
#undef CAN_FM1R_1_FBM27
#undef CAN_FS1R_1_FSC14
#undef CAN_FS1R_1_FSC15
#undef CAN_FS1R_1_FSC16
#undef CAN_FS1R_1_FSC17
#undef CAN_FS1R_1_FSC18
#undef CAN_FS1R_1_FSC19
#undef CAN_FS1R_1_FSC20
#undef CAN_FS1R_1_FSC21
#undef CAN_FS1R_1_FSC22
#undef CAN_FS1R_1_FSC23
#undef CAN_FS1R_1_FSC24
#undef CAN_FS1R_1_FSC25
#undef CAN_FS1R_1_FSC26
#undef CAN_FS1R_1_FSC27
#undef CAN_FMR_CAN2SB
#undef CAN_MCR_DBF
#undef CAN_MAP0_sFilterRegister
#undef CAN_MAP1_sFilterRegister

//endregion
#endif // chips selection
#endif //__SOOL_CAN_H
