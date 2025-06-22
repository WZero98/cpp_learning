// File name: exercise_1
// Author: Wang Pengyu
// Create date: 2025-06-21
// Description: 
#include <iostream>
using namespace std;

double harmonic_mean(double, double);
void input_number_pair();

int main()
{
    cout << "Please enter pairs of numbers (enter 0 as one of the pair to exit): ";
    input_number_pair();
    while (cin.fail())
    {
        cout << "Please enter numbers: ";
        cin.clear();
        while (cin.get() != '\n')
            continue;
        input_number_pair();
    } 
    return 0;
}

double harmonic_mean(double x, double y)
{
    double mean = 2 / (1 / x + 1 / y);
    return mean;
}

void input_number_pair()
{
    double x, y, mean;
    while (cin >> x >> y)
    {
        if ((x == 0) || (y == 0))
            break;
        else
        {
            mean = harmonic_mean(x, y);
            cout << "The harmonic mean of " << x << " and "
                 << y << " is: " << mean << endl;
        }
    }
}