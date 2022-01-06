#include "../header/ScavTrap.hpp"
#include "../header/FragTrap.hpp"

int main() {


	std::cout << "\t// *** ClapTrap *** //\n" << std::endl;

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

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////

	std::cout << "\t// *** ScavTrap *** //\n" << std::endl;

	ScavTrap myScav("Sully");

	std::cout	<< "\nScavTrap :\nname -> " << myScav.getName() << "\nhit points -> " << myScav.getHitPoints()
				 << "\nenergy points -> " << myScav.getEnergyPoints() << "\nattack damage -> "
				 << myScav.getAttackPoints() << "\n" << std::endl;

	myScav.attack("Simon");

	std::cout	<< "\nScavTrap :\nname -> " << myScav.getName() << "\nhit points -> " << myScav.getHitPoints()
				 << "\nenergy points -> " << myScav.getEnergyPoints() << "\nattack damage -> "
				 << myScav.getAttackPoints() << "\n" << std::endl;

	myScav.takeDamage(70);

	std::cout	<< "\nScavTrap :\nname -> " << myScav.getName() << "\nhit points -> " << myScav.getHitPoints()
				 << "\nenergy points -> " << myScav.getEnergyPoints() << "\nattack damage -> "
				 << myScav.getAttackPoints() << "\n" << std::endl;

	myScav.beRepaired(30);

	std::cout	<< "\nScavTrap :\nname -> " << myScav.getName() << "\nhit points -> " << myScav.getHitPoints()
				 << "\nenergy points -> " << myScav.getEnergyPoints() << "\nattack damage -> "
				 << myScav.getAttackPoints() << "\n" << std::endl;

	myScav.guardGate();

	std::cout	<< "\nScavTrap :\nname -> " << myScav.getName() << "\nhit points -> " << myScav.getHitPoints()
				 << "\nenergy points -> " << myScav.getEnergyPoints() << "\nattack damage -> "
				 << myScav.getAttackPoints() << "\n" << std::endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////

	std::cout << "\t// *** FragTrap *** //\n" << std::endl;

	FragTrap myFrag("Gerald");

	std::cout	<< "\nScavTrap :\nname -> " << myFrag.getName() << "\nhit points -> " << myFrag.getHitPoints()
				 << "\nenergy points -> " << myFrag.getEnergyPoints() << "\nattack damage -> "
				 << myFrag.getAttackPoints() << "\n" << std::endl;

	myFrag.attack("Simon");

	std::cout	<< "\nScavTrap :\nname -> " << myFrag.getName() << "\nhit points -> " << myFrag.getHitPoints()
				 << "\nenergy points -> " << myFrag.getEnergyPoints() << "\nattack damage -> "
				 << myFrag.getAttackPoints() << "\n" << std::endl;

	myFrag.takeDamage(70);

	std::cout	<< "\nScavTrap :\nname -> " << myFrag.getName() << "\nhit points -> " << myFrag.getHitPoints()
				 << "\nenergy points -> " << myFrag.getEnergyPoints() << "\nattack damage -> "
				 << myFrag.getAttackPoints() << "\n" << std::endl;

	myFrag.beRepaired(30);

	std::cout	<< "\nScavTrap :\nname -> " << myFrag.getName() << "\nhit points -> " << myFrag.getHitPoints()
				 << "\nenergy points -> " << myFrag.getEnergyPoints() << "\nattack damage -> "
				 << myFrag.getAttackPoints() << "\n" << std::endl;

	myFrag.highFiveGuys();

	std::cout	<< "\nScavTrap :\nname -> " << myFrag.getName() << "\nhit points -> " << myFrag.getHitPoints()
				 << "\nenergy points -> " << myFrag.getEnergyPoints() << "\nattack damage -> "
				 << myFrag.getAttackPoints() << "\n" << std::endl;
	return 0;
}