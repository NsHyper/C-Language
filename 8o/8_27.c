#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=2,b=10,c;
	c=(b>a)+2;
	a=++b,b+c;
	for (a=c;a<10;a=a+3);
	printf("%d %d %d\n",a,b,c);
	
    return 0;
}

