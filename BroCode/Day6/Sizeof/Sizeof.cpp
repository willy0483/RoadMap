#include <iostream>

int main()
{
    std::string name = "William";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    std::cout << sizeof(students) / sizeof(std::string) << " elements\n";

    return 0;
}