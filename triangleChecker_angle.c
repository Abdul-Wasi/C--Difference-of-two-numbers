#include<Stdio.h>
int main(){
	float a, b, c;
	printf("Enter angle a (in degrees): ");
	scanf("%f", &a);
	printf("Enter angle b (in degrees): ");
	scanf("%f", &b);
	printf("Enter angle c (in degrees): ");
	scanf("%f", &c);
	if(( a + b + c )== 180){
		printf("This is a valid triangle.");
	}
	else{
		printf("This is an invalid triangle.");
	}
	return 0;
}
