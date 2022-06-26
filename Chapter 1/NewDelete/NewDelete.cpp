// NewDelete.cpp

#include <iostream>

int main()
{
	int* data = new int; // 인스턴스 동적 생성
	int* data2 = new int(10); // 인스턴스 동적 생성 및 초기화

	*data = 5;

	std::cout << *data << std::endl;
	std::cout << *data2 << std::endl;

	delete data;
	delete data2;
}