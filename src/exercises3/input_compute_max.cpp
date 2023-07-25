#include <iostream>
#include <vector>
using namespace std;

// 3.2 Create and empty list, ask the user to give 5 numbers,
// and print the max value

vector<double> ask_input()
{
    // user input
    double n1, n2, n3, n4, n5;
    cout << "please enter five numbers" << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // Turn input into vector
    vector<double> input_vector;
    input_vector.push_back(n1);
    input_vector.push_back(n2);
    input_vector.push_back(n3);
    input_vector.push_back(n4);
    input_vector.push_back(n5);

    return input_vector;
}

double calc_max_vector(vector<double> input)
{
    double max_value = input[0];

    for (int i = 0; i < input.size(); i++)
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
    double result = calc_max_vector(ask_input());
    cout << "The max value of your inputed values is " << result << endl;
}