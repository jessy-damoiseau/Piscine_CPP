#include "../header/WrongAnimal.hpp"

// * Constructor/Destructor * //

WrongAnimal::WrongAnimal(): _WrongType("WrongAnimal") {
	std::cout << "Class WrongAnimal -> Default constructor call" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &inst) {
	std::cout << "Class WrongAnimal -> Copy constructor call" << std::endl;
	*this = inst;
}

WrongAnimal::WrongAnimal(std::string WrongType): _WrongType(WrongType) {
	std::cout << "Class WrongAnimal -> Parametric constructor call" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Class WrongAnimal -> Destructor call" << std::endl;
}

// ** get/set ** //

std::string WrongAnimal::getType() const {
	return _WrongType;
}



// *** fonction *** //

void WrongAnimal::makeSound() const {
	std::cout << "Sound of an WrongAnimal" << std::endl;
}

// *?* operator *?* //

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &inst) {
	_WrongType = inst.getType();
	return *this;
}