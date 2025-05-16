// File name: nested
// Author: Wang Pengyu
// Create date: 2025-04-06
// Description: nested loops and 2-D array

#include <iostream>
#include <string>

const int Cities = 5;
const int Years = 4;

int main()
{
    using namespace std;
    string cities[Cities] = {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    }; // array of pointers-to-string
    cout << "the address of cities: \n";
    cout << cities << endl;
    cout << cities + 1 << endl;
    cout << *(cities + 1) << endl;

    int maxtemps[Years][Cities] = // 2-D array (4*5)
    {
        {96, 100, 87, 101, 105}, // values for maxtemps[0]
        {96, 98, 91, 107, 104},  // values for maxtemps[1]
        {97, 101, 93, 108, 107}, // values for maxtemps[2]
        {98, 103, 95, 109, 108}  // values for maxtemps[3]
    };

    cout << "Maximum temperatures for 2008 - 2011 is: \n\n";
    for (int city = 0; city < Cities; city++)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; year++)
        {
            cout << maxtemps[year][city] << "\t" ;
        }
        cout << endl;
    }
    cin.get();
    return 0;
}
