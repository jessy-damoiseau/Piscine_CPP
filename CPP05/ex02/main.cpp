#include "Bureaucrat.hpp"
#include "From.hpp"

int main() {
	Bureaucrat  John("john", 1);
	Bureaucrat  Saly("Saly", 150);
	From        Fisc("Fisc", 1, 1);

	std::cout << Fisc << std::endl << std::endl;
	std::cout << John << std::endl;
	std::cout << Saly << std::endl;

	Fisc.beSigned(Saly);
	std::cout << std::endl << Fisc << std::endl << std::endl;
	Fisc.beSigned(John);
	std::cout << std::endl << Fisc << std::endl;


	return 0;
}
