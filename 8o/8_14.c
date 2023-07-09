#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	for (i=1;i<=100;i++)
	{
		printf("%d ",i);
		if(i%10 == 0) putchar('\n');
	}
	
	return 0;
}


