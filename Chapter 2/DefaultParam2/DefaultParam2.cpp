// DefaultParam2.cpp

#include <iostream>
using namespace std;

int func(int param1, int param2 = 5) {
	return param1 * param2;
}

int main()
{
	cout << func(10) << endl;
	cout << func(10, 3) << endl;

	return 0;
}