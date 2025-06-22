// File name: exercise_10
// Author: Wang Pengyu
// Create date: 2025-06-22
// Description: 
#include <iostream>
using namespace std;
double calculate(double x, double y, double (*pf)(double , double ));
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main()
{
    double (*pf[4])(double, double) = {add, subtract, multiply, divide};
    // enter pairs of numbers.
    double x, y;
    cout << "please enter a pair of numbers: ";
    cin >> x >> y;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "please enter legal numbers: ";
        cin >> x >> y;
    }
    for (double (*f) (double, double):pf)
    {
        cout << calculate(x, y, f) << endl;
    }
    cin.ignore();
    cin.get();
    return 0;
}

// Design a function calculate() that takes two type double values and a pointer to
// a function that takes two double arguments and returns a double.
double calculate(double x, double y, double (*pf) (double , double ))
{
    return (*pf)(x, y);
}


double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

double divide(double x, double y)
{
    return x / y;
}

