#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *k;
	int i,a=0;
	k=calloc(20,sizeof(char));
	fgets(k,20,stdin);	
	for (i=0;i<strlen(k);i++)
		if (k[i]=='*') a++;
	puts(k);
	printf("%d\n",a);
	free(k);
    return 0;
}

