#include<stdio.h>
int main(){
	int month, days;
	printf("Enter the month number (1-12): ");
	scanf("%d", &month);
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		
		case 2:
			days = 28; //assuming the year is not a leap year
			break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
			
		default:
			printf("Invalid month number. Please enter a number between 1 and 12.\n");
			return 0;
		
	}
	printf("The number of days in the month %d are: %d", month, days);
	return 0;
		
}
