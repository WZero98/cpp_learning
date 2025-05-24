// File name: eof_condition
// Author: Wang Pengyu
// Create date: 2025-05-24
// Description: 理解end of file condition

#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Please enter a sentence: ";

    cin.get(ch);  //cin.get()可以获取空白符，cin >> ch 则无法获取空白符
    while (!cin.fail())
    {
        cout << ch;  // print char in cmd
        count++;
        cin.get(ch);
    }
    cout << endl << count-1 << " characters read\n";  // 最后需要输入ctrl+Z退出
    return 0;
}
