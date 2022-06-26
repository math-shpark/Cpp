// NewDeleteArray.cpp 

#include <iostream>
using namespace std;

int main()
{
	int* arr = new int[5]; // 배열 형태로 동적 생성

	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	delete[] arr;
}