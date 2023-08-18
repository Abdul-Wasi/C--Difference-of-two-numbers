#include<stdio.h>
float ctf(float);
float ftc(float);

int main(){
	int choice;
	printf("Enter 1 to convert Celsius to Fahrenheit or\n");
	printf("Enter 2 to convert Fahrenheit to Celsius: \n");
	scanf("%d", &choice);
	if(choice == 1){
		float celsius;
		printf("Enter the temperature in Celsius: ");
		scanf("%f",&celsius);
		printf("%f degree Celsius is equal to: %f degree Fahrenheit", celsius, ctf(celsius));
		
	}
	else if(choice == 2){
		float fahrenheit;
		printf("Enter the temperature in Fahrenheit: ");
		scanf("%f", &fahrenheit);
		printf("%f degree Fahrenheit is equal to: %f degree Celsius", fahrenheit, ftc(fahrenheit));
	}
	else{
		printf("Invalid input");
	}
	return 0;
}

float ctf(float c){
	return c*1.8+32;
}
float ftc(float f){
	return (f-32)*(5.0/9.0);
}
