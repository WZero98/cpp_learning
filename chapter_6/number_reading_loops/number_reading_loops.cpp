// File name: number_reading_loops
// Author: Wang Pengyu
// Create date: 2025-05-17
// Description: 通过cin输入数值对象，如果输入内容为文字，cin会返回False

#include <iostream>

const int Max = 5;

int main()
{
    using namespace std;
    double fish[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
    cout << "Fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i])
    {
        if (++i < Max)
            cout << "Fish #" << i + 1 << ": ";
    }
    // 计算矩阵均值
    double total = 0.0;
    int j = 0;
    while (j < i)
    {
        total += fish[j];
        j++;
    }
    if (i == 0)
    {
        cout << "No fish!";
    }
    else
    {
        cout << total / i << " = average weight of " << i << " fish\n";
    }
    cout << "Done.\n";
    /*
    As mentioned earlier, some execution environments require additional code to keep the window
    open so that you can see the output. In this example, because the input 'q' turns off
    further input, the treatment is more elaborate:
    */
    if (!cin) // input terminated by non-numeric response
    {
        cin.clear();
        cin.get();
    }
    cin.get();
    cin.get();
    return 0;
}

