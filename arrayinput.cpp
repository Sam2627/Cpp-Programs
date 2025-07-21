#include <iostream>
#include <string>

int main()
{
    std::string texts[10];
    std::string temp;
    int size = sizeof(texts) / sizeof(texts[0]);

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter text or 'Q' to exit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if (temp != "Q")
        {
            break;
        }
        else
        {
            texts[i] = temp;
        }
    }

    std::cout << "Return:" << std::endl;
    for (int i = 0; !texts[i].empty(); i++)
    {
        std::cout << texts[i] << std::endl;
    }

    return 0;
}