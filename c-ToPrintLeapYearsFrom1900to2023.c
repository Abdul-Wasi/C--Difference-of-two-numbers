#include<stdio.h>
int main(){
	int i=1901;
	printf("Leap years between 1900 and 2023 are:\n");
	while(i > 1900 && i < 2023){
		if(((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)){
		printf("%d\n", i);
	}i++;
	}
	return 0;
}
