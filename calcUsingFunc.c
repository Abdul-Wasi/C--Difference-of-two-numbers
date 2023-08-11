//program to perform basic arithmeic functions (Calculator) using switch case statements
#include<stdio.h>
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);
int main(){
	float num1, num2;
	int operation;
	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);	
	printf("Enter 1 for +, 2 for -, 3 for *, 4 for /, 5 to exit:\n\n");
	scanf("%d", &operation);
	
	switch(operation){
		case 1:
			printf("The sum is: %f", add(num1, num2));
			break;
		case 2:
			printf("The difference is: %f", subtract(num1, num2));
			break;
		case 3:
			printf("The product is: %f", multiply(num1, num2));
			break;
		case 4:
			printf("The quotient is: %f", divide(num1, num2));
			break;
		case 5:
			return 0;
			break;
		default:
			printf("Invalid input");	
	}
	
	return 0;
	
}
float add(float a, float b){
	float sum;
	sum = a+b;
	return sum;
}
float subtract(float a, float b){
	float diff;
	diff = a-b;
	return diff;
}
float multiply(float a, float b){
	float mult;
	mult = a*b;
	return mult;
}
float divide(float a, float b){
	float divi;
	divi = a/b;
	return divi;
}

