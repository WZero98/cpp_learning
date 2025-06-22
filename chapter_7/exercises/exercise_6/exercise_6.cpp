// File name: exercise_6
// Author: Wang Pengyu
// Create date: 2025-06-21
// Description: 
#include <iostream>
using namespace std;

int fill_array(double * arr, int size);
void show_array(const double *arr, int size);
void reverse_array(double * arr, int size);

int main()
{   
    const int size = 10;
    int actual_size;
    double array[size];
    cout << "Please enter up to "<< size << " numbers: \n";
    actual_size = fill_array(array, 10);
    show_array(array, actual_size);
    reverse_array(array, actual_size);
    cout << "After reverse:\n";
    show_array(array, actual_size);
    cin.get();
    return 0;
}

int fill_array(double *arr, int size)
{
    int actual_size = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter number #" << i + 1 << ": ";
        cin >> arr[i];
        actual_size++;
        if (cin.fail())
            {
                actual_size--;
                cin.clear();
                while(cin.get() != '\n')
                    continue;
                cout << "You entered non-numeric input to cease this process.\n";
                break;
            }
    }
    cout << "The actual size of array is: " << actual_size << endl;
    return actual_size;
}


void show_array(const double *arr, int size)
{
    cout << "The array is {";
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << arr[size - 1]<< "}\n";
}


void reverse_array(double *arr, int size)
{
    double * temp_arr = new double[size];  // 利用动态数组暂存原数组的元素
    for (int i = size, j = 0; i > 0; i--, j++)
    {
        temp_arr[j] = arr[i-1];
    }
    // 用temp_arr赋值arr的元素
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp_arr[i];
    }
    delete [] temp_arr;
}
