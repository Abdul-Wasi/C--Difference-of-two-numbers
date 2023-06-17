//program to calculate the sum of digits of a 3 digit number.
#include<stdio.h>
int main()
{
	int num,a,b,c,x,y,sum;
	printf("Enter a number: ");
	scanf("%d",&num);
	a=num%10;
	x=num/10;
	b=x%10;
	y=x/10;
	c=y;
	sum=a+b+c;
	printf("The sum is: %d",sum);
	return 0;
	
	
	
}
