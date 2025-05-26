// File name: exercise_6
// Author: Wang Pengyu
// Create date: 2025-05-25
// Description: 
#include <iostream>
#include <string>
#include <array>

struct donor
{
    std::string name;
    double contribution;
};

int main()
{
    using namespace std;
    int number;  // the number of donors
    cout << "Please enter the number of contributors: ";
    cin >> number;
    while (cin.fail())  // in case that cin encounts type failure
    {
        cout << "Please enter the number of contributors, no non-numeric input: ";
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cin >> number;
    }
    cin.get();
    // create a dynamic array to store them
    donor * pt_contributors = new donor[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Please enter the name and contribution of contributor #"<< i + 1 <<":\n"
                "Name: ";
        getline(cin, pt_contributors[i].name);
        cout << "Contribution: ";
        cin >> pt_contributors[i].contribution;
        cin.get();
    }

    // display the names and amounts donated for all donors

    // save the index of different categories
    int *pt_grand_patrions = new int[number];
    int *pt_patrions = new int[number];
    int index_1 = 0, index_2 = 0;
    for (int i = 0; i < number; i++)
    {   
        if (pt_contributors[i].contribution >= 10000)
        {
            pt_grand_patrions[index_1] = i;
            index_1++;
        } 
        else
        {
            pt_patrions[index_2] = i;
            index_2++;
        }
    }
    cout << "================CONTRIBUTORS=================" << endl;
    cout << "Grand Patrons: \n";
    if (index_1 > 0)
    {
        for (int j = 0; j < index_1; j++)
        {
            cout <<  pt_contributors[pt_grand_patrions[j]].name << "\t";
            cout << "$" << pt_contributors[pt_grand_patrions[j]].contribution << endl;
        }
    }
    else 
        cout << "None." << endl;

    cout << "Patrons: \n";
    if (index_2 > 0)
    {
        for (int j = 0; j < index_2; j++)
        {
            cout << pt_contributors[pt_patrions[j]].name << "\t";
            cout << pt_contributors[pt_patrions[j]].contribution << " yuan" << endl;
        }
    }
    else
        cout << "None." << endl;
    delete[] pt_patrions;
    delete[] pt_grand_patrions;
    delete [] pt_contributors;
    cin.get();
    return 0;
}
