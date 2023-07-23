#include <iostream>

// Formula F = C * 1.8 + 32

double celcius_to_farenheit_converter(double temp_celc)
{

    double farenheit = temp_celc * 1.8 + 32;

    std::cout << "The temp in celcius is " << temp_celc
              << " The temp in farenheit is " << farenheit << std::endl;

    return farenheit;
}

int main()
{
    celcius_to_farenheit_converter(23.4);
    return 0;
}