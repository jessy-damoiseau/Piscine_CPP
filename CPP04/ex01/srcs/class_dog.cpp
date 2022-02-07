#include "../header/class_dog.hpp"

// * Constructor/Destructor * //

Dog::Dog(): Animal("Dog"), _Sound("Waaaf") {
	//std::cout << "Class Dog -> Default constructor call" << std::endl;
	_Brain = new Brain();
}

Dog::Dog(const Dog &inst) {
	//std::cout << "Class Dog -> Copy constructor call" << std::endl;
	*this = inst;
}

Dog::~Dog() {
	//std::cout << "Class Dog -> Destructor call" << std::endl;
	delete _Brain;
}

// ** get/set ** //

std::string Dog::getIdeas(int num) const {
	if (num >= 0 && num < 100)
		return this->_Brain->_Ideas[num];
	return "error getIdeas: number not included being 1 and 99";
}

void Dog::setIdeas(std::string ideas, int num) {
	if (num >= 0 && num < 100) {
		//std::cout << "Dog Idea set !" << std::endl;
		this->_Brain->_Ideas[num] = ideas;
	}
	else
		std::cout << "error setIdeas: number not included being 0 and 99" << std::endl;
}

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