// File name: ifelseif
// Author: Wang Pengyu
// Create date: 2025-04-12
// Description: 

#include <iostream>
const int Fave = 38;

int main()
{
    using namespace std;
    int n;
    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "Too low -- guess again: ";
        else if (n > Fave)
            cout << "Too high -- guess again: ";
        else 
            cout << Fave << " is right!\n";
    } while (n != Fave);
    cin.get();
    return 0;
}