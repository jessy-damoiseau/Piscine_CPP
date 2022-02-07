#ifndef CLASS_DOG_HPP
#define CLASS_DOG_HPP
#include "class_animal.hpp"
#include "class_brain.hpp"

class Dog: public Animal {
public:
	Dog();
	Dog(Dog const &inst);
	virtual ~Dog();

	void 				setIdeas(std::string ideas, int num);
	std::string			getIdeas(int num) const;
	virtual std::string	getSound() const;
	virtual void		makeSound() const;

	Dog	&operator=(Dog const &inst);

private:
	std::string _Sound;
	Brain		*_Brain;
};

#endif
