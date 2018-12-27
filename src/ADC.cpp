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
#include "../include/ADC.h"
#include "../include/RCC.h"

namespace sool
{
	namespace ll
	{
		void ADC::set_sequence_value(const unsigned int position, const unsigned int channel) volatile
		{
			switch (position) {
#ifdef ADC_SQR1_1
				case 1 :
							SQR1.SQ1 = channel;
							break;
						case 2:
							SQR1.SQ2 = channel;
							break;
						case 3:
							SQR1.SQ3 = channel;
							break;
						case 4:
							SQR1.SQ4 = channel;
							break;
#endif
#ifdef ADC_SQR2_1

				case 5:
					SQR2.SQ5 = channel;
					break;
				case 6:
					SQR2.SQ6 = channel;
					break;
				case 7:
					SQR2.SQ7 = channel;
					break;
				case 8:
					SQR2.SQ8 = channel;
					break;
				case 9:
					SQR2.SQ9 = channel;
					break;
#endif
#ifdef ADC_SQR3_1
				case 10:
					SQR3.SQ10 = channel;
					break;
				case 11:
					SQR3.SQ11= channel;
					break;
				case 12:
					SQR3.SQ12= channel;
					break;
				case 13:
					SQR3.SQ13= channel;
					break;
				case 14:
					SQR3.SQ14= channel;
					break;
				//Linked to ADC_SQR3_1
				case 15:
					SQR4.SQ15= channel;
					break;
				case 16:
					SQR4.SQ16= channel;
					break;
#endif
#ifdef ADC_SQR3_0
				case 1:
							SQR3.SQ1 = channel;
							break;
						case 2:
							SQR3.SQ2 = channel;
							break;
						case 3:
							SQR3.SQ3 = channel;
							break;
						case 4:
							SQR3.SQ4 = channel;
							break;
						case 5:
							SQR3.SQ5 = channel;
							break;
						case 6:
							SQR3.SQ6 = channel;
							break;
#endif
#ifdef ADC_SQR2_0
				case 7:
							SQR2.SQ7 = channel;
							break;
						case 8:
							SQR2.SQ8 = channel;
							break;
						case 9:
							SQR2.SQ9 = channel;
							break;
						case 10:
							SQR2.SQ10 = channel;
							break;
						case 11:
							SQR2.SQ11 = channel;
							break;
						case 12:
							SQR2.SQ12 = channel;
							break;
#endif
#if defined(ADC_SQR1_0) && defined(STM32F1     ) || defined(STM32F2     ) || defined(STM32F373xC ) || defined(STM32F378xx ) || \
        defined(STM32F4     ) || defined(STM32F7     ) //ADC_SQR1_0_SQ13
				case 13:
							SQR1.SQ13 = channel;
							break;
						case 14:
							SQR1.SQ14 = channel;
							break;
						case 15:
							SQR1.SQ15 = channel;
							break;
						case 16:
							SQR1.SQ16 = channel;
							break;
#endif
#ifdef ADC_SQR5
				case 1:
							SQR5.SQ1 = channel;
							break;
						case 2:
							SQR5.SQ2 = channel;
							break;
						case 3:
							SQR5.SQ3 = channel;
							break;
						case 4:
							SQR5.SQ4 = channel;
							break;
						case 5:
							SQR5.SQ5 = channel;
							break;
						case 6:
							SQR5.SQ6 = channel;
							break;
#endif
#ifdef ADC_SQR4_1
				case 7:
							SQR4.SQ7 = channel;
							break;
						case 8:
							SQR4.SQ8 = channel;
							break;
						case 9:
							SQR4.SQ9 = channel;
							break;
						case 10:
							SQR4.SQ10 = channel;
							break;
						case 11:
							SQR4.SQ11 = channel;
							break;
						case 12:
							SQR4.SQ12 = channel;
							break;
#endif
#ifdef ADC_SQR3_2
				case 13:
							SQR3.SQ13 = channel;
							break;
						case 14:
							SQR3.SQ14 = channel;
							break;
						case 15:
							SQR3.SQ15 = channel;
							break;
						case 16:
							SQR3.SQ16 = channel;
							break;
						case 17:
							SQR3.SQ17 = channel;
							break;
						case 18:
							SQR3.SQ18 = channel;
							break;
#endif
#ifdef ADC_SQR2_2
				case 19:
							SQR2.SQ19 = channel;
							break;
						case 20:
							SQR2.SQ20 = channel;
							break;
						case 21:
							SQR2.SQ21 = channel;
							break;
						case 22:
							SQR2.SQ22 = channel;
							break;
						case 23:
							SQR2.SQ23 = channel;
							break;
						case 24:
							SQR2.SQ24 = channel;
							break;
#endif
#ifdef ADC_SQR1_2
				case 25:
							SQR1.SQ25 = channel;
							break;
						case 26:
							SQR1.SQ26 = channel;
							break;
						case 27:
							SQR1.SQ27 = channel;
							break;
#endif
#if defined(STM32L100xC ) || defined(STM32L151xC ) || defined(STM32L151xCA) || defined(STM32L151xD ) || \
        defined(STM32L151xDx) || defined(STM32L151xE ) || defined(STM32L152xC ) || defined(STM32L152xCA) || \
        defined(STM32L152xD ) || defined(STM32L152xDx) || defined(STM32L152xE ) || defined(STM32L162xC ) || \
        defined(STM32L162xCA) || defined(STM32L162xD ) || defined(STM32L162xDx) || defined(STM32L162xE )
				case 28:
							SQR1.SQ28 = channel;
							break;
#endif
				default:
					//If the soft reach here, it is an error
					return;
			}
		}
	}
}
