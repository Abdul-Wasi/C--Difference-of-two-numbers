#include<stdio.h>
int main(){
	int i=2;
	printf("Even numbers from 1 to 100:\n");
	while(i <= 100){
		printf("%d\n", i);
		i += 2;
	}
	
	printf("\n\n\n");
	
	int j=1;
	printf("Odd numbers from 1 to 100:\n");
	while(j <= 100){
		printf("%d\n", j);
		j += 2;
	}
	return 0;
}
