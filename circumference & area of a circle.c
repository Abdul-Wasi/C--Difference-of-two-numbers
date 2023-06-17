//program for calculating the area of a circle
# include<stdio.h>
int main(){
	
	printf("Hello!, I will calculate the circumference and area of a circle.\n");
	float radius, circum, area;
	float pi = 3.14;
	printf("Enter the radius of the circle:\n");
	scanf("%f",&radius);
	circum = 2*pi*radius;
	area = (radius*radius)*pi;
	printf("The circumference of the circle is : %f\n",circum);
	printf("The area of the circle is : %f",area);
	return 0;
}
