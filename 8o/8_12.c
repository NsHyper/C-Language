#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	do
	{
	 	a=rand();
		if(a>=100) continue;
		printf("%d\n",a);
	} while(a!=0);
	
	return 0;
}


