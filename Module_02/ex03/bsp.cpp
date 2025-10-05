#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>
#include <cmath>


bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	baseTriangleArea(fabsf((a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY())).toFloat() / 2.0f));

	Fixed	areaPAB(fabsf((a.getX() * (b.getY() - point.getY())
		+ b.getX() * (point.getY() - a.getY())
		+ point.getX() * (a.getY() - b.getY())).toFloat() / 2.0f));

	Fixed	areaPBC(fabsf((point.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - point.getY())
		+ c.getX() * (point.getY() - b.getY())).toFloat() / 2.0f));

	Fixed	areaPCA(fabsf((a.getX() * (point.getY() - c.getY())
		+ point.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - point.getY())).toFloat() / 2.0f));

	Fixed	subTrianglesArea = areaPAB + areaPBC + areaPCA;
	float	eps = 1e-6f;

	if (fabsf(subTrianglesArea.toFloat() - baseTriangleArea.toFloat()) < eps)
		return areaPAB.toFloat() > eps && areaPBC.toFloat() > eps && areaPCA.toFloat() > eps;
	return false;
}
