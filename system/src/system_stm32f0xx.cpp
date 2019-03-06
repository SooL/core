/**
  ******************************************************************************
  * @file    system_stm32f0xx.c
  * @author  MCD Application Team
  * @brief   CMSIS Cortex-M0 Device Peripheral Access Layer System Source File.
  *
  * 1. This file provides two functions and one global variable to be called from
  *    user application:
  *      - SystemInit(): This function is called at startup just after reset and 
  *                      before branch to main program. This call is made inside
  *                      the "startup_stm32f0xx.s" file.
  *
  *      - SystemCoreClock variable: Contains the core clock (HCLK), it can be used
  *                                  by the user application to setup the SysTick
  *                                  timer or configure other parameters.
  *
  *      - SystemCoreClockUpdate(): Updates the variable SystemCoreClock and must
  *                                 be called whenever the core clock is changed
  *                                 during program execution.
  *
  * 2. After each device reset the HSI (8 MHz) is used as system clock source.
  *    Then SystemInit() function is called, in "startup_stm32f0xx.s" file, to
  *    configure the system clock before to branch to main program.
  *
  * 3. This file configures the system clock as follows:
  *=============================================================================
  *                         Supported STM32F0xx device
  *-----------------------------------------------------------------------------
  *        System Clock source                    | HSI
  *-----------------------------------------------------------------------------
  *        SYSCLK(Hz)                             | 8000000
  *-----------------------------------------------------------------------------
  *        HCLK(Hz)                               | 8000000
  *-----------------------------------------------------------------------------
  *        AHB Prescaler                          | 1
  *-----------------------------------------------------------------------------
  *        APB1 Prescaler                         | 1
  *-----------------------------------------------------------------------------
  *=============================================================================
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

#include "stdint.h"
#include "../include/system_stm32.h"
#include "../../sool_chip_setup.h"
#include "../../include/RCC.h"

#ifdef STM32F0

#ifndef HSE_VALUE // External oscillator frequency in Hz.
#define HSE_VALUE		((uint32_t)8000000)
#endif

#ifndef HSI_VALUE // Internal oscillator frequency in Hz.
#define HSI_VALUE		((uint32_t)8000000)
#endif

#ifndef HSI48_VALUE // HSI48 Internal oscillator frequency in Hz.
#define HSI48_VALUE		((uint32_t)48000000)
#endif

uint32_t SystemCoreClock = 8000000;

const uint8_t AHBPrescTable[16] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9};
const uint8_t APBPrescTable[8]  = {0, 0, 0, 0, 1, 2, 3, 4};

static void _SystemInit()
{
	// Reset the RCC clock configuration to the default reset state
	using namespace sool::core;
	RCC->CR.HSION = 1;

#if defined (STM32F051x8) || defined (STM32F058x8)
	RCC->CFGR &= (uint32_t)0xF8FFB80CU; // Reset SW, HPRE, PPRE, ADCPRE and MCOSEL
#else
	RCC->CFGR &= (uint32_t)0x08FFB80CU; // Reset SW, HPRE, PPRE, ADCPRE, MCOSEL, MCOPRE and PLLNODIV
#endif

	RCC->CR &= (uint32_t)0xFEF6FFFFU; // Reset HSEON, CSSON, PLLON

	RCC->CR.HSEBYP = 0;

	RCC->CFGR &= (uint32_t)0xFFC0FFFFU; // Reset PLLSRC, PLLXTPRE, PLLMUL

	RCC->CFGR2.PREDIV = 0;

#if defined (STM32F072xB) || defined (STM32F078xx)
	RCC->CFGR3 &= (uint32_t)0xFFFCFE2CU; // Reset USART2SW, USART1SW, I2C1SW, CECSW, USBSW and ADCSW

#elif defined (STM32F071xB)
	RCC->CFGR3 &= (uint32_t)0xFFFFCEACU; // Reset USART2SW, USART1SW, I2C1SW, CECSW and ADCSW

#elif defined (STM32F091xC) || defined (STM32F098x)
	RCC->CFGR3 &= (uint32_t)0xFFF0FEACU; // Reset USART3SW, USART2SW, USART1SW, I2C1SW, CECSW and ADCSW

#elif defined (STM32F030x6) || defined (STM32F030x8) || defined (STM32F031x6) || defined (STM32F038xx) || defined (STM32F030xC)
	RCC->CFGR3 &= (uint32_t)0xFFFFFEECU; // Reset USART1SW, I2C1SW and ADCSW

#elif defined (STM32F051x8) || defined (STM32F058xx)
	RCC->CFGR3 &= (uint32_t)0xFFFFFEACU; // Reset USART1SW, I2C1SW, CECSW and ADCSW

#elif defined (STM32F042x6) || defined (STM32F048xx)
	RCC->CFGR3 &= (uint32_t)0xFFFFFE2CU; // Reset USART1SW, I2C1SW, CECSW, USBSW and ADCSW

#elif defined (STM32F070x6) || defined (STM32F070xB)

	RCC->CFGR3 &= (uint32_t)0xFFFFFE6CU; // Reset USART1SW, I2C1SW, USBSW and ADCSW
	RCC->CFGR3.USBSW = 1; // Set default USB clock to PLLCLK, since there is no HSI48
#else
#warning "No target selected"
#endif
	RCC->CR2.HSI14ON = 0;
	RCC->CIR = 0x00000000U;// Disable all interrupts

	SystemCoreClockUpdate();
}
extern "C"
{
/**
  * @brief  Setup the microcontroller System.
  *         Initialize the default HSI clock source, vector table location and the PLL configuration is reset.
  * @param  None
  * @retval None
  */
	void SystemInit(void)
	{
		_SystemInit();
	}
}

/**
   * @brief  Update SystemCoreClock variable according to Clock Register Values.
  *         The SystemCoreClock variable contains the core clock (HCLK), it can
  *         be used by the user application to setup the SysTick timer or configure
  *         other parameters.
  *
  * @note   Each time the core clock (HCLK) changes, this function must be called
  *         to update SystemCoreClock variable value. Otherwise, any configuration
  *         based on this variable will be incorrect.
  *
  * @note   - The System frequency computed by this function is not the real
  *           frequency in the chip. It is calculated based on the predefined
  *           constant and the selected clock source:
  *
  *           - If SYSCLK source is HSI, SystemCoreClock will contain the HSI_VALUE(*)
  *
  *           - If SYSCLK source is HSE, SystemCoreClock will contain the HSE_VALUE(**)
  *
  *           - If SYSCLK source is PLL, SystemCoreClock will contain the HSE_VALUE(**)
  *             or HSI_VALUE(*) multiplied/divided by the PLL factors.
  *
  *         (*) HSI_VALUE is a constant defined in stm32f0xx_hal.h file (default value
  *             8 MHz) but the real value may vary depending on the variations
  *             in voltage and temperature.
  *
  *         (**) HSE_VALUE is a constant defined in stm32f0xx_hal.h file (default value
  *              8 MHz), user has to ensure that HSE_VALUE is same as the real
  *              frequency of the crystal used. Otherwise, this function may
  *              have wrong result.
  *
  *         - The result of this function could be not correct when using fractional
  *           value for HSE crystal.
  *
  * @param  None
  * @retval None
  */

void SystemCoreClockUpdate (void)
{
  using namespace sool::core;
  uint32_t tmp = 0, pllmull = 0, pllsource = 0, predivfactor = 0;

  // Get SYSCLK source -------------------------------------------------------
  tmp = RCC->CFGR.SWS;

  switch (tmp)
  {
	case 0:  // HSI used as System clock
	  SystemCoreClock = HSI_VALUE;
	  break;
	case 1:  // HSE used as System clock
	  SystemCoreClock = HSE_VALUE;
	  break;
	case 2:  // PLL used as System clock
	  // Get PLL clock source and multiplication factor ----------------------
	  pllmull = RCC->CFGR.PLLMUL + 2;
	  pllsource = RCC->CFGR.PLLSRC;

	  predivfactor = (RCC->CFGR2.PREDIV) + 1;

	  if (pllsource == 2) //HSE_PREDIV
	  {
		// HSE used as PLL clock source : SystemCoreClock = HSE/PREDIV * PLLMUL
		SystemCoreClock = (HSE_VALUE/predivfactor) * pllmull;
	  }
#if defined(STM32F042x6) || defined(STM32F048xx) || defined(STM32F072xB) || defined(STM32F078xx) || defined(STM32F091xC) || defined(STM32F098xx)
	  else if (pllsource == 3) //HSI48_PREDIV
	  {
		// HSI48 used as PLL clock source : SystemCoreClock = HSI48/PREDIV * PLLMUL
		SystemCoreClock = (HSI48_VALUE/predivfactor) * pllmull;
	  }
#endif // STM32F042x6 || STM32F048xx || STM32F072xB || STM32F078xx || STM32F091xC || STM32F098xx
	  else
	  {
#if defined(STM32F042x6) || defined(STM32F048xx)  || defined(STM32F070x6) \
 || defined(STM32F078xx) || defined(STM32F071xB)  || defined(STM32F072xB) \
 || defined(STM32F070xB) || defined(STM32F091xC) || defined(STM32F098xx)  || defined(STM32F030xC)
		// HSI used as PLL clock source : SystemCoreClock = HSI/PREDIV * PLLMUL
		SystemCoreClock = (HSI_VALUE/predivfactor) * pllmull;
#else
		// HSI used as PLL clock source : SystemCoreClock = HSI/2 * PLLMUL
		SystemCoreClock = (HSI_VALUE >> 1) * pllmull;
#endif
	  }
	  break;
	default: // HSI used as System clock
	  SystemCoreClock = HSI_VALUE;
	  break;
  }
  // Compute HCLK clock frequency ----------------
  // Get HCLK prescaler
  tmp = AHBPrescTable[RCC->CFGR.HPRE];
  // HCLK clock frequency
  SystemCoreClock >>= tmp;
}

#endif // STM32F0
