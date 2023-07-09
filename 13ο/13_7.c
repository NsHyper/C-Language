#include <stdio.h>
#include <stdlib.h>

#define AR 50

struct metoxi
{
	char onoma[10];
	int posotita;
	float timi;
	char eidos;
};

int main(void)
{
	struct metoxi kiniseis[AR];
	float syn_axia;
	int i,syn_a,syn_p;
	for (i=0;i<AR;i++)
	{
       printf("Stoixia kinisis No:%d\n",i+1);
       printf("=======================\n");
       printf("Eidos kinisis (A/P):");
       scanf("%c",&kiniseis[i].eidos);
       printf("Onomasia metoxis:");
       scanf("%s",&kiniseis[i].onoma);
       printf("Posotita:");
       scanf("%d",&kiniseis[i].posotita);
       printf("Timi:");
       scanf("%f",&kiniseis[i].timi);
       getchar();
       putch('\n');
    }
    syn_axia=0;
    syn_a=0;
    syn_p=0;
    for (i=0;i<AR;i++)
	{
       if (kiniseis[i].eidos=='A') syn_a=syn_a+kiniseis[i].posotita;
       if (kiniseis[i].eidos=='P') syn_p=syn_p+kiniseis[i].posotita;
       syn_axia=syn_axia+kiniseis[i].timi*kiniseis[i].posotita;
    }
    printf("Plithos metoxon poy agorastikan = %d\n",syn_a);
    printf("Plithos metoxon poy poylithikan = %d\n",syn_p);
    printf("Synoliki axia dikinisis = %f\n",syn_axia);
	
	return 0;
}


