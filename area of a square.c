//program for calculating the area of a square
# include<stdio.h>
int main(){
	
	printf("Hello!, I will calculate the area of a square.\n");
	int side,area;
	printf("Enter the side:\n");
	scanf("%d",&side);
	area=side*side;
	printf("The area of the square is : %d",area);
	return 0;
}
