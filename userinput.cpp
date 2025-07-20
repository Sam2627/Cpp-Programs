#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::string fullName;

    std::cout << "What your name: ";
    std::cin >> name;
    std::cout << "Hello " << name << "\n";

    std::cout << "What your full name: ";
    std::getline(std::cin >> std::ws, fullName); // Allow spacebar input in keyboard or white space
                                                 // >> std::ws -> eliminate any new line characters or white space before user input
    std::cout << "This is your full name " << fullName << "\n";

    return 0;
}