#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int ranNum = rand() % 5 + 1;

    switch (ranNum)
    {
    case 1:
        std::cout << "You get a 1 \n";
        break;
    case 2:
        std::cout << "You get a 2 \n";
        break;
    case 3:
        std::cout << "You get a 3 \n";
        break;
    case 4:
        std::cout << "You get a 4 \n";
        break;
    case 5:
        std::cout << "You get a 5 \n";
        break;
    default:
        break;
    }

    return 0;
}