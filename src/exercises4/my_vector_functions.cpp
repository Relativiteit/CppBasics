#include "my_vector_functions.hpp"
#include <string>

void add_zeros_to_list(vector<int> &number_list, int zeros_number)
{
    for (int i = 0; i < zeros_number; i++)
    {
        number_list.push_back(0);
    }
    cout << "B Size of numbers list:" << number_list.size() << endl;
}