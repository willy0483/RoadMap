#include <iostream>

int main()
{

	std::string name = "William";
	int age = 18;
	bool student = true;

	std::cout << &name << '\n';
	std::cout << &age << '\n';
	std::cout << &student << '\n';

	return 0;
}