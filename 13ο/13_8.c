#include <stdio.h>
#include <stdlib.h>

#define AR 10

struct ptisi
{
	int ar_ptisis;
	int theseis;
	int epibates;
};

int main(void)
{
	struct ptisi ptiseis[AR];
	int i,syn_epibaton,plirotita;
	for (i=0;i<AR;i++)
	{
       printf("Stoixia ptisis No:%d\n",i+1);
       printf("=======================\n");
       printf("Arithmos ptisis:");
       scanf("%d",&ptiseis[i].ar_ptisis);
       printf("Plhthos theseon:");
       scanf("%d",&ptiseis[i].theseis);
       printf("Plhthos epibaton:");
       scanf("%d",&ptiseis[i].epibates);
       putch('\n');
    }
    syn_epibaton=0;
    plirotita=0;
    for (i=0;i<AR;i++)
	{
       syn_epibaton=syn_epibaton+ptiseis[i].epibates;
       if (ptiseis[i].epibates>=ptiseis[i].theseis*80/100) 
          plirotita++;
    }
    printf("Synoliko plithos epibaton = %d\n",syn_epibaton);
    printf("Plithos ptiseo me plirotita = %d\n",plirotita);
  	
  	return 0;
}


