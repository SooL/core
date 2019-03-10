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
#include "../include/GPIO.h"
#include "../include/RCC.h"

namespace sool
{
	namespace core
	{

#if defined(GPIO_MODER) && defined(GPIO_AFR)
		void GPIO::set_AF(const GPIO::Pin pins, const GPIO::AF af) volatile
		{
			MODER = (MODER & ~(pins * GPIO::Mode::Mask)) | (pins * GPIO::Mode::AlternateFunction);
			AFR = (AFR & ~(pins * GPIO::AF::Mask)) | (pins * af);
		}
#endif

		bool GPIO::set_locked(const GPIO::Pin pins, bool locked) volatile
		{
			LCKR = (1 << 15) | (static_cast<const uint32_t>(pins) & 0xF);
			LCKR = (0 << 15) | (static_cast<const uint32_t>(pins) & 0xF);
			LCKR = (1 << 15) | (static_cast<const uint32_t>(pins) & 0xF);
			(void) LCKR; //dummy read
			return LCKR.LCKK == 1U;
		}

#ifdef GPIOA_BASE_ADDR
		volatile StandAlone_Pin< 0>& PA0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOA);
		volatile StandAlone_Pin< 1>& PA1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOA);
		volatile StandAlone_Pin< 2>& PA2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOA);
		volatile StandAlone_Pin< 3>& PA3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOA);
		volatile StandAlone_Pin< 4>& PA4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOA);
		volatile StandAlone_Pin< 5>& PA5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOA);
		volatile StandAlone_Pin< 6>& PA6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOA);
		volatile StandAlone_Pin< 7>& PA7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOA);
		volatile StandAlone_Pin< 8>& PA8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOA);
		volatile StandAlone_Pin< 9>& PA9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOA);
		volatile StandAlone_Pin<10>& PA10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOA);
		volatile StandAlone_Pin<11>& PA11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOA);
		volatile StandAlone_Pin<12>& PA12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOA);
		volatile StandAlone_Pin<13>& PA13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOA);
		volatile StandAlone_Pin<14>& PA14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOA);
		volatile StandAlone_Pin<15>& PA15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOA);
#endif
#ifdef GPIOB_BASE_ADDR
		volatile StandAlone_Pin< 0>& PB0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOB);
		volatile StandAlone_Pin< 1>& PB1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOB);
		volatile StandAlone_Pin< 2>& PB2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOB);
		volatile StandAlone_Pin< 3>& PB3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOB);
		volatile StandAlone_Pin< 4>& PB4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOB);
		volatile StandAlone_Pin< 5>& PB5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOB);
		volatile StandAlone_Pin< 6>& PB6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOB);
		volatile StandAlone_Pin< 7>& PB7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOB);
		volatile StandAlone_Pin< 8>& PB8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOB);
		volatile StandAlone_Pin< 9>& PB9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOB);
		volatile StandAlone_Pin<10>& PB10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOB);
		volatile StandAlone_Pin<11>& PB11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOB);
		volatile StandAlone_Pin<12>& PB12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOB);
		volatile StandAlone_Pin<13>& PB13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOB);
		volatile StandAlone_Pin<14>& PB14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOB);
		volatile StandAlone_Pin<15>& PB15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOB);
#endif
#ifdef GPIOC_BASE_ADDR
		volatile StandAlone_Pin< 0>& PC0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOC);
		volatile StandAlone_Pin< 1>& PC1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOC);
		volatile StandAlone_Pin< 2>& PC2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOC);
		volatile StandAlone_Pin< 3>& PC3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOC);
		volatile StandAlone_Pin< 4>& PC4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOC);
		volatile StandAlone_Pin< 5>& PC5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOC);
		volatile StandAlone_Pin< 6>& PC6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOC);
		volatile StandAlone_Pin< 7>& PC7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOC);
		volatile StandAlone_Pin< 8>& PC8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOC);
		volatile StandAlone_Pin< 9>& PC9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOC);
		volatile StandAlone_Pin<10>& PC10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOC);
		volatile StandAlone_Pin<11>& PC11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOC);
		volatile StandAlone_Pin<12>& PC12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOC);
		volatile StandAlone_Pin<13>& PC13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOC);
		volatile StandAlone_Pin<14>& PC14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOC);
		volatile StandAlone_Pin<15>& PC15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOC);
#endif
#ifdef GPIOD_BASE_ADDR
		volatile StandAlone_Pin< 0>& PD0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOD);
		volatile StandAlone_Pin< 1>& PD1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOD);
		volatile StandAlone_Pin< 2>& PD2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOD);
		volatile StandAlone_Pin< 3>& PD3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOD);
		volatile StandAlone_Pin< 4>& PD4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOD);
		volatile StandAlone_Pin< 5>& PD5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOD);
		volatile StandAlone_Pin< 6>& PD6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOD);
		volatile StandAlone_Pin< 7>& PD7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOD);
		volatile StandAlone_Pin< 8>& PD8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOD);
		volatile StandAlone_Pin< 9>& PD9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOD);
		volatile StandAlone_Pin<10>& PD10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOD);
		volatile StandAlone_Pin<11>& PD11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOD);
		volatile StandAlone_Pin<12>& PD12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOD);
		volatile StandAlone_Pin<13>& PD13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOD);
		volatile StandAlone_Pin<14>& PD14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOD);
		volatile StandAlone_Pin<15>& PD15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOD);
#endif
#ifdef GPIOE_BASE_ADDR
		volatile StandAlone_Pin< 0>& PE0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOE);
		volatile StandAlone_Pin< 1>& PE1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOE);
		volatile StandAlone_Pin< 2>& PE2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOE);
		volatile StandAlone_Pin< 3>& PE3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOE);
		volatile StandAlone_Pin< 4>& PE4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOE);
		volatile StandAlone_Pin< 5>& PE5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOE);
		volatile StandAlone_Pin< 6>& PE6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOE);
		volatile StandAlone_Pin< 7>& PE7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOE);
		volatile StandAlone_Pin< 8>& PE8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOE);
		volatile StandAlone_Pin< 9>& PE9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOE);
		volatile StandAlone_Pin<10>& PE10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOE);
		volatile StandAlone_Pin<11>& PE11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOE);
		volatile StandAlone_Pin<12>& PE12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOE);
		volatile StandAlone_Pin<13>& PE13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOE);
		volatile StandAlone_Pin<14>& PE14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOE);
		volatile StandAlone_Pin<15>& PE15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOE);
#endif
#ifdef GPIOF_BASE_ADDR
		volatile StandAlone_Pin< 0>& PF0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOF);
		volatile StandAlone_Pin< 1>& PF1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOF);
		volatile StandAlone_Pin< 2>& PF2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOF);
		volatile StandAlone_Pin< 3>& PF3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOF);
		volatile StandAlone_Pin< 4>& PF4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOF);
		volatile StandAlone_Pin< 5>& PF5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOF);
		volatile StandAlone_Pin< 6>& PF6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOF);
		volatile StandAlone_Pin< 7>& PF7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOF);
		volatile StandAlone_Pin< 8>& PF8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOF);
		volatile StandAlone_Pin< 9>& PF9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOF);
		volatile StandAlone_Pin<10>& PF10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOF);
		volatile StandAlone_Pin<11>& PF11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOF);
		volatile StandAlone_Pin<12>& PF12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOF);
		volatile StandAlone_Pin<13>& PF13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOF);
		volatile StandAlone_Pin<14>& PF14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOF);
		volatile StandAlone_Pin<15>& PF15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOF);
#endif
#ifdef GPIOG_BASE_ADDR
		volatile StandAlone_Pin< 0>& PG0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOG);
		volatile StandAlone_Pin< 1>& PG1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOG);
		volatile StandAlone_Pin< 2>& PG2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOG);
		volatile StandAlone_Pin< 3>& PG3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOG);
		volatile StandAlone_Pin< 4>& PG4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOG);
		volatile StandAlone_Pin< 5>& PG5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOG);
		volatile StandAlone_Pin< 6>& PG6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOG);
		volatile StandAlone_Pin< 7>& PG7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOG);
		volatile StandAlone_Pin< 8>& PG8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOG);
		volatile StandAlone_Pin< 9>& PG9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOG);
		volatile StandAlone_Pin<10>& PG10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOG);
		volatile StandAlone_Pin<11>& PG11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOG);
		volatile StandAlone_Pin<12>& PG12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOG);
		volatile StandAlone_Pin<13>& PG13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOG);
		volatile StandAlone_Pin<14>& PG14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOG);
		volatile StandAlone_Pin<15>& PG15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOG);
#endif
#ifdef GPIOH_BASE_ADDR
		volatile StandAlone_Pin< 0>& PH0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOH);
		volatile StandAlone_Pin< 1>& PH1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOH);
		volatile StandAlone_Pin< 2>& PH2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOH);
		volatile StandAlone_Pin< 3>& PH3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOH);
		volatile StandAlone_Pin< 4>& PH4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOH);
		volatile StandAlone_Pin< 5>& PH5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOH);
		volatile StandAlone_Pin< 6>& PH6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOH);
		volatile StandAlone_Pin< 7>& PH7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOH);
		volatile StandAlone_Pin< 8>& PH8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOH);
		volatile StandAlone_Pin< 9>& PH9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOH);
		volatile StandAlone_Pin<10>& PH10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOH);
		volatile StandAlone_Pin<11>& PH11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOH);
		volatile StandAlone_Pin<12>& PH12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOH);
		volatile StandAlone_Pin<13>& PH13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOH);
		volatile StandAlone_Pin<14>& PH14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOH);
		volatile StandAlone_Pin<15>& PH15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOH);
#endif
#ifdef GPIOI_BASE_ADDR
		volatile StandAlone_Pin< 0>& PI0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOI);
		volatile StandAlone_Pin< 1>& PI1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOI);
		volatile StandAlone_Pin< 2>& PI2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOI);
		volatile StandAlone_Pin< 3>& PI3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOI);
		volatile StandAlone_Pin< 4>& PI4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOI);
		volatile StandAlone_Pin< 5>& PI5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOI);
		volatile StandAlone_Pin< 6>& PI6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOI);
		volatile StandAlone_Pin< 7>& PI7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOI);
		volatile StandAlone_Pin< 8>& PI8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOI);
		volatile StandAlone_Pin< 9>& PI9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOI);
		volatile StandAlone_Pin<10>& PI10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOI);
		volatile StandAlone_Pin<11>& PI11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOI);
		volatile StandAlone_Pin<12>& PI12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOI);
		volatile StandAlone_Pin<13>& PI13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOI);
		volatile StandAlone_Pin<14>& PI14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOI);
		volatile StandAlone_Pin<15>& PI15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOI);
#endif
#ifdef GPIOJ_BASE_ADDR
		volatile StandAlone_Pin< 0>& PJ0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOJ);
		volatile StandAlone_Pin< 1>& PJ1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOJ);
		volatile StandAlone_Pin< 2>& PJ2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOJ);
		volatile StandAlone_Pin< 3>& PJ3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOJ);
		volatile StandAlone_Pin< 4>& PJ4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOJ);
		volatile StandAlone_Pin< 5>& PJ5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOJ);
		volatile StandAlone_Pin< 6>& PJ6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOJ);
		volatile StandAlone_Pin< 7>& PJ7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOJ);
		volatile StandAlone_Pin< 8>& PJ8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOJ);
		volatile StandAlone_Pin< 9>& PJ9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOJ);
		volatile StandAlone_Pin<10>& PJ10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOJ);
		volatile StandAlone_Pin<11>& PJ11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOJ);
		volatile StandAlone_Pin<12>& PJ12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOJ);
		volatile StandAlone_Pin<13>& PJ13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOJ);
		volatile StandAlone_Pin<14>& PJ14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOJ);
		volatile StandAlone_Pin<15>& PJ15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOJ);
#endif
#ifdef GPIOK_BASE_ADDR
		volatile StandAlone_Pin< 0>& PK0  = *reinterpret_cast<volatile StandAlone_Pin< 0>*>(GPIOK);
		volatile StandAlone_Pin< 1>& PK1  = *reinterpret_cast<volatile StandAlone_Pin< 1>*>(GPIOK);
		volatile StandAlone_Pin< 2>& PK2  = *reinterpret_cast<volatile StandAlone_Pin< 2>*>(GPIOK);
		volatile StandAlone_Pin< 3>& PK3  = *reinterpret_cast<volatile StandAlone_Pin< 3>*>(GPIOK);
		volatile StandAlone_Pin< 4>& PK4  = *reinterpret_cast<volatile StandAlone_Pin< 4>*>(GPIOK);
		volatile StandAlone_Pin< 5>& PK5  = *reinterpret_cast<volatile StandAlone_Pin< 5>*>(GPIOK);
		volatile StandAlone_Pin< 6>& PK6  = *reinterpret_cast<volatile StandAlone_Pin< 6>*>(GPIOK);
		volatile StandAlone_Pin< 7>& PK7  = *reinterpret_cast<volatile StandAlone_Pin< 7>*>(GPIOK);
		volatile StandAlone_Pin< 8>& PK8  = *reinterpret_cast<volatile StandAlone_Pin< 8>*>(GPIOK);
		volatile StandAlone_Pin< 9>& PK9  = *reinterpret_cast<volatile StandAlone_Pin< 9>*>(GPIOK);
		volatile StandAlone_Pin<10>& PK10 = *reinterpret_cast<volatile StandAlone_Pin<10>*>(GPIOK);
		volatile StandAlone_Pin<11>& PK11 = *reinterpret_cast<volatile StandAlone_Pin<11>*>(GPIOK);
		volatile StandAlone_Pin<12>& PK12 = *reinterpret_cast<volatile StandAlone_Pin<12>*>(GPIOK);
		volatile StandAlone_Pin<13>& PK13 = *reinterpret_cast<volatile StandAlone_Pin<13>*>(GPIOK);
		volatile StandAlone_Pin<14>& PK14 = *reinterpret_cast<volatile StandAlone_Pin<14>*>(GPIOK);
		volatile StandAlone_Pin<15>& PK15 = *reinterpret_cast<volatile StandAlone_Pin<15>*>(GPIOK);
#endif
	}
}
