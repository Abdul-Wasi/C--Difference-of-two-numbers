#include<stdio.h>
int main(){
	int sum1 = 0; 
	int i=0;
	printf("Whole numbers upto 100:\n");
	while(i <= 100){
		sum1 = sum1 + i;
		i++;	
	}
	printf("%d\n", sum1);
	
	printf("\n\n\n");
	
	int sum2 = 0;
	int j=1;
	printf("Natural numbers upto 100:\n");
	while(j <= 100){
		sum2 = sum2 + j;
		j++;	
	}
	printf("%d\n", sum2);
	return 0;
	
}
