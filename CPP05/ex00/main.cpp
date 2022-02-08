#include "Bureaucrat.hpp"

int main() {
	Bureaucrat John("john", 2);
	Bureaucrat Massar("Massar", 150);
	Bureaucrat Mathis("Mathis", 6);

	std::cout << John << std::endl;
	std::cout << Massar << std::endl;
	std::cout << Mathis << std::endl;
	John.incGrade();
	std::cout << John << std::endl;
	Massar.decGrade();
	std::cout << Massar << std::endl;
	Mathis.decGrade();
	std::cout << Mathis << std::endl;
	return 0;
}
