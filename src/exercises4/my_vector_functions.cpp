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

vector<int> add_elements(const vector<int> &list_a, vector<int> &list_b)
{
    for (int number : list_a)
    {
        list_b.push_back(number);
    }
}

int get_string_occurences_in_list(const vector<string> &list, string text)
{
    int occurences = 0;
    for (string s : list)
    {
        if (s == text)
        {
            occurences++;
        }
    }
    return occurences;
}