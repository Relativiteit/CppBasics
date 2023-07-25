#include <iostream>

using namespace std;
// prototypes
int triple_number(int number);
void print_triple_number(int number);

int main()
{

    print_triple_number(4);
    return 0;
}

int triple_number(int number)
{
    return number * 3;
}

void print_triple_number(int number)
{
    cout << triple_number(number) << endl;
}