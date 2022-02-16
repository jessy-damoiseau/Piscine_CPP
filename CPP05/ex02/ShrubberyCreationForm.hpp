#ifndef SHRUBBERYCREATIONFROM_HPP
#define SHRUBBERYCREATIONFROM_HPP

#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationFrom : public From{
public:
    ShrubberyCreationFrom();
    ShrubberyCreationFrom(ShrubberyCreationFrom const &inst);
    ShrubberyCreationFrom(std::string Traget);
    ~ShrubberyCreationFrom();

    std::string     getTraget() const;

    virtual void 	execute(Bureaucrat const & inst) const;

    ShrubberyCreationFrom   &operator=(ShrubberyCreationFrom const &inst);
private:
        std::string _Traget;
        void    print_tree(std::string Target) const;
};


#endif