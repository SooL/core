
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
#	if defined(STM32F04x) || defined(STM32F07x) || defined(STM32F09x)
				const uint32_t src = (PLLSRC == 2) ? get_clock_frequency(ClockDomain::HSE) :
									 (PLLSRC == 3) ? get_clock_frequency(ClockDomain::HSI48) :
									  get_clock_frequency(ClockDomain::HSI);
				const uint32_t div = (PLLSRC == 0) ? 2 : (CFGR2.PREDIV+1);
				return src / div * mul;
#	else
				return ((PLLSRC) ? get_clock_frequency(ClockDomain::HSE)/(CFGR2.PREDIV+1):
								  get_clock_frequency(ClockDomain::HSI)/2
						) * mul;
#	endif
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
						: 1); //TODO use right-shift instead of division
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
			case ClockDomain::MCO: {
				uint32_t src;
				switch(CFGR.MCO) {
				case 0x1 : src = get_clock_frequency(ClockDomain::HSI14);
#	ifndef STM32F030x8
				case 0x2 : src = get_clock_frequency(ClockDomain::LSI);
				case 0x3 : src = get_clock_frequency(ClockDomain::LSE);
#	endif
				case 0x4 : src = get_clock_frequency(ClockDomain::SYSCLK);
				case 0x5 : src = get_clock_frequency(ClockDomain::HSI);
				case 0x6 : src = get_clock_frequency(ClockDomain::HSE);
#	ifdef STM32F05x
				case 0x7 : src = get_clock_frequency(ClockDomain::PLLCLK) / 2;
#	else
				case 0x7 : src = get_clock_frequency(ClockDomain::PLLCLK) / (CFGR.PLLNODIV ? 1 : 2);
#	endif
#	if (defined(STM32F0x1) || defined(STM32F0x2) || defined(STM32F0x8)) && \
	   (defined(STM32F04x) || defined(STM32F07x) || defined(STM32F09x))
				case 0x8 : src = get_clock_frequency(ClockDomain::HSI48);
#	endif
				default :
				case 0x0 : src = 0;
				}
#	if defined(STM32F030x4) || defined(STM32F030x6) || defined(STM32F030x8) || defined(STM32F05x)
				return src;
#	else
				return src >> (CFGR.MCOPRE);
#	endif
			}
#	if defined(STM32F030x4) || defined(STM32F030x6) || defined(STM32F030x8)
			case ClockDomain::FHCLK: return get_clock_frequency(ClockDomain::HCLK);
#	else
			case ClockDomain::FCLK: return get_clock_frequency(ClockDomain::HCLK);
#	endif
#	if defined(STM32F04x) || defined(STM32F07x) || defined(STM32F09x)
			case ClockDomain::HSI48: return 48e6;
#	endif
#	if defined(STM32F0x0)
			case ClockDomain::FLITFCLK: return get_clock_frequency(ClockDomain::HSI);
#	endif
#endif
			default : return 0;
			}
		}
	}
}
