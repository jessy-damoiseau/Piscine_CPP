#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
public:
	Intern();
	Intern(Intern const &inst);
	~Intern();

	Form    *makeForm(std::string FormName, std::string Target);

	Intern  &operator=(Intern const &inst);

private:
	Form    *createShrubbery(std::string Target);
	Form    *createPresidential(std::string Target);
	Form    *createRobotomy(std::string Target);
};

#endif