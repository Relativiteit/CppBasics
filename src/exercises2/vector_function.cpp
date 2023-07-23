#include <iostream>
#include <vector>
#include <numeric>

int vector_compute(double n1, double n2, double n3, double n4)
{
    std::vector<double> compute_numbers = {n1, n2, n3, n4};
    double sum_numbers = std::accumulate(compute_numbers.begin(), compute_numbers.end(), 0);
    double result = sum_numbers / compute_numbers.size();
    std::cout << "The average of your input is: " << result << std::endl;

    return result;
}
int main()
{
    vector_compute(8, 2, 3, 4);
}