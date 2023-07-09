#include <stdio.h>
#include <stdlib.h>

double mypow(double x, double y);

int main(void)
{
	double a,b;
	printf("Dose dyo arithmoys:");
	scanf("%lf %lf",&a,&b);
	printf("%f eis tin %f = %f\n",a,b,mypow(a,b));
    
    return 0;
}

double mypow(double x, double y)
{
	if (y==0) 
       return 1;
    else
       return x*mypow(x,y-1);   
}


