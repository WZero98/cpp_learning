// File name: file_output
// Author: Wang Pengyu
// Create date: 2025-05-17
// Description: 简单的文件输出

#include <fstream>
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    ofstream file;
    string automobile_name;
    int year;
    double a_price, d_price;

    file.open("output.txt");

    cout << "Please enter some text to output to the file: \n";
    cout << "The automobile name: ";
    getline(cin, automobile_name);
    cout << "The model year: ";
    cin >> year;
    cout << "The original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    // output to file
    file << fixed;  // 用定点表示法表示浮点数
    file.precision(2);
    file.setf(ios_base::showpoint);  // 保留原有的类型精度（四舍五入原则）
    file << "The name of automobile: " << automobile_name << endl;
    file << "The model year of automobile: " << year << endl;
    file << "The original asking price: " << a_price << endl;
    file << "Now price: " << d_price << endl;

    return 0;
}
