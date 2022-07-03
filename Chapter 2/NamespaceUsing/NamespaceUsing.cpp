// NamespaceUsing.cpp

#include <iostream>

using namespace std;

namespace test {
	int test_data = 100;

	void func(void) {
		cout << "test::func()" << endl;
	}
}

using namespace test;

int main()
{
	func();
	cout << test_data;
}