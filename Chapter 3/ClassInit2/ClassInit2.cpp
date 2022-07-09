// ClassInit2.cpp

#include <iostream>
using namespace std;

class Test {
public:
	Test() {
		data = 10;
	}

	int data;

	void print(void);
};

void Test::print(void) {
	cout << data;
}

int main()
{
	Test test;
	test.print();
}