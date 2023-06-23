//program to check if a 5 digit number is palindrome
#include<stdio.h>

int main(){
	int num,a,b,c,d,e,w,x,y,z,numrev;
	printf("Enter the 5 digit number: ");
	scanf("%d",&num);
	a=num%10;
	x=num/10;
	b=x%10;
	y=x/10;
	c=y%10;
	z=y/10;
	d=z%10;
	e=z/10;
	
	
	printf("The reversed number is:\n%d%d%d%d%d\n",a,b,c,d,e);
	numrev=e+d*10+c*100+b*1000+a*10000;
	
	if(num==numrev){
		printf("The number is a palindrome.");
	}
	else{
		printf("The number is not a palindrome.");
	}
	
	return 0;
}
