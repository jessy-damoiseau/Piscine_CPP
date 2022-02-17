#include "../header/class_dog.hpp"

// * Constructor/Destructor * //

Dog::Dog(): Animal("Dog"), _Sound("Waaaf") {
	std::cout << "Class Dog -> Default constructor call" << std::endl;
}

Dog::Dog(const Dog &inst) {
	std::cout << "Class Dog -> Copy constructor call" << std::endl;
	*this = inst;
}

Dog::~Dog() {
	std::cout << "Class Dog -> Destructor call" << std::endl;
}

// ** get/set ** //

std::string Dog::getSound() const {
	return _Sound;
}

// *** fonction *** //

void Dog::makeSound() const {
	std::cout << _Sound << std::endl;
}

// *?* operator *?* //

Dog &Dog::operator=(const Dog &inst) {
	Animal::operator=(inst);
	_Sound = inst.getSound();
	return *this;
}