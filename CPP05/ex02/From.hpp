#ifndef FROM_HPP
#define FROM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class From{
public:
	From();
	From(From const &inst);
	From(std::string Name, int Grade_sign, int Grade_exec);
	~From();

	bool        getSigned() const;
	int         getGradeSign() const;
	int         getGradeExec() const;
	std::string getName() const;

	void    beSigned(Bureaucrat &inst);
	virtual void 	execute(Bureaucrat const & executor) const = 0;
	

	From    &operator=(From const &inst);

	class GradeTooHighException;
	class GradeTooLowException;
private:
	std::string const 	_Name;
	bool        		_Signed;
	int const        	_GradeSign;
	int const        	_GradeExec;
};

class From::GradeTooHighException : public std::exception {
public:
	virtual const char *what() const throw();
};

class From::GradeTooLowException : public std::exception {
public:
	virtual const char *what() const throw();
};

std::ostream    &operator<<(std::ostream &o, From const &inst);

#endif