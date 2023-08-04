#include<stdio.h>
int main(){
	int num1, num2;
	printf("Hye, I will compare two numbers\n\n");
	printf("Please enter the first number: ");
	scanf("%d", &num1);
	printf("Please enter the second number: ");
	scanf("%d", &num2);
	
	switch(num1 > num2){
		case 0:
			switch(num1 < num2){
				case 1:
					printf("%d is smaller than %d", num1, num2);
					break;
				case 0:
					printf("Enter distinct numbers");
					break;	
					}break;
		case 1:
			printf("%d is greater than %d", num1, num2);
			break;
	}
	return 0;
}
