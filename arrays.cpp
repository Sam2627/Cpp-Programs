#include <iostream>

int main()
{
    std::string food[] = {"rice", "icecream", "noodles", "lamb", "beef"};
    std::cout << food[0] << '\n';
    food[0] = "fry rice";
    std::cout << food[0] << '\n';

    int number[] = {1, 2, 3, 4};

    return 0;
}