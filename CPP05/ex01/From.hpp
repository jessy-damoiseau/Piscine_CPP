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

	From    &operator=(From const &inst);

	class GradeTooHighException;
	class GradeTooLowException;
private:
	std::string _Name;
	bool        _Signed;
	int         _GradeSign;
	int         _GradeExec;
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