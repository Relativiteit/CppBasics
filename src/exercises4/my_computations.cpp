#include "my_computation.hpp"

int triple_number(int number)
{
    return number * 3;
}

void print_triple_number(int number)
{
    cout << triple_number(number) << endl;
}