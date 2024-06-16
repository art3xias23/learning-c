#include <stdio.h>

float formula(float radius);

int main(void){
float result = formula(10);
printf("%f", result);
}

float formula(float radius){
	return (float)4/3*3.14*(radius*radius*radius);
}
