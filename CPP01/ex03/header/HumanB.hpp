#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB{
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon& classWeapon);
private:
    std::string _name;
    Weapon* _classWeapon;
};

#endif