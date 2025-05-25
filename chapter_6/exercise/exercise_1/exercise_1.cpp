// File name: exercise_1
// Author: Wang Pengyu
// Create date: 2025-05-24
// Description: 

#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;
    int count_ch = 0, count_alpha = 0;  // 计数器，分别统计字符数和字母数
    cout << "Please enter some words, no digits, and enter @ to exit:\n";
    cin.get(ch);
    while (!cin.fail())  // 如果读取失败则直接退出
    {   
        count_ch++;
        if (isdigit(ch))
            cin.get(ch);
        else if (isalpha(ch))
        {
            count_alpha++;
            if (islower(ch))
            {
                ch = toupper(ch);
                cout << ch;
                cin.get(ch);
            }
            else if (isupper(ch))
            {
                ch = tolower(ch);
                cout << ch;
                cin.get(ch);
            }
        }
        else if (ch == '@')
        {
            count_ch--;  // 如果字符是@，则不计数
            break;
        }
        else 
        {
            cout << ch;
            cin.get(ch);
        }
    }
    cout << endl << "Total charaters: " << count_ch << endl;
    cout << "Total alphabets: " << count_alpha << endl;
    cout << "Press Enter to exit.";
    cin.get();
    cin.get();
    return 0;
}
