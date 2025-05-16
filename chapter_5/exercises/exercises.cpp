// File name: exercises
// Author: Wang Pengyu
// Create date: 2025-04-09
// Description: 

#include <iostream>
#include <array>
void exercise_1();
void exercise_2();
void exercise_3();
void exercise_10();

int main()
{
    using namespace std;
    // exercise_1();
    // cout << "==================== Exercise 2 =======================" << endl;
    // exercise_2();
    // cout << "==================== Exercise 3 =======================" << endl;
    // exercise_3();
    cout << "==================== Exercise 10 =======================" << endl;
    exercise_10();
    return 0;
}


void exercise_1()
{
    using namespace std;
    int a, b, sum = 0;
    cout << "Please enter a integer: ";
    cin >> a;
    cout << "Please enter another integer: ";
    cin >> b;
    cin.get();
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << "The sum from " << a << " to " << b << " is: " << sum << endl;
    cin.get();
}


void exercise_2()
{
    using namespace std;
    const int array_size = 20;
    array<long double, array_size> factorials;
    factorials[1] = factorials[0] = 1;
    for (int i = 2; i <= array_size; i++)
    {
        factorials[i] = factorials[i-1]*i;
    }
    // print
    for (int i = 0; i <= array_size; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }
}


void exercise_3()
{
    using namespace std;
    double a, sum = 0;
    cout << "Please enter a number, and enter 0 to stop" << endl;
    do 
    {
        cin >> a;
        cin.get();
        sum += a;
    } while (a != 0);
    cout << "The sum is: "<< sum << endl;
}


void exercise_10()
{
    using namespace std;
    int row;
    cout << "Please enter an interger: ";
    cin >> row;
    int i, j;
    for (int number = 1; number <= row; number++)
    {
        i = number;
        j = row - number;
        while (j > 0)
        {
            cout << ".";
            j--;
        }
        while (i > 0)
        {
            cout << "*";
            i--;
        }
        cout << "\n";
    }
}

