#include <stdio.h>

int main(void) {
	int num1, num2, num_of_AND, num_of_OR, num_of_XOR;
	printf("두개의 정수를 입력:");
	scanf_s("%d %d", &num1, &num2);
	num_of_AND = num1 & num2;
	num_of_OR = num1 | num2;
	num_of_XOR = num1 ^ num2;
	printf("두 수의 AND연산자를 통한 연산값은 %d입니다.\n", num_of_AND);
	printf("두 수의 OR연산자를 통한 연산값은 %d입니다.\n", num_of_OR);
	printf("두 수의 XOR연산자를 통한 연산값은 %d입니다.\n", num_of_XOR);
	return 0;
}