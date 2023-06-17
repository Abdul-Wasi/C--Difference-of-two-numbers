//program to calculate percentage of marks of a student in 5 subjects

#include<stdio.h>
int main(){
	float a, b, c, d, e, marks_obt, percentage;
	printf("Hye!\n");
	printf("I will calculate your percentage of marks in 5 subjects.\n");
	printf("Enter the marks scored in English:\n");
	scanf("%f",&a);
	printf("Enter the marks scored in Mathematics:\n");
	scanf("%f",&b);
	printf("Enter the marks scored in Physics:\n");
	scanf("%f",&c);
	printf("Enter the marks scored in Chemistry:\n");
	scanf("%f",&d);
	printf("Enter the marks scored in Computer Science:\n");
	scanf("%f",&e);
	marks_obt=a+b+c+d+e;
	percentage=(marks_obt/500.0)*100.0;
	printf("Your percentage of marks is:\n %f",percentage);
	
	return 0;
	
}
