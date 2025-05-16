// File name: exercise_3
// Author: Wang Pengyu
// Create date: 2025-03-23
// Description: Use char arrays and functions from the cstring header file.

#include <iostream>
#include <cstring>
#include <string>
void using_cstring();
void using_string();

int main()
{
    using namespace std;
    cout << "Using cstring and array of chars: \n";
    using_cstring();

    cout << "=====================================\n";
    cout << "Using string: \n";
    using_string();

    return 0;
}


void using_cstring()
{
    using namespace std;
    char first_name[50], last_name[50];
    char message[100] = "";
    cout << "Enter your first name: ";
    cin.getline(first_name, 50);

    cout << "Enter your last name: ";
    cin.get(last_name, 50).get();

    strcat(message, last_name);
    strcat(message, ", ");
    strcat(message, first_name);

    cout << "Here's the information in a single string: " << message << endl;
}


void using_string()
{
    using namespace std;
    string first_name, last_name, msg;
    cout << "Enter your first name: ";
    getline(cin, first_name);

    cout << "Enter your last name: ";
    getline(cin, last_name);

    msg = last_name + ", " + first_name;

    cout << "Here's the information in a single string: " << msg << endl;
}