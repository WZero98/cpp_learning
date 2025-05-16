// File name: mixtypes
// Author: Wang Pengyu
// Create date: 2025-03-23
// Description: 不同类型的组合运用

#include <iostream>

struct antarctica_years_end
{
    int year;
};

int main()
{   
    using namespace std;
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;   // 指向structure s02的指针
    pa->year = 1999;    // 利用指针去获取structure的元素，并给其赋值
    antarctica_years_end trio[3];   // array of 3 structures
    trio[0].year = 2003;
    cout << "trio = " << trio << endl;
    cout << "trio->year = " << trio->year << endl;  // trio 是第一个structure的地址

    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};   // 常量，为指向三个不同structure的指针array
    cout << "arp[1]->year = " << arp[1]->year << endl;


    const antarctica_years_end ** ppa = arp;    // 指向arp（指针array）的指针，即指向指针的指针
    auto ppb = arp;     // c++11 automatic type deduction

    cout << "*ppa = " << *ppa << endl;  // 输出为arp第一个元素的值
    cout << "arp[0] = " << arp[0] << endl; // 输出为arp第一个元素的值
    cout << "arp = " << arp << endl;    // 输出为arp第一个元素的地址
    cout << "(*ppa)->year = " << (*ppa)->year << endl;

    cout << "(*(ppb+1))->year = " << (*(ppb + 1))->year << endl;
    cin.get();

    return 0;
}
