#include <iostream>
#include <algorithm>

int main()
{
    std::string text = "Hello this is string";
    sort(text.begin(), text.end());
    std::cout << text;

    return 0;
}