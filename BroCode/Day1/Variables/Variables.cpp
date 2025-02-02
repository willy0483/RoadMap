#include <iostream>

int main()
{
    // integer ( whole number )
    int age = 18;
    int year = 2025;
    int days = 7;

    // double ( number including decimal )
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // char ( single character )
    char grade = 'A';
    char initial = 'B';
    char dollrSign = '$';

    // boolean ( true or false )
    bool student = true;
    bool power = false;
    bool forSale = true;

    // string ( objects that represent sequences of text )
    std::string name = "William";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    return 0;
}