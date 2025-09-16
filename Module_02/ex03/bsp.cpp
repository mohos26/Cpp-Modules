#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	areaBaseTriangle((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())).toInt() / 2);
	Fixed	areaPAB((a.getX() * (b.getY() - point.getY()) + b.getX() * (point.getY() - a.getY()) + point.getX() * (a.getY() - b.getY())).toInt() / 2);
	Fixed	areaPBC((point.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - point.getY()) + c.getX() * (point.getY() - b.getY())).toInt() / 2);
	Fixed	areaPCA((a.getX() * (point.getY() - c.getY()) + point.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - point.getY())).toInt() / 2);

	std::cout << areaBaseTriangle << std::endl;
	std::cout << areaPAB << std::endl;
	std::cout << areaPBC << std::endl;
	std::cout << areaPCA << std::endl;
	return true;
}
