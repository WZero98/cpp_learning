// File name: structure_address
// Author: Wang Pengyu
// Create date: 2025-06-15
// Description: 在函数中传递pointer to structure，传递指针（或地址）的好处是，
// 可以减少内存占用，形参无需再去复制值
#include <iostream>
#include <cmath>

using namespace std;
struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

// function prototypes
void show_polar(const polar * polarpt);
polar rect_to_polar(const rect * rectpt);

int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x value: ";
    cin >> rplace.x;
    while (cin.fail())
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Please enter the x value with a number: ";
        cin >> rplace.x;
    }

    cout << "Enter the y value: ";
    cin >> rplace.y;
    while (cin.fail())
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Please enter the y value with a number: ";
        cin >> rplace.y;
    }

    pplace = rect_to_polar(&rplace);
    cout << "The polar place is: (" << pplace.distance << ", " << 
    pplace.angle << ")\n";
    show_polar(&pplace);
    cin.get();
    cin.get();
    return 0;
}


// function show_polar
void show_polar(const polar * polarpt)
{
    // 展示极坐标系
    const double Rad_to_deg = 57.29577951;
    cout << "Distance = " << polarpt->distance << endl;
    cout << "Angle = " << polarpt->angle * Rad_to_deg << " degrees" << endl;
}

// function rect_to_polar
polar rect_to_polar(const rect * rectpt)
{
    // 将平面直角坐标系转换为极坐标系
    const double Rad_to_deg = 57.29577951;
    
    polar result;
    result.angle = atan2(rectpt->y, rectpt->x);
    result.distance = sqrt(rectpt->y * rectpt->y + rectpt->x * rectpt->x);

    return result;
}
