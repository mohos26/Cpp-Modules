#include "Fixed.hpp"


Fixed::Fixed() {
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}


Fixed&	Fixed::operator=(Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (&other != this)
		_value = other.getRawBits();
	return *this;
}


int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}


void	Fixed::setRawBits(int value) {
	_value = value;
}


Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
