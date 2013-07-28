#ifndef _TRANQUILITY_MATH_VECTOR2D_H_
#define _TRANQUILITY_MATH_VECTOR2D_H_
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
#include "Point2D.h"

namespace Tranquility
{
    namespace Math
    {
        class Vector2D
        {
        public:
            Float x, y;

            Vector2D(Float x, Float y);
            Vector2D(Point2D p1, Point2D p2);
            Vector2D(Point2D p);
            Vector2D();

            // Functions
            Float magnitude() const;
            Float sqrMagnitude() const;
            Vector2D normalize() const;

            // Operators
            Vector2D& operator=(const Vector2D& rhs);
            Vector2D& operator-(void);

            bool operator==(const Vector2D& rhs)    const;
            bool operator!=(const Vector2D& rhs)    const;

            Vector2D operator+(const Vector2D& rhs) const;
            Vector2D operator-(const Vector2D& rhs) const;
            Vector2D operator*(const Vector2D& rhs) const;
            Vector2D operator*(const Float& rhs) const;
            Vector2D operator/(const Vector2D& rhs) const;
            Vector2D operator/(const Float& rhs) const;

            Vector2D& operator+=(const Vector2D& rhs);
            Vector2D& operator-=(const Vector2D& rhs);
            Vector2D& operator*=(const Vector2D& rhs);
            Vector2D& operator/=(const Vector2D& rhs);
        };
    }
}

#endif