#include "Fixed.hpp"
#include "Point.hpp"


int main() {
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	Point p1(3, 3);
	Point p2(10, 0);
	Point p3(5, 5);
	Point p4(15, 5);

	bsp(a, b, c, p1);
	bsp(a, b, c, p2);
	bsp(a, b, c, p3);
	bsp(a, b, c, p4);
	return 0;
}
