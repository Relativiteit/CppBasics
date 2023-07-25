#ifndef MY_VECTOR_FUNCTIONS_H
#define MY_VECTOR_FUNCTIONS_H
#include <iostream>
#include <vector>

using namespace std;

void add_zeros_to_list(vector<int> &number_list, int zeros_number);
vector<int> add_elements(const vector<int> &list_a, vector<int> list_b);
int get_string_occurences_in_list(const vector<string> &list, string text);

#endif