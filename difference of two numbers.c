//program for calculating the difference of two numbers
# include<stdio.h>
int main(){
	
	printf("Hello!, I am here to subtract any two integers of your choice.\n");
	int num1,num2,dif;
	printf("Enter the first number:\n");
	scanf("%d",&num1);
	printf("Enter the second number:\n");
	scanf("%d",&num2);
	dif=num1-num2;
	printf("The difference is : %d",dif);
	return 0;
}
