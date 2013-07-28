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

#include "Vector3D.h"

namespace Tranquility
{
    namespace Math
    {
        Vector3D::Vector3D(Float x, Float y, Float z) : x(x), y(y), z(z) {}
        Vector3D::Vector3D(Point3D p1, Point3D p2) : x(p2.x - p1.x), y(p2.y - p1.y), z(p2.z - p1.z) {}
        Vector3D::Vector3D(Point3D p) : x(p.x), y(p.y), z(p.z) {}
        Vector3D::Vector3D() : x(0), y(0), z(0) {}

        Vector3D& Vector3D::operator=(const Vector3D& rhs)
        {
            x = rhs.x;
            y = rhs.y;
            z = rhs.z;
            return (*this);
        }

        Vector3D& Vector3D::operator-(void)
        {
            x = -x;
            y = -y;
            z = -z;
            return (*this);
        }

        bool Vector3D::operator==(const Vector3D& rhs) const
        {
            return (x == rhs.x) && (y == rhs.y) && (z == rhs.z);
        }

        bool Vector3D::operator!=(const Vector3D& rhs) const
        {
            return (x != rhs.x) || (y != rhs.y) || (z != rhs.z);
        }

        Vector3D Vector3D::operator+(const Vector3D& rhs) const
        {
            return Vector3D(x + rhs.x, y + rhs.y, z + rhs.z);
        }

        Vector3D Vector3D::operator-(const Vector3D& rhs) const
        {
            return Vector3D(x - rhs.x, y - rhs.y, z - rhs.z);
        }

        Vector3D Vector3D::operator*(const Vector3D& rhs) const
        {
            return Vector3D(x * rhs.x, y * rhs.y, z * rhs.z);
        }

        Vector3D Vector3D::operator*(const Float& rhs) const
        {
            return Vector3D(x * rhs, y * rhs, z * rhs);
        }

        Vector3D Vector3D::operator/(const Vector3D& rhs) const
        {
            return Vector3D(x / rhs.x, y / rhs.y, z / rhs.z);
        }

        Vector3D Vector3D::operator/(const Float& rhs) const
        {
            return Vector3D(x / rhs, y / rhs, z / rhs);
        }

        Vector3D& Vector3D::operator+=(const Vector3D& rhs)
        {
            x += rhs.x;
            y += rhs.y;
            z += rhs.z;
            return (*this);
        }

        Vector3D& Vector3D::operator-=(const Vector3D& rhs)
        {
            x -= rhs.x;
            y -= rhs.y;
            z -= rhs.z;
            return (*this);
        }

        Vector3D& Vector3D::operator*=(const Vector3D& rhs)
        {
            x *= rhs.x;
            y *= rhs.y;
            z *= rhs.z;
            return (*this);
        }

        Vector3D& Vector3D::operator/=(const Vector3D& rhs)
        {
            x /= rhs.x;
            y /= rhs.y;
            z /= rhs.z;
            return (*this);
        }

    }
}