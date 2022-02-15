#ifndef ROBOTOMYREQUESTFROM_HPP
#define ROBOTOMYREQUESTFROM_HPP

#include "From.hpp"

class RobotomyRequestFrom : public From{
public:
    RobotomyRequestFrom();
    RobotomyRequestFrom(RobotomyRequestFrom const &inst);
    RobotomyRequestFrom(std::string Traget);
    ~RobotomyRequestFrom();

    virtual void 	execute(Bureaucrat const & executor) const;

    RobotomyRequestFrom &operator=(RobotomyRequestFrom const &inst);
private:
    std::string _Traget;
};

#endif