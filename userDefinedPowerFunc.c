#include<stdio.h>

float power(float,float);
int main(){
	float base, exp, ans;
	printf("Enter the base: ");
	scanf("%f", &base);
	printf("Enter the exponent: ");
	scanf("%f", &exp);
	ans = power(base, exp);
	printf("The answer is %.2f", ans);
	return 0;
}
float power(float a, float b){
	float i = 0;
	float result = 1.0;
	while(i < b){
		result = result*b;
		i++;
	}
	return result;
}
