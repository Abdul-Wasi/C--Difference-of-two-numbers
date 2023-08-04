//program to perform basic arithmeic functions (Calculator) using switch case statements
#include<stdio.h>
int main(){
	float num1, num2, sum, diff, mult, divi;
	int operation;
	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);	
	printf("Enter 1 for +, 2 for -, 3 for *,4 for / ");
	scanf("%d", &operation);
	sum = num1+num2;
	diff = num1-num2;
	mult = num1*num2;
	divi = num1/num2;
	
	switch(operation){
		case 1:
			printf("The sum is: %f", sum);
			break;
		case 2:
			printf("The difference is: %f", diff);
			break;
		case 3:
			printf("The product is: %f", mult);
			break;
		case 4:
			printf("The quotient is: %f", divi);
			break;
		default:
			printf("Invalid input");	
	}
	
	return 0;
	
}
