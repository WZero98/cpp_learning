// File name: const
// Author: Wang Pengyu
// Create date: 2025-06-28
// Description: const在函数形参中的作用
#include <iostream>
#include <string>
using namespace std;

void printstr(const string & str);  // const 在引用变量时，可以直接使用常量
void printstr_1(string &str);   // 没有const的引用变量，不能直接使用常量
void printstr_2(string str);   // 没有const的普通变量，可以使用常量

int main()
{
    string str = "hello world!";
    printstr("hello world.");
    // printstr_1("hello world.");  // 不能用常量作为实参
    printstr_1(str);  // 不能用常量作为实参，但可以用变量做实参
    printstr_2("hello world.");
    cin.get();
    return 0;
}

void printstr(const string &str)
{
    cout << str << endl;
}

void printstr_1(string &str)
{
    cout << str << endl;
}

void printstr_2(string str)
{
    cout << str << endl;
}
