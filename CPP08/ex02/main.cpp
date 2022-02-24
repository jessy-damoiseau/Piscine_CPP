#include "Mutantstack.hpp"

#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl << std::endl;
    mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
    ++it; }
    std::stack<int> s(mstack);

    std::cout << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    //std::cout << lst.top() << std::endl << std::endl;
    lst.pop_back();
    std::cout << lst.size() << std::endl << std::endl;
    lst.push_back(3); lst.push_back(5); lst.push_back(737); //[...] mstack.push(0);
    std::list<int>::iterator at = lst.begin(); std::list<int>::iterator ate = lst.end();
    ++at;
    --at;
    while (at != ate) {
        std::cout << *at << std::endl;
    ++at; }
    return 0;
}