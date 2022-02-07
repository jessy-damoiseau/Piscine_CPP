#ifndef CLASS_CAT_HPP
#define CLASS_CAT_HPP
#include "class_animal.hpp"

class Cat: public Animal{
public:
	Cat();
	Cat(Cat const &inst);
	~Cat();

	virtual std::string	getSound() const;
	virtual void		makeSound() const;

	Cat	&operator=(Cat const &inst);

private:
	std::string _Sound;
};


#endif