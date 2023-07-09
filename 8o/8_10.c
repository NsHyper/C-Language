#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,k=4;
	for (i=1;i<=10;i=i+2)
	{
		k++;
		for (j=1;j<5;++j)
			k=k+2;
	}
	printf("k=%d\n",k);
	
	return 0;
}


