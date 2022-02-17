#include "../header/DiamondTrap.hpp"
#include <iostream>
#include<cstdlib>

int	check_error(std::string str){

	std::string tab[] = {"ClapTrap", "ScavTrap", "FragTrap", "DiamondTrap", "Exit", "Clear"};
	for (int loop = 0; loop < 6; loop++){
		if (str == tab[loop])
			return 0;
	}
	std::cout << str << " n'est pas un bonne argument\n" << std::endl;
	return 1;
}

void	function_ClapTrap(){
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

	myTrap.takeDamage(10);

	std::cout	<< "\nClapTrap :\nname -> " << myTrap.getName() << "\nhit points -> " << myTrap.getHitPoints()
				<< "\nenergy points -> " << myTrap.getEnergyPoints() << "\nattack damage -> "
				<< myTrap.getAttackPoints() << "\n" << std::endl;

	myTrap.beRepaired(10);

	std::cout	<< "\nClapTrap :\nname -> " << myTrap.getName() << "\nhit points -> " << myTrap.getHitPoints()
				<< "\nenergy points -> " << myTrap.getEnergyPoints() << "\nattack damage -> "
				<< myTrap.getAttackPoints() << "\n" << std::endl;
}

void	function_ScavTrap(){
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

	myScav.takeDamage(60);
	
	std::cout	<< "\nScavTrap :\nname -> " << myScav.getName() << "\nhit points -> " << myScav.getHitPoints()
				 << "\nenergy points -> " << myScav.getEnergyPoints() << "\nattack damage -> "
				 << myScav.getAttackPoints() << "\n" << std::endl;

	myScav.beRepaired(50);

	std::cout	<< "\nScavTrap :\nname -> " << myScav.getName() << "\nhit points -> " << myScav.getHitPoints()
				 << "\nenergy points -> " << myScav.getEnergyPoints() << "\nattack damage -> "
				 << myScav.getAttackPoints() << "\n" << std::endl;

}

void	function_FragTrap(){
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

	myFrag.takeDamage(70);

	std::cout	<< "\nScavTrap :\nname -> " << myFrag.getName() << "\nhit points -> " << myFrag.getHitPoints()
				 << "\nenergy points -> " << myFrag.getEnergyPoints() << "\nattack damage -> "
				 << myFrag.getAttackPoints() << "\n" << std::endl;

	myFrag.highFiveGuys();

	std::cout << std::endl;
}

void 	function_DiamondTrap(){

	DiamondTrap myDiamond("Herver");

	std::cout	<< "\nDiamondTrap :\nname -> " << myDiamond.getDiamondTrapName() << "\nhit points -> "
				<< myDiamond.getHitPoints() << "\nenergy points -> " << myDiamond.getEnergyPoints()
				<< "\nattack damage -> " << myDiamond.getAttackPoints() << "\n" << std::endl;

	myDiamond.attack("Sam");

	std::cout	<< "\nDiamondTrap :\nname -> " << myDiamond.getDiamondTrapName() << "\nhit points -> "
				 << myDiamond.getHitPoints() << "\nenergy points -> " << myDiamond.getEnergyPoints()
				 << "\nattack damage -> " << myDiamond.getAttackPoints() << "\n" << std::endl;

	myDiamond.takeDamage(20);

	std::cout	<< "\nDiamondTrap :\nname -> " << myDiamond.getDiamondTrapName() << "\nhit points -> "
				 << myDiamond.getHitPoints() << "\nenergy points -> " << myDiamond.getEnergyPoints()
				 << "\nattack damage -> " << myDiamond.getAttackPoints() << "\n" << std::endl;

	myDiamond.beRepaired(10);

	std::cout	<< "\nDiamondTrap :\nname -> " << myDiamond.getDiamondTrapName() << "\nhit points -> "
				 << myDiamond.getHitPoints() << "\nenergy points -> " << myDiamond.getEnergyPoints()
				 << "\nattack damage -> " << myDiamond.getAttackPoints() << "\n" << std::endl;

	myDiamond.highFiveGuys();
	std::cout << std::endl;
	myDiamond.guardGate();
	myDiamond.whoAmI();
	std::cout << std::endl;


}

int main() {

	std::string str;
	void (*f[])(void) = {&function_ClapTrap, &function_ScavTrap, &function_FragTrap, &function_DiamondTrap};
	std::string tab[] = {"ClapTrap", "ScavTrap", "FragTrap", "DiamondTrap"};
	while (1) {
		std::cout << "Que voulez-vous tester : ClapTrap ?, ScavTrap ?, FragTrap ?, DiamondTrap ?" << std::endl;
		std::cout << "Sinon ecrivez 'Clear' ou pour quitter ecrivez 'Exit'" << std::endl;
		getline(std::cin, str);
		while (check_error(str)) {
			if (str == "clear")
				system("clear");
			std::cout << "Que voulez-vous tester : ClapTrap ?, ScavTrap ?, FragTrap ?, DiamondTrap ?" << std::endl;
			std::cout << "Sinon ecrivez 'Clear' ou pour quitter ecrivez 'Exit'" << std::endl;
			getline(std::cin, str);
		}
		if (str == "Clear")
			system("clear");
		if (str == "Exit")
			return 0;
		for (int loop = 0; loop < 4; loop++)
			if (str == tab[loop])
				f[loop]();
		std::cout << std::endl;
	}
	return 0;
}