#include<stdio.h>
double factorial(int);

int main(){
	int num;
	printf("I will calculate the factorial of a number !\n");
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num < 0){
		printf("Factorial is not defined for a negative number");
	}
	else{
		printf("The factorial of %d is: %.2f", num, factorial(num));
	}
	return 0;
}

double factorial(int n){
	if(n==0 || n==1){
		return 1;
	}	
	else
	return n*factorial(n-1);
	
	
}
