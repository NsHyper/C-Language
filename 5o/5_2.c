#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;
	ch=getchar();
	if ((ch>='a' && ch<='z') || (ch>='Á' && ch<='Æ'))
		putchar(ch+1);
	if (ch>='0' && ch<='9')
		putchar(ch);

    return 0;
}
