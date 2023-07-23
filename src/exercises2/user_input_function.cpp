#include <iostream>

void greeting()
{
    std::string name;
    int age;

    std::cout << "Please enter your name: " << std::endl;
    std::cin >> name;

    std::cout << "please enter your age: " << std::endl;
    std::cin >> age;
    std::cout << age << std::endl;

    std::cout << "your name is: " << name << " and your age: " << age << std::endl;
}

int main()
{
    greeting();
    return 0;
}