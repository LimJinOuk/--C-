#include <stdio.h>

int main(void) {
	int num1, num2, num_of_AND, num_of_OR, num_of_XOR;
	printf("�ΰ��� ������ �Է�:");
	scanf_s("%d %d", &num1, &num2);
	num_of_AND = num1 & num2;
	num_of_OR = num1 | num2;
	num_of_XOR = num1 ^ num2;
	printf("�� ���� AND�����ڸ� ���� ���갪�� %d�Դϴ�.\n", num_of_AND);
	printf("�� ���� OR�����ڸ� ���� ���갪�� %d�Դϴ�.\n", num_of_OR);
	printf("�� ���� XOR�����ڸ� ���� ���갪�� %d�Դϴ�.\n", num_of_XOR);
	return 0;
}