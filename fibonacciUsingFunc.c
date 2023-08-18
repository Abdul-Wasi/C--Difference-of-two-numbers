#include<stdio.h>
int printFibonacci(int);

int main(){
	int num;
	printf("I will display fibonacci series upto a given number of terms!\n");
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num <= 0){
		printf("Enter a positive integer");
	}
	else{
		printf("The fibonacci series is: ", num);
		printFibonacci(num);
	}
	return 0;
}

int printFibonacci(int num){
	int a = 0, b = 1, c;
	printf("%d %d ", a, b);
	int i;
	for(i = 3; i <= num; i++){
		c = a + b;
		printf("%d", c);
		
		a = b;
		b = c;
		printf(" ");
	}
	
}
