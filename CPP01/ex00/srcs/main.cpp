#include "../header/Zombie.hpp"

int main() {

    Zombie *jean_marie = newZombie("jean_marie");
    jean_marie->Announce();
    delete jean_marie;
    randomChump("Simon");
    return 0;
}
