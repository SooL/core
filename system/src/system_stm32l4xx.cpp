/**
  ******************************************************************************
  * @file    system_stm32l4xx.c
  * @author  MCD Application Team
  * @brief   CMSIS Cortex-M4 Device Peripheral Access Layer System Source File
  *
  *   This file provides two functions and one global variable to be called from
  *   user application:
  *      - SystemInit(): This function is called at startup just after reset and
  *                      before branch to main program. This call is made inside
  *                      the "startup_stm32l4xx.s" file.
  *
  *      - SystemCoreClock variable: Contains the core clock (HCLK), it can be used
  *                                  by the user application to setup the SysTick
  *                                  timer or configure other parameters.
  *
  *      - SystemCoreClockUpdate(): Updates the variable SystemCoreClock and must
  *                                 be called whenever the core clock is changed
  *                                 during program execution.
  *
  *   After each device reset the MSI (4 MHz) is used as system clock source.
  *   Then SystemInit() function is called, in "startup_stm32l4xx.s" file, to
  *   configure the system clock before to branch to main program.
  *
  *   This file configures the system clock as follows:
  *=============================================================================
  *-----------------------------------------------------------------------------
  *        System Clock source                    | MSI
  *-----------------------------------------------------------------------------
  *        SYSCLK(Hz)                             | 4000000
  *-----------------------------------------------------------------------------
  *        HCLK(Hz)                               | 4000000
  *-----------------------------------------------------------------------------
  *        AHB Prescaler                          | 1
  *-----------------------------------------------------------------------------
  *        APB1 Prescaler                         | 1
  *-----------------------------------------------------------------------------
  *        APB2 Prescaler                         | 1
  *-----------------------------------------------------------------------------
  *        PLL_M                                  | 1
  *-----------------------------------------------------------------------------
  *        PLL_N                                  | 8
  *-----------------------------------------------------------------------------
  *        PLL_P                                  | 7
  *-----------------------------------------------------------------------------
  *        PLL_Q                                  | 2
  *-----------------------------------------------------------------------------
  *        PLL_R                                  | 2
  *-----------------------------------------------------------------------------
  *        PLLSAI1_P                              | NA
  *-----------------------------------------------------------------------------
  *        PLLSAI1_Q                              | NA
  *-----------------------------------------------------------------------------
  *        PLLSAI1_R                              | NA
  *-----------------------------------------------------------------------------
  *        PLLSAI2_P                              | NA
  *-----------------------------------------------------------------------------
  *        PLLSAI2_Q                              | NA
  *-----------------------------------------------------------------------------
  *        PLLSAI2_R                              | NA
  *-----------------------------------------------------------------------------
  *        Require 48MHz for USB OTG FS,          | Disabled
  *        SDIO and RNG clock                     |
  *-----------------------------------------------------------------------------
  *=============================================================================
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
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

/** @addtogroup CMSIS
  * @{
  */

/** @addtogroup stm32l4xx_system
  * @{
  */

/** @addtogroup STM32L4xx_System_Private_Includes
  * @{
  */


#include "stdint.h"
#include "../include/system_stm32.h"
#include "../../sool_chip_setup.h"
#include "../../include/RCC.h"
#include "../../include/FLASH.h"

#ifdef STM32L4
// Kept for history purpose, not sure what is exactly this address.
// #define FLASH_BASE ((uint32_t)0x40022000U)
#define FLASH_BASE ((uint32_t)0x08000000U)

//Uncomment the following line if you need to relocate your vector Table in Internal SRAM.
// #define VECT_TAB_SRAM
#define VECT_TAB_OFFSET  0x00 //Vector Table base offset field. This value must be a multiple of 0x200.
  /* The SystemCoreClock variable is updated in three ways:
	  1) by calling CMSIS function SystemCoreClockUpdate()
	  2) by calling HAL API function HAL_RCC_GetHCLKFreq()
	  3) each time HAL_RCC_ClockConfig() is called to configure the system clock frequency
		 Note: If you use this function to configure the system clock; then there
			   is no need to call the 2 first functions listed above, since SystemCoreClock
			   variable is updated automatically.
  */
  uint32_t SystemCoreClock = 4000000U;

  const uint8_t  AHBPrescTable[16] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 1U, 2U, 3U, 4U, 6U, 7U, 8U, 9U};
  const uint8_t  APBPrescTable[8] =  {0U, 0U, 0U, 0U, 1U, 2U, 3U, 4U};
  const uint32_t MSIRangeTable[12] = {100000U,   200000U,   400000U,   800000U,  1000000U,  2000000U, \
									  4000000U, 8000000U, 16000000U, 24000000U, 32000000U, 48000000U};

static void _SystemInit(void)
{
	using namespace sool::core;
	// FPU settings ------------------------------------------------------------
#if (__FPU_PRESENT == 1) && (__FPU_USED == 1)
	SCB->CPACR |= ((3UL << 10*2)|(3UL << 11*2));  // set CP10 and CP11 Full Access
#endif

	// Reset the RCC clock configuration to the default reset state ------------
	// Set MSION bit


	RCC->CR.MSION = 1;


	RCC->CFGR = 0x00000000U; // Reset CFGR register

	// Reset HSEON, CSSON , HSION, and PLLON bits
	RCC->CR.HSEON = 0;
	RCC->CR.HSION = 0;
	RCC->CR.PLLON = 0;


	// Reset PLLCFGR register
	RCC->PLLCFGR = 0x00001000U;

	// Reset HSEBYP bit
	RCC->CR.HSEBYP = 0;


	// Disable all interrupts
	RCC->CIER = 0x00000000U;

	// Configure the Vector Table location add offset address ------------------
#ifdef VECT_TAB_SRAM
	SCB->VTOR = SRAM_BASE | VECT_TAB_OFFSET; // Vector Table Relocation in Internal SRAM
#else
	SCB->VTOR = FLASH_BASE | VECT_TAB_OFFSET; // Vector Table Relocation in Internal FLASH
#endif
}

extern "C" {
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
  *           - If SYSCLK source is MSI, SystemCoreClock will contain the MSI_VALUE(*)
  *
  *           - If SYSCLK source is HSI, SystemCoreClock will contain the HSI_VALUE(**)
  *
  *           - If SYSCLK source is HSE, SystemCoreClock will contain the HSE_VALUE(***)
  *
  *           - If SYSCLK source is PLL, SystemCoreClock will contain the HSE_VALUE(***)
  *             or HSI_VALUE(*) or MSI_VALUE(*) multiplied/divided by the PLL factors.
  *
  *         (*) MSI_VALUE is a constant defined in stm32l4xx_hal.h file (default value
  *             4 MHz) but the real value may vary depending on the variations
  *             in voltage and temperature.
  *
  *         (**) HSI_VALUE is a constant defined in stm32l4xx_hal.h file (default value
  *              16 MHz) but the real value may vary depending on the variations
  *              in voltage and temperature.
  *
  *         (***) HSE_VALUE is a constant defined in stm32l4xx_hal.h file (default value
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
void SystemCoreClockUpdate(void)
{
	using namespace sool::core;
	uint32_t tmp = 0U, msirange = 0U, pllvco = 0U, pllr = 2U, pllsource = 0U, pllm = 2U;

	// Get MSI Range frequency--------------------------------------------------
	if(! RCC->CR.MSIRGSEL) // MSISRANGE from RCC_CSR applies
	{
		msirange = RCC->CSR.MSISRANGE;
	}
	else // MSIRANGE from RCC_CR applies
	{
		msirange = RCC->CR.MSIRANGE;
	}
	// MSI frequency range in HZ
	msirange = MSIRangeTable[msirange];

	// Get SYSCLK source -------------------------------------------------------
	switch (RCC->CFGR.SWS)
	{
	case 0x00: // MSI used as system clock source
	  SystemCoreClock = msirange;
	  break;

	case 0x01: // HSI used as system clock source
	  SystemCoreClock = HSI_VALUE;
	  break;

	case 0x02: // HSE used as system clock source
	  SystemCoreClock = HSE_VALUE;
	  break;

	case 0x03: // PLL used as system clock  source
	  // PLL_VCO = (HSE_VALUE or HSI_VALUE or MSI_VALUE/ PLLM) * PLLN
	  // SYSCLK = PLL_VCO / PLLR

	  pllsource = RCC->PLLCFGR.PLLSRC;
	  pllm = RCC->PLLCFGR.PLLM + 1U ;

	  switch (pllsource)
	  {
		case 0x02: // HSI used as PLL clock source
		  pllvco = (HSI_VALUE / pllm);
		  break;

		case 0x03: // HSE used as PLL clock source
		  pllvco = (HSE_VALUE / pllm);
		  break;

		default:   // MSI used as PLL clock source
		  pllvco = (msirange / pllm);
		  break;
	  }
	  pllvco = pllvco * RCC->PLLCFGR.PLLN;
	  pllr = (RCC->PLLCFGR.PLLR + 1U) * 2U;
	  SystemCoreClock = pllvco/pllr;
	  break;

	default:
	  SystemCoreClock = msirange;
	  break;
	}
	// Compute HCLK clock frequency --------------------------------------------
	// Get HCLK prescaler
	tmp = AHBPrescTable[RCC->CFGR.HPRE];
	// HCLK clock frequency
	SystemCoreClock >>= tmp;
}
#endif // STM32L4
