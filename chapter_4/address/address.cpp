// File name: address.app
// Author: Wang Pengyu
// Create date: 2025-03-13
// Description: 

#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;
    
    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    cin.get();
    return 0;
}