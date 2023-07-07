#include<stdio.h>
int main(){
	int num;
	int flag=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	int i = 2;
	while(i < num){
		if((num % i) == 0){
		flag = 1;
		break;
		}
		i++;
	 }
	 if(flag == 1){
	 	printf("%d is not a prime number", num);
	 }
	 else{
	 	printf("%d is a prime number", num);
	 }
	 return 0;
	}
		
		
		
		
