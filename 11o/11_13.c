#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=5,b=10,*p1,**p2;
	p1=&a;
	p2=&p1;
	**p2=50;
	p1=&b;
	**p2=*p1+20;
	printf("a=%d b=%d\n",a,b);
	
	return 0;
}




