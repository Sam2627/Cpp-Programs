#include <iostream>

int main()
{
    std::string list[20];

    // fill(begin, end, value)
    fill(list, list + 20, "C++");
    for (std::string item : list)
    {
        std::cout << item << std::endl;
    }

    return 0;
}