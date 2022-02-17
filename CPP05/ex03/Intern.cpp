#include "Intern.hpp"

Intern::Intern() {
	//std::cout << "Class Intern -> Default constructor call" << std::endl;
}

Intern::Intern(const Intern &inst) {
	//std::cout << "Class Intern -> Copy constructor call" << std::endl;
	*this = inst;
}

Intern::~Intern() {
	//std::cout << "Class Intern -> Destructor call" << std::endl;
}

Form *Intern::makeForm(std::string FormName, std::string Target) {
	std::string tab[] = {"RobotomyRequest", "PresidentialPardon", "ShrubberyCreation"};
	Form *(Intern::*Inst[3])(std::string) = {&Intern::createRobotomy, &Intern::createPresidential, &Intern::createShrubbery};
	for (int i = 0; i < 3; i++) {
		if (tab[i] == FormName) {
			std::cout << "Intern create " << tab[i] << "Form" << std::endl;
			return ((this->*(Inst[i]))(Target));
		}
	}
	std::cout << "Form "<< FormName << " doesn't exist" << std::endl;
	return 0;
}

Form *Intern::createShrubbery(std::string Target) {
	return (new ShrubberyCreationForm(Target));
}

Form *Intern::createPresidential(std::string Target) {
	return (new PresidentialPardonForm(Target));
}

Form *Intern::createRobotomy(std::string Target) {
	return (new RobotomyRequestForm(Target));
}

Intern &Intern::operator=(const Intern &inst) {
	(void)inst;
	return *this;
}