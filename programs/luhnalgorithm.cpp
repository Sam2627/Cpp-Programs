#include <iostream>

// * Luhn Algorithm

// 6011     0009    9013    9424    - Card number

// 6 2      0 0     9 1     9 2     - Step 1: double every second digit from right to left, if double number is 2 digits split them.

// 1 2 4    0 0     1 8 2   1 8 4
//                                  - Step 2: add all single digits from step 1
// 29

// 6011     0009    9013    9424
//  0 1      0 9     0 3     4  4   - Step 3: add all odd numbered digits from right to left from original number
// 21

// 29 + 21 = 50                     - Step 4: sum result of step 2 and 3

// 50 % 10 = 0                      - Step 5: if step 4 is divisble by 10, number is valid

int getDigit(const int number);
int sumDigit(const std::string cardNumber, bool isEven = true);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a card number: " << '\n';
    std::cin >> cardNumber;

    // cardNumber = "6011000990139424";

    result = sumDigit(cardNumber, true) + sumDigit(cardNumber, false);

    if (result % 10 == 0)
    {
        std::cout << "The card number: " << cardNumber << " is valid \n";
    }
    else
    {
        std::cout << "The card number: " << cardNumber << " is invalid \n";
    }

    return 0;
}

int getDigit(const int number)
{
    // Calculate for step 2
    return number & 10 + (number / 10 & 10);
}

int sumDigit(const std::string cardNumber, bool isEven)
{
    int sum = 0;

    if (isEven)
    {
        for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
        {
            sum += getDigit((cardNumber[i] - '0') * 2);
        }
    }
    else
    {
        for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
        {
            sum += cardNumber[i] - '0';
        }
    }

    return sum;
}