#include<stdio.h>
int main(){
	int num;
	printf("Hye, I will tell if a number is positive negative or zero\n\n");
	printf("Please enter the number: ");
	scanf("%d", &num);
	
	
	switch(num > 0){
		case 1:
			printf("%d is positive", num);
			break;
		case 0:
			switch(num < 0){
				case 1:
					printf("%d is negative", num);
					break;
				case 0:
					printf("Zero");
					break;		
			}
	}
	return 0;
}
