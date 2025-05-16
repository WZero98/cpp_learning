// File name: exercise_7
// Author: Wang Pengyu
// Create date: 2025-03-27
// Description: 

#include <iostream>
#include <string>
using namespace std;
struct pizza
{
    string name;
    float diameter;
    float weight;
};
void use_struct();
void display_struct(pizza);
void use_new();
void display_pointer(pizza *);

int main()
{
    use_struct();
    use_new();
    cin.get();
    return 0;
}


void use_struct()
{
    pizza pz_1;
    cout << "Please enter the name of pizza: ";
    getline(cin, pz_1.name);
    cout << "Please enter the diameter of pizza: ";
    cin >> pz_1.diameter;
    cout << "Please enter the weight of pizza: ";
    cin >> pz_1.weight;
    display_struct(pz_1);
    cin.get();
}

void use_new()
{
    pizza * pt = new pizza;
    cout << "Please enter the name of pizza: ";
    getline(cin, pt->name);
    cout << "Please enter the diameter of pizza: ";
    cin >> pt->diameter;
    cout << "Please enter the weight of pizza: ";
    cin >> pt->weight;
    display_pointer(pt);
    delete pt;
    cin.get();
}


void display_struct(pizza x)
{
    cout << "The name of pizza: " << x.name << endl;
    cout << "The diameter of pizza: " << x.diameter << endl;
    cout << "The weight of pizza: " << x.weight << endl;
    cout << "======================================" << endl;
}

void display_pointer(pizza * x)
{
    cout << "The name of pizza: " << x -> name << endl;
    cout << "The diameter of pizza: " << x -> diameter << endl;
    cout << "The weight of pizza: " << x -> weight << endl;
    cout << "======================================" << endl;
}