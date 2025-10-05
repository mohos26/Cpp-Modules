#include "Fixed.hpp"
#include "Point.hpp"


int main() {
	Point a(1, 7);
	Point b(7, 4);
	Point c(9, 11);

	Point p1(7, 6);
	Point p2(5, 9);
	Point p3(3, 12);

	std::cout << bsp(a, b, c, p1) << std::endl; // in
	std::cout << bsp(a, b, c, p2) << std::endl; // in bord
	std::cout << bsp(a, b, c, p3) << std::endl; // out

	return 0;
}
