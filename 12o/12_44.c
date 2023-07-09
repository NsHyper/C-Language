#include <stdio.h>
#include <stdlib.h>

void do_it(int pin[][10], int mx[], int n);

int main(void)
{
    int arithmoi[5][10],megaloi[5],i,j;
    for (i=0;i<5;i++)
        for (j=0;j<10;j++)
            arithmoi[i][j]=rand();
    do_it(arithmoi,megaloi,5);
    for (i=0;i<5;i++)
        printf("%d\n",megaloi[i]);   
	
	return 0;
}

void do_it(int pin[][10], int mx[], int n)
{
	int i,j=0,m;
	for (i=0;i<n;i++)
	{
		m=pin[i][0];
		for (j=0;j<10;j++)
		{
			if (pin[i][j]>m)
				m=pin[i][j];
		}	
		mx[i]=m;
	}
}
