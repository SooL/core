
#include "../include/RCC.h"
#include "../system/include/system_stm32.h"

namespace sool
{
	namespace core
	{

		uint32_t RCC::get_clock_frequency(ClockDomain domain) volatile
		{
			switch(domain)
			{
#if defined(STM32F0)
			case ClockDomain::HSI: return 8e6;
			case ClockDomain::HSE: return HSE_VALUE;
			case ClockDomain::LSI: return 40e3; //typical value. min = 30, max = 50 kHz
			case ClockDomain::LSE: return 32768;
			case ClockDomain::HSI14: return 14e6;
			case ClockDomain::PLLCLK: {
				const uint32_t PLLSRC = CFGR.PLLSRC;
				const uint32_t mul = ((CFGR.PLLMUL+2) & 0xF);
#if defined(STM32F04x) || defined(STM32F07x) || defined(STM32F09x)
				const uint32_t src = (PLLSRC == 2) ? get_clock_frequency(ClockDomain::HSE) :
									 (PLLSRC == 3) ? get_clock_frequency(ClockDomain::HSI48) :
									  get_clock_frequency(ClockDomain::HSI);
				const uint32_t div = (PLLSRC == 0) ? 2 : (CFGR2.PREDIV+1);
				return src / div * mul;
#else
				return ((PLLSRC) ? get_clock_frequency(ClockDomain::HSE)/(CFGR2.PREDIV+1):
								  get_clock_frequency(ClockDomain::HSI)/2
						) * mul;
#endif
			}
			case ClockDomain::SYSCLK:
				switch(CFGR.SW) {
					case 0b00: return get_clock_frequency(ClockDomain::HSI);
					case 0b01: return get_clock_frequency(ClockDomain::HSE);
					case 0b10: return get_clock_frequency(ClockDomain::PLLCLK);
					default : return 0;
				}
			case ClockDomain::HCLK: {
				uint32_t HPRE = CFGR.HPRE;
				return get_clock_frequency(ClockDomain::SYSCLK) /
						((HPRE & 0b1000) ?
							((HPRE & 0b0100) ? 4 : 2) << (HPRE & 0b0111)
						: 1);
			}
			case ClockDomain::Cortex_System_Timer: return get_clock_frequency(ClockDomain::HCLK)/8;
			case ClockDomain::PCLK: {
				uint32_t PPRE = CFGR.PPRE;
				return get_clock_frequency(ClockDomain::HCLK) /
						((PPRE & 0b100) ? 2 << (PPRE & 0b011) : 1);
			}
			case ClockDomain::RTCCLKK:
				switch(BDCR.RTCSEL) {
					case 0b00: return 0; // no clock
					case 0b01: return get_clock_frequency(ClockDomain::LSE);
					case 0b10: return get_clock_frequency(ClockDomain::LSI);
					case 0b11: return get_clock_frequency(ClockDomain::HSE)/32;
					default: return 0;
				}
			case ClockDomain::MCO: return ~0; // TODO
	#if defined(STM32F030x4) || defined(STM32F030x6) || defined(STM32F030x8)
			case ClockDomain::FHCLK: return get_clock_frequency(ClockDomain::HCLK);
	#else
			case ClockDomain::FCLK: return ~0; // TODO
	#endif
	#if defined(STM32F04x) || defined(STM32F07x) || defined(STM32F09x)
			case ClockDomain::HSI48: return 48e6;
	#endif
	#if defined(STM32F0x0)
			case ClockDomain::FLITFCLK: return ~0; // TODO
	#endif
#endif
			}
		}
	}
}
