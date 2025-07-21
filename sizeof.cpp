#include <iostream>

int main()
{
    // sizeof() determines size in bytes of variable, data type, class, objects, ...
    std::cout << "********************************" << '\n';
    double pi = 3.14;
    std::cout << "Type double have: " << sizeof(pi) << " bytes \n";

    std::cout << "********************************" << '\n';
    std::string text = "This is hello from other C++ side...";
    std::cout << "Type string have: " << sizeof(text) << " bytes \n";

    // char grade = 'A';
    // std::cout << sizeof(grade) << " bytes \n"; // return 1 bytes

    std::cout << "********************************" << '\n';
    char grade[] = {'A', 'B', 'C', 'D', 'E'};
    std::cout << "Grade value pointer: " << grade << '\n'; // Other char is countinues of address value
    std::cout << sizeof(grade) << " bytes \n";             // return 3 bytes -> using for caculator how many elements in array.
    std::cout << sizeof(grade) / sizeof(char) << " elements \n";

    std::cout << "********************************" << '\n';
    std::string greekAlphabet[] = {"Alpha", "Beta", "Gamma", "Delta"};
    std::cout << "Number of alphabet: " << sizeof(greekAlphabet) / sizeof(std::string) << '\n';
    for (int i = 0; i < sizeof(greekAlphabet) / sizeof(std::string); i++)
    {
        std::cout << "Greek no." << i + 1 << " alphabet: " << greekAlphabet[i] << '\n';
    }

    return 0;
}