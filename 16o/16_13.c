#include <stdio.h>
#include <stdlib.h>
#define SIZE 50    //Καθορίζει το πλήθος των αθλητών

int main(void)
{
	int i,j,k,g,ripseis[SIZE][6],tm;
	char onomata[SIZE][30];
	
	for(i=0;i<SIZE;i++)           // Διαβάζει τα ονόματα των αθλητών
	{
		printf("Dose onoma athliti %d->",i+1);
        gets(onomata[i]);	
	}
	for(i=0;i<SIZE;i++)          // Διαβάζει τις ρίψεις  κάθε αθλητή
	{
		printf("Dose ripseis athliti %s\n",onomata[i]);
        for (j=0;j<6;j++)
        {
            printf("Ripsi %d -> ",j+1);
            scanf("%d",&ripseis[i][j]);	
        }    
	}
	// Ταξινομεί τον πίνακα ripseis[] ανά γραμμή
	for (g=0;g<SIZE;g++)
	{
        for(i=1;i<6;i++)
        {
           for(k=5;k>=i;k--)
	       {
    	      if(ripseis[g][k]<ripseis[g][k-1])
		      {
                 tm=ripseis[g][k];
                 ripseis[g][k]=ripseis[g][k-1];
                 ripseis[g][k-1]=tm;          
              }
           }
        }
    }
    // Εμφανίζει τα ονόματα και τις ρίψεις κάθε αθλητή
    for(i=0;i<SIZE;i++)
	{
		printf("%15s\n",onomata[i]); 
		for (j=0;j<6;j++)
            printf("%4d ",ripseis[i][j]);           	
        printf("\n");   
	}
	
	return 0;
}


