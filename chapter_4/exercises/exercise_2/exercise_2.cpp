// File name: exercise_2
// Author: Wang Pengyu
// Create date: 2025-03-23
// Description: 

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string name, dessert;

    cout << "Enter your name: \n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}