#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    // using namespace first;

    int x = 0;

    std::cout << "No namespace: " << x << '\n';
    std::cout << "First namespace: " << first::x << '\n';
    std::cout << "Second namespace: " << second::x << '\n';

    return 0;
}