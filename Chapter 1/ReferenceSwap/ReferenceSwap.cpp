// ReferenceSwap.cpp

#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
} // SWAP

int main()
{
	int x = 10, y = 15;

	Swap(x, y); // Swap 함수 실행

	cout << "x : " << x << endl;
	cout << "y : " << y;
}