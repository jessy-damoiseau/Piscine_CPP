#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <algorithm>

class DoNotFind: public std::exception{
	virtual const char * what() const throw(){
		return ("Error-EasyFind: Value not found");
	}
};

template <typename T>
void   easyfind(T container, int i){

	if (std::find(container.begin(), container.end(), i) != container.end()){
		std::cout << "Value found" << std::endl;
		return ;
	}
	throw DoNotFind();
}

#endif