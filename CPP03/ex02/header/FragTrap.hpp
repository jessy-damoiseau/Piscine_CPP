#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <unistd.h>

class FragTrap : public ClapTrap{
public:
	FragTrap();
	FragTrap(FragTrap const &inst);
	FragTrap(std::string Name);
	~FragTrap();

	void	highFiveGuys();
	void	attack(std::string const &target);

	FragTrap	&operator=(FragTrap const &inst);
};

#endif