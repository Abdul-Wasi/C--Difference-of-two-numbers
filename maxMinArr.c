#include<stdio.h>
int main(){
    float arr[5];
    int i = 0;
    
	for(i = 0; i<5; i++){
        printf("Please enter the floating point number one by one: ");
        scanf("%f", &arr[i]);
    }
	
	float min = arr[0];
    
	for(i = 0; i<5; i++){
        if(min > arr[i]){
        	min = arr[i];
        }
    }
	printf("The smallest element is:\n%f\n", min);
	
	float max = arr[0];
	
	for(i = 0; i<5; i++){
        if(max < arr[i]){
        	max = arr[i];
        }
    }
	printf("The greatest element is:\n%f", max);
	return 0;
}
