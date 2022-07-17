// DefaultConstructor.cpp

#include <iostream>
using namespace std;

class Test {
public:
	Test(void) = default;

	int data = 10;
};

int main()
{
	Test test;
	cout << test.data << endl;
}