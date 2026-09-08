#define pi 3.14
#include <stdio.h>

void main(){
	int r;
	printf("Enter radius : ");
	scanf("%d",&r);
	float ar = pi * r * r;
	printf("Area of Circle is : %.2f \n",ar);
}
