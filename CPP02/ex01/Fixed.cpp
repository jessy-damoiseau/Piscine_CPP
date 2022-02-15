#include "Fixed.hpp"

/////////////////////////////////////////////////////

Fixed::Fixed(): _nb(0){
	std::cout << "class Fixed -> default constructor call" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "class Fixed -> copy constructor call" << std::endl;
	*this = src;
}

Fixed::Fixed(const int raw): _nb(raw << _bit) {
	std::cout << "class Fixed(Int) -> constructor call" << std::endl;
}

Fixed::Fixed(const float raw): _nb(roundf((1 << _bit) * raw)) {
	std::cout << "class Fixed(Float) -> constructor call" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "class Fixed -> destructor called" << std::endl;
}

/////////////////////////////////////////////////////

int Fixed::getRawBits() const {
	std::cout << "getRawBits member fonction called" << std::endl;
	return this->_nb;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member fonction called" << std::endl;
	this->_nb = raw;
}

/////////////////////////////////////////////////////

float Fixed::toFloat() const {
	return ((float)_nb / (float)(1 << _bit));
}

int	Fixed::toInt() const {
	return (_nb << _bit);
}

/////////////////////////////////////////////////////

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_nb = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return o;
}
/////////////////////////////////////////////////////

int Fixed::_bit = 8;