#include<stdio.h>
int rest;
int a;
int enter_num;

int decimal_to_binary(enter_num) {
	int rest;
	int result = 0;
	int decimal = 1;
	
	while (1) {

		rest = enter_num % 2;
		enter_num /= 2;
		result += rest * decimal;
		decimal *= 10;
		
		if (enter_num == 0) {
			break;
		}
	}
	return result;
}

int main(void) {
	printf("enter decimal number:");
	scanf_s("%d", &enter_num);
	
	a = decimal_to_binary(enter_num);
	printf("입력한 수의 2진수 변환값은 %d입니다.\n", a);
}