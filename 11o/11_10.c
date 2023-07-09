#include <stdio.h> 
#include <stdlib.h>

int space(char *p);

int main(void)
{
	char *p;
	p="H glossa C se bathos";
	printf("%d\n",space(p));
    
    return 0;
}

int space(char *p)
{
	int c=0;
    while(*p != '\0')
	{
		if(*p == ' ') c++;
		p++;
	}
	return c;
}

