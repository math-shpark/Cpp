// ConstructorOverloading2.cpp

#include <iostream>
using namespace std;

class MyData {
private:
	int x = 0;
	int y = 0;

public:
	MyData(int param) {
		cout << "MyData(int param)" << endl;

		if (param > 100)
			param = 100;

		x = 100;
	}

	MyData(int param1, int param2) : MyData(param1) {
		cout << "MyData(int param1, int param2)" << endl;

		if (param2 > 150)
			param2 = 150;

		y = 150;
	}

	void print() {
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
	}
};

int main()
{
	MyData data1(110);
	data1.print();

	MyData data2(50, 250);
	data2.print();
}
