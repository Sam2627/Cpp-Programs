#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "Temperature Conversion \n";

    std::cout << "Choose conversion unit(C or F) ?";
    std::cin >> unit;
    if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature in Celsius: " << temp << "C \n";
    }
    else if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature in Fahrenheit: " << temp << "F \n";
    }
    else
    {
        std::cout << "Please choose between C or F";
    }

    std::cout << "***********************\n";

    return 0;
}
