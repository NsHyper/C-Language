#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	char ch=68,let='L';
	int a=2,b=4;
	a=ch+let;
	ch=++let;
	printf("a=%d ch=%c let=%c\n",++a,ch,let);
    
    return 0;
}
