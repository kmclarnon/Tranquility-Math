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

#include "Dual.h"

namespace Tranquility
{
    namespace Math
    {
        Dual::Dual(Float a, Float b) : a(a), b(b) {}
        Dual::Dual() : a(0), b(0) {}

        Dual& Dual::operator=(const Dual& rhs)
        {
            a = rhs.a;
            b = rhs.b;
            return (*this);
        }

        Dual Dual::operator+(const Dual& rhs) const
        {
            return Dual(a + rhs.a, b + rhs.b);
        }
        Dual Dual::operator-(const Dual& rhs) const
        {
            return Dual(a - rhs.a, b - rhs.b);
        }

        Dual Dual::operator*(const Dual& rhs) const
        {
            //(a + be)(c + de) = ac + (ac + bd)e
            // a = a, b = b, c = rhs.a, d = rhs.b
            return Dual(a * rhs.a, a * rhs.b + b * rhs.a);
        }

        Dual Dual::operator/(const Dual& rhs) const
        {
            //(a + be) / (c + de) = a / c + ((bc - ad) / c^2)e
            // a = a, b = b, c = rhs.a, d = rhs.b
            return Dual(a / rhs.a, (b * rhs.a - a * rhs.b) / (rhs.a ^ 2));
        }

        Dual& Dual::operator+=(const Dual& rhs)
        {
            a += rhs.a;
            b += rhs.b;
            return (*this);
        }

        Dual& Dual::operator-=(const Dual& rhs)
        {
            a -= rhs.a;
            b -= rhs.b;
            return (*this);
        }

        Dual& Dual::operator*=(const Dual& rhs)
        {
            a *= rhs.a;
            b *= rhs.b;
            return (*this);
        }

        Dual& Dual::operator/=(const Dual& rhs)
        {
            a /= rhs.a;
            b /= rhs.b;
            return (*this);
        }

        bool Dual::operator==(const Dual& rhs) const
        {
            return a == rhs.a && b == rhs.b;
        }

        bool Dual::operator!=(const Dual& rhs) const
        {
            return (a != rhs.a) || (b != rhs.b);
        }
    }
}