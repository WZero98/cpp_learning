// File name: exercise_5
// Author: Wang Pengyu
// Create date: 2025-03-25
// Description: 

#include <iostream>
#include <string>
struct CandyBar
{
    std::string name;
    float weight;
    int calories;
};
void print(CandyBar);

int main()
{
    using namespace std;
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "The name of snack is: " << snack.name << endl;
    cout << "The weight of snack are: " << snack.weight << endl;
    cout << "The calories of snack are: " << snack.calories << endl;

    cout << "=========================" << endl;
    CandyBar snacks[3];
    snacks[0] = {"Stawberry Cake", 5.3, 500};
    snacks[1] = {"yogurt", 200.5, 300};
    snacks[2] = {"Ice milk", 55.9, 200};

    for (CandyBar x: snacks)
        {
            print(x);
        }

    cin.get();
    return 0;
}

void print(CandyBar list)
{
    using namespace std;
    cout << "The name is: " << list.name << endl;
    cout << "The weights are: " << list.weight << endl;
    cout << "The calories are: " << list.calories << endl;
    cout << "=========================" << endl;
}
