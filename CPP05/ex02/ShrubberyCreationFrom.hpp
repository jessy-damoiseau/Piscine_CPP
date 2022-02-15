#ifndef SHRUBBERYCREATIONFROM_HPP
#define SHRUBBERYCREATIONFROM_HPP

#include "From.hpp"

class ShrubberyCreationFrom : public From{
    ShrubberyCreationFrom();
    ShrubberyCreationFrom(ShrubberyCreationFrom const &inst);
    ShrubberyCreationFrom(std::string Traget);
    ~ShrubberyCreationFrom();

    virtual void 	execute(Bureaucrat const & executor) const;

    ShrubberyCreationFrom   &operator=(ShrubberyCreationFrom const &inst);
private:
        std::string _Traget;
};


#endif