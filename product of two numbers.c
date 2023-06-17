//program for calculating the product of two numbers
# include<stdio.h>
int main(){
	
	printf("Hello!, I am here to multiply any two integers of your choice.\n");
	int num1,num2,prod;
	printf("Enter the first number:\n");
	scanf("%d",&num1);
	printf("Enter the second number:\n");
	scanf("%d",&num2);
	prod=num1*num2;
	printf("The difference is : %d",prod);
	return 0;
}
