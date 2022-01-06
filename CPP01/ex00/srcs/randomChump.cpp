#include "../header/Zombie.hpp"

void randomChump(std::string name){
    Zombie instZombie = Zombie(name);
    instZombie.Announce();
}