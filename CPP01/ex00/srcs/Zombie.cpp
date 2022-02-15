#include "../header/Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Class Zombie -> constructor call" << std::endl;
}

Zombie::Zombie(std::string name): _name(name){
    std::cout << "Zombie " << this->_name << " is alive" << std::endl;
}

Zombie::~Zombie() {
    if (this->_name[0])
        std::cout << "Zombie " << this->_name << " is dead" << std::endl;
    else
        std::cout << "Class Zombie -> destructor call" << std::endl;
}
std::string Zombie::getName() const {
    return this->_name;
}

void Zombie::Announce() {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}