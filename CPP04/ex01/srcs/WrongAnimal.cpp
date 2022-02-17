#include "../header/WrongAnimal.hpp"

// * Constructor/Destructor * //

WrongAnimal::WrongAnimal(): _WrongType("WrongAnimal"), _WrongSound("Sound of an Wronganimal"){
	std::cout << "Class WrongAnimal -> Default constructor call" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &inst) {
	std::cout << "Class WrongAnimal -> Copy constructor call" << std::endl;
	*this = inst;
}

WrongAnimal::WrongAnimal(std::string WrongType): _WrongType(WrongType) {
	std::cout << "Class WrongAnimal -> Copy constructor call" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Class WrongAnimal -> Destructor call" << std::endl;
}

// ** get/set ** //

std::string WrongAnimal::getType() const {
	return _WrongType;
}

std::string WrongAnimal::getSound() const {
	return _WrongSound;
}

// *** fonction *** //

void WrongAnimal::makeSound() const {
	std::cout << _WrongSound << std::endl;
}

// *?* operator *?* //

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &inst) {
	_WrongType = inst.getType();
	_WrongSound = inst.getSound();
	return *this;
}