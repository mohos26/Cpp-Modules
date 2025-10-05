#include "Point.hpp"


Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(const float x, const float y) {
	Fixed	tmpX(x);
	Fixed	tmpY(y);

	this->x = tmpX;
	this->y = tmpY;
}

Point::Point(Point &other) {
	x = other.x;
	y = other.y;
}

Point&	Point::operator=(const Point &other) {
	x = other.x;
	y = other.y;
	return *this;
}

Fixed	Point::getX(void) const{
	return x;
}

Fixed	Point::getY(void) const{
	return y;
}

Point::~Point() {

}
