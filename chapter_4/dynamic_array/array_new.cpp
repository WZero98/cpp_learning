// File name: array_new
// Author: Wang Pengyu
// Create date: 2025-03-14
// Description: 

#include <iostream>

int main()
{
    using namespace std;
    int * array = new int[3];
    array[0] = 10;
    array[1] = 15;
    array[2] = 30;
    cout << "array[0] = " << array[0] << endl;
    // increase the pointer
    array = array + 2;
    cout << "After increase the pointer: ";
    cout << "array[0] = " << array[0] << endl;
    cout << "array[2] = " << array[2] << endl;

    // point back to the begin
    array = array - 2;
    cout << "point back to the begin: ";
    cout << "array[0] = " << array[0] << endl;

    delete [] array;
    
    cin.get();
    return 0;
}