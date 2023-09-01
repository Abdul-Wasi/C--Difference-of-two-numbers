#include<stdio.h>
int main(){
    int arr[5];
    int key, found, i = 0;
    
	for(i = 0; i<5; i++){
        printf("Please enter the numbers one by one: ");
        scanf("%d", &arr[i]);
    }
	
	printf("Enter which number you want to search: ");
    scanf("%d", &key);
	
	for(i = 0; i<5; i++){
        if(arr[i] == key){
        	found = 1;
        	printf("%d is found at index %d", key, i);
        	break;
        	
        }
   	}
    if(!found){
    	printf("%d is not found.", key);
    }
	return 0;
}
