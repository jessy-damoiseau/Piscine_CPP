#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PPF", 25, 5), _Traget("?"){
	//std::cout << "Class PPF -> Default constructor call" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &inst){
	//std::cout << "Class PPF -> Copy constructor call" << std::endl;
	*this = inst;
}
PresidentialPardonForm::PresidentialPardonForm(std::string Traget) : Form("PPF", 25, 5), _Traget(Traget){
	//std::cout << "Class PPF -> Parametrique constructor call" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	//std::cout << "Class PFF -> Destructor call" << std::endl;
}

std::string PresidentialPardonForm::getTraget() const {
	return _Traget;
}

void    PresidentialPardonForm::execute(Bureaucrat const &inst) const {
	
	inst.executeForm(*this);
	try{
		if (this->getSigned() && inst.getGrade() <= this->getGradeExec())
			std::cout << this->getTraget() << " was forgiven by Zaphod Beeblebrox" <<std::endl;
		else if (!this->getSigned())
			throw Form::execFail();
		else
			throw Form::GradeTooLowException();
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &inst) {
	_Traget = inst.getTraget();
	return *this;
}