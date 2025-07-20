#include <iostream>
#include <iomanip>

void showBalance(double balance);
double desposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "Enter your choice: \n";
        std::cout << "*******************\n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. Withdraw Money \n";
        std::cout << "4. Exit \n";
        std::cin >> choice;

        std::cin.clear(); // Prevent break code
        fflush(stdin);    // Clear input buffer

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += desposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visting! \n";
            break;
        default:
            std::cout << "Invalid choice \n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    // std::cout << "Your Balance: $" << std::setprecision(2) << std::fixed << balance << "\n";
    std::cout << "Your Balance: " << balance << " VND \n";
}

double desposit()
{
    double amount = 0;

    std::cout << "Enter amount to be desposited: ";
    std::cin >> amount;

    if (amount > 0)
        return amount;
    else
    {
        std::cout << "That's not valid amount! \n";
        return 0;
    }
}

double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter amount to be withdraw: ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Not enough balance! \n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "Invalid amount! \n";
        return 0;
    }
    else
        return amount;
}