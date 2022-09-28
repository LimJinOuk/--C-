#include<stdio.h>

int main(void) {
	double kilo;
	double miles;

	printf("Please eneter kilometers:");
	scanf_s("%lf", &kilo);
	miles = kilo / 1.609;
	printf("%.1fkm is equal to %.1fmiles", kilo, miles);
	return 0;
}