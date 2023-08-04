//program for quadratic equation solver using switch case statements
#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, root1, root2;
	int D;
	float realPart, imaginaryPart;
	printf("Enter the coefficient of x^2: ");
	scanf("%f",&a);
	printf("Enter the coefficient of x: ");
	scanf("%f",&b);
	printf("Enter the constant term: ");
	scanf("%f",&c);
	D = pow(b,2)-(4*a*c);
	
    switch(D>=0){  
    	case 1: //D>=0
    		if(D==0){
    				root1 = -b/(2*a);
        			printf("The roots of the equation are:\n\n%f , %f",root1, root1);
        	}else{
        		root1 = (-b + sqrt(D))/(2.0*a);
    				root2 = (-b - sqrt(D))/(2.0*a);
    				printf("The roots of the equation are:\n\n%f , %f",root1, root2);
			}break;
        			
		
		case 0: //D<0
			realPart = -b/(2.0*a);
	    	imaginaryPart = sqrt(-D)/(2.0*a);
	    	printf("The roots of the equation are:\n\n%f+%fi , %f-%fi",realPart,imaginaryPart,realPart, imaginaryPart);
			break;
		}
	return 0;
}
