/**
 * Copyright (c) 2018 FAUCHER Julien & FRANCE Loic
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
#ifndef __SOOL_CMSIS_CONFIG_H
#define __SOOL_CMSIS_CONFIG_H

#include "../../sool_chip_setup.h"
#include "system_stm32.h"

#ifdef __cplusplus
extern "C" {
#endif

#if defined(STM32F0     )
#define __CM0_REV               0x0U
#endif
#if defined(STM32F0     ) || defined(STM32F100xB ) || defined(STM32F100xE ) || defined(STM32F101x6 ) || \
    defined(STM32F101xB ) || defined(STM32F101xE ) || defined(STM32F102x6 ) || defined(STM32F102xB ) || \
    defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) || defined(STM32F105xC ) || \
    defined(STM32F107xC ) || defined(STM32F301x8 ) || defined(STM32F302x8 ) || defined(STM32F303x8 ) || \
    defined(STM32F318xx ) || defined(STM32F328xx ) || defined(STM32F334x8 ) || defined(STM32L011xx ) || \
    defined(STM32L021xx ) || defined(STM32L031xx ) || defined(STM32L041xx )
#define __MPU_PRESENT             0
#endif
#if defined(STM32F0     ) || defined(STM32L0     )
#define __NVIC_PRIO_BITS          2
#endif
#if defined(STM32F0     ) || defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || \
    defined(STM32F4     ) || defined(STM32H7     ) || defined(STM32L0     ) || defined(STM32L1     ) || \
    defined(STM32L4     ) || defined(STM32L4P    )
#define __Vendor_SysTickConfig    0
#endif
#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32L1     )
#define __CM3_REV               0x512U
#endif
#if defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F3     ) || defined(STM32F4     ) || \
    defined(STM32H7     ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define __NVIC_PRIO_BITS          4
#endif
#if defined(STM32F101xG ) || defined(STM32F103xG ) || defined(STM32F2     ) || defined(STM32F302xC ) || \
    defined(STM32F302xE ) || defined(STM32F303xC ) || defined(STM32F303xE ) || defined(STM32F358xx ) || \
    defined(STM32F373xC ) || defined(STM32F378xx ) || defined(STM32F398xx ) || defined(STM32F4     ) || \
    defined(STM32H7     ) || defined(STM32L051xx ) || defined(STM32L052xx ) || defined(STM32L053xx ) || \
    defined(STM32L061xx ) || defined(STM32L062xx ) || defined(STM32L063xx ) || defined(STM32L071xx ) || \
    defined(STM32L072xx ) || defined(STM32L073xx ) || defined(STM32L081xx ) || defined(STM32L082xx ) || \
    defined(STM32L083xx ) || defined(STM32L1     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define __MPU_PRESENT             1
#endif
#if defined(STM32F3     ) || defined(STM32F4     ) || defined(STM32L4     ) || defined(STM32L4P    )
#define __CM4_REV               0x1U
#endif
#if defined(STM32F3     ) || defined(STM32F4     ) || defined(STM32H7     ) || defined(STM32L4     ) || \
    defined(STM32L4P    )
#define __FPU_PRESENT             1
#endif
#if defined(STM32H7     )
#define __CM7_REV               0x256U
#define __ICACHE_PRESENT          1
#define __DCACHE_PRESENT          1
#endif
#if defined(STM32L0     )
#define __CM0PLUS_REV           0x0U
#define __VTOR_PRESENT            1
#endif

#ifdef __cplusplus
}
#endif

#endif //SOOL_IRQ_H