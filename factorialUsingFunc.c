#include<stdio.h>
int factorial(int);
int main(){
	int num;
	printf("Hye! I will calculate factorial of a number.\n\n");
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num < 0){
		printf("Factorial is not defined for negative numbers");
	}
	else{
		printf("Factorial of %d is: %d", num, factorial(num));
	}
	return 0;
}
int factorial(int n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
