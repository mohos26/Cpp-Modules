#include <iostream>


class Fixed
{
	private:
		int	_value;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed(int n);
		Fixed(float n);
		Fixed(const Fixed &other);
		Fixed	&operator=(const Fixed &other);

		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

		~Fixed();
};

std::ostream&	operator<<(std::ostream &out, const Fixed &fixed);
