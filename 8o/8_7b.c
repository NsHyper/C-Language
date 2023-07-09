#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,i=0;
	for (a=32;a<=255;++a)
	{
		putchar(a);
		i++;
		if((i%30 ==0)) putchar('\n');
	}
	
	return 0;
}


