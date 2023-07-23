#include <iostream>

int first_number;
int second_number;

int main()
{
    std::cout << "Give me your first number" << std::endl;
    std::cin >> first_number;
    std::cout << "Please enter your second number" << std::endl;
    std::cin >> second_number;
    int result = first_number + second_number;
    std::cout << "Thes sum of these two numbers is " << result << std::endl;
}