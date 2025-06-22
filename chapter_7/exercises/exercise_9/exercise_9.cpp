// File name: exercise_9
// Author: Wang Pengyu
// Create date: 2025-06-21
// Description: 
#include <iostream>
#include <string>
using namespace std;
const int SLEN = 30;
struct student {
    string fullname;
    string hobby;
    int ooplevel;
};

int getinfo(student *arr, int size);
void display1(student st);
void display2(const student *ps);
void display3(student * pa, int size);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    // for (int i = 0; i < entered; i++)
    // {
    //     display1(ptr_stu[i]);
    //     display2(&ptr_stu[i]);
    // }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student * arr, int size)
{
    // The function solicits and stores data about students.
    // It terminates input upon filling
    // the array or upon encountering a blank line for the student
    // name.
    int actual_size = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "The fullname of student #" << i + 1 << " is: ";
        getline(cin, arr[i].fullname);
        if (arr[i].fullname.empty())
            break;
        cout << "The hobby of student #" << i + 1 << " is: ";
        getline(cin, arr[i].hobby);
        cout << "The ooplevel of student #" << i + 1 << " is: ";
        cin >> arr[i].ooplevel;
        while (cin.fail())
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Please enter a number: ";
            cin >> arr[i].ooplevel;
        }
        // 这句很关键：丢弃 cin 中残留的 '\n'
        cin.ignore();
        actual_size++;
    }
    return actual_size;
}


void display1(student st)
{
    // display1() takes a student structure as an argument
    // and displays its contents
    cout << "The fullname is: " << st.fullname << endl;
    cout << "The hobby of " << st.fullname << " is: " << st.hobby << endl;
    cout << "The oop level of " << st.fullname << " is: " << st.ooplevel << endl;
}

void display2(student st)
{
    // display1() takes a student structure as an argument
    // and displays its contents
    cout << "The fullname is: " << st.fullname << endl;
    cout << "The hobby of " << st.fullname << " is: " << st.hobby << endl;
    cout << "The oop level of " << st.fullname << " is: " << st.ooplevel << endl;
}

void display2(const student * pst)
{
    // display2() takes the address of student structure as an
    // argument and displays the structure’s contents
    cout << "The fullname is: " << pst ->fullname << endl;
    cout << "The hobby of " << pst->fullname << " is: " << pst->hobby << endl;
    cout << "The oop level of " << pst->fullname << " is: " << pst->ooplevel << endl;
}

void display3(student * pa, int size)
{
    // display3() takes the address of the first element of an array
    // of student structures and the number of array elements as
    // arguments and displays the contents of the structures
    for (int i = 0; i < size; i++)
    {
        cout << "Student #" << i + 1 << ":\n";
        display1(pa[i]);
    }
}

