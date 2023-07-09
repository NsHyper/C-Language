#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	int a;
	bool fl=false;
	ch=1;
	a=0;
	while (ch!=27)
	{
	 	ch=getch();
		if(ch=='*' ) fl=true;
		if(fl) ++a;
	}
	printf("%d xaraktires\n",a);
	
	return 0;
}


