/*Write a program to find volume of sphere forr given radius */
#include <stdio.h>
#define pi 3.14
void main(){
	float r;
	printf("Enter radius : ");
	scanf("%f",&r);
	
	float v=(4.0/3)* pi * r *r *r;
	printf("Volume of Sphere : %f", v);
}
