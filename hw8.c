#include <stdio.h>
#include<math.h>

int arr[5];
int SD;
int* ptr_arr;
int i;
int num1, num2, num3, num4, num5 , SD , Mean;
int main(void) {
	ptr_arr = &arr;
	/*
	for (i = 0; i < 5; i++) {
		printf("Enter 5 real numbers.:");
		scanf_s("%d", &arr[i]);
	}
	*/

	/*
	printf("Enter 5 real numbers.:");
	scanf_s("%s", arr, sizeof(arr));
	*/

	printf("%s\n", arr);

	num1 = arr[0];
	num2 = arr[1];
	num3 = arr[2];
	num4 = arr[3];
	num5 = arr[4];

	printf("%d\n%d\n%d\n%d%\n%d\n", num1, num2, num3, num4, num5);
	printf("%d", ptr_arr);
}