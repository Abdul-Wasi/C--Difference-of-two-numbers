//program for calculating the sum of two numbers
# include<stdio.h>
int main(){
	
	printf("Hello!, I am here to add any two integers of your choice.\n");
	int num1,num2,sum;
	printf("Enter the first number:\n");
	scanf("%d",&num1);
	printf("Enter the second number:\n");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("The sum is : %d",sum);
	return 0;
}