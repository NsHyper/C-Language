#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int xreosi[12][31],i,j,max;
	for (i=0;i<12;i++)
	{
		printf("\n\nMinas %d\n",i+1);
		printf("-----------------\n");
		for (j=0;j<31;j++)
		{
			printf("Xreosi %d/%d:",j+1,i+1);
			scanf("%d",&xreosi[i][j]);
		} 
	} 
	max=xreosi[0][0];
	for (i=0;i<12;i++)
		for (j=0;j<31;j++)
			if (xreosi[i][j]>max) max=xreosi[i][j];
	printf("Hmeres me ti megalyteri xreosi:%d\n",max);
	printf("-----------------------------------\n");
	for (i=0;i<12;i++)
	    for (j=0;j<31;j++)
			if (xreosi[i][j]==max) printf("%d/%d\n",j+1,i+1);
     
    return 0;
}
