#include <iostream>

int add_numbers(int number_one, int number_two)
{
    int result = number_one + number_two;
    std::cout << "your cumputed numbers is: " << result << std::endl;

    return result;
}

int main()
{
    add_numbers(1, 4);
    return 0;
}