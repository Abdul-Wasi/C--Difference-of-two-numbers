#include<stdio.h>
int main(){
	int r, s, a;
	printf("Enter the age of Ram: ");
	scanf("%d", &r);
	printf("Enter the age of Shyam: ");
	scanf("%d", &s);
	printf("Enter the age of Ajay: ");
	scanf("%d", &a);
	if(r < s && r < a){
		printf("Ram is the youngest");
	} else if(s < r && s < a){
		printf("Shyam is the youngest");
	} else if(a < s && a < r){
		printf("Ajay is the youngest");
	} else if((r == s && r == a) || (s == r && s == a) || (a == r && a == s)){
		printf("Enter distinct ages");
	}
	return 0;
}
