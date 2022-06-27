// RangeBasedFor.cpp

#include <iostream>
using namespace std;

int main()
{
	int list[5] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 5; i++) {
		cout << list[i] << " ";
	} // 기존 for문

	cout << endl;

	for (auto n : list) {
		cout << n << " ";
	} // 범위 기반 for문

	cout << endl;

	for (auto& n : list) {
		cout << n << " ";
	}

	return 0;
}