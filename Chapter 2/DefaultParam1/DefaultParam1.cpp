// DefaultParam1.cpp

#include <iostream>
using namespace std;

int func(int param = 10) {
	return param;
}

int main()
{
	cout << func() << endl;
	cout << func(20) << endl;

	return 0;
}