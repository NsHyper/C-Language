#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	char *p,*m;
	p="arnaki aspro kai paxi";
	m=p;
	while(*p!='\0') p++;
	--p;
	while(p>=m) putchar(*(p--));
    
    return 0;
}


