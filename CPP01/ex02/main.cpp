#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* strptr = &str;
    std::string& strref = str;

    std::cout << "str    -> |" << str << "|" << std::endl;
    std::cout << "strptr -> |" << strptr << "|" << std::endl;
    std::cout << "&strref-> |" << &strref << "|" << std::endl;
    std::cout << "*strptr-> |" << *strptr << "|" << std::endl;
    std::cout << "strref -> |" << strref << "|" <<std::endl;
}