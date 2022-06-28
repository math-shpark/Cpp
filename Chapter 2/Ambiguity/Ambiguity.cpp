// Ambiguity.cpp

#include <iostream>
using namespace std;

void func(int num) {
	cout << "매개변수 1개인 함수" << endl;
}

void func(int num1, int num2 = 5) {
	cout << "매개변수 2개인 함수" << endl;
}

int main()
{
	//func(5);
}