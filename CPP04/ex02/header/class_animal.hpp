#ifndef CLASS_ANIMAL_HPP
#define CLASS_ANIMAL_HPP
#include <iostream>

class Animal{
public:
	Animal();
	Animal(Animal const &inst);
	Animal(std::string type);
	virtual ~Animal();

	virtual std::string	getType() const;
	virtual void		makeSound() const = 0;

	Animal	&operator=(Animal const &inst);
protected:
	std::string _Type;

};


#endif