#include <iostream>

int main()
{

    int age;

    std::cout << "Eneter your age: ";
    std::cin >> age;

    if (age >= 100)
    {
        std::cout << "You are to old to enter this site!";
    }
    else if (age >= 18)
    {
        std::cout << "Welcome to the site!";
    }
    else if (age < 0)
    {
        std::cout << "You havent been born yet!";
    }
    else
    {
        std::cout << "You are not old a enough to enter!";
    }

    return 0;
}