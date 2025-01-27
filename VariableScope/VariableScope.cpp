#include <iostream>

int myNum = 1;

void printNum();

int main()
{

    // Local variables = declared inside a function  or block {}
    // Global variables = declared outside of all functions

    int myNum = 4;
    printNum();
    std::cout << ::myNum;

    return 0;
}

void printNum()
{
    std::cout << myNum;
}