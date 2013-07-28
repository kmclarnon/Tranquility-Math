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

#include "Point2D.h"

namespace Tranquility
{
	namespace Math
	{
		
		Point2D::Point2D(Float x, Float y) : x(x), y(y) {}

		Point2D::Point2D() : x(0), y(0) {}
		
		Point2D& Point2D::operator=(const Point2D& rhs)
		{
			x = rhs.x;
			y = rhs.y;
			return (*this);
		}

		Point2D Point2D::operator+(const Point2D& rhs) const
		{
			return Point2D(x + rhs.x, y + rhs.y);
		}
		
		Point2D Point2D::operator-(const Point2D& rhs) const
		{
			return Point2D(x - rhs.x, y - rhs.y);
		}

		Point2D Point2D::operator-(void) const
		{
			return Point2D(-x, -y);
		}

		Point2D Point2D::operator*(const Point2D& rhs) const
		{
			return Point2D(x * rhs.x, y * rhs.y);
		}

		Point2D Point2D::operator*(const Float& rhs) const
		{
			return Point2D(x * rhs, y * rhs);
		}

		Point2D Point2D::operator/(const Point2D& rhs) const
		{
			return Point2D(x / rhs.x, y / rhs.y);
		}

		Point2D Point2D::operator/(const Float& rhs) const
		{
			return Point2D(x / rhs, y / rhs);
		}

		bool Point2D::operator==(const Point2D& rhs) const
		{
			return (x == rhs.x) && (y == rhs.y);
		}

        bool Point2D::operator!=(const Point2D& rhs) const
        {
            return (x != rhs.x) || (y != rhs.y);
        }
		
		Point2D& Point2D::operator+=(const Point2D& rhs)
		{
			x += rhs.x;
			y += rhs.y;
			return (*this);
		}

		Point2D& Point2D::operator-=(const Point2D& rhs)
		{
			x -= rhs.x;
			y -= rhs.y;
			return (*this);
		}

		Point2D& Point2D::operator*=(const Point2D& rhs)
		{
			x *= rhs.x;
			y *= rhs.y;
			return (*this);
		}

		Point2D& Point2D::operator/=(const Point2D& rhs)
		{
			x /= rhs.x;
			y /= rhs.y;
			return (*this);
		}
	}
}