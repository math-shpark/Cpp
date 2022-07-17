// ConstructorOverloading1.cpp

#include <iostream>
using namespace std;

class MyData {
public:
	MyData(int param) : newData(param) {

	};

	MyData(int param1, int param2) : newData(param1 + param2) {

	};

	int getData(void) {
		return newData;
	}

private:
	int newData;
};

int main()
{
	MyData data1(10);
	MyData data2(5, 10);

	cout << data1.getData() << endl;
	cout << data2.getData() << endl;
}
