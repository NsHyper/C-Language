#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int i,a[100],b[100],k=0,s=0;
	int (*ptr)[100];
	ptr=&a;
	for (i=0;i<100;i++) (*ptr)[i]=rand();
	ptr=&b;
	for (i=0;i<100;i++) (*ptr)[i]=i;
	for (i=0;i<100;i++) s=s+(*ptr)[i];
	ptr=&a;
	for (i=0;i<100;i++) 
		if ((*ptr)[i]>1000) k++;
	printf("%d %d\n",s,k);
	
    return 0;
}



