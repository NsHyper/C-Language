#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	for (i=1,j=10;i<=j;++i,j--)
		printf("%d %d\n",i,j);
	printf("TELOS %d %d\n",i,j);	
    
    return 0;    
}
