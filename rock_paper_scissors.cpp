#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    srand(time(0)); // Seeding the random number generator once

    char player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    char computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{
    char player;
    std::cout << "Rock-Paper-Scissors Game\n";

    do
    {
        std::cout << "Choose one of the following:\n";
        std::cout << "*************************\n";
        std::cout << "'r' for Rock\n'p' for Paper\n's' for Scissors\n";
        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: return 'r';
    case 2: return 's';
    case 3: return 'p';
    }
    return 'r'; // Default return value (should never reach here)
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r': std::cout << "Rock\n"; break;
    case 's': std::cout << "Scissors\n"; break;
    case 'p': std::cout << "Paper\n"; break;
    }
}

void chooseWinner(char player, char computer)
{
    if (player == computer)
    {
        std::cout << "It's a tie!\n";
    }
    else if ((player == 'r' && computer == 's') ||
             (player == 'p' && computer == 'r') ||
             (player == 's' && computer == 'p'))
    {
        std::cout << "You win!\n";
    }
    else
    {
        std::cout << "You lose!\n";
    }
}
