// program to give the location of a point on the cartesian plane
#include<stdio.h>
int main(){
	float x, y;
	printf("Enter the x and y coordinates of the point: ");
	scanf("%f%f", &x,&y);
	if(x==0 && y==0){
		printf("The point (%f, %f) is on the origin", x,y);
	}
	else if(x==0){
		printf("The point (%f, %f) is on the y-axis", x,y);
	}
	else if(y==0){
		printf("The point (%f, %f) is on the x-axis", x,y);
	}
	else if (x > 0 && y > 0){
		printf("The point (%f, %f) is in quadrant I", x,y);		
	}
	else if (x < 0 && y > 0){
		printf("The point (%f, %f) is in quadrant II", x,y);
	}
	else if (x < 0 && y < 0){
		printf("The point (%f, %f) is in quadrant III", x,y);
	}
	else if (x > 0 && y < 0){
		printf("The point (%f, %f) is in quadrant IV", x,y);
	}
	
	return 0;
}
