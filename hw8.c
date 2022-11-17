#include <stdio.h>
#include<math.h>

float arr[5];
float SD;
float* ptr_arr = &arr;
float num1, num2, num3, num4, num5 , SD , Mean;

float sd(float *ptr_arr) {
	float n1 = *ptr_arr;
	float n2 = *(ptr_arr + 1);
	float n3 = *(ptr_arr + 2);
	float n4 = *(ptr_arr + 3);
	float n5 = *(ptr_arr + 4);
	float mean = (n1 + n2 + n3 + n4 + n5) / 5.0;

	float pow_n1 = pow((n1 - mean), 2);
	float pow_n2 = pow((n2 - mean), 2);
	float pow_n3 = pow((n3 - mean), 2);
	float pow_n4 = pow((n4 - mean), 2);
	float pow_n5 = pow((n5 - mean), 2);
	
	float temp = pow_n1 + pow_n2 + pow_n3 + pow_n4 + pow_n5;

	float sd = sqrt((temp / 5));
	
	return sd;
}

int main(void) {

	printf("Enter 5 real numbers.:");
	scanf_s("%f %f %f %f %f", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Standard Deviation = %.3f", sd(ptr_arr));

	return 0;
}



