#include <iostream>

int main()
{
    // Access variable memory address with & + variable name
    // The address change each time
    int number = 10;
    std::cout << &number << '\n';

    return 0;
}