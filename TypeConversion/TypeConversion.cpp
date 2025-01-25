#include <iostream>

int main()
{
    // Implicit = automatic

    // int x = 3.14;

    // std::cout << x;

    // Explicit Precede value with  new data type (int)

    // double x = (int)3.14;

    // std::cout << x;

    //

    // std::cout << (char)100;

    //

    int correct = 8;
    int questions = 10;

    // will get 0 if not for the (double)
    double score = correct / (double)questions * 100;

    std::cout << score << "%";

    return 0;
}