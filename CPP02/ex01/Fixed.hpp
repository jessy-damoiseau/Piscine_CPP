#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed{
public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed(int const raw);
	Fixed(float const raw);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int 	toInt() const;

	Fixed	&operator=(Fixed const &rhs);
private:
	int _nb;
	static int _bit;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif