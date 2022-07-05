// SearchBlock2.cpp

#include <iostream>
using namespace std;

int main()
{
	int input = 0;

	cout << "10 이상의 정수를 입력하세요." << endl;

	cin >> input;

	if (input >= 10) {
		cout << input << endl;
	}
	else {
		cout << "잘못 입력하셨습니다." << endl;
	}
}