#ifndef PRESIDENTIALPARDONFROM_HPP
#define PRESIDENTIALPARDONFROM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonFrom : public From {
public:
    PresidentialPardonFrom();
    PresidentialPardonFrom(PresidentialPardonFrom const &inst);
    PresidentialPardonFrom(std::string Traget);
    ~PresidentialPardonFrom();

    std::string     getTraget() const;

    virtual void 	execute(Bureaucrat const &inst) const;

    PresidentialPardonFrom  &operator=(PresidentialPardonFrom const &inst);
private:
    std::string _Traget;
};

#endif