#ifndef _TRANQUILITY_MATH_VECTOR3D_H_
#define _TRANQUILITY_MATH_VECTOR3D_H_
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
#include "Point3D.h"

namespace Tranquility
{
    namespace Math
    {
        class Vector3D
        {
        public:
            Float x, y, z;

            Vector3D(Float x, Float y, Float z);
            Vector3D(Point3D p1, Point3D p2);
            Vector3D(Point3D p);
            Vector3D();

            // Functions
            Float magnitude() const;
            Float sqrMagnitude() const;
            Vector3D normalize() const;
            Float dot(const Vector3D& v) const;
            static Vector3D lerp(const Vector3D& v1, const Vector3D& v2, Float alpha);

            // Operators
            Vector3D& operator=(const Vector3D& rhs);
            Vector3D& operator-(void);

            bool operator==(const Vector3D& rhs) const;
            bool operator!=(const Vector3D& rhs) const;

            Vector3D operator+(const Vector3D& rhs) const;
            Vector3D operator-(const Vector3D& rhs) const;
            Vector3D operator*(const Vector3D& rhs) const;
            Vector3D operator*(const Float& rhs) const;
            Vector3D operator/(const Vector3D& rhs) const;
            Vector3D operator/(const Float& rhs) const;

            Vector3D& operator+=(const Vector3D& rhs);
            Vector3D& operator-=(const Vector3D& rhs);
            Vector3D& operator*=(const Vector3D& rhs);
            Vector3D& operator/=(const Vector3D& rhs);

        };
    }
}

#endif