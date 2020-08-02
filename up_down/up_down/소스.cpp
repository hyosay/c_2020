#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	printf("정수");
	scanf("%d", &a);
	if (a % 3 == 0 and a % 7 == 0)
		printf("3과 7의 정수");
	else
		printf("3과 7의 정수x");

}