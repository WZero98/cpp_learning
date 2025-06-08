// File name: functions_of_two_dimensional_array
// Author: Wang Pengyu
// Create date: 2025-06-08
// Description: 2维数组的形参形式
#include <iostream>

int sum(const int (* array)[4], int size); // 第一个形参为指向数组的指针，该数组有4个元素
// 可以理解为二维数组第一个元素的地址，正好二维数组的第一个元素为4个元素的数组
// 等价于下列形式
// int sum(int array[][4], int size);

int main()
{
    using namespace std;
    int data[3][4] = {
        {1, 2, 3, 4}, 
        {2, 3, 4, 5},
        {3, 4, 5, 6}
    }; // a two dimensional array

    cout << "The sum of array: " << sum(data, 3);
    cin.get();
    return 0;
}

int sum(const int (*array)[4], int size)
// size: 实际为行数
{
    int total = 0;
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            // total += array[r][c];
            total += *(*(array + r) + c); // another way

            /*To understand this, you can work out the meaning of the subexpressions from the
            inside out:
            array // pointer to first row of an array of 4 int
            array + r // pointer to row r (an array of 4 int)
            *(array + r) // row r (an array of 4 int, hence the name of an array,
            // thus a pointer to the first int in the row, i.e., ar2[r]
            *(array +r) + c // pointer int number c in row r, i.e., ar2[r] + c
            *(*(array + r) + c // value of int number c in row r, i.e. ar2[r][c] */
        }
    }
    return total;
}
