#include<stdio.h>
int main(){
	char i = 'A';
	printf("Upper Case Letters:\n");
	while(i <= 'Z'){
		printf("%c\n", i);
		i++;
	}

	
	char j = 'a';
	printf("Lower Case Letters:\n");
	while(j <= 'z'){
		printf("%c\n", j);
		j++;
	}
	return 0;
}
