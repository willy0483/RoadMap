#include <iostream>

int main()
{

    std::string name = "William";
    int age = 18;

    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;

    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizzas << '\n';
    std::cout << *(pFreePizzas + 1) << '\n';

    return 0;
}