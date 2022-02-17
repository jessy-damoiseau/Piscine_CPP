#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap{
public:

	DiamondTrap();
	DiamondTrap(DiamondTrap const &inst);
	DiamondTrap(std::string Name);
	~DiamondTrap();

	std::string	getDiamondTrapName();

	void	whoAmI();
	void	attack(std::string const &target);

	DiamondTrap	&operator=(DiamondTrap const &inst);

private:
	std::string _Name;
};

#endif