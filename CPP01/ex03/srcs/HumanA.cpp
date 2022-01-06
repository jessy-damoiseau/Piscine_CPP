#include "../header/HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& classWeapon):
    _name(name), _classWeapon(classWeapon) {
   // std::cout << "Class HumanA -> constructor call" << std::endl;
}

HumanA::~HumanA() {
    //std::cout << "Class HumanA -> destructor call" << std::endl;
}

void HumanA::attack() const {
    std::cout << this->_name << " attacks with his "
    << this->_classWeapon.getType() << std::endl;
}