// File name: more_and
// Author: Wang Pengyu
// Create date: 2025-04-12
// Description: using the logical AND operator

#include <iostream>
#include <string>

const char * qualify[4] =       // an array of pointers to char array (string) 
{                               // 这样可以少用一个数组维度，否则需要two-dimensions
    "10,000-meter race.\n",
    "mud tug-of-war.\n",
    "masters canoe jousting.\n",
    "pie-throwing festival.\n"
};

int main()
{
    using namespace std;
    int age;
    string qualify_str[4] = {
        "10,000-meter race.\n",
        "mud tug-of-war.\n",
        "masters canoe jousting.\n",
        "pie-throwing festival.\n"
    };
    cout << "Enter your age in years: ";
    cin >> age;
    cin.get();
    int index;
    
    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >=50 && age < 65)
        index = 2;
    else
        index = 3;

    cout << "You qualify for the " << qualify_str[index];
    cin.get();
}
