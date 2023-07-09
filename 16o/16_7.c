#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i,j,k;
	char onomata[10][20],temp[20];
	float voles[10][6],max[10],tt;
	for(i=0;i<10;i++)
	{
		printf("Dose onoma %d ->",i+1);
        gets(onomata[i]);
		for(j=0;j<6;j++)
		{
           printf("Voli %d:",j+1);
           scanf("%f",&voles[i][j]);
        }
        getchar(); //Διάβασμα του παραμένοντα χαρακτήρα αλλαγής γραμμής
        puts("----------------\n");
   	}
	
	for(i=0;i<10;i++)
	{
		max[i]=voles[i][0];
		for(j=0;j<6;j++)
		{
           if (voles[i][j]>max[i]) max[i]=voles[i][j];
        }
   	}
   	
    for(i=1;i<10;i++)
	{
	 for(k=9;k>=i;k--)
	 {
    	if(max[k]>max[k-1])
		{
          tt=max[k];
          max[k]=max[k-1];
          max[k-1]=tt;
          strcpy(temp,onomata[k]);
		  strcpy(onomata[k],onomata[k-1]);
		  strcpy(onomata[k-1],temp);
	    }
	 }
    }
    
    for(i=0;i<10;i++)
	{
	    printf("%s %5.2f\n",onomata[i],max[i]);
	}

	
	return 0;
}


