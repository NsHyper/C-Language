#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j=6,k=4;
	i=(k=k+2,j=k*10);
	printf("i=%d j=%d k=%d\n",i,j,k);
	
	return 0;
}


