#include <iostream>
#include <string>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define ERROR -1

typedef struct s_stock{

	char    c;
	int     i;
	float   f;
	double  d;
}t_stock;

int check_error(std::string str){
	int minus = 0, point = 0, letter = 0;

	if (str.length() == 1)
		return CHAR;
	if (strcmp(str, "+inff") || strcmp(str, "-inff") || strcmp(str, "nanf"))
		return FLOAT;
	if (strcmp(str, "+inf") || strcmp(str, "-inf") || strcmp(str, "nan"))
		return DOUBLE;
	for (int i = 0; i < str.length(); i++){
		if (str[i] == '-')
			minus++;
		else if (!isdigit(str[i]))
			letter++;
		else if (str[i] == '.')
			point++;
	}
	if (point > 1 || letter > 1 || isalpha(str[str.length()]) || str[str.length()] == 'f') || minus > 1)
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '.') {
			if (str[str.length()] == 'f')
				return FLOAT;
			return DOUBLE;
		}
	}

	return (INT);
}


int print(std::string str){
	t_stock stock;
	int c = check_error(str);
	if (c == -1){
		std::cout << "Error" << std::endl;
		return 1;
	}
	if (c == CHAR)
		stock.c = str[0];
	else if (c == INT)
		stock.i = stoi(str);
	else if (c == FLOAT)
		stock.i = stof(str);
	else
		stock.i = stod(str);

}

int main(int ac, char **av){

	if (ac > 2)
		return 1;
	std::string str = av[1];
	if (print(str))
		return 1;
	return 0;
}