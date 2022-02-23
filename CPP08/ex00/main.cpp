#include "easyfind.hpp"

int main(){
	std::list<int> lst;
	std::vector<int> vec;

	lst.push_back(13);
	lst.push_back(24);
	lst.push_back(67);
	lst.push_back(1);
	lst.push_back(100);

	vec.push_back(13);
	vec.push_back(24);
	vec.push_back(67);
	vec.push_back(1);
	vec.push_back(100);

	try{
		easyfind(lst, 1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		easyfind(vec, 1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		easyfind(lst, 200);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		easyfind(vec, 200);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}


}