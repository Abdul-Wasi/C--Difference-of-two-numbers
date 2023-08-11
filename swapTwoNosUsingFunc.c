#include<stdio.h>
void swap(float, float);
int main(){
	float num1, num2;
	printf("Hye! I will swap two numbers of your choice.\n\n");
	printf("Enter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);
	printf("Before swapping: %.2f , %.2f\n\nAfter swapping: ", num1, num2);
	swap(num1, num2);
	return 0;
}
void swap(float a, float b){
	float c;
	c = a;
	a = b;
	b = c;
	printf("%.2f , %.2f", a, b);
}
