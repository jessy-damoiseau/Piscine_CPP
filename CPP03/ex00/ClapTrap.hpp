#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP
#include <iostream>

class ClapTrap{
public:
	ClapTrap();
	ClapTrap(std::string const Name);
	ClapTrap(ClapTrap const &inst);
	~ClapTrap();

	std::string	getName() const;
	int 		getHitPoints() const;
	int 		getEnergyPoints() const;
	int 		getAttackPoints() const;

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap	&operator=(ClapTrap const &inst);

private:
	std::string _Name;
	int			_AttackDamage;
	int			_EnergyPoints;
	int			_HitPoints;
};

#endif