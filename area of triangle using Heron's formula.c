//program to calculate the area of triangle by herons formula 
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,s,area;
	printf("Enter the sides of the triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle is:\n%d",area);
	return 0;
}

