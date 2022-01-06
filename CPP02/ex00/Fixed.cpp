#include "Fixed.hpp"

Fixed::Fixed(): _nb(0){
	std::cout << "class Fixed -> default constructor call" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "class Fixed -> copy constructor call" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "class Fixed -> destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member fonction called" << std::endl;
	return this->_nb;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member fonction called" << std::endl;
	this->_nb = raw;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_nb = rhs.getRawBits();
	return *this;
}

int Fixed::_bit = 8;