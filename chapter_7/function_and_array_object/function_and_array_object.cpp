// File name: function_and_array_object.cpp
// Author: Wang Pengyu
// Create date: 2025-06-16
// Description: a function using an array object argument

#include <iostream>
#include <array>

using namespace std;

void sum_of_array(array<double, 5> array);  // using an array argument
void sum_of_array(array<double, 5> *pta);   // using a pointer to array argument

int main()
{
    array<double, 5> arr = {1, 2, 3, 5, 4};
    sum_of_array(arr);
    sum_of_array(&arr);
    return 0;
}

void sum_of_array(array<double, 5> array)
{
    double sum = 0;
    for (int i = 0; i < 5; i++)
        {
            sum += array[i];
        }
    cout << "The sum is: " << sum << endl;
}

void sum_of_array(array<double, 5> *pta)
{
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += (*pta)[i];  // 不能像内置数组一样，直接用指针本身来指代所指向的数组
    }
    cout << "The sum is: " << sum << endl;
}
