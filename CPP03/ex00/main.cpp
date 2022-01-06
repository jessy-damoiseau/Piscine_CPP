#include "ClapTrap.hpp"

int main() {

	ClapTrap myTrap("jean-claude");

	std::cout	<< "\nClapTrap :\nname -> " << myTrap.getName() << "\nhit points -> " << myTrap.getHitPoints()
				<< "\nenergy points -> " << myTrap.getEnergyPoints() << "\nattack damage -> "
				<< myTrap.getAttackPoints() << "\n" << std::endl;

	myTrap.attack("Fred");

	std::cout	<< "\nClapTrap :\nname -> " << myTrap.getName() << "\nhit points -> " << myTrap.getHitPoints()
				<< "\nenergy points -> " << myTrap.getEnergyPoints() << "\nattack damage -> "
			  	<< myTrap.getAttackPoints() << "\n" << std::endl;

	myTrap.takeDamage(5);

	std::cout 	<< "\nClapTrap :\nname -> " << myTrap.getName() << "\nhit points -> " << myTrap.getHitPoints()
			  	<< "\nenergy points -> " << myTrap.getEnergyPoints() << "\nattack damage -> "
			  	<< myTrap.getAttackPoints() << "\n" << std::endl;

	myTrap.beRepaired(2);

	std::cout	<< "\nClapTrap :\nname -> " << myTrap.getName() << "\nhit points -> " << myTrap.getHitPoints()
				<< "\nenergy points -> " << myTrap.getEnergyPoints() << "\nattack damage -> "
				<< myTrap.getAttackPoints() << "\n" << std::endl;
	return 0;
}