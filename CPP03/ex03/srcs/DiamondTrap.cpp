#include "../header/DiamondTrap.hpp"

// * Constructor/Destructor * //

DiamondTrap::DiamondTrap(): ClapTrap("?_clap_name"),  _Name("?") {
	std::cout << "Class DiamondTrap -> Default constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackPoints(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap &inst) {
	std::cout << "Class DiamondTrap -> Copy constructor called" << std::endl;
	*this = inst;
}

DiamondTrap::DiamondTrap(std::string Name): ClapTrap(), _Name(Name) {
	std::cout << "Class DiamondTrap -> Parametric constructor called" << std::endl;
	this->ClapTrap::setName(Name + "_clap_name");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackPoints(30);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Class DiamondTrap -> Destructor called" << std::endl;
}

// ** get/set ** //

std::string DiamondTrap::getDiamondTrapName() {
	return _Name;
}

// *** function *** //

void	DiamondTrap::attack(std::string const &Target) {
	std::cout << "oui" << std::endl;
	ScavTrap::attack(Target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "Heyy I'm " << _Name << " And my clap name is " << this->getName() << std::endl;
}

// *?* operator *?* //

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &inst) {
	_Name = inst._Name;
	ClapTrap::operator=(inst);
	return *this;
}