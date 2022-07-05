// Using2.cpp

#include <iostream>
using namespace std;

int newData = 100;

namespace Test {
	int newData = 200;
}

using namespace Test;

int main()
{
	cout << newData << endl;
}