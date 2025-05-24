// File name: skip_non_numeric_input
// Author: Wang Pengyu
// Create date: 2025-05-17
// Description: 之前的数字输入loop输入非数字之后会使得cin无法再输入新值，现在进行修正

#include <iostream>
const int Max = 5;

int main()
{
    using namespace std;
    double golf[Max];
    int i = 0;
    while (i < Max)
    {
        cout << "round #" << i + 1 << ": ";
        if (cin >> golf[i])
        {
            i++;
        }
        else if (!(cin >> golf[i]))
        {
            cin.clear();  // reset input
            cout << "Please enter number: \n";
            while (cin.get() != '\n')  // 输入非数字后，获取字符，直到当前的非数字输入读取完毕
                continue;  // 如果输入的非数字里没有换行符
        }
    }
    cin.get();
    double total = 0.0;
    for (i = 0; i < Max; i++)
        total += golf[i];
    // report results
    cout << total / Max << " = average score "
         << Max << " rounds\n";
    cin.get();
    return 0;
}

