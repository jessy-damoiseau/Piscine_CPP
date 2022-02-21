#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>
#include <typeinfo>

class Base{
public:
    virtual ~Base(){};
};

class A: public Base{};

class B: public Base{};

class C: public Base{};


Base *generate(){
    int i = rand() % 3;
    if (i == 0)
        return new A();
    else if (i == 1)
        return new B();
    return new C();
}

void    identify(Base *p){
    A *a = dynamic_cast<A *>(p);
    if (a)
        std::cout << "Class is A" << std::endl;
    else {
        B *b = dynamic_cast<B *>(p);
        if (b)
            std::cout << "Class is B" << std::endl;
        else
            std::cout << "Class is C" << std::endl;
    }
}

void    identify(Base &p){
   try {
       A &a = dynamic_cast<A &>(p);
       static_cast<void>(a);
       std::cout << "Class is A" << std::endl;
   }
   catch(std::bad_cast &e){
       try{
           B &b = dynamic_cast<B &>(p);
           static_cast<void>(b);
           std::cout << "Class is B" << std::endl;
       }
       catch (std::bad_cast &v){
           std::cout << "Class is C" << std::endl;
       }
   }
}

int main(){
    srand(time(0));
    Base *test = generate();
    identify(test);
    identify(*test);
}