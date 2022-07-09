// ClassInit1.cpp

#include <iostream>
using namespace std;

class Test {
public:
	Test() {
		data = 10;
	}

	int data;

	void print(void) {
		cout << data;
	}
};

int main()
{
	Test test;
	test.print();
}