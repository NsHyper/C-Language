#include <stdio.h>
#include <stdlib.h>

double par(int n);
double all(int k);

int main(void)
{
	printf("%f\n",all(1000));
	
	return 0;
}

double par(int n)
{
	double p;
	if(n==0) return 0;
	p=sqrt(2+par(n-1));
	return p;
}

double all(int k)
{
	double p;
	if(k==0) return 2;
	p=2/par(k)*all(k-1);
	return p;
}


