#include "Fixed.hpp"


Fixed::Fixed() {
	_value = 0;
}


Fixed::Fixed(int n) {
	_value = n << _fractionalBits;
}


Fixed::Fixed(float n) {
	_value = roundf(n * (1 << _fractionalBits));
}


Fixed::Fixed(const Fixed &other) {
	_value = other.getRawBits();
}


Fixed	&Fixed::operator=(const Fixed &other) {
	if (this != &other)
		_value = other.getRawBits();
	return *this;
}


Fixed::~Fixed() {

}


Fixed	&Fixed::operator++(void) {
	_value++;
	return (*this);
}


Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);

	_value++;
	return tmp;
}


Fixed	&Fixed::operator--(void) {
	_value--;
	return (*this);
}


Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);

	_value--;
	return (tmp);
}


int		Fixed::getRawBits(void) const {
	return _value;
}


float	Fixed::toFloat(void) const {
	return (float)_value / (1 << _fractionalBits);
}


int		Fixed::toInt(void) const {
	return _value >> _fractionalBits;
}


Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2) {
	if (fixed1 > fixed2)
		return fixed2;
	return fixed1;
}


const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {
	if (fixed1 > fixed2)
		return fixed2;
	return fixed1;
}


Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2) {
	if (fixed2 > fixed1)
		return fixed2;
	return fixed1;
}


const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {
	if (fixed2 > fixed1)
		return fixed2;
	return fixed1;
}


std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}


bool	operator>(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1.getRawBits() > fixed2.getRawBits());
}


bool	operator>=(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1.getRawBits() >= fixed2.getRawBits());
}


bool	operator<(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1.getRawBits() < fixed2.getRawBits());
}


bool	operator<=(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1.getRawBits() <= fixed2.getRawBits());
}


bool	operator==(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1.getRawBits() == fixed2.getRawBits());
}


bool	operator!=(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1.getRawBits() != fixed2.getRawBits());
}


Fixed	operator+(const Fixed &fixed1, const Fixed &fixed2) {
	return Fixed(fixed1.toFloat() + fixed2.toFloat());
}


Fixed	operator-(const Fixed &fixed1, const Fixed &fixed2) {
	return Fixed(fixed1.toFloat() - fixed2.toFloat());
}


Fixed	operator*(const Fixed &fixed1, const Fixed &fixed2) {
	return Fixed(fixed1.toFloat() * fixed2.toFloat());
}


Fixed	operator/(const Fixed &fixed1, const Fixed &fixed2) {
	return Fixed(fixed1.toFloat() / fixed2.toFloat());
}
