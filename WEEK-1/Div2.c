#include <stdio.h>
int main(){
	int a,b;
	a = 10;
	b = 3;
	float c = a/b;
	printf("DIV = %f\n", c);
	
	return 0;
}
//You will get  answer as 3, Yeah c is float but first a/b is evaluated --> 3 and 3 is stored in c

