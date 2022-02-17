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

// *** fonction *** //

void	FragTrap::attack(std::string const &Target) {
	if (this->getEnergyPoints() && this->getHitPoints()){
		std::cout << "FragTrap " << this->getName() << " attack " << Target << " causing " << this->getAttackPoints() << " points of damage !" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else if (!this->getEnergyPoints())
		std::cout << "FragTrap " << this->getName() << "has no more energy" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << "has no more life" << std::endl;
}

void	FragTrap::highFiveGuys() {
	std::cout << "Heyyy go high fives guys !!" << std::endl;
	if (this->getEnergyPoints() && this->getHitPoints()){
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
	else if (!this->getEnergyPoints())
		std::cout << "FragTrap " << this->getName() << "has no more energy too bad" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << "has no more life too bad" << std::endl;
}

// *?* operator *?* //

FragTrap	&FragTrap::operator=(const FragTrap &inst) {
	this->setName(inst.getName());
	this->setEnergyPoints(inst.getEnergyPoints());
	this->setAttackPoints(inst.getAttackPoints());
	this->setHitPoints(inst.getHitPoints());
	return *this;
}