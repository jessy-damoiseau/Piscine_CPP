#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &inst);
    ShrubberyCreationForm(std::string Traget);
    ~ShrubberyCreationForm();

    std::string     getTraget() const;

    virtual void 	execute(Bureaucrat const & inst) const;

    ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &inst);
private:
        std::string _Traget;
        void    print_tree(std::string Target) const;
};


#endif