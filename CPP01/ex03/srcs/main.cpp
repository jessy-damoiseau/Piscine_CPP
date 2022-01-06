#include "../header/Weapon.hpp"
#include "../header/HumanB.hpp"
#include "../header/HumanA.hpp"

int main()
{

    Weapon weaponA = Weapon("gun");
    HumanA Rick = HumanA("Rick", weaponA);
    Rick.attack();
    weaponA.setType("stick");
    Rick.attack();

    Weapon weaponB = Weapon("club");
    HumanB Jone = HumanB("Jone");
    Jone.setWeapon(weaponB);
    Jone.attack();
    weaponB.setType("gun");
    Jone.attack();
    return 0;
}