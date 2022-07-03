// Inline.cpp

#include <iostream>
#include <cstdio>

#define ADD(a, b)(a+b)

int Add(int a, int b) {
	return a + b;
}

inline int Add2(int a, int b) {
	return a + b;
}

int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);

	printf("ADD : %d\n", ADD(a, b));
	printf("Add : %d\n", Add(a, b));
	printf("Add2 : %d", Add2(a, b));
}