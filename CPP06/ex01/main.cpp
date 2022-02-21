#include <iostream>
#include <cstring>
#include <stdint.h>

typedef struct s_data{

    int i;
    std::string str;
    double d;
    float f;
    char c;

}               Data;

uintptr_t serialise(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data    *deserialize(uintptr_t raw){
    return reinterpret_cast<Data *>(raw);
}

void    print_data(Data *ptr){
    std::cout << "c: " << ptr->c << std::endl;
    std::cout << "i: " << ptr->i << std::endl;
    std::cout << "d: " << ptr->d << std::endl;
    std::cout << "f: " << ptr->f << std::endl;
    std::cout << "str: " << ptr->str << std::endl;
}

int main(){

    Data data;

    data.c = '!';
    data.d = 42.4224;
    data.f = 21.2112;
    data.i = 421337;
    data.str = "bonjour";

    std::cout << "defore convert" << std::endl;
    print_data(&data);
    uintptr_t first_recast = serialise(&data);
    Data *recast = deserialize(first_recast);
    std::cout << "after convert" << std::endl;
    print_data(recast);
    return 0;
}