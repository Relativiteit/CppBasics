#include <iostream>
#include <vector>

// 3.3 create a empty list, ask the user to give numbers,
// stop when the number is 0, and print the max value

using namespace std;

// user input

vector<double> ask_input()
{
    vector<double> input_vector;
    double num;

    cout << "please enter numbers, and type enter after every input (enter 0 to stop)" << endl;

    while (cin >> num && num != 0)
    {
        input_vector.push_back(num);
    }

    cout << "you have entered 0 this program is done" << endl;
    return input_vector;
}

double calc_max_vector(vector<double> &input)
{
    double max_value = input[0];

    for (size_t i = 1; i < input.size(); i++)
    {
        if (max_value < input[i])
        {
            max_value = input[i];
        }
    }
    return max_value;
}

int main()
{
    vector<double> input_vector = ask_input();

    double result = calc_max_vector(input_vector);
    cout << "the max value is the following: " << result << endl;
}