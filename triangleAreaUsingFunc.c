#include<stdio.h>
float area(float,float);
int main(){
	float b, h;
	printf("Hye! I will calculate the area of a right angled triangle.\n\n");
	printf("Enter the base of the triangle: ");
	scanf("%f", &b);
	printf("Enter the height of the triangle: ");
	scanf("%f", &h);
	printf("Area of the triangle is: %.2f", area(b,h));
	return 0;
}
float area(float b, float h){
	return 0.5*b*h;
}
