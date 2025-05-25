// File name: cin_related
// Author: Wang Pengyu
// Create date: 2025-05-25
// Description: cin.fail() cin.good()这几个方法的使用
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    double a;
    string str;
    cout << "Please enter a number: " ;
    cin >> a;
    if (cin.fail())
        {
            cout << "cin.fail() = " << cin.fail() << endl;
            cin.clear();
            getline(cin, str);
            cout << "after cin clear: " << str << endl;
        }
    if (cin.good())  // clear 之后 cin会返回true
        cout << "cin.good() = " << cin.good() << endl;

    return 0;
}
