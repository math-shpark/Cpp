// Constructor2.cpp

#include <iostream>
using namespace std;

class Test {
	int newData;

public:
	Test(int param) : newData(param) {
		cout << "Constructor" << endl;
	}

	~Test() {
		cout << "Destructor" << endl;
	}
};

int main() {
	cout << "main() begin" << endl;

	Test test(1);

	cout << "before test2" << endl;

	Test test2(2);

	cout << "main() end" << endl;
}