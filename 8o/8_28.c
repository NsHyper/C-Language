#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,k;
   	k=10;
	for (i=1;i<=10;i=i+2)
	{
		k=k-3;
		for (j=1;j<=4;++j)
			k=k+j;
	}
	printf("k=%d i=%d j=%d\n",k,i,j);
	
    return 0;
}

