#include <iostream>


class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	public:
		Fixed();
		Fixed(Fixed &other);
		Fixed&	operator=(Fixed &other);

		int		getRawBits(void) const;
		void	setRawBits(int value);

		~Fixed();
};
