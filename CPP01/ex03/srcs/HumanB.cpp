#include "../header/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _classWeapon(0){
    
    //std::cout << "Class HumanB -> constructor call" << std::endl;
}

HumanB::~HumanB() {
    //std::cout << "Class HumanA -> destructor call" << std::endl;
}

void HumanB::attack() const {
    if (!_classWeapon)
        return ;
    std::cout << this->_name << " attacks with his "
    << this->_classWeapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& classWeapon) {
    this->_classWeapon = &classWeapon;
}