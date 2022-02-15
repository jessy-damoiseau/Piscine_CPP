#include "Fixed.hpp"

int	main(void) {

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(4);

	std::cout << "my test" << std::endl;
	std::cout << c + c << std::endl;
	std::cout << c - c << std::endl;
	std::cout << c * c << std::endl;
	std::cout << c / c << std::endl;

	if (c < b)
		std::cout << "c < b" << std::endl;
	if (b != c)
		std::cout << "b != c" << std::endl;
	if (c > a)
		std::cout << "c > a" << std::endl;
	if (a <= b)
		std::cout << "a <= b" << std::endl;
	if (b >= c)
		std::cout << "b >= c" << std::endl;
	std::cout << Fixed::min(c, b) << std::endl;

	std::cout << std::endl << "test sujet" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}