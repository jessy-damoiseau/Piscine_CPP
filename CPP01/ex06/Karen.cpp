#include "Karen.hpp"

Karen::Karen() {
	//std::cout << "Class Karen -> constructor call" << std::endl;
}

Karen::~Karen() {
	//std::cout << "Class Karen -> destructor call" << std::endl;
}

void	Karen::complain(std::string level) {

	void (Karen::*leveltype[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int loop = 0; loop < 4; loop++)
		if (tab[loop] == level)
			for (int loop2 = loop; loop2 < 4; loop2++)
				(this->*(leveltype[loop2]))();
}

void	Karen::debug() {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void	Karen::error() {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void 	Karen::info() {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void 	Karen::warning() {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}