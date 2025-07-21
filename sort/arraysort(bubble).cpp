#include <iostream>
#include <algorithm>
#include <functional>

// Bubble sort
void bubbleSort(int array[], int size);

int main()
{
    int array[] = {2, 1, 3, 4, 5, 8, 7, 9, 10};
    int size = sizeof(array) / sizeof(int);

    std::cout << "Unsort array" << '\n';
    for (int element : array)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    bubbleSort(array, size);
    std::cout << "Bubble sort array" << '\n';
    for (int element : array)
    {
        std::cout << element << " ";
    }

    return 0;
}

void bubbleSort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    { // The loop of bubble sort
        for (int j = 0; j < size - 1 - i; j++)
        {                                // The function of bubble sort
            if (array[j] > array[j + 1]) // If descending replace ">" with "<"
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}