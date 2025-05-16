// File name: addpntrs
// Author: Wang Pengyu
// Create date: 2025-03-20
// Description: pointer addition

#include <iostream>

int main()
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    // two ways to get the address of an array
    double * pw = wages;    // name of an array = address
    short * ps = &stacks[0];

    // show array element and address
    cout << "pw = " << pw << endl;
    cout << "*pw = " << *pw << endl;
    cout << "pw[0] = " << pw[0] << endl;
    cout << "pw[1] = " << pw[1] << endl;
    cout << "pw[2] = " << pw[2] << endl;

    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << endl;
    cout << "*pw = " << *pw << endl;

    cout << "ps = " << ps << endl;
    cout << "*ps = " << *ps << endl;

    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << endl;
    cout << "*ps = " << *ps << endl;

    // access two elements with array notation
    cout << "access two elements with array notation:\n";
    cout << "stacks[0] = " << stacks[0] << endl;
    cout << "stacks[1] = " << stacks[1] << endl;

    cout << "access two elements with pointer notation:\n";
    cout << "*stacks = " << *stacks << endl;
    cout << "*(stacks + 1) = " << *(stacks + 1) << endl;
    cout << "ps[0] = " << ps[0] << endl;
    cout << "ps[1] = " << ps[1] << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

    cout << "=======================================\n";
    short tell[10] = {0, 1, 3, 4, 5, 98, 233, 56, 599, 30};        // tell an array of 20 bytes
    short (* pt) [10] = &tell;      //创建一个指向整个array的指针

    cout << pt << endl;    // = tell
    cout << *pt << endl;    // = tell
    cout << (*pt)[9] << endl;    // = tell[9]

    cout << tell << endl;  // displays &tell[0]
    cout << &tell << endl; // displays address of whole array

    cout << (tell+1) << endl;  //
    cout << (&tell + 1) << endl; // 等于tell+10，因为包含的是整个array的长度
    cout << (pt + 1) << endl; 
    cout << (tell + 10) << endl;

    cin.get();

    return 0;
}
