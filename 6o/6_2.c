#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
#define pi 3.141592653589793

int main(void)
{
	double r,e;
	printf("Dose aktina:");
	scanf("%lf",&r);
	e=pow(r,2)*pi;
	printf("Emvadon kykloy aktinas %f einai %f\n",r,e);
	
	return 0;
}


