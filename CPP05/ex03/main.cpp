#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <ctime>
#include <cstdlib>

int main() {
	srand(time(0));
	Bureaucrat  John("john", 1);
	Bureaucrat  Saly("Saly", 150);
	Intern      Tymothee;

	Form *lettre = Tymothee.makeForm("PresidentialPardon", "Bigard");
	Form *jardin = Tymothee.makeForm("ShrubberyCreation", "Elysee");
	Form *human = Tymothee.makeForm("RobotomyRequest", "Macron");
	Form *fake = Tymothee.makeForm("Troll", "Public");

	(void)fake;
	std::cout << John << std::endl;
	std::cout << Saly << std::endl << std::endl;

	human->beSigned(Saly);
	human->beSigned(John);
	std::cout << std::endl;
	human->execute(Saly);
	human->execute(John);
	human->execute(John);

	std::cout << std::endl;

	lettre->beSigned(Saly);
	lettre->beSigned(John);
	std::cout << std::endl;
	lettre->execute(Saly);
	lettre->execute(John);

	std::cout << std::endl;

	jardin->beSigned(Saly);
	jardin->beSigned(John);
	std::cout << std::endl;
	jardin->execute(Saly);
	jardin->execute(John);
	
	std::cout << std::endl;

	delete lettre;
	delete jardin;
	delete human;
	return 0;
}
