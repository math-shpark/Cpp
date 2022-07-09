// HelloClass.cpp

#include <iostream>

class User
{
public:
	int age;
	char name[20];

	void print(void) {
		printf("%d %s\n", age, name);
	}
};

int main()
{
	User user = { 23, "홍길동" };

	user.print();
}