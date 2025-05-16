// File name: pointer.app
// Author: Wang Pengyu
// Create date: 2025-03-13
// Description: 
#include <iostream>

int main()
{
    using namespace std;
    int updates = 6;
    int * p_updates;    // declare pointer to an int
    p_updates = &updates;

    // express values two ways
    cout << "Values: \nupdates = " << updates << endl;
    cout << "*p_updates = " << *p_updates << endl;

    // express address two ways
    cout << "Addresses: \n&updates = " << &updates << endl;
    cout << "p_updates = " << p_updates << endl;

    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    // the pointer's address
    cout << "The address of *p_updates:" << &p_updates << endl;
    cin.get();

    return 0;
}
