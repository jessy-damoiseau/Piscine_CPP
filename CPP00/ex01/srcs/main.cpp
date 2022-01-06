#include "../header/class_annuaire.hpp"
#include "../header/page_jaune.h"

int main(){

    std::string cmd;
    annuaire page_jaune;

    std::cout << "Welcome to the pages jaune" << std::endl;
    std::cout << "What do you want to do? ADD, SEARCH or EXIT?" << std::endl;
    getline(std::cin, cmd);
    while (1)
    {
        if (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT")
        {
            if (cmd == "EXIT")
                break;
            else if (cmd == "ADD")
				page_jaune.addToAnnuaire();
            else
				page_jaune.searchInAnnuaire();
        }
        else
            std::cout << "unknown query" << std::endl;
        std::cout << "What do you want to do? ADD, SEARCH or EXIT?" << std::endl;
        getline(std::cin, cmd);
    }
    return 0;
}
