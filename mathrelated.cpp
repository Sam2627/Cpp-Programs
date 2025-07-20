#include <iostream>
#include <cmath>

int main()
{
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << "Max between x and y: " << z << '\n';

    z = std::min(x, y);
    std::cout << "Min  between x and y: " << z << '\n';

    z = std::pow(3, 2);
    std::cout << "3 power 2: " << z << '\n';

    z = std::sqrt(49);
    std::cout << "Square of 49: " << z << '\n';

    z = std::abs(-100);
    std::cout << "Absolute of -100: " << z << '\n';

    z = round(5.2);
    std::cout << "Round of 5.2: " << z << '\n';

    z = ceil(5.2);
    std::cout << "Round up of 5.2: " << z << '\n';

    z = floor(5.99);
    std::cout << "Round up of 5.99: " << z << '\n';

    return 0;
}