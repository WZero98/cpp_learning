// File name: simple_file_input
// Author: Wang Pengyu
// Create date: 2025-05-24
// Description: 利用fstream读取文本文件

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    char ch;
    string str;
    ifstream inFile;

    inFile.open("input.txt");

    if (!inFile.is_open()) // check whether a file was opened successfully
    {
        exit(EXIT_FAILURE);
    }
    else
    {
        // getline(inFile, str);  // 到换行符就自动终止了
        // cout << str << endl;
        inFile.get(ch);  // 可以读取整个文件字符，直到文件终止
        while (!inFile.fail())
        {
            cout << ch;
            inFile.get(ch);
        }
    }
    cin.get();
    return 0;
}

