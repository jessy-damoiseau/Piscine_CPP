#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
public:
	Form();
	Form(Form const &inst);
	Form(std::string Name, int Grade_sign, int Grade_exec);
	virtual ~Form();

	bool        getSigned() const;
	int         getGradeSign() const;
	int         getGradeExec() const;
	std::string getName() const;

	void    beSigned(Bureaucrat &inst);
	virtual void 	execute(Bureaucrat const & executor) const = 0;


	Form    &operator=(Form const &inst);

	class GradeTooHighException;
	class GradeTooLowException;
	class execFail;
private:
	std::string const 	_Name;
	bool        		_Signed;
	int const        	_GradeSign;
	int const        	_GradeExec;
};

class Form::GradeTooHighException : public std::exception {
public:
	virtual const char *what() const throw();
};

class Form::GradeTooLowException : public std::exception {
public:
	virtual const char *what() const throw();
};

class Form::execFail : public std::exception {
public:
	virtual const char *what() const throw();
};

std::ostream    &operator<<(std::ostream &o, Form const &inst);

#endif