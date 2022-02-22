#include "iter.hpp"

template <typename U>
void   func(U &x){
    x += 1;
}

void    funcstring(std::string &s){
    s += " ok";
}



int main(){
    int tab[] = {1, 2, 3, 4};
    std::string tab2[] = {"bonjour", "salut", "bye"};
    char tab3[] = {'a', 'b', 'c', 'd'};
    float tab4[] = {13.1, 16.2, 28.48};

    std::cout << "tab" << std::endl;
    for (int i = 0; i < 4; i++){
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
    ::iter(tab, 4, func);
    for (int i = 0; i < 4; i++){
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "tab2" << std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << "|" << tab2[i] << "| ";
    }
    std::cout << std::endl;
    ::iter(tab2, 3, funcstring);
    for (int i = 0; i < 3; i++){
        std::cout << "|"<< tab2[i] << "| ";
    }
    std::cout << std::endl;

    std::cout << "tab3" << std::endl;
    for (int i = 0; i < 4; i++){
        std::cout << "|" << tab3[i] << "| ";
    }
    std::cout << std::endl;
    ::iter(tab3, 4, func);
    for (int i = 0; i < 4; i++){
        std::cout << "|"<< tab3[i] << "| ";
    }
    std::cout << std::endl;

    std::cout << "tab4" << std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << tab4[i] << " ";
    }
    std::cout << std::endl;
    ::iter(tab4, 3, func);
    for (int i = 0; i < 3; i++){
        std::cout << tab4[i] << " ";
    }
    std::cout << std::endl;

}