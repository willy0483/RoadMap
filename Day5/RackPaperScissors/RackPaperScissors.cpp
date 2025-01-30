#include <iostream>

char getUserChoice();
char getComputerChoice();
void ShowChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    ShowChoice(player);

    computer = getComputerChoice();
    std::cout << "Computers choice: ";
    ShowChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{

    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    do
    {
        std::cout << "Choice one of the fllowing\n";
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";

        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice()
{
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}
void ShowChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "Its a tie!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "You win!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "Its a tie!\n";
        }
        else
        {
            std::cout << "You lose!\n";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "You lose!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You win!\n";
        }
        else
        {
            std::cout << "Its a tie!\n";
        }
        break;
    }
}