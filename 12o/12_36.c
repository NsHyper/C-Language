#include <stdio.h>
#include <stdlib.h>

int copy(int p1[],int p2[],int n);

int main(void)
{
	int a[100],b[100],i,ar,plithos;
	for (i=0;i<100;i++) a[i]=rand();
	printf("Dose arithmo:");
    scanf("%d",&ar);
    plithos=copy(a,b,ar);
    printf("\n");
    for (i=0;i<plithos;i++)
	   printf("%d\n",b[i]);

    return 0;
}

int copy(int p1[],int p2[],int n)
{
    int k=0,i;
    for (i=0;i<100;i++)
        if (p1[i]>n) p2[k++]=p1[i];
    return k;
}


