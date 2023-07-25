#include <iostream>
#include <vector>
#include "my_vector_functions.hpp"

using namespace std;

// 4.1. Put the 2 existing functions from this section in a different file

int main()
{
    vector<int> list = {5, 5, 4};
    cout << "A Size of numbers list:" << list.size() << endl;
    add_zeros_to_list(list, 4);
    cout << "C Size of numbers list:" << list.size() << endl;
    return 0;
}