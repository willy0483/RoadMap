#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{

    std::string name = "William";
    int age = 18;

    happyBirthday(name, age);
    return 0;
}

void happyBirthday(std::string BirthdayBoi, int age)
{
    std::cout << "Happy Birthday to " << BirthdayBoi << '\n';
    std::cout << "You are " << age << " years old!\n";
}