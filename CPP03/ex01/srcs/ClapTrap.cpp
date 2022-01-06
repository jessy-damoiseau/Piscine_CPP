#include "../header/ClapTrap.hpp"

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

void	ClapTrap::setName(std::string Name) {
	_Name = Name;
}

void	ClapTrap::setAttackPoints(unsigned int amount){
	_AttackDamage = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount) {
	_EnergyPoints  = amount;
}

void	ClapTrap::setHitPoints(unsigned int amount) {
	_HitPoints = amount;
}

// *** fonction *** //

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << _Name << " attack " << target
	<< " causing " << _AttackDamage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _Name << " take " << amount << " damage !" << std::endl;
	_HitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _Name << " heal " << amount << " hit points !" << std::endl;
	_HitPoints += amount;
}

// *?* operator *?* //

ClapTrap	&ClapTrap::operator=(ClapTrap const &inst) {
	_Name = inst.getName();
	_HitPoints = inst.getHitPoints();
	_AttackDamage = inst.getAttackPoints();
	_EnergyPoints = inst.getEnergyPoints();
	return *this;
}