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

#include "Vector4D.h"

namespace Tranquility
{
    namespace Math
    {
        Vector4D::Vector4D(Float w, Float x, Float y, Float z) : w(w), x(x), y(y), z(z) {}
        Vector4D::Vector4D() : w(0), x(0), y(0), z(0) {}

        // Functions
        Float Vector4D::magnitude() const
        {
            return sqrMagnitude().sqrt();
        }

        Float Vector4D::sqrMagnitude() const
        {
            return w.sqr() + x.sqr() + y.sqr() + z.sqr();
        }

        Vector4D Vector4D::normalize() const
        {
            Float mag = this->magnitude();
            return Vector4D(w / mag, x / mag, y / mag, z / mag);
        }

        Float Vector4D::dot(const Vector4D& v) const
        {
            return (w * v.w + x * v.x + y * v.y + z * v.z);
        }

        Quaternion Vector4D::toQuat() const
        {
            return Quaternion(w, x, y, z);
        }

        Vector4D Vector4D::lerp(const Vector4D& v1, const Vector4D& v2, Float alpha)
        {
            return v1 * alpha + v2 * (1.0f - alpha);
        }

        // Operators
        Vector4D& Vector4D::operator=(const Vector4D& rhs)
        {
            w = rhs.w;
            x = rhs.x;
            y = rhs.y;
            z = rhs.z;
            return (*this);
        }

        Vector4D& Vector4D::operator-(void)
        {
            w = -w;
            x = -x;
            y = -y;
            z = -z;
            return (*this);
        }


        bool Vector4D::operator==(const Vector4D& rhs) const
        {
            return (w == rhs.w) && (x == rhs.x) && (y == rhs.y) && (z == rhs.z);
        }

        bool Vector4D::operator!=(const Vector4D& rhs) const
        {
            return (w != rhs.w) || (x != rhs.x) || (y != rhs.y) || (z != rhs.z);
        }

        Vector4D Vector4D::operator+(const Vector4D& rhs) const
        {
            return Vector4D(w + rhs.w, x + rhs.x, y + rhs.y, z + rhs.z);
        }

        Vector4D Vector4D::operator-(const Vector4D& rhs) const
        {
            return Vector4D(w - rhs.w, x - rhs.x, y - rhs.y, z - rhs.z);
        }

        Vector4D Vector4D::operator*(const Vector4D& rhs) const
        {
            return Vector4D(w * rhs.w, x * rhs.x, y * rhs.y, z * rhs.z);
        }

        Vector4D Vector4D::operator*(const Float& rhs) const
        {
            return Vector4D(w * rhs, x * rhs, y * rhs, z * rhs);
        }

        Vector4D Vector4D::operator/(const Vector4D& rhs) const
        {
            return Vector4D(w / rhs.w, x / rhs.x, y / rhs.y, z / rhs.z);
        }

        Vector4D Vector4D::operator/(const Float& rhs) const
        {
            return Vector4D(w / rhs, x / rhs, y / rhs, z / rhs);
        }

        Vector4D& Vector4D::operator+=(const Vector4D& rhs)
        {
            w += rhs.w;
            x += rhs.x;
            y += rhs.y;
            z += rhs.z;
            return (*this);
        }

        Vector4D& Vector4D::operator-=(const Vector4D& rhs)
        {
            w -= rhs.w;
            x -= rhs.x;
            y -= rhs.y;
            z -= rhs.z;
            return (*this);
        }

        Vector4D& Vector4D::operator*=(const Vector4D& rhs)
        {
            w *= rhs.w;
            x *= rhs.x;
            y *= rhs.y;
            z *= rhs.z;
            return (*this);
        }

        Vector4D& Vector4D::operator/=(const Vector4D& rhs)
        {
            w /= rhs.w;
            x /= rhs.x;
            y /= rhs.y;
            z /= rhs.z;
            return (*this);
        }

    }
}