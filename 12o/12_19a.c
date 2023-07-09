#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(void)
{
	char frasi[80];
	int i,s=0;
	gets(frasi);
	for (i=0;i<strlen(frasi);i++)
	    if (frasi[i]==' ') s++;
	printf("H frasi exei %d kena\n",s);
	
	return 0;
}
