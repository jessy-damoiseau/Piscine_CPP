#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
	ScavTrap();
	ScavTrap(ScavTrap const &inst);
	ScavTrap(std::string Name);
	~ScavTrap();

	void	guardGate();
	virtual void	attack(std::string const &target);

	ScavTrap	&operator=(ScavTrap const &inst);
};

#endif