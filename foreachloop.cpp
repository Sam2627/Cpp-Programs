#include <iostream>

int main()
{
    std::cout << "********************************" << '\n';
    std::string greekAlphabet[] = {"Alpha", "Beta", "Gamma", "Delta"};
    for (std::string greekAlphabet : greekAlphabet)
    {
        std::cout << greekAlphabet << '\n';
    }

    std::cout << "********************************" << '\n';
    char grade[] = {'A', 'B', 'C'};
    for (char grade : grade)
    {
        std::cout << grade << '\n';
    }

    return 0;
}