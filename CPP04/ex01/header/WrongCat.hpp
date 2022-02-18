#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"


class WrongCat: public WrongAnimal{
public:
	WrongCat();
	WrongCat(WrongCat const &inst);
	virtual ~WrongCat();

	void		makeSound() const;

	WrongCat	&operator=(WrongCat const &inst);
};

#endif