#include <iostream>
#include <string>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{

    std::string name;
    int age;

    std::cout << "Whats your age?: ";
    std::cin >> age;

    std::cout << "Whats your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}