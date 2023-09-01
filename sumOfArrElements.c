#include<stdio.h>
int main(){
    float arr[10],sum = 0;
    int i = 0;
    
	for(i = 0; i<10; i++){
        printf("Please enter the floating point number one by one: ");
        scanf("%f", &arr[i]);
    }
	
	
    for(i = 0; i<10; i++){
        sum =sum + arr[i];
    }
	printf("The sum is: %f", sum);
	return 0;
}
