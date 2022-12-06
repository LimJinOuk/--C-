#include <stdio.h>
#include <string.h>

typedef struct city {
	char name[50];
	char country[50];
	int population;
}City;

int main(void) {
	City city[3];

	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++) {
		printf("Name>");
		fgets(city[i].name , strlen(city[i].name) - 1, stdin);
		city[i].name[strlen(city[i].name) - 1] = '\0';

		printf("Country>");
		fgets(city[i].country , strlen(city[i].country) - 1, stdin);
		city[i].country[strlen(city[i].country) - 1] = '\0';

		printf("Population>");
		scanf_s("%d", &city[i].population, sizeof(city[i].population));
		while (getchar() != '\n');

	}

	printf("Printing the three cities:\n");

	for (int p = 0; p < 3; p++) {
		printf("%d. %s in %s with a population of %d people.\n", p , city[p].name, city[p].country, city[p].population);
	}

	return 0;
}