#include <iostream>

enum Day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

int main()
{

    Day today = sunday;

    switch (today)
    {
    case 0:
        std::cout << "It's Sunday!\n";
        break;
    case 1:
        std::cout << "It's Monday!\n";
        break;
    case 2:
        std::cout << "It's Tuesday!\n";
        break;
    case 3:
        std::cout << "It's Wednesday!\n";
        break;
    case 4:
        std::cout << "It's Thursday!\n";
        break;
    case 5:
        std::cout << "It's Friday!\n";
        break;
    case 6:
        std::cout << "It's Saturday!\n";
        break;

    default:
        break;
    }

    return 0;
}