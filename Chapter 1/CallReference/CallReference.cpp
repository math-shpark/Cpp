// CallReference.cpp

#include <iostream>
using namespace std;

void func(int& param) {
	param = 100;
}

int main()
{
	int data = 0;

	func(data);
	cout << data << endl;
}
