#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(void)
{
	char frasi[80],*p;
	int i,s=0;
	gets(frasi);
	p=frasi;
	while (*p!='\0')
	    if (*(p++)==' ') s++;
	printf("H frasi exei %d kena\n",s);
	
	return 0;
}
