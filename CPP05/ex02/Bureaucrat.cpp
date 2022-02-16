#include "Bureaucrat.hpp"

// * Constructor/Destructor * //

Bureaucrat::Bureaucrat(): _Name("?"), _Grade(150) {
	//std::cout << "Class Bureaucrat -> Default constructor call" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &inst) {
	//std::cout << "Class Bureaucrat -> Copy constructor call" << std::endl;
	*this = inst;
}

Bureaucrat::Bureaucrat(std::string Name, int grade) : _Name(Name){
	//std::cout << "Class Bureaucrat -> Parametric constructor call" << std::endl;
	try{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_Grade = grade;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		Bureaucrat::~Bureaucrat();
	}
}

Bureaucrat::~Bureaucrat() {
	//std::cout << "Class Bureaucrat -> Destructor call" << std::endl;
}

// ** get/set ** //

int Bureaucrat::getGrade() const {
	return _Grade;
}

std::string Bureaucrat::getName() const {
	return _Name;
}

// *** fonction *** //

void        Bureaucrat::incGrade() {
	std::cout << _Name << " promote" << std::endl;
	try{
		if (_Grade == 1)
			throw Bureaucrat::GradeTooHighException();
		else
			_Grade--;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void        Bureaucrat::decGrade() {
	std::cout << _Name << " demote " << std::endl;
	try {
		if (_Grade == 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_Grade++;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void        Bureaucrat::signFrom(From &inst) {
	if (inst.getSigned())
		std::cout << _Name << " signed " << inst.getName() << std::endl;
	else
		std::cout << _Name << " couldn't sign " << inst.getName() << " because grade to low" << std::endl;
}

void		Bureaucrat::executeForm(From const & form) const {
	if (!form.getSigned())
		std::cout << this->getName() << " does not execute the form because it is not signed" << std::endl;
	else{
		if (this->getGrade() <= form.getGradeExec())
			std::cout << this->getName() << " executed " << form.getName() << std::endl;
		else
			std::cout << this->getName() << "does not execute the form because his grade is too low" << std::endl;
	}
}	
// *?* operator *?* //

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &inst) {
	_Grade = inst.getGrade();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &inst){
	o << inst.getName() << ", bureaucrat grade " << inst.getGrade();
	return o;
}

// *!* exception *!* //

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error: Grade to high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Error: Grade to low");
}