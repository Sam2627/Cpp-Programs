#include <iostream>

void swapValue(std::string x, std::string y);
void swapReference(std::string &x, std::string &y);

int main()
{
    std::string x = "Eath";
    std::string y = "Water";
    std::string z = "Fire";

    std::cout << "Orginal value:" << '\n';
    std::cout << "x: " << x << " y: " << y << '\n';

    // Swap value not change orginal but created copy of it -> switch value of the copy
    swapValue(x, y);
    std::cout << "After swap value:" << '\n';
    std::cout << "x: " << x << " y: " << y << '\n';

    std::cout << "*********************************\n";

    std::cout << "Orginal value:" << '\n';
    std::cout << "x: " << x << " y: " << y << '\n';

    // Swap reference get the original (memory address) -> work
    swapReference(x, y);
    std::cout << "After swap reference:" << '\n';
    std::cout << "x: " << x << " y: " << y << '\n';
}

void swapValue(std::string x, std::string y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

void swapReference(std::string &x, std::string &y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}