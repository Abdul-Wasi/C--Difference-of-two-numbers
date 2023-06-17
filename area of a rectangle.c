//program for calculating the area of a rectangle
# include<stdio.h>
int main(){
	
	printf("Hello!, I will calculate the area of a rectangle.\n");
	int length,breadth,area;
	printf("Enter the length:\n");
	scanf("%d",&length);
	printf("Enter the width:\n");
	scanf("%d",&breadth);
	area=length*breadth;
	printf("The area of the rectangle is : %d",area);
	return 0;
}
