#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "From.hpp"

class From;

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &inst);
	Bureaucrat(std::string Name, int grade);
	~Bureaucrat();

	int         getGrade() const;
	std::string getName() const;

	void        incGrade();
	void        decGrade();
	void        signFrom(From &inst);

	Bureaucrat  &operator=(Bureaucrat const &inst);

	class   GradeTooHighException;
	class   GradeTooLowException;

private:
	std::string _Name;
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