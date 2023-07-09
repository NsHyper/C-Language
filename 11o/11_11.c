#include <stdio.h> 
#include <stdlib.h>

int digits(char *p);

int main(void)
{
	char *p;
	p="H gloss123a C se bath67os";
	printf("%d\n",digits(p));
    
    return 0;
}

int digits(char *p)
{
	int c=0;
    while(*p != '\0')
	{
		if(*p >='0' && *p<='9') putchar(*p);
		p++;
	}
	return c;
}

