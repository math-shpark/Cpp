// Namespace.cpp

#include <iostream>

using namespace std;

namespace test {
    int data = 100;

    void func(void) {
        cout << "test::func()" << endl;
    }
}

int main()
{
    test::func();
    cout << test::data << endl;
}