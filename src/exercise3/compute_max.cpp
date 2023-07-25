#include <iostream>
#include <vector>

using namespace std;

// 3.1 Compute the max value inside a list of numbers (vector)
// create a function and pass the vector as a parameter

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
    double result = calc_max_vector({1.2, 4.5, 8.8, 2.2});

    cout << "the result is: " << result << endl;
}
