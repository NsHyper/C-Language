#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	char ch;
	ch=getchar();
	if((ch>='A') && (ch<='Z'))
		++ch;
	else
		--ch;
	putchar(ch);
	
	return 0;
}


