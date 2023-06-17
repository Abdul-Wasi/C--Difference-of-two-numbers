//program to calculate income tax
#include<stdio.h>
int main(){
	float income,tax;
	printf("Please enter your income: ");
	scanf("%f", &income);
	if (income < 150000){
		printf("You are exempted from paying tax");
	}
	else if(income >150000 && income <= 300000){
		tax = (income-150000)*0.1;
		printf("Your tax is: %f", tax);
	}
	else if(income >300000 && income <= 500000){
		tax = (income-300000)*0.2 + 15000;
		printf("Your tax is: %f", tax);
	}
	else if(income >500000){
		tax = (income-500000)*0.3 + 55000;
		printf("Your tax is: %f", tax);
	}
	printf("\nThank You!");
	return 0;
}
