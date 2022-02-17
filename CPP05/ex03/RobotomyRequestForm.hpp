#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm : public Form{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &inst);
    RobotomyRequestForm(std::string Traget);
    ~RobotomyRequestForm();

    std::string     getTraget() const;

    virtual void 	execute(Bureaucrat const & inst) const;

    RobotomyRequestForm &operator=(RobotomyRequestForm const &inst);
private:
    std::string _Traget;
};

#endif