#include<stdio.h>

int main(void) {
	int arr01[6] = { 1,2,3,4,5,6 };
	int arr02[6] = { 7,8,9,10,11,12 };
	int* ptr01 = arr01;
	int* ptr02 = arr02;
	int* temp;
	int i;
	int k;
	printf("arr1 : ");
	for (i = 0; i < sizeof(arr01) / sizeof(int); i++) {
		printf("%d ", arr01[i]);
	}
	printf("\n");
	printf("arr2: ");
	for (k = 0; k < sizeof(arr02) / sizeof(int); k++) {
		printf("%d ", arr02[k]);
	}
	temp = ptr01;
	ptr01 = ptr02;
	ptr02 = temp;
	printf("\n\nafter swap\n");
	printf("arr1 : ");
	for (i = 0; i < sizeof(arr01) / sizeof(int); i ++) {
		printf("%d ", ptr01[i]);
	}
	printf("\n");
	printf("arr2: ");
	for (k = 0; k < sizeof(arr02) / sizeof(int); k++) {
		printf("%d ", ptr02[k]);
	}

}