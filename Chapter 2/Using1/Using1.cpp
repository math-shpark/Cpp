// Using1.cpp

#include <iostream>
using namespace std;

int newData = 100;

namespace Test {
	int newData = 200;
}

int main()
{
	cout << newData << endl;
}