// limits.cpp -- some integer limits
#include <iostream>
#include <climits>
int main()
{
	using namespace std;
	/*For example, it defines INT_MAX as the largest possible int value 
	and CHAR_BIT as the number of bits in a byte. */
	int n_int = INT_MAX;	// initialize n_int to max int value
	short n_short = SHRT_MAX;	// this symbols defined in the climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	int min_int = INT_MIN;
	short min_short = SHRT_MIN;
	long min_long = LONG_MIN;
	long long min_llong = LLONG_MIN;

	// sizeof operator yields size of type or of variables
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;
	
	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;

	cout << "Minimum value: " << endl;
	cout << "int: "<< min_int << endl;
	cout << "short: " << min_short << endl;
	cout << "long: " << min_long << endl;
	cout << "long long: " << min_llong << endl;

	cout << "Bits per byte = " << CHAR_BIT 
		 << "\nSo:" << endl;

	cout << "int is " << (sizeof(int)) * CHAR_BIT << " bits." << endl;
	cout << "short is " << (sizeof(short)) * CHAR_BIT << " bits." << endl;
	cout << "long is " << (sizeof n_long) * CHAR_BIT << " bits." << endl;
	cout << "long long is " << (sizeof n_llong) * CHAR_BIT << " bits." << endl;
	cout << endl;
	cin.get();

	return 0;
}