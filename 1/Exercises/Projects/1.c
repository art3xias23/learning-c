#include <stdio.h>
#define true 1
#define false 0

void printItems(int start, int end);

int main(void){

	printItems(2, 6);
	return 0;
}

void printItems(int start, int end){
	int moved = false;
	int current = 0;

	while(current<  start)
	{
		printf("%*s", current, " ");
		printf("%s", "*");
		start--;
		current++;
	}

	while(current < end){

		printf("%*s", current, " ");
		printf("%s", "*");
		current++;
	}
}
