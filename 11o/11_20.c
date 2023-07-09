#include <stdio.h> 
#include <stdlib.h>

void do_it(const char *p);

int main(void)
{
	char *p;
	p="H glossa C se bathos";
	do_it(p);
    return 0;
}

void do_it(const char *p)
{
	int c=0,r,i;
	char *start;
	start=p;
    while(*(p++) != '\0') c++;
	for (i=1;i<=100;i++)
	{
		r=rand()%c;
		if (*(start+r)!=' ') putchar(*(start+r));
	}
	putchar('\n');
}

