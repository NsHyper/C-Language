#include <stdio.h>
#include <stdlib.h>

void results(int pin[],int n,int ar,int res[],int *pl);

int main(void)
{
    int arithmoi[100],megaloi[100],plithos,i;
    for (i=0;i<100;i++)
        arithmoi[i]=rand();
    results(arithmoi,100,25000,megaloi,&plithos);
    for (i=0;i<plithos;i++)
        printf("%d\n",megaloi[i]);   
	
	return 0;
}

void results(int pin[],int n,int ar,int res[],int *pl)
{
	int i,k=0;
	for (i=0;i<n;i++)
	{
		if (pin[i]>=ar)
		{
			res[k]=pin[i];
			k++;
		}		
	}
	*pl=k;
}
