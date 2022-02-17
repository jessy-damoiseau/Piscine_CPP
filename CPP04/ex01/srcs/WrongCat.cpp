#include "../header/WrongCat.hpp"

// * Constructor/Destructor * //

WrongCat::WrongCat(): WrongAnimal("WrongCat"), _WrongSound("MIAAAAAAAAAAAAA") {
	std::cout << "Class WrongCat -> Default constructor call" << std::endl;
}

WrongCat::WrongCat(const WrongCat &inst) {
	std::cout << "Class WrongCat -> Copy constructor call" << std::endl;
	*this = inst;
}

WrongCat::~WrongCat() {
	std::cout << "Class WrongCat -> Destructor call" << std::endl;
}

// ** get/set ** //

std::string WrongCat::getSound() const {
	return _WrongSound;
}

// *** fonction *** //

void WrongCat::makeSound() const {
	std::cout << _WrongSound << std::endl;
}

// *?* operator *?* //

WrongCat &WrongCat::operator=(const WrongCat &inst) {
	WrongAnimal::operator=(inst);
	_WrongSound = inst.getSound();
	return *this;
}