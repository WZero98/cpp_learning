// File name: funtemp
// Author: Wang Pengyu
// Create date: 2025-07-06
// Description: 
#include <iostream>
template <typename T>
void diy_swap(T &a, T &b);  // function prototype

int main()
{
    using namespace std;
    int a = 3, b = 9; // int type
    double x = 0.5, y =100.52;
    cout << "Before swapping:\n" <<
            "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    diy_swap(a, b);
    diy_swap(x, y);
    cout << "After swapping:\n"
         << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}

template <typename T>
void diy_swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
