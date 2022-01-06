#include "../header/Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {
    //std::cout << "Class Weapon -> constructor call" << std::endl;
}

Weapon::~Weapon() {
    //std::cout << "Class Weapon -> destructor call" << std::endl;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}

std::string Weapon::getType() const {
    return this->_type;
}