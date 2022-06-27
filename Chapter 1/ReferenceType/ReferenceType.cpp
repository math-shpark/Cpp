// ReferenceType.cpp

#include <iostream>
using namespace std;

int main()
{
	int newData = 10;

	int& ref = newData; // newData 참조

	ref = 20;
	cout << newData << endl; // 참조자의 값이 변경되면 원본도 변경된다.

	int* newData2 = &newData;
	*newData2 = 30;
	cout << newData;
}