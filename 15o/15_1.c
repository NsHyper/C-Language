#include <stdio.h>
#include <stdlib.h>

float par(int n);

int main(void)
{
	printf("Apotelesma seiras gia n=10 -> %f\n",par(10));
    
    return 0;
}

float par(int n)
{
	float p;
	if (n==1) return 1.0;
	p=1.0/n+par(n-1);
	return p;
}

