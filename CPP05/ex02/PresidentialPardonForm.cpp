#include "PresidentialPardonForm.hpp"

PresidentialPardonFrom::PresidentialPardonFrom() : From("PPF", 25, 5), _Traget("?"){
	//std::cout << "Class PPF -> Default constructor call" << std::endl;
}

PresidentialPardonFrom::PresidentialPardonFrom(PresidentialPardonFrom const &inst){
	//std::cout << "Class PPF -> Copy constructor call" << std::endl;
	*this = inst;
}
PresidentialPardonFrom::PresidentialPardonFrom(std::string Traget) : From("PPF", 25, 5), _Traget(Traget){
	//std::cout << "Class PPF -> Parametrique constructor call" << std::endl;
}

PresidentialPardonFrom::~PresidentialPardonFrom() {
	//std::cout << "Class PFF -> Destructor call" << std::endl;
}

std::string PresidentialPardonFrom::getTraget() const {
	return _Traget;
}

void    PresidentialPardonFrom::execute(Bureaucrat const &inst) const {
	
	inst.executeForm(*this);
	try{
		if (this->getSigned() && inst.getGrade() <= this->getGradeExec())
			std::cout << this->getTraget() << " was forgiven by Zaphod Beeblebrox" <<std::endl;
		else if (!this->getSigned())
			throw From::execFail();
		else
			throw From::GradeTooLowException();
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

PresidentialPardonFrom &PresidentialPardonFrom::operator=(PresidentialPardonFrom const &inst) {
	_Traget = inst.getTraget();
	return *this;
}