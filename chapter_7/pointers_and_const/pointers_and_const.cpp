// File name: pointers_and_const
// Author: Wang Pengyu
// Create date: 2025-06-08
// Description: 
#include <iostream>

int main()
{
    using namespace std;
    // pointer to a const variable
    int age = 39;
    const int * pt = &age;
    cout << "pt: " << pt << endl;

    // a constant pointer
    int sloth = 3;
    int * const finger = &sloth; // a const pointer to int
    cin.get();
    return 0;
}
