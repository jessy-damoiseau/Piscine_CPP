#include "Form.hpp"

// * Constructor/Destructor * //

Form::Form(): _Name("?"), _Signed(false), _GradeSign(1), _GradeExec(1) {
	//std::cout << "Class Form -> Default constructor call" << std::endl;
}

Form::Form(const Form &inst): _GradeSign(inst.getGradeSign()), _GradeExec(inst.getGradeExec()) {
	//std::cout << "Class Form -> Copy constructor call" << std::endl;
	*this = inst;
}

Form::Form(std::string Name, int Grade_sign, int Grade_exec): _Name(Name), _Signed(false), _GradeSign(Grade_sign), _GradeExec(Grade_exec){
	//std::cout << "Class Form -> Parametric constructor call" << std::endl;
	try{
		if (Grade_sign > 150 || Grade_exec > 150)
			throw Form::GradeTooLowException();
		else if (Grade_sign < 1 || Grade_exec < 1)
			throw Form::GradeTooHighException();
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
		Form::~Form();
	}
}

Form::~Form() {
	//std::cout << "Class Form -> Destructor call" << std::endl;
}

// ** get/set ** //

bool         Form::getSigned() const{
	return _Signed;
}

int         Form::getGradeExec() const{
	return _GradeExec;
}

int         Form::getGradeSign() const{
	return _GradeSign;
}

std::string Form::getName() const{
	return _Name;
}

// *** function *** //

void Form::beSigned(Bureaucrat &inst) {
	std::cout << "Bureaucrat " << inst.getName() << " tries to sign the from -> " << std::flush;
	try{
		if (inst.getGrade() > _GradeSign){
			std::cout << "Fail" << std::endl;
			throw Form::GradeTooLowException();
		}
		else{
			std::cout << "Success" << std::endl;
			_Signed = true;
		}
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	inst.signForm(*this);
}

// *?* operator *?* //

Form &Form::operator=(Form const &inst) {
	_Signed = inst.getSigned();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &inst){
	std::cout << "From:" << std::endl;
	std::cout << "  Name -> " << inst.getName() << std::endl;
	std::cout << "  Sign Grade -> " << inst.getGradeSign() << std::endl;
	std::cout << "  Exec Grade -> " << inst.getGradeExec() << std::endl;
	if (inst.getSigned())
		std::cout << "  Status -> signed";
	else
		std::cout << "  Status -> unsigned";
	return o;
}

// *!* exception *!* //

const char *Form::GradeTooHighException::what() const throw() {
	return ("Error-From: Grade to high");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Error-From: Grade to low");
}