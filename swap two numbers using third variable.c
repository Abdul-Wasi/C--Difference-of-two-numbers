//program to swap two numbers by using third variable
#include <stdio.h>

int main(){
	int a,b,c;
	printf("Hello, I will swap two numbers:\n");
	printf("Enter first number:\n");
	scanf("%d",&a);
	printf("Enter second number: \n");
	scanf("%d",&b);
	printf("The two numbers are:\nBefore swapping: a = %d , b = %d\n", a, b);
	c=a;
	a=b;
	b=c;
	printf("After swapping: a = %d , b = %d", a, b );
	return 0;
}
