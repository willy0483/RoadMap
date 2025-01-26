#include <iostream>

int main()
{

    bool sunny = false;
    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // if (temp > 0 && temp < 30)
    // {
    //     std::cout << "The temperature is good ";
    // }
    // else
    // {
    //     std::cout << "The temperature is bad ";
    // }

    if (temp > 0 || temp < 30)
    {
        std::cout << "The temperature is good\n";
    }
    else
    {
        std::cout << "The temperature is bad\n";
    }

    if (!sunny)
    {
        std::cout << "It is cloudy outside!";
    }
    else
    {
        std::cout << "It is sunny outside!";
    }

    return 0;
}