#include "../header/ft_replace.hpp"


int check_error(int ac , char **av) {
    if (ac < 4) {
        std::cout << "pas assez d'arg" << std::endl;
        return 1;
    }
    else if (ac > 4) {
        std::cout << "trop d'arg" << std::endl;
        return 1;
    }
    for (int loop = 0; loop < 3; loop++)
        if (!av[loop]) {
            std::cout << "arg invalide" << std::endl;
        }
    return 0;
}

void go_find_and_replace(std::string str, std::string s1, std::string s2, std::ofstream* ofile) {

	int i = 0;

	while ((i = str.find(s1, 0)) != -1) {
		str.erase(i, s1.length());
		for(unsigned long s2loop = 0; s2loop < s2.length(); s2loop++) {
			str.insert(i + s2loop, 1, s2[s2loop]);
		}
	}
	*ofile << str << std::endl;
}

void go_replace(char **av) {

    std::ifstream	ifile(av[1]);
    std::ofstream	ofile("FILEMANE.replace");
	std::string		str;

	while (getline(ifile, str)) {
			go_find_and_replace(str, av[2], av[3], &ofile);
	}
	ofile.close();
	ifile.close();
}

int main(int ac, char **av){
    if (check_error(ac, av))
        return 1;
    go_replace(av);
    return 0;
}