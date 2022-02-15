#include "../header/ft_replace.hpp"


int check_error(int ac , char **av) {
	if (ac < 4) {
		std::cout << "Error: not enough arg" << std::endl;
		return 1;
	}
	else if (ac > 4) {
		std::cout << "Error: too many arg" << std::endl;
		return 1;
	}
	if (!av[2][0]){
			std::cout << "Error: invalide arg" << std::endl;
			return 1;
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
	
	if (ifile.is_open()){
		std::string     namefile = av[1];
		namefile.append(".replace");
		std::ofstream	ofile(namefile.c_str());
		std::string		str;
		while (getline(ifile, str)) {
				go_find_and_replace(str, av[2], av[3], &ofile);
		}
		ofile.close();
		ifile.close();
	}
	else{
		std::cout << "Error : fail open file" << std::endl;
	}
}

int main(int ac, char **av){
	if (check_error(ac, av))
		return 1;
	go_replace(av);
	return 0;
}