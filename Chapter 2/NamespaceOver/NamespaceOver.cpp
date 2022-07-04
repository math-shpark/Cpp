// NamespaceOver.cpp

#include <iostream>
using namespace std;

// 전역 함수
void func(void) {
	cout << "::func()" << endl;
}

namespace Space {
	// Space 스페이스에 소속된 함수
	void func(void) {
		cout << "Space::func()" << endl;
	}
}

namespace Space2 {
	// Space2 스페이스에 소속된 함수
	void func(void) {
		cout << "Space2::func()" << endl;
	}
}

int main()
{
	func(); // 묵시적 전역
	::func(); // 명시적 전역
	Space::func();
	Space2::func();
}