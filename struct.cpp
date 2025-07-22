#include <iostream>

// struct: complete datatype something like class in C#

struct People
{
    std::string name;
    int age;
    bool gender;
};

void showInfo(People &people);

int main()
{
    People human;
    human.name = "Rick";
    human.age = 21;
    human.gender = true;

    showInfo(human);

    return 0;
}

void showInfo(People &people)
{
    std::cout << "Name: " << people.name << '\n';
    std::cout << "Age: " << people.age << '\n';
    if (people.gender)
    {
        std::cout << "Gender: Male \n";
    }
    else
    {
        std::cout << "Gender: Female \n";
    }
}