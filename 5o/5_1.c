#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;
	ch=getchar();
	if ((ch>='a' && ch<='z') || (ch>='á' && ch<='ù'))
		putchar(ch);
	if (ch>='0' && ch<='9')
		printf("Patithike ena psifio\n");

    return 0;
}
