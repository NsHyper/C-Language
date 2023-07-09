#include <stdio.h>
#include <stdlib.h>
#define FOIT 100

int main(void)
{
	int ar=0,mitroa[FOIT],i;
	char onomata[FOIT][30];
	FILE *fp;
	for (i=0;i<FOIT;i++)
	{
        printf("Dose onoma:");
        gets(onomata[i]);
        printf("Dose ar mitrooy:");
        scanf("%d",&mitroa[i]);
        getchar();
    }
	fp=fopen("MHTROO","wb");
	if (fp==NULL)
	{
       puts("problima sto anoigma toy arxeioy");
       exit(1);
    }
    for (i=0;i<FOIT;i++)
	{
        fwrite(&mitroa[i],sizeof(int),1,fp);
        fwrite(onomata[i],30,1,fp);
    }
    fclose(fp);
    
    return 0;
}


