#include<stdio.h>
void checkPalindrome(int);

int main(){
	int num;
	printf("I will print reverse of a number!\n");
	printf("Enter a number: ");
	scanf("%d", &num);
	printReverse(num);
	return 0;
}

void printReverse(int num){
	int originalnum = num;
	int numrev = 0;
	int rem;
	while(num > 0){
		rem = num % 10;
		numrev = numrev *10 + rem;
		num /= 10;
	}
	printf("The reverse of %d is: %d", originalnum, numrev);	
	return 0;
}
