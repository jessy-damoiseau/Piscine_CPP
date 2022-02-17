#include "../header/class_brain.hpp"

// * Constructor/Destructor * //

Brain::Brain() {
	std::cout << "Class Brain -> Default constructor call" << std::endl;
}

Brain::Brain(const Brain &inst) {
	std::cout << "Class Brain -> Copy constructor call" << std::endl;
	*this = inst;
}

Brain::~Brain() {
	std::cout << "Class Brain -> Destructor call" << std::endl;
}

// *?* operator *?* //

Brain &Brain::operator=(const Brain &inst) {
	for (int Oloop = 0; Oloop < 100; Oloop++)
		_Ideas[Oloop] = inst._Ideas[Oloop];
	return *this;
}