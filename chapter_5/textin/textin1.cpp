// File name: textin1
// Author: Wang Pengyu
// Create date: 2025-03-27
// Description: reading chars with a while loop

#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter charaters; ctrl + Z to quit: \n";
    cin.get(ch);
    while (cin.fail() == false)  // test for EOF
    {
        cout << ch;
        count += 1;
        cin.get(ch);
    }
    cout << endl << count << " charaters read.\n";
    return 0;
}