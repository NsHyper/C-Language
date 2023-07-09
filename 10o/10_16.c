#include <stdio.h> 
#include <stdlib.h> 
void out();

int main()
{
	int i;
	for (i=1;i<=15;i++)
	   out();
	 
	return 0;
}

void out()
{
	static char ch;
	ch='A';
	printf("%c\n",ch);
	ch++;
	if (ch>'E') ch='A';
}
