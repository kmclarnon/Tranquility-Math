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

#include "Vector2D.h"

namespace Tranquility
{
    namespace Math
    {
        Vector2D::Vector2D(Float x, Float y) : x(x), y(y) {}
        Vector2D::Vector2D(Point2D p1, Point2D p2) : x(p2.x - p1.x), y(p2.y - p1.y) {}
        Vector2D::Vector2D(Point2D p) : x(p.x), y(p.y) {}
        Vector2D::Vector2D() : x(0), y(0) {}

        Float Vector2D::magnitude() const
        {
            return (x.sqr() + y.sqr()).sqrt();
        }

        Float Vector2D::sqrMagnitude() const
        {
            return x.sqr() + y.sqr();
        }

        Vector2D Vector2D::normalize() const
        {
            Float mag = this->magnitude();
            return Vector2D(x / mag, y / mag);
        }

        Vector2D& Vector2D::operator=(const Vector2D& rhs)
        {
            x = rhs.x;
            y = rhs.y;
            return (*this);
        }

        Vector2D& Vector2D::operator-(void)
        {
            x = -x;
            y = -y;
            return (*this);
        }

        bool Vector2D::operator==(const Vector2D& rhs) const
        {
            return x == rhs.x && y == rhs.y;
        }

        bool Vector2D::operator!=(const Vector2D& rhs) const
        {
            return x != rhs.x || y != rhs.y;
        }

        Vector2D Vector2D::operator+(const Vector2D& rhs) const
        {
            return Vector2D(x + rhs.x, y + rhs.y);
        }

        Vector2D Vector2D::operator-(const Vector2D& rhs) const
        {
            return Vector2D(x - rhs.x, y - rhs.y);
        }

        Vector2D Vector2D::operator*(const Vector2D& rhs) const
        {
            return Vector2D(x * rhs.x, y * rhs.y);
        }

        Vector2D Vector2D::operator*(const Float& rhs) const
        {
            return Vector2D(x * rhs, y * rhs);
        }

        Vector2D Vector2D::operator/(const Vector2D& rhs) const
        {
            return Vector2D(x / rhs.x, y / rhs.y);
        }

        Vector2D Vector2D::operator/(const Float& rhs) const
        {
            return Vector2D(x / rhs, y / rhs);
        }

        Vector2D& Vector2D::operator+=(const Vector2D& rhs)
        {
            x += rhs.x;
            y += rhs.y;
            return (*this);
        }

        Vector2D& Vector2D::operator-=(const Vector2D& rhs)
        {
            x -= rhs.x;
            y -= rhs.y;
            return (*this);
        }

        Vector2D& Vector2D::operator*=(const Vector2D& rhs)
        {
            x *= rhs.x;
            y *= rhs.y;
            return (*this);
        }

        Vector2D& Vector2D::operator/=(const Vector2D& rhs)
        {
            x /= rhs.x;
            y /= rhs.y;
            return (*this);
        }
    }
}