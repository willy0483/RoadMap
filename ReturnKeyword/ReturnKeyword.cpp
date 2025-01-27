#include <iostream>

// double square(double length);
// double cube(double length);

std::string concatStrings(std::string string1, std::string string2);

int main()
{
    // double length = 5.0;
    // double area = square(length);
    // double volume = cube(length);

    // std::cout << "Area: " << area << "cm^2\n";
    // std::cout << "Volume: " << volume << "cm^3\n";

    std::string firstName = "William";
    std::string lastName = "Leander jensen";

    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hallo " << fullName;

    return 0;
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}

// double square(double length)
// {
//     return length * length;
// }

// double cube(double length)
// {
//     return length * length * length;
// }