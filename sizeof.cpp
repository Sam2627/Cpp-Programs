#include <iostream>

int main()
{
    // sizeof() determines size in bytes of variable, data type, class, objects, ...

    double pi = 3.14;
    std::cout << sizeof(pi) << " bytes \n";

    std::string text = "This is hello from other C++ side...";
    std::cout << sizeof(text) << " bytes \n";

    char grade = 'D';
    std::cout << sizeof(grade) << " bytes \n"; // return 1 bytes

    char grade[] = {'A', 'B', 'C'};
    std::cout << sizeof(grade) << " bytes \n"; // return 3 bytes -> using for caculator how many elements in array.
    std::cout << sizeof(grade) / sizeof(char) << " elements \n";

    return 0;
}