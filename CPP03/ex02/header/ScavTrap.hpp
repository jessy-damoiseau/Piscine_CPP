#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap();
	ScavTrap(ScavTrap const &inst);
	ScavTrap(std::string Name);
	~ScavTrap();

	void	guardGate();

	ScavTrap	&operator=(ScavTrap const &inst);
};

#endif