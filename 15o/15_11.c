#include <stdio.h>
#include <stdlib.h>

double mo(double x, double y)
{
	return (x+y)/2;
}

double max(double x, double y)
{
	if (x>y) return x; else return y;
}

double min(double x, double y)
{
	if (x>y) return y; else return x;
}

int main(void)
{
	double (*ptr[3]) (double x, double y);
	int i;
	ptr[0]=&mo;
	ptr[1]=&max; 
	ptr[2]=&min; 
	for (i=0;i<3;i++) printf("%f\n",ptr[i](10,23));
	
	return 0;
}


