#include "Fixed.hpp"


Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}


Fixed::Fixed(Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	_value = other.getRawBits();
}


void Fixed::operator=(Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	_value = other.getRawBits();
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
