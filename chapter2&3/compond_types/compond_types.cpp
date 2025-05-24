#include <iostream>
using namespace std;
void create_array();
void arrayone();

int main()
{
	/*create_array();*/
	arrayone();
	return 0;
}


void create_array()
{
	short months[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // create an array of 12 short values
	
	short value(12); // if followed by enclosed parenthesis, then the value will be assigned to variable value

	cout << "The array is: " << months << endl;
	cout << "The value is: " << value << endl;
	cin.get();
}

void arrayone()
{
	int yams[3]; // create an array with 3 elements
	yams[0] = 7; // assign value to first element
	yams[1] = 8; 
	yams[2] = 6;

	int yamcosts[3] = { 20, 30, 5 }; // create, initialize array

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	int i;
	int total = 0;
	for (i = 0; i <= 2; i++)
		cout << "The package with " << yams[i] << " yams costs " 
		<< yamcosts[i] << " cents per yam.\n", //一个循环语句内，不同语句用逗号隔开
		total += yams[i] * yamcosts[i];

	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof(yams) << " bytes.\n"; // sizeof 后面接变量时，括号可省略
	cout << "Size of one element = " << sizeof(yams[0]) << " bytes.\n";
	cin.get();
}