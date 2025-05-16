// File name: exercise
// Author: Wang Pengyu
// Create date: 2025-03-23
// Description: C++ Primer plus chapter 4 exercise

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string first_name, last_name, letter_grade;
    int age;
    cout << "What is your first name? ";
    getline(cin, first_name);

    cout << "What is your last name? ";
    getline(cin, last_name);

    cout << "What letter grade do you deserve? ";
    getline(cin, letter_grade);

    cout << "What is your age? ";
    cin >> age;
    
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << letter_grade << endl;
    cout << "Age: " << age << endl;
    return 0;
}

