#include <iostream>
#include <string>

int SearchArray(std::string array[], int size, std::string element);

int main()
{

    std::string greekAlphabet[] = {"Alpha", "Beta", "Gamma", "Delta"};
    int size = sizeof(greekAlphabet) / sizeof(std::string);
    int index;
    std::string element;

    std::cout << "Enter element to search: " << '\n';
    std::getline(std::cin >> std::ws, element);

    index = SearchArray(greekAlphabet, size, element);
    if (index != -1)
        std::cout << "Element at index: " << index;
    else
        std::cout << "Can't find the element";

    return 0;
}

int SearchArray(std::string array[], int size, std::string element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
            return i;
    }

    return -1;
}