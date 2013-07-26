/*
The MIT License (MIT)

Copyright (c) 2013 Kevin McLarnon

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "Float.h"

namespace Tranquility
{
	namespace Math
	{
		Float::Float(float val) : val(val) {}
		Float::Float() : val(0.0f) {}

		Float& Float::operator=(const Float& rhs)
		{
			val = rhs.val;
			return (*this);
		}

		Float& Float::operator=(const float rhs)
		{
			val = rhs;
			return (*this);
		}

		Float& Float::operator=(const int rhs)
		{
			val = (float)rhs;
			return (*this);
		}

		Float Float::operator+(const Float& rhs) const
		{
			return Float(val + rhs.val);
		}

		Float Float::operator+(const float rhs) const
		{
			return Float(val + rhs);
		}

		Float Float::operator+(const int rhs) const
		{
			return Float(val + (float)rhs);
		}

		Float Float::operator-(void) const
		{
			return Float(-val);
		}

		Float Float::operator-(const Float& rhs) const
		{
			return Float(val - rhs.val);
		}

		Float Float::operator-(const float rhs) const
		{
			return Float(val - rhs);
		}

		Float Float::operator-(const int rhs) const
		{
			return Float(val + (float)rhs);
		}

		Float Float::operator*(const Float& rhs) const
		{
			return Float(val * rhs.val);
		}

		Float Float::operator*(const float rhs) const
		{
			return Float(val * rhs);
		}

		Float Float::operator*(const int rhs) const
		{
			return Float(val * (float)rhs);
		}

		Float Float::operator/(const Float& rhs) const
		{
			return Float(val / rhs.val);
		}

		Float Float::operator/(const float rhs) const
		{
			return Float(val / rhs);
		}

		Float Float::operator/(const int rhs) const
		{
			return Float(val / (float)rhs);
		}

		Float& Float::operator+=(const Float& rhs)
		{
			val += rhs.val;
			return (*this);
		}

		Float& Float::operator+=(const float rhs)
		{
			val += (float)rhs;
			return (*this);
		}

		Float& Float::operator+=(const int rhs)
		{
			val +=(float)rhs;
			return (*this);
		}

		Float& Float::operator-=(const Float& rhs)
		{
			val -= rhs.val;
			return (*this);
		}

		Float& Float::operator-=(const float rhs)
		{
			val -= rhs;
			return (*this);
		}

		Float& Float::operator-=(const int rhs)
		{
			val -= (float)rhs;
			return (*this);
		}

		Float& Float::operator*=(const Float& rhs)
		{
			val *= rhs.val;
			return (*this);
		}

		Float& Float::operator*=(const float rhs)
		{
			val *= rhs;
			return (*this);
		}

		Float& Float::operator*=(const int rhs)
		{
			val *= (float)rhs;
			return (*this);
		}

		Float& Float::operator/=(const Float& rhs)
		{
			val /= rhs.val;
			return (*this);
		}

		Float& Float::operator/=(const float rhs)
		{
			val /= rhs;
			return (*this);
		}

		Float& Float::operator/=(const int rhs)
		{
			val /= (float)rhs;
			return (*this);
		}

		bool Float::operator==(const Float& rhs) const
		{
			return (val - rhs.val) < FLOAT_EPSILON;
		}

		bool Float::operator==(const float rhs) const
		{
			return (val - rhs) < FLOAT_EPSILON;
		}

		bool Float::operator==(const int rhs) const
		{
			return (val - (float)rhs) < FLOAT_EPSILON;
		}

		bool Float::operator<(const Float& rhs) const
		{
			return val < rhs.val;
		}

		bool Float::operator<(const float rhs) const
		{
			return val < rhs;
		}

		bool Float::operator<(const int rhs) const
		{
			return val < (float)rhs;
		}

		bool Float::operator>(const Float& rhs) const
		{
			return val > rhs.val;
		}

		bool Float::operator>(const float rhs) const
		{
			return val > rhs;
		}

		bool Float::operator>(const int rhs) const
		{
			return val > (float)rhs;
		}

		bool Float::operator<=(const Float& rhs) const
		{
			return ((*this) < rhs) || ((*this) == rhs);
		}

		bool Float::operator<=(const float rhs) const
		{
			return ((*this) < rhs) || ((*this) == rhs);
		}

		bool Float::operator<=(const int rhs) const
		{
			return ((*this) < rhs) || ((*this) == rhs);
		}

		bool Float::operator>=(const Float& rhs) const
		{
			return ((*this) > rhs) || ((*this) == rhs);
		}

		bool Float::operator>=(const float rhs) const
		{
			return ((*this) > rhs) || ((*this) == rhs);
		}

		bool Float::operator>=(const int rhs) const
		{
			return ((*this) > rhs) || ((*this) == rhs);
		}
	}
}