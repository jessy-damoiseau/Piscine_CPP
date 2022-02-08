#include "Bureaucrat.hpp"
#include "From.hpp"

int main() {
	Bureaucrat  John("john", 1);
	Bureaucrat  Saly("Saly", 150);
	From        Fisc("Fisc", 1, 1);

	std::cout << Fisc << std::endl;
	std::cout << John << std::endl;
	std::cout << Saly << std::endl;

	Fisc.beSigned(Saly);
	std::cout << Fisc << std::endl;
	Fisc.beSigned(John);
	std::cout << Fisc << std::endl;


	return 0;
}
