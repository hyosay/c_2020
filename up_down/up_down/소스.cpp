#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	printf("����");
	scanf("%d", &a);
	if (a % 3 == 0 and a % 7 == 0)
		printf("3�� 7�� ����");
	else
		printf("3�� 7�� ����x");

}