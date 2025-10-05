#include "Fixed.hpp"


Fixed::Fixed() {
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(int n) {
	_value = n << _fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}


Fixed::Fixed(float n) {
	_value = roundf(n * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &other) {
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}


Fixed	&Fixed::operator=(const Fixed &other) {
	if (this != &other)
		_value = other.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;

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


Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
