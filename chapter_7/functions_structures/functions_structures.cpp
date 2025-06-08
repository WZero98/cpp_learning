// File name: functions_sturctures
// Author: Wang Pengyu
// Create date: 2025-06-08
// Description: 
#include <iostream>
using namespace std;
// defining the structure
struct time_hm
{
    int hours;
    int minutes;
};

// a function to add two time_hm structure
time_hm add_two_time(time_hm time_1, time_hm time_2);

int main()
{
    time_hm time_1, time_2;
    cout << "Please enter the hours of trip #1: ";
    cin >> time_1.hours;
    cout << "Please enter the minutes of trip #1: ";
    cin >> time_1.minutes;
    cout << "Please enter the hours of trip #2: ";
    cin >> time_2.hours;
    cout << "Please enter the minutes of trip #2: ";
    cin >> time_2.minutes;

    time_hm total = add_two_time(time_1, time_2);
    cout << "The total time of these two trips are: " << total.hours << " hours"
    " and " << total.minutes << " minutes." << endl;
    cin.get();
    cin.get();
    return 0;
}

time_hm add_two_time(time_hm time_1, time_hm time_2)
{
    int hours = time_1.hours + time_2.hours;
    int minutes = time_1.minutes + time_2.minutes;
    // if minutes > 60 , then should convert to xx hours xx minutes
    hours = minutes / 60 + hours;
    minutes = minutes % 60;
    time_hm result = {hours, minutes};
    return result;
}

