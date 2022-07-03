// NamespaceNested.cpp

#include <iostream>

using namespace std;

namespace Test {
	int test_data = 100;

	namespace InTest {
		int test_data = 200;

		namespace InInTest {
			int test_data = 300;
		}
	}
}

int main()
{
	cout << Test::test_data << endl;
	cout << Test::InTest::test_data << endl;
	cout << Test::InTest::InInTest::test_data << endl;
}