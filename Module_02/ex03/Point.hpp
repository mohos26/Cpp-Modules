#include "Fixed.hpp"
#include <cmath>


class Point {
	private:
		Fixed	x;
		Fixed	y;
	public:
		Point();
		Point(const float x, const float y);
		Point(Point &other);
		Point	&operator=(const Point &other);

		Fixed	getX(void);
		Fixed	getY(void);

		~Point();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
