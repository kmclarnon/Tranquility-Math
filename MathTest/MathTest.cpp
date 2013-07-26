
#include <stdio.h>
#include "Float.h"
#include "Point2D.h"

using namespace Tranquility::Math;

int num_tests = 0;
int tests_passed = 0;
int tests_failed = 0;

void print_point(Point2D p)
{
	printf("Point: %i, %i", p.x, p.y);
}

void check_expect(Point2D val, Point2D exp)
{
	num_tests++;

	if(val == exp)
	{
		printf("Test passed\n");
		tests_passed++;
	}
	else
	{
		printf("Test failed\n");
		tests_failed++;
	}
}

void check_expect(Float val, Float exp)
{
	num_tests++;

	if(val == exp)
	{
		printf("Test passed\n");
		tests_passed++;
	}
	else
	{
		printf("Test failed\n");
		tests_failed++;
	}
}

void test_point2d()
{
	Point2D pf1(2.0f, 5.0f);
	Point2D pf2(6.0f, 1.0f);
	Point2D pf3 = pf1 + pf2;	// (8.0f, 6.0f)
	Point2D pf4 = pf2 - pf1;	// (4.0f, -4.0f)
	Point2D pf5 = pf2 / 2;		// (3.0f, 0.5f)
	Point2D pf6 = pf4 * 2;		// (8.0f, -8.0f)
	Point2D pf7 = -pf6;			// (-8.0f, 8.0f)
	Point2D pf8(1.0f, 1.0f);	// (1.0f, 1.0f)

	check_expect(pf1, pf1);
	check_expect(pf2, pf2);
	check_expect(pf3, Point2D(8.0f, 6.0f));
	check_expect(pf4, Point2D(4.0f, -4.0f));
	check_expect(pf5, Point2D(3.0f, 0.5f));
	check_expect(pf6, Point2D(8.0f, -8.0f));
	check_expect(pf7, Point2D(-8.0f, 8.0f));
	check_expect(pf8 += pf1, Point2D(3.0f, 6.0f));

	Point2D pi1(4, 3);
	Point2D pi2(5, 6);
	Point2D pi3 = pi1 + pi2;		// (9, 9)
	Point2D pi4 = pi2 - pi1;		// (1, 3)
	Point2D pi5 = pi3 / 3;			// (3, 3)
	Point2D pi6 = pi5 * 2;			// (6, 6)
	Point2D pi7 = -pi1;				// (-4, -3)

	check_expect(pi1, pi1);
	check_expect(pi2, pi2);
	check_expect(pi3, Point2D(9, 9));
	check_expect(pi4, Point2D(1, 3));
	check_expect(pi5, Point2D(3, 3));
	check_expect(pi6, Point2D(6, 6));
	check_expect(pi7, Point2D(-4, -3));

}

int main(int argc, char* argv[])
{
	// TODO: more (and better) tests
	test_point2d();


	return 0;
}

