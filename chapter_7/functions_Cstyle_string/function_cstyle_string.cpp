// File name: function_cstyle_string
// Author: Wang Pengyu
// Create date: 2025-06-08
// Description: 
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char ghost[20] = "galloping";  // c-style string
    char * str = "galumphing";  // pointer to char
    cout << "c-style string: " << ghost << endl;
    cout << "pointer to char: " << str << endl;
    cout << "cast the pointer type of str: " << (int *) str << endl;
    
    cin.get();
    return 0;
}
