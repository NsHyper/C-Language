#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main(void)
{
	double a,b,x;
	printf("Dose timi gia to A :");
	scanf("%lf",&a);
	printf("Dose timi gia to B :");
	scanf("%lf",&b);
	x=(a/(a+b))*(b/(a-b))+pow(a,a+b)/pow(b,a-b);
	printf("To apotelesma tis parastasis einai: %f\n",x);
	
	return 0;
}


