#ifndef _TRANQUILITY_MATH_TFLOAT_H_
#define _TRANQUILITY_MATH_TFLOAT_H_
/*
The MIT License (MIT)

Copyright (c) 2013 Tranquility Engine Team

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

Author: Kevin McLarnon
*/

#include <cmath>

#define FLOAT_EPSILON 0.00001f

namespace Tranquility
{
    namespace Math
    {
        class Float
        {
        public:
            float val;

            Float(float val);
            Float();

            // Functions
            Float sqrt() const;
            Float sqr() const;

            // Operators
            Float& operator=(const Float& rhs);
            Float& operator=(const float rhs);
            Float& operator=(const int rhs);

            Float operator+(const Float& rhs)   const;
            Float operator+(const float rhs)    const;
            Float operator+(const int rhs)      const;
            Float operator-(void)               const;
            Float operator-(const Float& rhs)   const;
            Float operator-(const float rhs)    const;
            Float operator-(const int rhs)      const;
            Float operator*(const Float& rhs)   const;
            Float operator*(const float rhs)    const;
            Float operator*(const int rhs)      const;
            Float operator/(const Float& rhs)   const;
            Float operator/(const float rhs)    const;
            Float operator/(const int rhs)      const;
            Float operator^(const Float& rhs)   const;
            Float operator^(const float rhs)    const;
            Float operator^(const int rhs)      const;

            Float& operator+=(const Float& rhs);
            Float& operator+=(const float rhs);
            Float& operator+=(const int rhs);
            Float& operator-=(const Float& rhs);
            Float& operator-=(const float rhs);
            Float& operator-=(const int rhs);
            Float& operator*=(const Float& rhs);
            Float& operator*=(const float rhs);
            Float& operator*=(const int rhs);
            Float& operator/=(const Float& rhs);
            Float& operator/=(const float rhs);
            Float& operator/=(const int rhs);

            bool operator==(const Float& rhs)   const;
            bool operator==(const float rhs)    const;
            bool operator==(const int rhs)      const;
            bool operator!=(const Float& rhs)   const;
            bool operator!=(const float rhs)    const;
            bool operator!=(const int rhs)      const;
            bool operator<(const Float& rhs)    const;
            bool operator<(const float rhs)     const;
            bool operator<(const int rhs)       const;
            bool operator>(const Float& rhs)    const;
            bool operator>(const float rhs)     const;
            bool operator>(const int rhs)       const;
            bool operator<=(const Float& rhs)   const;
            bool operator<=(const float rhs)    const;
            bool operator<=(const int rhs)      const;
            bool operator>=(const Float& rhs)   const;
            bool operator>=(const float rhs)    const;
            bool operator>=(const int rhs)      const;
        };

        Float operator-(const float f1, const Float& f2);
        Float operator+(const float f1, const Float& f2);
        Float operator*(const float f1, const Float& f2);
        Float operator/(const float f1, const Float& f2);
    }
}

#endif