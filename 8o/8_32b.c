#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			if ((i+j)%2==0) continue;
			if (i*j>=16) break;
			printf("%d %d\n",i,j);
		}
		printf("=======\n");
	}
	printf("Telos\n");
    return 0;
}
