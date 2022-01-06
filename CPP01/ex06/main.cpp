#include "Karen.hpp"

void check_error(int ac, char **av) {

	std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (ac != 2)
		exit(1);
	for (int loop = 0; loop < 4; loop++)
		if (av[1] == tab[loop])
			return ;
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	exit(0);
}

int main(int ac, char **av) {

	Karen myKaren;
	check_error(ac, av);
	myKaren.complain(av[1]);
}