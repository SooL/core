/**
  ******************************************************************************
  * @file    system_stm32f0xx.h
  * @author  MCD Application Team
  * @brief   CMSIS Cortex-M0 Device System Source File for STM32F0xx devices.  
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

#ifndef __SYSTEM_STM32F0XX_H
#define __SYSTEM_STM32F0XX_H

#include "../../sool_setup.h"
#include "../../sool_chip_setup.h"

#ifdef STM32F0
#define CORTEX_M0
#elif defined(STM32F1)
#define CORTEX_M3
#elif defined(STM32F2)
#define CORTEX_M3
#elif defined(STM32F3)
#define CORTEX_M4
#elif defined(STM32F4)
#define CORTEX_M4
#elif defined(STM32F7)
#define CORTEX_M7
#elif defined(STM32H7)
#define CORTEX_M7
#elif defined(STM32L0)
#define CORTEX_M0PLUS
#elif defined(STM32L1)
#define CORTEX_M3
#elif defined(STM32L4)
#define CORTEX_M4
#elif defined(STM32L4P)
#define CORTEX_M4
#else
#error chip family not defined
#endif
#if defined(CORTEX_M0)
#include "../cmsis/core_cm0.h"
#elif defined(CORTEX_M0PLUS)
#include "../cmsis/core_cm0plus.h"
#elif defined(CORTEX_M3)
#include "../cmsis/core_cm3.h"
#elif defined(CORTEX_M4)
#include "../cmsis/core_cm4.h"
#elif defined(CORTEX_M7)
#include "../cmsis/core_cm4.h"
#endif

/* This variable is updated by calling CMSIS function SystemCoreClockUpdate()
     Note: If you use this function to configure the System clock; then there
           is no need to call the 2 first functions listed above, since SystemCoreClock
           variable is updated automatically.
*/
extern uint32_t SystemCoreClock;            // System Clock Frequency (Core Clock)
#ifdef STM32H7
extern uint32_t SystemD2Clock;			// System Domain2 Clock Frequency  */
extern const  uint8_t D1CorePrescTable[16]; //D1CorePrescTable prescalers table values */
#else
extern const uint8_t AHBPrescTable[16];    // AHB prescalers table values
extern const uint8_t APBPrescTable[8];        // APB prescalers table values
#endif
#if defined(STM32L0) || defined(STM32L1)
extern const uint8_t PLLMulTable[9];
#elif defined(STM32L4) || defined(STM32LAP)
extern const uint32_t MSIRangeTable[12];
#endif
extern "C"
{
void SystemInit(void);
}

void SystemCoreClockUpdate(void);

#endif //__SYSTEM_STM32F0XX_H

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
