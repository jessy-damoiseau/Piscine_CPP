#include "../header/ScavTrap.hpp"

// * Constructor/Destructor * //

ScavTrap::ScavTrap(){
	std::cout << "Class ScavTrap -> Default constructor called" << std::endl;
	this->setName("?");
	this->setAttackPoints(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
}

ScavTrap::ScavTrap(const ScavTrap &inst) {
	std::cout << "Class ScavTrap -> Copy constructor called" << std::endl;
	*this = inst;
}

ScavTrap::ScavTrap(std::string Name) {
	std::cout << "Class ScavTrap -> Parametric constructor called" << std::endl;
	this->setName(Name);
	this->setAttackPoints(20);
	this->setEnergyPoints(50);
	this->setHitPoints(100);
}

ScavTrap::~ScavTrap() {
	std::cout << "Class ScavTrap -> Destructor called" << std::endl;
}

// *** fonction *** //

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode" << std::endl;
}

// *?* operator *?* //

ScavTrap &ScavTrap::operator=(const ScavTrap &inst) {
	this->setName(inst.getName());
	this->setEnergyPoints(inst.getEnergyPoints());
	this->setAttackPoints(inst.getAttackPoints());
	this->setHitPoints(inst.getHitPoints());
	return *this;
}