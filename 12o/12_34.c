#include <stdio.h> 
#include <stdlib.h> 

void synola(int p[][5], int s[]);

int main(void)
{
	int arithmoi[10][5],synola_gramon[10],i,j;
	for (i=0;i<10;i++)
	    for (j=0;j<5;j++)
    	    arithmoi[i][j]=rand();
    synola(arithmoi,synola_gramon);
    for (i=0;i<10;i++)
        printf("%d\n",synola_gramon[i]);
	
	return 0;
}
	
void synola(int p[][5], int s[])
{
	int i,j,sum;
	for (i=0;i<10;i++)
	{
        sum=0;
	    for (j=0;j<5;j++)
    	    sum=sum+p[i][j];
    	s[i]=sum;
     }       
}
