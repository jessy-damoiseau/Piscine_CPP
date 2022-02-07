#ifndef CLASS_ANIMAL_HPP
#define CLASS_ANIMAL_HPP
#include <iostream>

class Animal{
public:
	Animal();
	Animal(Animal const &inst);
	Animal(std::string type);
	~Animal();

	virtual std::string	getType() const;
	virtual std::string	getSound() const;
	virtual void		makeSound() const;

	Animal	&operator=(Animal const &inst);
protected:
	std::string _Type;
private:
	std::string _Sound;
};


#endif