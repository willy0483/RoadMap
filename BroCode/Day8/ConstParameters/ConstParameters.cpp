#include <iostream>

void printInfo(const std::string& name, const int& age);

// read only

int main()
{

	std::string name = "William";
	int age = 18;
	printInfo(name, age);

	return 0;
}

void printInfo(const std::string& name, const int& age)
{
	std::cout << name << '\n';
	std::cout << age << '\n';
}