#ifndef _TRANQUILITY_MATH_QUATERNION_H_
#define _TRANQUILITY_MATH_QUATERNION_H_
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

#include "Float.h"
#include "Vector3D.h"

namespace Tranquility
{
    namespace Math
    {
        class Quaternion
        {
        public:
            Float w, x, y, z;

            Quaternion(Float w, Float x, Float y, Float z);
            Quaternion(Float w, Vector3D v);
            Quaternion();

            // Functions
            Float magnitude() const;
            Float sqrMagnitude() const;
            Quaternion normalize() const;
            Vector4D toVect() const;

            // Operators
            Quaternion& operator=(const Quaternion& rhs);
            Quaternion& operator-(void);

            bool operator==(const Quaternion& rhs) const;
            bool operator!=(const Quaternion& rhs) const;

            Quaternion operator+(const Quaternion& rhs) const;
            Quaternion operator*(const Quaternion& rhs) const;
            Quaternion operator*(const Float& rhs) const;
            Quaternion operator/(const Float& rhs) const;

            Quaternion& operator+=(const Quaternion& rhs);
            Quaternion& operator*=(const Quaternion& rhs);
        };
    }
}


#endif