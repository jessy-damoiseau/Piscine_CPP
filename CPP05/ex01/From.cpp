#include "From.hpp"

// * Constructor/Destructor * //

From::From(): _Name("?"), _Signed(false), _GradeSign(1), _GradeExec(1) {
	std::cout << "Class From -> Default constructor call" << std::endl;
}

From::From(const From &inst) {
	std::cout << "Class From -> Copy constructor call" << std::endl;
	*this = inst;
}

From::From(std::string Name, int Grade_sign, int Grade_exec): _Name(Name), _Signed(false) {
	std::cout << "Class From -> Parametric constructor call" << std::endl;
	try{
		std::cout << "fill GradeSigned -> " << std::flush;
		if (Grade_sign > 150) {
			std::cout << "no" << std::endl;
			throw From::GradeTooLowException();
		}
		else if (Grade_sign < 1) {
			std::cout << "no" << std::endl;
			throw From::GradeTooHighException();
		}
		else {
			std::cout << "yes" << std::endl;
			_GradeSign = Grade_sign;
		}
		std::cout << "fill GradeExecute -> " << std::flush;
		if (Grade_exec > 150) {
			std::cout << "no" << std::endl;
			throw From::GradeTooLowException();
		}
		else if (Grade_exec < 1) {
			std::cout << "no" << std::endl;
			throw From::GradeTooHighException();
		}
		else {
			std::cout << "yes" << std::endl;
			_GradeExec = Grade_exec;
		}
	}
	catch (const From::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
		From::~From();
	}
	catch (const From::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
		From::~From();
	}
}

From::~From() {
	std::cout << "Class From -> Destructor call" << std::endl;
}

// ** get/set ** //

bool         From::getSigned() const{
	return _Signed;
}

int         From::getGradeExec() const{
	return _GradeExec;
}

int         From::getGradeSign() const{
	return _GradeSign;
}

std::string From::getName() const{
	return _Name;
}

// *** function *** //

void From::beSigned(Bureaucrat &inst) {
	std::cout << "Bureaucrat " << inst.getName() << " tries to sign the from -> " << std::flush;
	try{
		if (inst.getGrade() > _GradeSign){
			std::cout << "Fail" << std::endl;
			inst.signFrom(*this);
			throw From::GradeTooLowException();
		}
		else{
			std::cout << "Success" << std::endl;
			_Signed = true;
			inst.signFrom(*this);
		}
	}
	catch (const From::GradeTooLowException &e){
		std::cout << e.what() << std::endl;
	}
}

// *?* operator *?* //

From &From::operator=(From const &inst) {
	_GradeSign = inst.getGradeSign();
	_GradeExec = inst.getGradeExec();
	_Signed = inst.getSigned();
	return *this;
}

std::ostream &operator<<(std::ostream &o, From const &inst){
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

const char *From::GradeTooHighException::what() const throw() {
	return ("Error-From: Grade to high");
}

const char *From::GradeTooLowException::what() const throw() {
	return ("Error-From: Grade to low");
}