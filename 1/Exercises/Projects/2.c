#include <stdio.h>

float formula(float radius);

int main(void){
	int num;
	printf("Please input the number: \n");
scanf("%d", &num);
float result = formula(num);
printf("%f", result);
}

float formula(float radius){
	return (float)4/3*3.14*(radius*radius*radius);
}
