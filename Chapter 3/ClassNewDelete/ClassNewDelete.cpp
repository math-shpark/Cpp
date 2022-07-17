// ClassNewDelete.cpp

#include <iostream>
using namespace std;

class Test {
	int testData;
public:
	Test() {
		cout << "Test::Test()" << endl;
	}

	~Test() {
		cout << "~Test::Test()" << endl;
	}
};

int main()
{
	cout << "main() begin" << endl;

	// new
	Test* data = new Test;
	cout << "Test" << endl;

	// delete
	delete data;
	cout << "end" << endl;
}