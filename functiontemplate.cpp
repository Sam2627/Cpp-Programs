#include <iostream>

// Template T can work with many datatype: int, double, float, char, string, etc...
// Only work with argument have same datatype

template <typename T>
// template<typename T, typename U>     // Can declare new temple for different argument

T max(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max(1, 2) << '\n';

    // Will not work because different datatype if template<typename T>
    // std::cout << max(3, 4.5);

    return 0;
}