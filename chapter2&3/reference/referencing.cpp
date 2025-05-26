// Filename: reference.cpp
// Date: 2025-05-11
// Description: 体现引用符&的作用

#include <iostream>
#include <array>

int main()
{
	using namespace std;
	array<double, 5> x = {1.2, 2.4, 3.6, 4.8, 6};
	int a = 0;

	for (double i : x)
	{	
		i = i / 1.2;
		cout << i << endl;
		cout << "现在array x 元素的值为" << x[a] << endl;
		a++;
	}

	// 采用 &符号
	a = 0;
	for (double &i : x)
	{
		i = i / 1.2;
		cout << i << endl;
		cout << "现在array x 元素的值为" << x[a] << endl;
		a++;
	}
	// 发现矩阵x元素的值也改变了
	cin.get();
	return 0;
}
