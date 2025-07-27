#include <iostream>

// Pointers is variable store a memory address of another variable. Give the address rather than give the value.
// & address-of operator : return address value
// * derefernce operator : return value of address

int main()
{

    std::string name = "Sam";

    // Declares pointer must same data type as point to variable.
    std::string *pName = &name; // *pName is the address variable, &name is memory address value

    std::cout << "The pointer address value: " << pName << '\n';
    std::cout << "The value store at pointer address value: " << *pName << '\n';

    std::cout << std::endl;

    int numbers[] = {1, 2, 3};
    int *pNumber = numbers; // Array return address.
    std::cout << "The array value: " << numbers << '\n';
    std::cout << "The pointer value: " << pNumber << '\n';
    std::cout << "The *pointer value: " << *pNumber << '\n'; // return first value in array

    // Null pointers nullptr
    int *pointer = nullptr; // pointer with null address
    int x = 10;             // Create val x with value = 10
    pointer = &x;           // assigned pointer with address memory of x

    if (pointer == nullptr)
    {
        std::cout << "Pointer address was not assigned \n";
    }
    else
    {
        std::cout << "Pointer address was assigned at: " << pointer << '\n';
    }

    // Declares a pointer a design to store the memort address of type Object
    // Object *a = new Object();

    return 0;
}