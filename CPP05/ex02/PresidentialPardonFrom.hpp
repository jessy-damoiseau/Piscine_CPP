#ifndef PRESIDENTIALPARDONFROM_HPP
#define PRESIDENTIALPARDONFROM_HPP

#include "From.hpp"

class PresidentialPardonFrom : public From {
public:
    PresidentialPardonFrom();
    PresidentialPardonFrom(PresidentialPardonFrom const &inst);
    PresidentialPardonFrom(std::string Traget);
    ~PresidentialPardonFrom();

    virtual void 	execute(Bureaucrat const & executor) const;

    PresidentialPardonFrom  &operator=(PresidentialPardonFrom const &inst);
private:
    std::string _Traget;
};

#endif