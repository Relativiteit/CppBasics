#include <iostream>
#include <vector>
#include <numeric>

int vector_compute(std::vector<double> compute_numbers)
{
    double sum_numbers = std::accumulate(compute_numbers.begin(), compute_numbers.end(), 0);
    double result = sum_numbers / compute_numbers.size();
    std::cout << "The average of your input is: " << result << std::endl;

    return result;
}
int main()
{
    std::vector<double> compute_numbers = {4.3, 5.2, 6, 9, 12, 3};
    vector_compute(compute_numbers);
    return 0;
}