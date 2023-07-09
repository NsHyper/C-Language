#include <stdio.h> 
#include <stdlib.h> 

void out();
int main(void)
{
	int i;
	for (i=1;i<=15;i++) out();
	return 0;
}

void out()
{
	static char ch='A';
	printf("%c\n",ch++);
	if (ch>'E') ch='A';
}
