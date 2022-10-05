#include <stdio.h>

int main(void) {

	int num1;

	while (1) {
		printf("please enter a number.:");
		scanf_s("%d", &num1);
		if (num1 < 10) {
			if (num1 == 2 || num1 == 3 || num1 == 5  || num1 == 7) {
				printf("it's a prime number");
				break;
			}
			else {
				printf("it's not a prime number");
				break;
			}
		}
		if (num1 >= 10) {
			if (num1 % 2 == 0 || num1 % 3 == 0 || num1 % 5 == 0 || num1 % 7 == 0) {
				printf("it's not a prime number");
				break;
			}
			else {
				printf("it's a prime number");
				break;
			}
		}
	}


}