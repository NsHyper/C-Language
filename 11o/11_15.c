#include <stdio.h>
int main(void)
{
	char *p1,**p2;
	p1="arnaki aspro kai paxy";
	p2=&p1;
	while (**p2!='\0')
	{
		putchar(**p2);
		(*p2)++;
	};
	return 0;
}

