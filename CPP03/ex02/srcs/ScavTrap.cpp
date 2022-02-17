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

void	ScavTrap::attack(std::string const &Target) {
	if (this->getEnergyPoints() && this->getHitPoints()){
		std::cout << "ScavTrap " << this->getName() << " attack " << Target << " causing " << this->getAttackPoints() << " points of damage !" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else if (!this->getEnergyPoints())
		std::cout << "ScavTrap " << this->getName() << "has no more energy" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << "has no more life" << std::endl;
}

void	ScavTrap::guardGate() {
	if (this->getEnergyPoints() && this->getHitPoints()){
		std::cout << "ScavTrap " << this->getName() << " have enterred in Gate keeper mode" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else if (!this->getEnergyPoints())
		std::cout << "ScavTrap " << this->getName() << "has no more energy" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << "has no more life" << std::endl;;
}

// *?* operator *?* //

ScavTrap &ScavTrap::operator=(const ScavTrap &inst) {
	this->setName(inst.getName());
	this->setEnergyPoints(inst.getEnergyPoints());
	this->setAttackPoints(inst.getAttackPoints());
	this->setHitPoints(inst.getHitPoints());
	return *this;
}