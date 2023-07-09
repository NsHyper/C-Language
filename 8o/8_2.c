#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char ch;
	int lt=0;
	do
	{
	 	ch=getchar();
		if((ch>='A' && ch<='Z'))
			++lt;
	} while(ch!='*');
	printf("%d latinikoi kefalaioi xaraktires\n",lt);
	
	return 0;
}


