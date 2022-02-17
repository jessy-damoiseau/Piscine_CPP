#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &inst);
    PresidentialPardonForm(std::string Traget);
    ~PresidentialPardonForm();

    std::string     getTraget() const;

    virtual void 	execute(Bureaucrat const &inst) const;

    PresidentialPardonForm  &operator=(PresidentialPardonForm const &inst);
private:
    std::string _Traget;
};

#endif