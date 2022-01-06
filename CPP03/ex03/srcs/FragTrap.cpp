#include "../header/FragTrap.hpp"

// * Constructor/Destructor * //

FragTrap::FragTrap() {
	std::cout << "Class FragTrap -> Default constructor called" << std::endl;
	this->setName("?");
	this->setAttackPoints(30);
	this->setEnergyPoints(100);
	this->setHitPoints(100);
}

FragTrap::FragTrap(const FragTrap &inst) {
	std::cout << "Class FragTrap -> Copy constructor called" << std::endl;
	*this = inst;
}

FragTrap::FragTrap(std::string Name) {
	std::cout << "Class FragTrap -> Parametric constructor called" << std::endl;
	this->setName(Name);
	this->setAttackPoints(30);
	this->setEnergyPoints(100);
	this->setHitPoints(100);
}

FragTrap::~FragTrap() {
	std::cout << "Class FragTrap -> Destructor called" << std::endl;
}

// *** function *** //

void	FragTrap::highFiveGuys() {
	std::cout << "Heyyy go high fives guys !!" << std::endl;
	for (int loop = 0 ; loop < 3; loop++) {
		sleep(1);
		std::cout << "." << std::flush;
		if (loop != 2)
			std::cout << " " << std::flush;
	}
	sleep(1);
	std::cout << std::endl;
	std::cout << "* Clap !! *" << std::endl;
	sleep(1);
}

// *?* operator *?* //

FragTrap	&FragTrap::operator=(const FragTrap &inst) {
	ClapTrap::operator=(inst);
	return *this;
}