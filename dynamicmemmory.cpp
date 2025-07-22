#include <iostream>

// Dynamic memmory: a memory that is allocated after the program is already complied and running
// Use 'new' operator to allocated memory in the heap rather than the stack
// Normal memory allocated at the stack (except high level language), stack have small size but fastest
// If the size to big can cause stack over flow error
// Use when we don't know how much memory we will need

int main()
{
    int *pNum = NULL; // Create pointer with value = NULL
    pNum = new int;   // Create dynamic memory for pNum
    *pNum = 10;

    std::cout << "Memory Address: " << pNum << '\n';
    std::cout << "Memory Value: " << *pNum << '\n';

    delete pNum; // Delete pointer if not use prevent memory leak

    return 0;
}