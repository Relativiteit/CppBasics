#include <iostream>
#include <vector>
#include <numeric>

// Create a vector of 4 float numbers, compute the average and print it

int main()
{

    std::vector<double> input = {3.5, 1.9, 5.4, 1.2};
    // compute sum
    double sum_list = std::accumulate(input.begin(), input.end(), 0.0);

    // compute average
    double result = sum_list / input.size();

    // output sum & average
    std::cout << "The sum of the list is: " << sum_list << std::endl;
    std::cout << "The average of the list: " << result << std::endl;
}