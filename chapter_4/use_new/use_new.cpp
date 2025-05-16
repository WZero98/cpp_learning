// File name: use_new
// Author: Wang Pengyu
// Create date: 2025-03-13
// Description: 

#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;     // allocate space for an int
    *pt = 1001;     // store a value

    cout << "nights value = " << nights << ": location " << &nights << endl;
    cout << "int " << "value = " << *pt << ": location " << pt << endl;

    double *pd = new double; // allocate space for a double
    *pd = 10000001.0;        // store a double there

    cout << "double " << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt) << " bytes." << endl;
    cout << "size of *pt = " << sizeof(*pt) << " bytes." << endl;
    cout << "size of pd = " << sizeof(pd) << " bytes." << endl;
    cout << "size of *pd = " << sizeof(*pd) << " bytes." << endl;
    cin.get();

    delete pt;
    delete pd;
    return 0;

}