#include <iostream>

int main()
{

    // std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for (char grade : grades)
    {
        std::cout << grade << '\n';
    }
    return 0;
}