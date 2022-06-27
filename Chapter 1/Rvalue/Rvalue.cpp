// Rvalue.cpp 

#include <iostream>
using namespace std;

int func(int param) {
	int result = param * 2;

	return result;
}

int main()
{
	int input = 0;

	cout << "Input number : ";
	cin >> input; // input 값 입력

	int&& rData = input + 5;
	cout << rData << endl;

	int&& result = func(10);
	result += 10;
	cout << result << endl;

	return 0;
}