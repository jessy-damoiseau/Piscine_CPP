#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &inst);
    WrongAnimal(std::string WrongType);
    virtual ~WrongAnimal();

    std::string	getType() const;
	void		makeSound() const;

    WrongAnimal &operator=(WrongAnimal const &inst);
protected:
	std::string _WrongType;
};


#endif