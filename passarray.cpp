#include <iostream>

int getTotal(int numbers[], int sizeArray);

int main()
{

    int numbers[] = {1, 2, 3, 4, 5};
    int sizeArray = sizeof(numbers) / sizeof(int);
    int total = getTotal(numbers, sizeArray);

    for (int number : numbers)
    {
        std::cout << "Value: " << number << '\n';
    }
    std::cout << "Total: " << total << '\n';

    return 0;
}

int getTotal(int numbers[], int sizeArray)
{
    int total = 0;
    for (int i = 0; i < sizeArray; i++)
    {
        total += numbers[i];
    }

    return total;
}