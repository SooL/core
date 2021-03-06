/**
  ******************************************************************************
  * @file    system_stm32f3xx.c
  * @author  MCD Application Team
  * @brief   CMSIS Cortex-M4 Device Peripheral Access Layer System Source File.
  *
  * 1. This file provides two functions and one global variable to be called from
  *    user application:
  *      - SystemInit(): This function is called at startup just after reset and 
  *                      before branch to main program. This call is made inside
  *                      the "startup_stm32f3xx.s" file.
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
  *    Then SystemInit() function is called, in "startup_stm32f3xx.s" file, to
  *    configure the system clock before to branch to main program.
  *
  * 3. This file configures the system clock as follows:
  *=============================================================================
  *                         Supported STM32F3xx device
  *-----------------------------------------------------------------------------
  *        System Clock source                    | HSI
  *-----------------------------------------------------------------------------
  *        SYSCLK(Hz)                             | 8000000
  *-----------------------------------------------------------------------------
  *        HCLK(Hz)                               | 8000000
  *-----------------------------------------------------------------------------
  *        AHB Prescaler                          | 1
  *-----------------------------------------------------------------------------
  *        APB2 Prescaler                         | 1
  *-----------------------------------------------------------------------------
  *        APB1 Prescaler                         | 1
  *-----------------------------------------------------------------------------
  *        USB Clock                              | DISABLE
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
#include "../../include/FLASH.h"

#ifdef STM32F3

// Uncomment the following line if you need to relocate your vector Table in Internal SRAM.
// #define VECT_TAB_SRAM
#define VECT_TAB_OFFSET  0x0 // Vector Table base offset field. Must be a multiple of 0x200.

  /* This variable is updated in three ways:
	  1) by calling CMSIS function SystemCoreClockUpdate()
	  2) by calling HAL API function HAL_RCC_GetHCLKFreq()
	  3) each time HAL_RCC_ClockConfig() is called to configure the system clock frequency
		 Note: If you use this function to configure the system clock there is no need to
			   call the 2 first functions listed above, since SystemCoreClock variable is
			   updated automatically.
  */
uint32_t SystemCoreClock = 8000000;

const uint8_t AHBPrescTable[16] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 6, 7, 8, 9};
const uint8_t APBPrescTable[8]  = {0, 0, 0, 0, 1, 2, 3, 4};

static void _SystemInit(void)
{
	using namespace sool::core;
  // FPU settings ------------------------------------------------------------
#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)
	SCB->CPACR |= ((3UL << 10*2)|(3UL << 11*2));  // set CP10 and CP11 Full Access
#endif

  // Reset the RCC clock configuration to the default reset state ------------

  RCC->CR |= 0x00000001U; // Set HSION bit

  RCC->CFGR &= 0xF87FC00CU; // Reset CFGR register

  RCC->CR &= 0xFEF6FFFFU; // Reset HSEON, CSSON and PLLON bits

  RCC->CR &= 0xFFFBFFFFU; // Reset HSEBYP bit

  RCC->CFGR &= 0xFF80FFFFU; // Reset PLLSRC, PLLXTPRE, PLLMUL and USBPRE bits

  RCC->CFGR2 &= 0xFFFFFFF0U; // Reset PREDIV1[3:0] bits

  RCC->CFGR3 &= 0xFF00FCCCU; // Reset USARTSW[1:0], I2CSW and TIMs bits

  RCC->CIR = 0x00000000U; // Disable all interrupts

#ifdef VECT_TAB_SRAM
  SCB->VTOR = SRAM_BASE | VECT_TAB_OFFSET; // Vector Table Relocation in Internal SRAM
#else
  SCB->VTOR = 0x08000000 | VECT_TAB_OFFSET;
  //SCB->VTOR = FLASH_BASE_ADDR | VECT_TAB_OFFSET; // Vector Table Relocation in Internal FLASH
#endif
}
extern "C" {
/**
  * @brief  Setup the microcontroller system
  *         Initialize the FPU setting, vector table location and the PLL configuration is reset.
  * @param  None
  * @retval None
  */
	void SystemInit()
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
  * @note   - The system frequency computed by this function is not the real
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
  *         (*) HSI_VALUE is a constant defined in stm32f3xx_hal.h file (default value
  *             8 MHz) but the real value may vary depending on the variations
  *             in voltage and temperature.
  *
  *         (**) HSE_VALUE is a constant defined in stm32f3xx_hal.h file (default value
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
		case 0:  // HSI used as system clock
			SystemCoreClock = HSI_VALUE;
			break;
		case 1:  // HSE used as system clock
			SystemCoreClock = HSE_VALUE;
			break;
		case 2:  // PLL used as system clock
			// Get PLL clock source and multiplication factor ----------------------
			pllmull = RCC->CFGR.PLLMUL + 2;
			pllsource = RCC->CFGR.PLLSRC;

#if defined (STM32F302xE) || defined (STM32F303xE) || defined (STM32F398xx)
			predivfactor = (RCC->CFGR2.PREDIV) + 1;
			if (pllsource == 2) // HSE oscillator clock selected as PREDIV1 clock entry
				SystemCoreClock = (HSE_VALUE / predivfactor) * pllmull;
			else // HSI oscillator clock selected as PREDIV1 clock entry
				SystemCoreClock = (HSI_VALUE / predivfactor) * pllmull;
#else
			if (pllsource == 0) // HSI oscillator clock divided by 2 selected as PLL clock entry
				SystemCoreClock = (HSI_VALUE >> 1) * pllmull;
			else // HSE oscillator clock selected as PREDIV1 clock entry
			{
				predivfactor = RCC->CFGR2.PREDIV + 1;
				SystemCoreClock = (HSE_VALUE / predivfactor) * pllmull;
			}
#endif // STM32F302xE || STM32F303xE || STM32F398xx
			break;
		default: // HSI used as system clock
			SystemCoreClock = HSI_VALUE;
			break;
	}
	// Compute HCLK clock frequency ----------------
	// Get HCLK prescaler
	tmp = AHBPrescTable[RCC->CFGR.HPRE];
	// HCLK clock frequency
	SystemCoreClock >>= tmp;
}

#endif // STM32F3
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

