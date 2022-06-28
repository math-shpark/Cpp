// FuncTemplate1.cpp

#include <iostream>
using namespace std;

template <typename T>
T testFunc(T num) {
	cout << "매개변수 : " << num << endl;

	return num;
}

int main()
{
	cout << "정수형 " << testFunc(5) << endl;
	cout << "실수형 " << testFunc(5.5) << endl;
	cout << "문자형 " << testFunc('A') << endl;
	cout << "문자열 " << testFunc("String") << endl;
}