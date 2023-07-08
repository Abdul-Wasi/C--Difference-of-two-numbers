//program to calculate factrorial of a number
#include<stdio.h>
int main(){
	int num;
	int factorial = 1;
	int i = 1;
	printf("Enter the number whose factorial you want to calculate: ");
	scanf("%d", &num);
	while(i <= num){
		factorial *= i;
		i++;
	}
	printf("The factorial of %d is: %d", num, factorial);
}