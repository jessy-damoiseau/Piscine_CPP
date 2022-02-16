#include "RobotomyRequestForm.hpp"

RobotomyRequestFrom::RobotomyRequestFrom() : From("RRF", 72, 45), _Traget("?") {
    //std::cout << "Class RRF -> Default constructor call" << std::endl;
}

RobotomyRequestFrom::RobotomyRequestFrom(RobotomyRequestFrom const &inst) {
    //std::cout << "Class RRF -> Copy constructor call" << std::endl;
    *this = inst;
}

RobotomyRequestFrom::RobotomyRequestFrom(std::string Target) : From("RRF", 72, 45), _Traget(Target) {
    //std::cout << "Class RRF -> Parametrique constructor call" << std::endl;
}

RobotomyRequestFrom::~RobotomyRequestFrom() {
    //std::cout << "Class RRF -> Destructor call" << std::endl;
}

std::string RobotomyRequestFrom::getTraget() const {
    return _Traget;
}

void    RobotomyRequestFrom::execute(Bureaucrat const &inst) const {
    
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
			throw From::execFail();
		else
			throw From::GradeTooLowException();
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

RobotomyRequestFrom &RobotomyRequestFrom::operator=(RobotomyRequestFrom const &inst) {
    _Traget = inst.getTraget();
    return *this;
}