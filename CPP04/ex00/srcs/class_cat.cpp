#include "../header/class_cat.hpp"

// * Constructor/Destructor * //

Cat::Cat(): Animal("Cat"), _Sound("Miaaa") {
	std::cout << "Class Cat -> Default constructor call" << std::endl;
}

Cat::Cat(const Cat &inst) {
	std::cout << "Class Cat -> Copy constructor call" << std::endl;
	*this = inst;
}

Cat::~Cat() {
	std::cout << "Class Cat -> Destructor call" << std::endl;
}

// ** get/set ** //

std::string Cat::getSound() const {
	return _Sound;
}

// *** fonction *** //

void Cat::makeSound() const {
	std::cout << _Sound << std::endl;
}

// *?* operator *?* //

Cat &Cat::operator=(const Cat &inst) {
	Animal::operator=(inst);
	_Sound = inst.getSound();
	return *this;
}