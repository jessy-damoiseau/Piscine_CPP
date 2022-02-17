#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RRF", 72, 45), _Traget("?") {
    //std::cout << "Class RRF -> Default constructor call" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &inst) {
    //std::cout << "Class RRF -> Copy constructor call" << std::endl;
    *this = inst;
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RRF", 72, 45), _Traget(Target) {
    //std::cout << "Class RRF -> Parametrique constructor call" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    //std::cout << "Class RRF -> Destructor call" << std::endl;
}

std::string RobotomyRequestForm::getTraget() const {
    return _Traget;
}

void    RobotomyRequestForm::execute(Bureaucrat const &inst) const {
    
    inst.executeForm(*this);
    try{
		if (this->getSigned() && inst.getGrade() <= this->getGradeExec()){
            std::cout << "zzzzZZZZzzz Vrrrrrrr" << std::endl;
            if (rand() % 2)
                std::cout << _Traget << " has been robotomized" << std::endl;
            else
                std::cout << "robotization fails" << std::endl;  
        }
		else if (!this->getSigned())
			throw Form::execFail();
		else
			throw Form::GradeTooLowException();
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &inst) {
    _Traget = inst.getTraget();
    return *this;
}