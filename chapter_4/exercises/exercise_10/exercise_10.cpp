// File name: exercise_10
// Author: Wang Pengyu
// Create date: 2025-03-27
// Description: 

#include <iostream>
#include <string>
#include <array>

int main()
{
    using namespace std;
    array<double, 10> test;
    int i = 0;
    double average, sum;
    sum = 0.0;
    cout << "Please enter 10 numbers: \n";
    while (i < 10)
    {
        cin >> test[i];
        sum += test[i]; 
        i++;
    }
    average = sum/10.0;
    cout << "The average is: " << average;
    cin.get();
    return 0;
}
