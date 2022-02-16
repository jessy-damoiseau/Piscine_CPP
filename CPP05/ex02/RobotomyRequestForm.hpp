#ifndef ROBOTOMYREQUESTFROM_HPP
#define ROBOTOMYREQUESTFROM_HPP

#include "Form.hpp"
#include <cstdlib>

class Bureaucrat;

class RobotomyRequestFrom : public From{
public:
    RobotomyRequestFrom();
    RobotomyRequestFrom(RobotomyRequestFrom const &inst);
    RobotomyRequestFrom(std::string Traget);
    ~RobotomyRequestFrom();

    std::string     getTraget() const;

    virtual void 	execute(Bureaucrat const & inst) const;

    RobotomyRequestFrom &operator=(RobotomyRequestFrom const &inst);
private:
    std::string _Traget;
};

#endif