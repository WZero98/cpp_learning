// File name: array_alternatives
// Author: Wang Pengyu
// Create date: 2025-03-23
// Description: array variations

#include <iostream>
#include <vector>
#include <array>

int main()
{
    using namespace std;
    // original c++
    double a1[4] = {1.2, 2.4, 3.6, 4.8};

    // double template class
    vector<double> a2(4);   // create vector with 4 elements
    // no simple way to initialize 
    a2[0] = 1.0 / 3.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 7.0;
    a2[3] = 1.0 / 9.0;

    // create and initialize array object
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3; // valid for array objects of same size

    // use array notation
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;


    cin.get();

    return 0;
}

