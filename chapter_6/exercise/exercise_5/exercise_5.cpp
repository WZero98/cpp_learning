// File name: exercise_5
// Author: Wang Pengyu
// Create date: 2025-05-25
// Description: 
#include <iostream>

int main()
{
    using namespace std;
    double income, tax;
    cout << "First 5,000 tvarps: 0 % tax\n"
            "Next 10,000 tvarps : 10 % tax\n"
            "Next 20,000 tvarps : 15 % tax\n"
            "Tvarps after 35,000 : 20 % tax\n";
    
    cout << "Please enter your income: ";
    cin >> income;
    // The loop should terminate when the user 
    // enters a negative number or non - numeric input.
    while (!(cin.fail() || income < 0))
    {
        // caculate the tax
        if (income <= 5000)
            tax = 0;
        else if (income > 5000 && income <= (10000 + 5000))
        {
            tax = (income - 5000) * 0.1;
        }
        else if (income > (10000 + 5000) && income <= (20000 + 10000 + 5000))
        {
            tax = 10000 * 0.1 + (income - 10000 - 5000) * 0.15;
        }
        else
        {
            tax = 10000 * 0.1 + 20000 * 0.15 + (income - 20000 - 10000 - 5000) * 0.2;
        }
        cout << "Your owed tax is: " << tax << endl;
        cout << "Please enter a a negative number or non-numeric input to terminate.\n";
        cout << "Or enter another income to calculate tax...\n";
        cin >> income;
    }
    if (cin.fail())
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "input Enter to quit.";
        cin.get();
    }
    return 0;
}
