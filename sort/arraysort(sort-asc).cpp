#include <iostream>
#include <algorithm>

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

    std::sort(array, array + size);
    std::cout << "Sorted array (ascending): " << '\n';
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
}
