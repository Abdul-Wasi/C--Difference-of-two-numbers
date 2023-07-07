#include<stdio.h>
int main(){
	int num;
	int mul;
	int prod = 1;
	printf("Enter the number whose table you want to generate: ");
	scanf("%d", &num);
	printf("Enter the largest multiplier: ");
	scanf("%d", &mul);
	int i = 1;
	while(i <= mul){
		prod  = num* i;
		printf("%d * %d = %d\n", num, i, prod);
		i++;
	}
	return 0;
}
