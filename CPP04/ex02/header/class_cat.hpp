#ifndef CLASS_CAT_HPP
#define CLASS_CAT_HPP
#include "class_animal.hpp"
#include "class_brain.hpp"

class Cat: public Animal{
public:
	Cat();
	Cat(Cat const &inst);
	virtual ~Cat();

	void 				setIdeas(std::string ideas, int num);
	std::string			getIdeas(int num) const;
	virtual std::string	getSound() const;
	virtual void		makeSound() const;

	Cat	&operator=(Cat const &inst);

private:
	std::string _Sound;
	Brain		*_Brain;
};


#endif