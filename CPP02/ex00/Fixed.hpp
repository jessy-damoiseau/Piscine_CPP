#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);

	Fixed	&operator=(Fixed const &rhs);
private:
	int _nb;
	static int _bit;
};

#endif