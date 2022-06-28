// FuncPoly.cpp

#include <iostream>
using namespace std;

int add(int a, int b, int c) {
	cout << "매개변수 3개인 add 함수가 호출됨" << endl;
	cout << "결과 : ";

	return a + b + c;
}

int add(int a, int b) {
	cout << "매개변수 2개인 add 함수가 호출됨" << endl;
	cout << "결과 : ";

	return a + b;
}

double add(double a, double b) {
	cout << "매개변수가 2개지만 자료형이 double인 함수" << endl;
	cout << "결과 : ";

	return a + b;
}

int main()
{
	cout << add(3, 4) << endl;
	cout << add(3, 4, 5) << endl;
	cout << add(3.5, 4.6);
}