#ifndef CLASS_BRAIN_HPP
#define CLASS_BRAIN_HPP
#include <iostream>

class Brain {
public:
	Brain();
	Brain(Brain const &inst);
	virtual ~Brain();

	Brain	&operator=(Brain const &inst);

	std::string _Ideas[100];
};

#endif
