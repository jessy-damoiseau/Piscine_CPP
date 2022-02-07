#include "../header/class_animal.hpp"

// * Constructor/Destructor * //

Animal::Animal(): _Type("Animal"){
	//std::cout << "Class Animal -> Default constructor call" << std::endl;
}

Animal::Animal(const Animal &inst) {
	//std::cout << "Class Animal -> Copy constructor call" << std::endl;
	*this = inst;
}

Animal::Animal(std::string type): _Type(type) {
	//std::cout << "Class Animal -> Copy constructor call" << std::endl;
}

Animal::~Animal() {
	//std::cout << "Class Animal -> Destructor call" << std::endl;
}

// ** get/set ** //

std::string Animal::getType() const {
	return _Type;
}

// *?* operator *?* //

Animal &Animal::operator=(const Animal &inst) {
	_Type = inst.getType();
	return *this;
}