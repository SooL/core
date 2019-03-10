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
#ifndef __SOOL_CHIP_SETUP_H
#define __SOOL_CHIP_SETUP_H
//##############################################################################
//#                                 F0  Series                                 #
//##############################################################################
//#define STM32F030x6
//#define STM32F030x8
//#define STM32F030xC
//#define STM32F031x6
//#define STM32F038xx
//#define STM32F042x6
//#define STM32F048xx
//#define STM32F051x8
//#define STM32F058xx
//#define STM32F070x6
//#define STM32F070xB
//#define STM32F071xB
//#define STM32F072xB
//#define STM32F078xx
//#define STM32F091xC
//#define STM32F098xx

#define __SOOL_NB_STM32F0 \
    defined(STM32F030x6 ) + defined(STM32F030x8 ) + defined(STM32F030xC ) +\
    defined(STM32F031x6 ) + defined(STM32F038xx ) + defined(STM32F042x6 ) +\
    defined(STM32F048xx ) + defined(STM32F051x8 ) + defined(STM32F058xx ) +\
    defined(STM32F070x6 ) + defined(STM32F070xB ) + defined(STM32F071xB ) +\
    defined(STM32F072xB ) + defined(STM32F078xx ) + defined(STM32F091xC ) +\
    defined(STM32F098xx )
#if __SOOL_NB_STM32F0 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F0 == 1
#define STM32F0
#endif

//##############################################################################
//#                                 F1  Series                                 #
//##############################################################################
//#define STM32F100xB
//#define STM32F100xE
//#define STM32F101x6
//#define STM32F101xB
//#define STM32F101xE
//#define STM32F101xG
//#define STM32F102x6
//#define STM32F102xB
//#define STM32F103x6
//#define STM32F103xB
//#define STM32F103xE
//#define STM32F103xG
//#define STM32F105xC
//#define STM32F107xC

#define __SOOL_NB_STM32F1 \
    defined(STM32F100xB ) + defined(STM32F100xE ) + defined(STM32F101x6 ) +\
    defined(STM32F101xB ) + defined(STM32F101xE ) + defined(STM32F101xG ) +\
    defined(STM32F102x6 ) + defined(STM32F102xB ) + defined(STM32F103x6 ) +\
    defined(STM32F103xB ) + defined(STM32F103xE ) + defined(STM32F103xG ) +\
    defined(STM32F105xC ) + defined(STM32F107xC )
#if __SOOL_NB_STM32F1 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F1 == 1
#define STM32F1
#endif

//##############################################################################
//#                                 F2  Series                                 #
//##############################################################################
//#define STM32F205xx
//#define STM32F207xx
//#define STM32F215xx
//#define STM32F217xx

#define __SOOL_NB_STM32F2 \
    defined(STM32F205xx ) + defined(STM32F207xx ) + defined(STM32F215xx ) +\
    defined(STM32F217xx )
#if __SOOL_NB_STM32F2 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F2 == 1
#define STM32F2
#endif
//##############################################################################
//#                                 F3  Series                                 #
//##############################################################################
//#define STM32F301x8
//#define STM32F302x8
//#define STM32F302xC
//#define STM32F302xE
//#define STM32F303x8
//#define STM32F303xC
//#define STM32F303xE
//#define STM32F318xx
//#define STM32F328xx
//#define STM32F334x8
//#define STM32F358xx
//#define STM32F373xC
//#define STM32F378xx
//#define STM32F398xx

#define __SOOL_NB_STM32F3 \
    defined(STM32F301x8 ) + defined(STM32F302x8 ) + defined(STM32F302xC ) + \
    defined(STM32F302xE ) + defined(STM32F303x8 ) + defined(STM32F303xC ) + \
    defined(STM32F303xE ) + defined(STM32F318xx ) + defined(STM32F328xx ) + \
    defined(STM32F334x8 ) + defined(STM32F358xx ) + defined(STM32F373xC ) + \
    defined(STM32F378xx ) + defined(STM32F398xx )
#if __SOOL_NB_STM32F3 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F3 == 1
#define STM32F3
#endif

//##############################################################################
//#                                 F4  Series                                 #
//##############################################################################
//#define STM32F401xC
//#define STM32F401xE
//#define STM32F405xx
//#define STM32F407xx
//#define STM32F410Cx
//#define STM32F410Rx
//#define STM32F410Tx
//#define STM32F411xE
//#define STM32F412Cx
//#define STM32F412Rx
//#define STM32F412Vx
//#define STM32F412Zx
//#define STM32F413xx
//#define STM32F415xx
//#define STM32F417xx
//#define STM32F423xx
//#define STM32F427xx
//#define STM32F429xx
//#define STM32F437xx
//#define STM32F439xx
//#define STM32F446xx
//#define STM32F469xx
//#define STM32F479xx

#define __SOOL_NB_STM32F4 \
    defined(STM32F401xC ) + defined(STM32F401xE ) + defined(STM32F405xx ) +\
    defined(STM32F407xx ) + defined(STM32F410Cx ) + defined(STM32F410Rx ) +\
    defined(STM32F410Tx ) + defined(STM32F411xE ) + defined(STM32F412Cx ) +\
    defined(STM32F412Rx ) + defined(STM32F412Vx ) + defined(STM32F412Zx ) +\
    defined(STM32F413xx ) + defined(STM32F415xx ) + defined(STM32F417xx ) +\
    defined(STM32F423xx ) + defined(STM32F427xx ) + defined(STM32F429xx ) +\
    defined(STM32F437xx ) + defined(STM32F439xx ) + defined(STM32F446xx ) +\
    defined(STM32F469xx ) + defined(STM32F479xx )
#if __SOOL_NB_STM32F4 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F4 == 1
#define STM32F4
#endif

//##############################################################################
//#                                 F7  Series                                 #
//##############################################################################
//#define STM32F722xx
//#define STM32F723xx
//#define STM32F732xx
//#define STM32F733xx
//#define STM32F745xx
//#define STM32F746xx
//#define STM32F756xx
//#define STM32F765xx
//#define STM32F767xx
//#define STM32F769xx
//#define STM32F777xx
//#define STM32F779xx

#define __SOOL_NB_STM32F7 \
    defined(STM32F722xx ) + defined(STM32F723xx ) + defined(STM32F732xx ) +\
    defined(STM32F733xx ) + defined(STM32F745xx ) + defined(STM32F746xx ) +\
    defined(STM32F756xx ) + defined(STM32F765xx ) + defined(STM32F767xx ) +\
    defined(STM32F769xx ) + defined(STM32F777xx ) + defined(STM32F779xx )
#if __SOOL_NB_STM32F7 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F7 == 1
#define STM32F7
#endif

//##############################################################################
//#                                 H7  Series                                 #
//##############################################################################
//#define STM32H743xx
//#define STM32H750xx
//#define STM32H753xx

#define __SOOL_NB_STM32H7 \
    defined(STM32H743xx ) || defined(STM32H750xx ) || defined(STM32H753xx )
#if __SOOL_NB_STM32H7 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32H7 == 1
#define STM32H7
#endif

//##############################################################################
//#                                 L0  Series                                 #
//##############################################################################
//#define STM32L011xx
//#define STM32L021xx
//#define STM32L031xx
//#define STM32L041xx
//#define STM32L051xx
//#define STM32L052xx
//#define STM32L053xx
//#define STM32L061xx
//#define STM32L062xx
//#define STM32L063xx
//#define STM32L071xx
//#define STM32L072xx
//#define STM32L073xx
//#define STM32L081xx
//#define STM32L082xx
//#define STM32L083xx

#define __SOOL_NB_STM32L0 \
    defined(STM32L011xx ) + defined(STM32L021xx ) + defined(STM32L031xx ) +\
    defined(STM32L041xx ) + defined(STM32L051xx ) + defined(STM32L052xx ) +\
    defined(STM32L053xx ) + defined(STM32L061xx ) + defined(STM32L062xx ) +\
    defined(STM32L063xx ) + defined(STM32L071xx ) + defined(STM32L072xx ) +\
    defined(STM32L073xx ) + defined(STM32L081xx ) + defined(STM32L082xx ) +\
    defined(STM32L083xx )
#if __SOOL_NB_STM32L0 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32L0 == 1
#define STM32L0
#endif

//##############################################################################
//#                                 L1  Series                                 #
//##############################################################################
//#define STM32L100xB
//#define STM32L100xBA
//#define STM32L100xC
//#define STM32L151xB
//#define STM32L151xBA
//#define STM32L151xC
//#define STM32L151xCA
//#define STM32L151xD
//#define STM32L151xDx
//#define STM32L151xE
//#define STM32L152xB
//#define STM32L152xBA
//#define STM32L152xC
//#define STM32L152xCA
//#define STM32L152xD
//#define STM32L152xDx
//#define STM32L152xE
//#define STM32L162xC
//#define STM32L162xCA
//#define STM32L162xD
//#define STM32L162xDx
//#define STM32L162xE

#define __SOOL_NB_STM32L1 \
    defined(STM32L100xB ) + defined(STM32L100xBA) + defined(STM32L100xC ) +\
    defined(STM32L151xB ) + defined(STM32L151xBA) + defined(STM32L151xC ) +\
    defined(STM32L151xCA) + defined(STM32L151xD ) + defined(STM32L151xDx) +\
    defined(STM32L151xE ) + defined(STM32L152xB ) + defined(STM32L152xBA) +\
    defined(STM32L152xC ) + defined(STM32L152xCA) + defined(STM32L152xD ) +\
    defined(STM32L152xDx) + defined(STM32L152xE ) + defined(STM32L162xC ) +\
    defined(STM32L162xCA) + defined(STM32L162xD ) + defined(STM32L162xDx) +\
    defined(STM32L162xE )
#if __SOOL_NB_STM32L1 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32L1 == 1
#define STM32L1
#endif

//##############################################################################
//#                                 L4  Series                                 #
//##############################################################################
//#define STM32L431xx
//#define STM32L432xx
//#define STM32L433xx
//#define STM32L442xx
//#define STM32L443xx
//#define STM32L451xx
//#define STM32L452xx
//#define STM32L462xx
//#define STM32L471xx
//#define STM32L475xx
//#define STM32L476xx
//#define STM32L485xx
//#define STM32L486xx
//#define STM32L496xx
//#define STM32L4A6xx

#define __SOOL_NB_STM32L4 \
    defined(STM32L431xx ) + defined(STM32L432xx ) + defined(STM32L433xx ) +\
    defined(STM32L442xx ) + defined(STM32L443xx ) + defined(STM32L451xx ) +\
    defined(STM32L452xx ) + defined(STM32L462xx ) + defined(STM32L471xx ) +\
    defined(STM32L475xx ) + defined(STM32L476xx ) + defined(STM32L485xx ) +\
    defined(STM32L486xx ) + defined(STM32L496xx ) + defined(STM32L4A6xx )
#if __SOOL_NB_STM32L4 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32L4 == 1
#define STM32L4
#endif

//##############################################################################
//#                                 L4+ Series                                 #
//##############################################################################
//#define STM32L4R5xx
//#define STM32L4R7xx
//#define STM32L4R9xx
//#define STM32L4S5xx
//#define STM32L4S7xx
//#define STM32L4S9xx

#define __SOOL_NB_STM32L4P \
    defined(STM32L4R5xx ) + defined(STM32L4R7xx ) + defined(STM32L4R9xx ) +\
    defined(STM32L4S5xx ) + defined(STM32L4S7xx ) + defined(STM32L4S9xx )
#if __SOOL_NB_STM32L4P > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32L4P == 1
#define STM32L4P
#endif

#define __SOOL_NB_STM32 \
    (__SOOL_NB_STM32F0 + __SOOL_NB_STM32F1 + __SOOL_NB_STM32F2 + __SOOL_NB_STM32F3 +\
    __SOOL_NB_STM32F4 + __SOOL_NB_STM32F7 + __SOOL_NB_STM32H7 + __SOOL_NB_STM32L0 +\
    __SOOL_NB_STM32L1 + __SOOL_NB_STM32L4 + __SOOL_NB_STM32L4P)
#if __SOOL_NB_STM32 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32 == 0
#error No chip defined. Please define a chip before using this library
#endif

#undef __SOOL_NB_STM32F0
#undef __SOOL_NB_STM32F1
#undef __SOOL_NB_STM32F2
#undef __SOOL_NB_STM32F3
#undef __SOOL_NB_STM32F4
#undef __SOOL_NB_STM32F7
#undef __SOOL_NB_STM32H7
#undef __SOOL_NB_STM32L0
#undef __SOOL_NB_STM32L1
#undef __SOOL_NB_STM32L4
#undef __SOOL_NB_STM32L4P
#undef __SOOL_NB_STM32

#endif // __SOOL_CHIP_SETUP_H