#include "Fixed.hpp"


Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}


Fixed::Fixed(int n) {
	std::cout << "Int constructor called" << std::endl;
	_value = n << _fractionalBits;
}


Fixed::Fixed(float n) {
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(n * (1 << _fractionalBits));
}


Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}


Fixed	&Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other.getRawBits();
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
