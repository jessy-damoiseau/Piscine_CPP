#include "Fixed.hpp"

/////////////////////////////////////////////////////

Fixed::Fixed(): _nb(0){
	//std::cout << "class Fixed -> default constructor call" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	//std::cout << "class Fixed -> copy constructor call" << std::endl;
	*this = src;
}

Fixed::Fixed(const int raw): _nb(raw << _bit) {
	//std::cout << "class Fixed(Int) -> constructor call" << std::endl;
}

Fixed::Fixed(const float raw): _nb(std::roundf((1 << _bit) * raw)) {
	//std::cout << "class Fixed(Float) -> constructor call" << std::endl;
}

Fixed::~Fixed() {
	//std::cout << "class Fixed -> destructor called" << std::endl;
}

/////////////////////////////////////////////////////

int Fixed::getRawBits() const {
	return this->_nb;
}

void Fixed::setRawBits(const int raw) {
	this->_nb = raw;
}

/////////////////////////////////////////////////////

float Fixed::toFloat() const {
	return ((float)_nb / (float)(1 << _bit));
}

int	Fixed::toInt() const {
	return (_nb >> _bit);
}

Fixed	&Fixed::min(Fixed &cFixed1, Fixed &cFixed2) {
	return (cFixed1 > cFixed2 ? cFixed1 : cFixed2);
}

Fixed	&Fixed::max(Fixed &cFixed1, Fixed &cFixed2) {
	return (cFixed1 < cFixed2 ? cFixed1 : cFixed2);
}

const Fixed	&Fixed::min(const Fixed &cFixed1, const Fixed &cFixed2) {
	return (cFixed1 > cFixed2 ? cFixed1 : cFixed2);
}

const Fixed	&Fixed::max(const Fixed &cFixed1, const Fixed &cFixed2) {
	return (cFixed1 < cFixed2 ? cFixed1 : cFixed2);
}

/////////////////////////////////////////////////////

Fixed	&Fixed::operator=(const Fixed &rhs) {
	this->_nb = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(const Fixed &rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	&Fixed::operator++() {
	*this = *this + (float)1/256;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	t(*this);
	++*this;
	return t;
}

Fixed	Fixed::operator-(const Fixed &rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	&Fixed::operator--() {
	this->_nb -= (1 << this->_bit) * 1;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	t(*this);
	--*this;
	return t;
}

Fixed	Fixed::operator*(const Fixed &rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

bool	Fixed::operator<(const Fixed &rhs) const {
	if (this->toFloat() < rhs.toFloat())
		return  EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator>(const Fixed &rhs) const {
	if (this->toFloat() > rhs.toFloat())
		return  EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator<=(const Fixed &rhs) const {
	if (this->toFloat() <= rhs.toFloat())
		return  EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator>=(const Fixed &rhs) const {
	if (this->toFloat() >= rhs.toFloat())
		return  EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator==(const Fixed &rhs) const {
	if (this->toFloat() == rhs.toFloat())
		return  EXIT_SUCCESS;
	return EXIT_FAILURE;
}

bool	Fixed::operator!=(const Fixed &rhs) const {
	if (this->toFloat() != rhs.toFloat())
		return  EXIT_SUCCESS;
	return EXIT_FAILURE;
}



//////////////////////////////////////////////////////

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return o;
}

/////////////////////////////////////////////////////

int Fixed::_bit = 8;