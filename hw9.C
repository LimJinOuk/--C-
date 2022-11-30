#include<stdio.h>
#include<string.h>

int main(void) {
	char* str[100];
	char* newStr[100];	

	printf("Input>");
	fgets(str, sizeof(str), stdin);
	int length = strlen(str);

	for (int i = 0 , temp = 0; i < length - 1; i++) {

		temp = str[i];
		printf("%c\n", temp);

		if (65 <= temp && temp <= 90) {
			temp += 32;
			newStr[i] = temp;
		}
		else if (97 <= temp && temp <= 122) {
			temp -= 32;
			newStr[i] = temp;
		}
		else {
			newStr[i] = temp;
		}
	}
	printf("Output>");
	printf("%s" , newStr);
}
