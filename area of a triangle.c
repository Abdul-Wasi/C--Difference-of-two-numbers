//program for calculating the area of a triangle
# include<stdio.h>
int main(){
	
	printf("Hye!, I will calculate the area of a triangle.\n");
	float base,alt,area;
	printf("Enter the base of the triangle:\n");
	scanf("%f",&base);
	printf("Enter the altitude of the triangle:\n");
	scanf("%f",&alt);
	area=0.5*base*alt;
	printf("The area of the triangle is : %f",area);
	return 0;
}
