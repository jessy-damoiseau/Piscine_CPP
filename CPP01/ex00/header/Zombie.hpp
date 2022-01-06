#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    std::string getName() const;
    void Announce();

private:
    std::string _name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif