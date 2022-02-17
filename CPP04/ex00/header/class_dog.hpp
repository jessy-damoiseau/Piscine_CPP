#ifndef CLASS_DOG_HPP
#define CLASS_DOG_HPP
#include "class_animal.hpp"

class Dog: public Animal {
public:
	Dog();
	Dog(Dog const &inst);
	virtual ~Dog();

	virtual std::string	getSound() const;
	virtual void		makeSound() const;

	Dog	&operator=(Dog const &inst);
private:
	std::string _Sound;
};

#endif
