#include <iostream>
#include <cmath>
#include <limits>
#include <string>
#include <cstring>

bool check(std::string str){
	std::string tab[] = {"-inff", "inff", "-inf", "inf", "nanf", "nan"};
	for(int i = 0; i < 6; i++){
		if (str == tab[i])
			return true;
	}
	return false;
}

void print(std::string str, bool check){
	if (check && (str == "nan" || str == "nanf"))
		std::cout << "char: impossible" << std::endl;
	else if (atol(str.c_str()) == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(atoi(str.c_str())) << std::endl;
	if (check && (str == "nan" || str == "nanf"))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(atol(str.c_str())) << std::endl;
	std::cout << "float: " << static_cast<float>(atof(str.c_str())) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(atof(str.c_str())) << std::endl;
}

int main(int ac, char **av){

	if (ac != 2)
		return 1;
	std::string str = av[1];
	print(str, check(str));
	return 0;
}