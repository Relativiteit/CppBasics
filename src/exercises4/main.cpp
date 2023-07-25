#include <iostream>
#include <vector>
#include "my_vector_functions.hpp"

using namespace std;

// 4.1. Put the 2 existing functions from this section in a different file

// 4.2 New function: Add elements from a list to another list (integers)
// pass vector by value, reference, const reference

// 4.3 New fnction: Find how many occurrences of a string in a list

int main()
{
    vector<int> list = {5, 5, 4};
    cout << "A Size of numbers list:" << list.size() << endl;
    add_zeros_to_list(list, 4);
    cout << "C Size of numbers list:" << list.size() << endl;

    cout << "Adding numbers from list a to list b " << endl;
    vector<int> result = add_elements({2, 3, 4}, {1, 2});

    for (int i = 0; result.size(); i++)
    {
        cout << result[i];
    }

    vector<string> city_list = {"Rotterdam",
                                "Tokyo",
                                "Kingston",
                                "Morioka"};
    cout << "number of occrences of Rotterdam" << get_string_occurences_in_list(city_list, "Rotterdam");
    return 0;
}