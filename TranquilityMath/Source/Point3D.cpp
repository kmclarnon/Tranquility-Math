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

#include "Point3D.h"

namespace Tranquility
{
	namespace Math
	{
		
		Point3D::Point3D(Float x, Float y, Float z) : x(x), y(y), z(z) {}

		
		Point3D::Point3D() : x(0), y(0), z(0) {}

		
		Point3D& Point3D::operator=(const Point3D& rhs)
		{
			x = rhs.x;
			y = rhs.y;
			z = rhs.z;
			return (*this);
		}

		
		Point3D Point3D::operator+(const Point3D& rhs) const
		{
			return Point3D(x + rhs.x, y + rhs.y, z + rhs.z);
		}

		
		Point3D Point3D::operator-(const Point3D& rhs) const
		{
			return Point3D(x - rhs.x, y - rhs.y, z - rhs.z);
		}

		
		Point3D Point3D::operator-(void) const
		{
			return Point3D(-x, -y, -z);
		}

		
		Point3D Point3D::operator*(const Point3D& rhs) const
		{
			return Point3D(x * rhs.x, y * rhs.y, z * rhs.z);
		}

		
		Point3D Point3D::operator*(const Float& rhs) const
		{
			return Point3D(x * rhs, y * rhs, z * rhs);
		}

		
		Point3D Point3D::operator/(const Point3D& rhs) const
		{
			return Point3D(x / rhs.x, y / rhs.y, z / rhs.z);
		}

		
		Point3D Point3D::operator/(const Float& rhs) const
		{
			return Point3D(x / rhs, y / rhs, z / rhs);
		}

		
		bool Point3D::operator==(const Point3D& rhs) const
		{
			return (x == rhs.x) && (y == rhs.y) && (z == rhs.z);
		}

		
		Point3D& Point3D::operator+=(const Point3D& rhs)
		{
			x += rhs.x;
			y += rhs.y;
			z += rhs.z;
			return (*this);
		}

		
		Point3D& Point3D::operator-=(const Point3D& rhs)
		{
			x -= rhs.x;
			y -= rhs.y;
			z -= rhs.z;
			return (*this);
		}

		
		Point3D& Point3D::operator*=(const Point3D& rhs)
		{
			x *= rhs.x;
			y *= rhs.y;
			z *= rhs.z;
			return (*this);
		}

		
		Point3D& Point3D::operator/=(const Point3D& rhs)
		{
			x /= rhs.x;
			y /= rhs.y;
			z /= rhs.z;
			return (*this);
		}
	}
}