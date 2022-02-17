#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"


class Form;

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &inst);
	Bureaucrat(std::string Name, int grade);
	~Bureaucrat();

	int         getGrade() const;
	std::string getName() const;

	void    incGrade();
	void    decGrade();
	void    signForm(Form &inst);
	void	executeForm(Form const & form) const;

	Bureaucrat  &operator=(Bureaucrat const &inst);

	class   GradeTooHighException;
	class   GradeTooLowException;

private:
	std::string const _Name;
	int         _Grade;
};

class Bureaucrat::GradeTooHighException : public std::exception {
public:
	virtual const char *what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception {
public:
	virtual const char *what() const throw();
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &inst);

#endif