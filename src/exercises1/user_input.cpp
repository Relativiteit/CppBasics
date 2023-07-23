#include <iostream>

// 1.1 ask for users name and age of a user and print the result

int main()
{
    std::cout << "What is your name: " << std::endl;
    std::string name_user;
    std::cin >> name_user;
    std::cout << "what is your age: " << std::endl;
    int age_user;
    std::cin >> age_user;
    std::cout << "Your name is " << name_user << " Your age is " << age_user << std::endl;

    return 0;
}