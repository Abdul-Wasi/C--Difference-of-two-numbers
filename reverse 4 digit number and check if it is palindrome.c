//program to reverse a 4 digit no. and check if its a palindrome
#include<stdio.h>

int main(){
	int num,a,b,c,d,x,y,numrev;
	printf("Enter the 4 digit number: ");
	scanf("%d",&num);
	a=num%10;
	x=num/10;
	b=x%10;
	y=x/10;
	c=y%10;
	d=y/10;
	printf("The reversed number is:\n%d%d%d%d\n",a,b,c,d);
	numrev=d+c*10+b*100+a*1000;
	
	if(num==numrev){
		printf("The number is a palindrome.");
	}
	else{
		printf("The number is not a palindrome.");
	}
	
	return 0;
}
