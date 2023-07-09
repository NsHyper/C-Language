#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;
	int a,fl=0;
	a=0;
	while(fl<2)
	{
	 	ch=getchar();
		if(ch=='*') fl++;
		if(fl==1 && ch!='*') ++a;
	}
	printf("%d xaraktires\n",a);
	
	return 0;
}


