#include <iostream>
#include <string>

int main(int ac, char *av[])
{
    std::string str;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; av[i]; i++)
        {
            for(unsigned long j = 0; j < std::string(av[i]).length(); j++)
                av[i][j] = std::toupper(av[i][j]);
            str = str + av[i];
            if (av[i + 1])
                str = str + " ";
        }
        std::cout << str <<std::endl;
    }
    return 0;
}