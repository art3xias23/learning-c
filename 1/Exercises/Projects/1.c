#include <stdio.h>
#define true 1
#define false 0

void printItems(int start, int end);

int main(void) {
    printItems(2, 6);
    return 0;
}

void printItems(int start, int end) {
	printf("%*s", 7, " ");
	printf("*");
	printf("\n");

	printf("%*s", 6, " ");
	printf("*");
	printf("\n");

	printf("%*s", 5, " ");
	printf("*");
	printf("\n");

	printf("*");
	printf("%*s", 3, " ");
	printf("*");
	printf("\n");

	printf(" ");
	printf("*");
	printf(" ");
	printf("*");
	printf(" ");
	printf("\n");

	printf("%*s", 2, " ");
	printf("*");
	printf("\n");
}
