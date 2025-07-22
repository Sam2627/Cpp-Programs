#include <iostream>

// enumns : a user-defined data type that consists of pair named-interger constants

enum Day
{
    Monday = 0,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,
    Saturday = 5,
    Sunday = 6
};

int main()
{
    Day today = Monday;

    switch (today)
    {
    case Monday:
        std::cout "Today is Monday \n";
        break;
    case Tuesday:
        std::cout "Today is Monday \n";
        break;
    case Wednesday:
        std::cout "Today is Monday \n";
        break;
    case Thursday:
        std::cout "Today is Monday \n";
        break;
    case Friday:
        std::cout "Today is Monday \n";
        break;
    case Saturday:
        std::cout "Today is Monday \n";
        break;
    case Sunday:
        std::cout "Today is Monday \n";
        break;
    default:
        break;
    }

    return 0;
}