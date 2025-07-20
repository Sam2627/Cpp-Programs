#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
bool countinuePlay();

int playerPoint = 0;
int computerPoint = 0;

int main()
{
    char player;
    char computer;

    bool endGame = false;

    do
    {
        player = getUserChoice();
        std::cout << "Your choice: ";
        showChoice(player);

        computer = getComputerChoice();
        std::cout << "Computer choice: ";
        showChoice(computer);

        // std::cout << "\n";
        chooseWinner(player, computer);

        std::cout << "************************ \n";
        std::cout << "Player points: " << playerPoint << "\n";
        std::cout << "Computer points: " << computerPoint << "\n";

        endGame = countinuePlay();
    } while (endGame);

    return 0;
}

char getUserChoice()
{
    char player;
    std::cout << "Rock Paper Scissors Game \n";
    std::cout << "************************ \n";

    do
    {
        std::cout << "Choose one of the following \n";
        std::cout << "'r' for Rock \n";
        std::cout << "'p' for Paper \n";
        std::cout << "'s' for Scissors \n";
        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    srand(time(0));
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

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock \n";
        break;
    case 'p':
        std::cout << "Paper \n";
        break;
    case 's':
        std::cout << "Scissors \n";
        break;
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
            std::cout << "It's a tie! \n";
        else if (computer == 'p')
        {
            std::cout << "Computer Win! \n";
            computerPoint++;
        }
        else
        {
            std::cout << "Player Win! \n";
            playerPoint++;
        }

        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "Player Win! \n";
            playerPoint++;
        }
        else if (computer == 'p')
            std::cout << "It's a tie! \n";
        else
        {
            std::cout << "Computer Win! \n";
            computerPoint++;
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "Computer Win! \n";
            computerPoint++;
        }
        else if (computer == 'p')
        {
            std::cout << "Player Win! \n";
            playerPoint++;
        }
        else
            std::cout << "It's a tie! \n";
        break;
    }
}

bool countinuePlay()
{
    char ans;

    do
    {
        std::cout << "************************ \n";
        std::cout << "Continue play?(y/n)";
        std::cin >> ans;

    } while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N');

    // While loop only allow 4 input
    if (ans == 'y' || ans == 'Y')
        return true;
    else
        return false;
}
