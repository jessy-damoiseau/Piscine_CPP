#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &inst);
    WrongAnimal(std::string WrongType);
    virtual ~WrongAnimal();

    virtual std::string	getType() const;
	virtual std::string	getSound() const;
	virtual void		makeSound() const;

    WrongAnimal &operator=(WrongAnimal const &inst);
protected:
	std::string _WrongType;
private:
	std::string _WrongSound;

};


#endif