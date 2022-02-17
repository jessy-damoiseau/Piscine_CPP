#include "ClapTrap.hpp"

// * Constructor/Destructor * //

ClapTrap::ClapTrap(): _Name("?"), _AttackDamage(0), _EnergyPoints(10), _HitPoints(10) {
	std::cout << "Class ClapTrap -> Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &inst) {
	std::cout << "Class ClapTrap -> Copy constructor called" << std::endl;
	*this = inst;
}

ClapTrap::ClapTrap(const std::string Name): _Name(Name), _AttackDamage(0), _EnergyPoints(10), _HitPoints(10) {
	std::cout << "Class ClapTrap -> Parametric constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Class ClapTrap -> Destructor called" << std::endl;
}

// ** get/set ** //

std::string ClapTrap::getName() const{
	return _Name;
}

int ClapTrap::getAttackPoints() const {
	return _AttackDamage;
}

int ClapTrap::getEnergyPoints() const {
	return _EnergyPoints;
}

int ClapTrap::getHitPoints() const {
	return _HitPoints;
}

// *** fonction *** //

void	ClapTrap::attack(const std::string &target) {
	if (_EnergyPoints && _HitPoints){
		std::cout << "ClapTrap " << _Name << " attack " << target << " causing " << _AttackDamage << " points of damage !" << std::endl;
		_EnergyPoints--;
	}
	else if (!_EnergyPoints)
		std::cout << "ClapTrap " << _Name << "has no more energy" << std::endl;
	else
		std::cout << "Claptrap " << _Name << "has no more life" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _Name << " take " << amount << " damage !" << std::endl;
	_HitPoints -= amount;
	if (_HitPoints < 0)
		_HitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_EnergyPoints && _HitPoints){
		std::cout << "ClapTrap " << _Name << " heal " << amount << " hit points !" << std::endl;
		_HitPoints += amount;
		_EnergyPoints--;
	}
	else if (!_EnergyPoints)
		std::cout << "ClapTrap " << _Name << "has no more energy" << std::endl;
	else
		std::cout << "Claptrap " << _Name << "has no more life" << std::endl;
}

// *?* operator *?* //

ClapTrap	&ClapTrap::operator=(ClapTrap const &inst) {
	_Name = inst.getName();
	_HitPoints = inst.getHitPoints();
	_AttackDamage = inst.getAttackPoints();
	_EnergyPoints = inst.getEnergyPoints();
	return *this;
}