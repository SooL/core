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
#ifndef __SOOL_UTILS_PERIPHERAL_INCLUDE_H
#define __SOOL_UTILS_PERIPHERAL_INCLUDE_H

#include <cstdint>
#include <cassert>
#include "../../sool_setup.h"

#ifndef __IO
#define __IO volatile
#endif
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-compare"

#define __SOOL_PERIPH_PADDING_16384 __SOOL_PERIPH_PADDING_8192 __SOOL_PERIPH_PADDING_8192
#define __SOOL_PERIPH_PADDING_8192 __SOOL_PERIPH_PADDING_4096 __SOOL_PERIPH_PADDING_4096
#define __SOOL_PERIPH_PADDING_4096 __SOOL_PERIPH_PADDING_2048 __SOOL_PERIPH_PADDING_2048
#define __SOOL_PERIPH_PADDING_2048 __SOOL_PERIPH_PADDING_1024 __SOOL_PERIPH_PADDING_1024
#define __SOOL_PERIPH_PADDING_1024 __SOOL_PERIPH_PADDING_512 __SOOL_PERIPH_PADDING_512
#define __SOOL_PERIPH_PADDING_512 __SOOL_PERIPH_PADDING_256 __SOOL_PERIPH_PADDING_256
#define __SOOL_PERIPH_PADDING_256 __SOOL_PERIPH_PADDING_128 __SOOL_PERIPH_PADDING_128
#define __SOOL_PERIPH_PADDING_128 __SOOL_PERIPH_PADDING_64 __SOOL_PERIPH_PADDING_64
#define __SOOL_PERIPH_PADDING_64 __SOOL_PERIPH_PADDING_32 __SOOL_PERIPH_PADDING_32
#define __SOOL_PERIPH_PADDING_32 __SOOL_PERIPH_PADDING_16 __SOOL_PERIPH_PADDING_16
#define __SOOL_PERIPH_PADDING_16 __SOOL_PERIPH_PADDING_8 __SOOL_PERIPH_PADDING_8
#define __SOOL_PERIPH_PADDING_8 __SOOL_PERIPH_PADDING_4 __SOOL_PERIPH_PADDING_4
#define __SOOL_PERIPH_PADDING_4 uint32_t : 32;
#define __SOOL_PERIPH_PADDING_2 uint16_t : 16;
#define __SOOL_PERIPH_PADDING_1 uint8_t : 8;


namespace sool
{
	namespace core
	{
//######################################################################################################################
//#                                                     RegBase_t                                                      #
//######################################################################################################################

		template<typename T>
		struct RegBase_t
		{
			inline operator T() volatile const; // NOLINT
			inline const RegBase_t<T> &operator=(const T &value) volatile;

			inline const RegBase_t<T> &operator|=(const int &value) volatile;

		};

		template<typename T>
		inline RegBase_t<T>::operator T() volatile const
		{
			return *reinterpret_cast<volatile const T *>(this);
		}

		template<typename T>
		inline const RegBase_t<T> &RegBase_t<T>::operator=(const T &value) volatile
		{
			return *const_cast<const RegBase_t *>(reinterpret_cast<volatile RegBase_t *>(&(*reinterpret_cast<volatile T *>(this) = value)));
		}

		template<typename T>
		inline const RegBase_t<T> &RegBase_t<T>::operator|=(const int &value) volatile
		{
			return *const_cast<const RegBase_t *>(reinterpret_cast<volatile RegBase_t *>(&(*reinterpret_cast<volatile T *>(this) |= value)));
		}


		typedef RegBase_t<uint8_t> Reg8_t;
		typedef RegBase_t<uint16_t> Reg16_t;
		typedef RegBase_t<uint32_t> Reg32_t;
		typedef RegBase_t<uint64_t> Reg64_t;

//######################################################################################################################
//#                                                   ArrayRegBase_t                                                   #
//######################################################################################################################

		template<typename item_T, unsigned int array_length, unsigned int offset=0, unsigned int space=0>
		struct ArrayRegBase_t
		{
		    inline volatile item_T &operator[](int i) volatile;
		};

		/*template<typename item_T, unsigned int array_length, unsigned int offset=0, unsigned int space=0>
		volatile item_T &ArrayRegBase_t<item_T, array_length, offset, space>::operator[](int i) volatile
		{
			assert(i < array_length);
			return *(item_T *) (((void *) this) + offset + i * (sizeof(item_T)+space));
		}*/

//######################################################################################################################
//#                                                SmallArrayRegBase_t                                                 #
//######################################################################################################################

		template<typename T, typename item_T>
		struct SmallArrayRegBase_t : public RegBase_t<T>, public ArrayRegBase_t<item_T, sizeof(T)/sizeof(item_T),0,0>
		{
			using RegBase_t<T>::operator=;
		};

//######################################################################################################################
//#                                                   BigArrayReg_t                                                    #
//######################################################################################################################

		/*template<typename item_T, unsigned int array_length, unsigned int offset=0, unsigned int space=0>
		struct BigArrayReg_t : public ArrayRegBase_t<item_T, array_length, offset, space>
		{
		private:
			uint32_t : (array_length * item_size + offset) * 8;
		};*/
	}
}

//######################################################################################################################
//#                                                  SETUP OPERATORS                                                   #
//######################################################################################################################

#define _SOOL_SETUP_REG_OPERATORS(regType, unsignedType, signedType)    \
/*
inline const unsignedType operator+(const regType& a, signedType b) { return static_cast<unsignedType>(a)+b; } \
inline const unsignedType operator-(const regType& a, signedType b) { return static_cast<unsignedType>(a)-b; } \
inline const unsignedType operator*(const regType& a, signedType b) { return static_cast<unsigendType>(a)*b; } \
inline const unsignedType operator/(const regType& a, signedType b) { return static_cast<unsignedType>(a)/b; } \
inline const unsignedType operator%(const regType& a, signedType b) { return static_cast<unsignedType>(a)%b; } \
inline const unsignedType operator|(const regType& a, signedType b) { return static_cast<unsignedType>(a)|b; } \
inline const unsignedType operator&(const regType& a, signedType b) { return static_cast<unsignedType>(a)&b; } \
inline const unsignedType operator^(const regType& a, signedType b) { return static_cast<unsignedType>(a)^b; } \
inline const unsignedType operator<<(const regType& a, int b)       { return static_cast<unsignedType>(a)<<b; } \
inline const unsignedType operator>>(const regType& a, int b)       { return static_cast<unsignedType>(a)>>b; } \
inline const unsignedType operator~(const regType& a)               { return ~static_cast<unsignedType>(a); } \
inline const unsignedType operator+(const regType& a)               { return +static_cast<unsignedType>(a); } \
inline const signedType operator-(const regType& a)                 { return -static_cast<unsignedType>(a); } \
*/ \
inline const bool operator==(const regType& a, signedType b)    { return static_cast<unsignedType>(a)==b; } \
inline const bool operator!=(const regType& a, signedType b)    { return static_cast<unsignedType>(a)!=b; } \
inline const bool operator<(const regType& a, signedType b)     { return static_cast<unsignedType>(a)<b; }  \
inline const bool operator>(const regType& a, signedType b)     { return static_cast<unsignedType>(a)>b; }  \
inline const bool operator<=(const regType& a, signedType b)    { return static_cast<unsignedType>(a)<=b; } \
inline const bool operator>=(const regType& a, signedType b)    { return static_cast<unsignedType>(a)>=b; } \
inline const bool operator!(const regType& a)                   { return !static_cast<unsignedType>(a); }   \
inline const regType& operator+=(volatile regType& a, signedType b)            { return a = a+b; }       \
inline const regType& operator-=(volatile regType& a, signedType b)            { return a = a-b; }       \
inline const regType& operator*=(volatile regType& a, signedType b)            { return a = a*b; }       \
inline const regType& operator/=(volatile regType& a, signedType b)            { return a = a/b; }       \
inline const regType& operator%=(volatile regType& a, signedType b)            { return a = a%b; }       \
inline const regType& operator&=(volatile regType& a, signedType b)            { return a = a&b; }       \
inline const regType& operator^=(volatile regType& a, signedType b)            { return a = a^b; }       \
inline const regType& operator<<=(volatile regType& a, int b)                  { return a = a<<b; }      \
inline const regType& operator>>=(volatile regType& a, int b)                  { return a = a>>b; }      \
inline const regType& operator ++(volatile regType &a)      { return (a += static_cast<unsignedType>(1)); } \
inline const regType& operator --(volatile regType &a)      { return (a -= static_cast<unsignedType>(1)); } \
inline unsignedType operator ++(volatile regType &a, int)      { unsignedType cpy = a; ++a; return cpy; }      \
inline unsignedType operator --(volatile regType &a, int)      { unsignedType cpy = a; --a; return cpy; }      \


_SOOL_SETUP_REG_OPERATORS(sool::core::Reg8_t, uint8_t, int8_t)

_SOOL_SETUP_REG_OPERATORS(sool::core::Reg16_t, uint16_t, int16_t)

_SOOL_SETUP_REG_OPERATORS(sool::core::Reg32_t, uint32_t, int32_t)

_SOOL_SETUP_REG_OPERATORS(sool::core::Reg64_t, uint64_t, int64_t)

#undef _SOOL_SETUP_REG_OPERATORS

#endif //__SOOL_UTILS_PERIPHERAL_INCLUDE_H
