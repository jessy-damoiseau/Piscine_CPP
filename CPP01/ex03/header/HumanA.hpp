#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"


class HumanA{
public:
    HumanA();
    HumanA(std::string name, Weapon& classWeapon);
    ~HumanA();
    void attack() const;

private:
    std::string _name;
    Weapon& _classWeapon;
};

#endif