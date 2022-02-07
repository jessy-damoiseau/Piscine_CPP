#include "../header/class_cat.hpp"


// * Constructor/Destructor * //

Cat::Cat(): Animal("Cat"), _Sound("Miaaa") {
	//std::cout << "Class Cat -> Default constructor call" << std::endl;
	_Brain = new Brain();
}

Cat::Cat(const Cat &inst) {
	//std::cout << "Class Cat -> Copy constructor call" << std::endl;
	*this = inst;
}

Cat::~Cat() {
	//std::cout << "Class Cat -> Destructor call" << std::endl;
	delete _Brain;
}

// ** get/set ** //

std::string Cat::getIdeas(int num) const {
	if (num >= 0 && num < 100)
		return this->_Brain->_Ideas[num];
	return "error getIdeas: number not included being 1 and 99";
}

void Cat::setIdeas(std::string ideas, int num) {
	if (num >= 0 && num < 100) {
		//std::cout << "Cat Idea set !" << std::endl;
		this->_Brain->_Ideas[num] = ideas;
	}
	else
		std::cout << "error setIdeas: number not included being 1 and 99" << std::endl;
}

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