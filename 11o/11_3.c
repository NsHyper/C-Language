#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	char *p,ch;
	int ar=0;
	p="arnaki aspro kai paxi";
	ch=getchar();
	while(*p!='\0')
	{
		if(*p==ch) ar++;
		p++;
	}

	printf("To gramma %c yparxei %d fores\n",ch,ar);
    
    return 0;
}


