#include "../header/Zombie.hpp"

int main()
{
    int nbzombie = 6;
    Zombie *zombiehorde = zombieHorde(nbzombie, "pierre");
    for (int Lannounce = 0; Lannounce < nbzombie; Lannounce++)
        zombiehorde[Lannounce].Announce();
    delete [] zombiehorde;
    return 0;
}