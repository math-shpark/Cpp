// Constructor1.cpp

#include <iostream>
using namespace std;

class Test {
public:
	Test() {
		cout << "Start" << endl;
	}

	~Test() {
		cout << "End" << endl;
	}
};

int main()
{
	cout << "main() start" << endl;
	Test test;
	cout << "main() end" << endl;
}