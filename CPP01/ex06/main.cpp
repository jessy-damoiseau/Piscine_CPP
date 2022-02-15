#include "Karen.hpp"

int check_error(int ac, char **av) {

	std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (ac != 2)
		return 1;
	for (int loop = 0; loop < 4; loop++)
		if (av[1] == tab[loop])
			return 0;
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return 0;
}

int main(int ac, char **av) {

	Karen myKaren;
	if (check_error(ac, av))
		return 1;
	myKaren.complain(av[1]);
}