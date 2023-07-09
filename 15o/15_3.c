#include <stdio.h>
#include <stdlib.h>

int par(int n);

int main(void)
{
	int ar;
	printf("Dose enan arithmo:");
	scanf("%d",&ar);
    printf("Apotelesma seiras gia n=%d einai %d\n",ar,par(ar));
    
    return 0;
}


int par(int n)
{
	int p;
	if (n==0) return 0;
	p=n+par(n/2);
	return p;
}
