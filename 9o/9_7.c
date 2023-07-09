#include <stdlib.h>
#include <stdio.h>

double calc(int ar);

int main(void)
{
	double p;
	p=calc(1000)*2;
	printf("pi=%f\n",p);
	
	return 0;
}

double calc(int ar)
{
	int i;
	double p1;
	p1=1.0;
	for(i=2;i<=ar;i=i+2)
		p1=p1*pow(i,2)/((i-1)*(i+1));
	return p1;
}




