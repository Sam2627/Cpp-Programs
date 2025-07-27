#include <iostream>

int main()
{
    int x = 10;

    x = x + 1;
    x += 1;
    x++;

    x = x + 1;
    x -= 1;
    x--;

    x = x * 2;
    x *= 2;

    x = x / 2;
    x /= 2;

    int remainder = 18 / 10;

    std::cout << remainder;

    return 0;
}