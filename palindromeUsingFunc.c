#include<stdio.h>
void checkPalindrome(int);

int main(){
	int num;
	printf("I will check if a number is a palindrome or not!\n");
	printf("Enter a number: ");
	scanf("%d", &num);
	checkPalindrome(num);
	return 0;
}

void checkPalindrome(int num){
	int originalnum = num;
	int numrev = 0;
	int rem;
	while(num > 0){
		rem = num % 10;
		numrev = numrev *10 + rem;
		num /= 10;
	}

	if(numrev == originalnum){
		printf("The number is a palindrome.");
	}
	else{
		printf("The number is not a palindrome.");
	}	
	return 0;
}
