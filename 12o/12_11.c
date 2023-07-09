#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[10],i,*p;
	for (i=0;i<10;i++)
		*(a+i)=i;
	p=a+9;
	while (p>=a)
		printf("%d\n",*(p--));
	 
    return 0;
}
