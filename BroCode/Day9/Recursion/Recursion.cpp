#include <iostream>

// void walk(int steps);
int factorial(int num);

int main()
{

    // walk(100);'
    std::cout << factorial(10);

    return 0;
}

int factorial(int num)
{
    //  int result = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //     result = result * i;
    // }
    // return result;

    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}

// void walk(int steps)
// {
//     if (steps > 0)
//     {
//         std::cout << "You take a step!\n";
//         walk(steps - 1);
//     }
// }