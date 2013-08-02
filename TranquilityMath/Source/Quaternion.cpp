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

#include "Quaternion.h"
#include "Vector4D.h"

namespace Tranquility
{
    namespace Math
    {
        Quaternion::Quaternion(Float w, Float x, Float y, Float z) : w(w), x(x), y(y), z(z) {}
        Quaternion::Quaternion(Vector4D v) : w(v.w), x(v.x), y(v.y), z(v.z) {}
        Quaternion::Quaternion(Float w, Vector3D v) : w(w), x(v.x), y(v.y), z(v.z) {}
        Quaternion::Quaternion() : w(0), x(0), y(0), z(0) {}

        // Functions
        Float Quaternion::magnitude() const
        {
            return sqrMagnitude().sqrt();
        }

        Float Quaternion::sqrMagnitude() const
        {
            return w.sqr() + x.sqr() + y.sqr() + z.sqr();
        }

        Quaternion Quaternion::normalize() const
        {
            Float mag = magnitude();
            return Quaternion(w / mag, x / mag, y / mag, z / mag);
        }

        Vector4D Quaternion::toVect() const
        {
            return Vector4D(w, x, y, z);
        }

        // Operators
        Quaternion& Quaternion::operator=(const Quaternion& rhs)
        {
            w = rhs.w;
            x = rhs.x;
            y = rhs.y;
            z = rhs.z;
            return (*this);
        }

        Quaternion& Quaternion::operator-(void)
        {
            w = -w;
            x = -x;
            y = -y;
            z = -z;
            return (*this);
        }

        bool Quaternion::operator==(const Quaternion& rhs) const
        {
            return (w == rhs.w) && (x == rhs.x) && (y == rhs.y) && (z == rhs.z);
        }

        bool Quaternion::operator!=(const Quaternion& rhs) const
        {
            return (w != rhs.w) || (x != rhs.x) || (y != rhs.y) || (z != rhs.z);
        }

        Quaternion Quaternion::operator+(const Quaternion& rhs) const
        {
            return Quaternion(w + rhs.w, x + rhs.x, y + rhs.y, z + rhs.z);
        }

        Quaternion Quaternion::operator*(const Quaternion& rhs) const
        {
            return Quaternion(w * rhs.w - x * rhs.x - y * rhs.y - z * rhs.z,
                              w * rhs.x + x * rhs.w + y * rhs.z - z * rhs.y,
                              w * rhs.y - x * rhs.z + y * rhs.w + z * rhs.x,
                              w * rhs.z + x * rhs.y - y * rhs.x + z * rhs.w);
        }

        Quaternion Quaternion::operator*(const Float& rhs) const
        {
            return Quaternion(w * rhs, x * rhs, y * rhs, z * rhs);
        }

        Quaternion Quaternion::operator/(const Float& rhs) const
        {
            return Quaternion(w / rhs, x / rhs, y / rhs, z / rhs);
        }

        Quaternion& Quaternion::operator+=(const Quaternion& rhs)
        {
            w += rhs.w;
            x += rhs.x;
            y += rhs.y;
            z += rhs.z;
            return (*this);
        }

        Quaternion& Quaternion::operator*=(const Quaternion& rhs)
        {
            w = w * rhs.w - x * rhs.x - y * rhs.y - z * rhs.z;
            x = w * rhs.x + x * rhs.w + y * rhs.z - z * rhs.y;
            y = w * rhs.y - x * rhs.z + y * rhs.w + z * rhs.x;
            z = w * rhs.z + x * rhs.y - y * rhs.x + z * rhs.w;
            return (*this);
        }

        static Quaternion lerp(const Quaternion& q1, const Quaternion& q2, Float alpha)
        {
            return Quaternion(Vector4D::lerp(q1.toVect(), q2.toVect(), alpha).normalize());
        }
    }
}