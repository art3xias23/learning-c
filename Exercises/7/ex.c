#include <stdio.h>

void ex3(){
	char c = 'a';
	int result = 2 * c-1;
	printf("%d\n", result);
}

void ex4(){
	char c = 'a';
	putchar(c);
	printf(c);
}

int main(void){
	ex4();
	return 0;
}

void ex1(){
	int number = 77;
	int octal = 077;

	printf("Number is %d\n", number);
	printf("Octal is %d\n", octal);
}

void ex2(){
	char c = 'a';
	int i = 1;
	printf("%d\n", i);
	i+=c;
	printf("%d\n", i);
}

