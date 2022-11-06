#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int number[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("Please enter five integers:");
		scanf("%d", &number[i]);
	}

	printf("the even nubers are:");
	for (i = 0; i < 5; i++) {
		if (number[i] % 2 == 0) {
			printf("%d ", number[i]);
		}
	}

	printf("the odd nubers are:");
	for (i = 0; i < 5; i++) {

		if (number[i] % 2 == 1) {
			printf("%d ", number[i]);
		}

	}
}