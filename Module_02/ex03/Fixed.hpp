#pragma once
#include <iostream>


class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(int n);
		Fixed(float n);
		Fixed(const Fixed &other);
		Fixed	&operator=(const Fixed &other);

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed		&min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed		&max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed	&max(const Fixed &fixed1, const Fixed &fixed2);

		~Fixed();
};

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed);

bool			operator>(const Fixed &fixed1, const Fixed &fixed2);
bool			operator>=(const Fixed &fixed1, const Fixed &fixed2);
bool			operator<(const Fixed &fixed1, const Fixed &fixed2);
bool			operator<=(const Fixed &fixed1, const Fixed &fixed2);
bool			operator==(const Fixed &fixed1, const Fixed &fixed2);
bool			operator!=(const Fixed &fixed1, const Fixed &fixed2);

Fixed			operator+(const Fixed &fixed1, const Fixed &fixed2);
Fixed			operator-(const Fixed &fixed1, const Fixed &fixed2);
Fixed			operator*(const Fixed &fixed1, const Fixed &fixed2);
Fixed			operator/(const Fixed &fixed1, const Fixed &fixed2);
