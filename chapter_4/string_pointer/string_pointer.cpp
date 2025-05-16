// File name: string_pointer.cpp
// Author: Wang Pengyu
// Create date: 2025-03-20
// Description: using the delete operator and string class

#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    string str1 = "WHO";
    string str2= "asdasda";
    string * ps = &str1;

    cout << ps << endl;
    cout << str1 << endl;
    cout << str1 + str2 << endl;
    cout << str1.length() << endl;
    cout << (str1 + str2).length() << endl;

    cin.get();
    
    return 0;
}