// File name: newstruct.cpp
// Author: Wang Pengyu
// Create date: 2025-03-20
// Description: using new with a structure

#include <iostream>
#include <string>

struct inflatable 
{
    std::string name;
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable * ps = new inflatable;   // allot memory for structure
    cout << "Enter name of inflatable item: ";
    getline(cin, ps->name); // method 1 for member access
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;    // method 2 for member access
    cout << "Enter price: $";
    cin >> (*ps).price;
    cin.get();

    cout << "Name: " << (*ps).name << endl;              // method 2
    cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
    cout << "Price: $" << ps->price << endl;             // method 1
    delete ps;                                           // free memory used by structure
    cin.get();

    return 0;
}
