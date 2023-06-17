//program for calculating the division of two numbers
# include<stdio.h>
int main(){
	
	printf("Hello!, I am here to divide any two integers of your choice.\n");
	int num1,num2,div;
	printf("Enter the dividend:\n");
	scanf("%d",&num1);
	printf("Enter the divisor:\n");
	scanf("%d",&num2);
	div=num1/num2;
	printf("The quotient is : %d",div);
	return 0;
}
