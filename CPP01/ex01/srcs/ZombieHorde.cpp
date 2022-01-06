#include "../header/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie *horde = new Zombie[N];
    for (int Lhorde = 0; Lhorde < N; Lhorde++)
        horde[Lhorde]._name = name;
    return (horde);
}