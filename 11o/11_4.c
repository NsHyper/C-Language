#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	char *p;
	p="arnaki aspro kai paxi";
	while(*p!='\0')
	{
		if(*p==' ')
			putchar('\n');
		else
			putchar(*p);
		p++;
	}
    
    return 0;
}


