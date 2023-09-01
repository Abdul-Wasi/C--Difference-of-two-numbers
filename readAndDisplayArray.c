#include<stdio.h>
int main(){
    float arr[10];
    int i = 0;
    
    for(i = 0; i<10; i++){
        printf("Please enter the floating point number one by one: ");
        scanf("%f", &arr[i]);
    }
	
	printf("The numbers are:\n");
	
    for(i = 0; i<10; i++){
        printf("%.2f\t", arr[i]);
    }

    return 0;
}
