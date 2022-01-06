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
	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator++(int);
	Fixed	&operator++();
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator--(int);
	Fixed	&operator--();
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;

	static Fixed &min(Fixed &cFixed1, Fixed &cFixed2);
	static Fixed &max(Fixed &cFixed1, Fixed &cFixed2);
	static const Fixed& min(Fixed const &cFixed1, Fixed const &cFixed2);
	static const Fixed& max(Fixed const &cFixed1, Fixed const &cFixed2);
private:
	int _nb;
	static int _bit;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif