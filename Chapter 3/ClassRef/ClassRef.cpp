// ClassRef.cpp

#include <iostream>
using namespace std;

class RefTest {
public:
	// 참조형 멤버는 생성자 초기화 목록으로 초기화
	RefTest(int& rParam) : newData(rParam) {};
	int getData(void) {
		return newData;
	}
private:
	int& newData; // 참조형 변수는 객체 생성 시 초기화해야 함
};

int main()
{
	int num = 15;

	RefTest test(num);

	cout << test.getData() << endl;

	num = 20;
	cout << test.getData() << endl;
}