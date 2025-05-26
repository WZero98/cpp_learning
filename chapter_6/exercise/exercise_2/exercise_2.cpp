// File name: exercise_2
// Author: Wang Pengyu
// Create date: 2025-05-24
// Description:
#include <iostream>
#include <array>

const int arrayMax = 10;
void keep();

int main()
{   
    using namespace std;
    array<double, arrayMax> arrayset;
    double sum = 0;
    int i = 0;  // array index
    cout << "Please enter some numbers, up to 10 numbers" << endl;
    cout << "Enter any non-numeric charaters to exit..." << endl;
    cout << "#1: ";
    // input to array
    cin >> arrayset[i];
    while (i < arrayMax && cin.good())
    {
        if (++i < arrayMax)
            {
                cout << "#" << i + 1 << ": ";
                cin >> arrayset[i];
            }     
    }
    // caculate the average of array
    for (double x: arrayset)
        sum += x;
    cout << "You have input " << i << " numbers" << endl;
    cout << "The average is: " << sum / i << endl;
    if (cin.fail())
    {
        cin.clear();
        while (cin.get() != '\n')
            continue; // get rid of non-numeric input except for 'Enter'
        cin.get();
    }
    // keep();
    return 0;
}


void keep()
{
    using namespace std;
    cout << R"(Press 'q' to quit...)" << endl;
    char c;
    cin.get(c);
    while (cin.good() && c != 'q')
    {
        cin.get(c);
    }
}
