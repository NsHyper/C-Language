#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int ar=0,ep=0;
	char epon[30],onom[30],arxeio[30],arxeio_ep[30],arxeio_ap[30];
	float b;
	FILE *fp,*fp_ep,*fp_ap;
	printf("Dose onoma arxeioy:");
	gets(arxeio);
	fp=fopen(arxeio,"r");
	if (fp==NULL)
	{
       puts("problima sto anoigma toy arxeioy");
       exit(1);
    }
    strcpy(arxeio_ep,arxeio);
    strcpy(arxeio_ap,arxeio);
    fp_ep=fopen(strcat(arxeio_ep,".ep"),"w");
    fp_ap=fopen(strcat(arxeio_ap,".ap"),"w");
	if (fp==NULL)
	{
       puts("problima sto anoigma toy arxeioy");
       exit(1);
    }
	while (!feof(fp))
	{
	   fscanf(fp,"%s %s %f",epon,onom,&b);
	   if (b>=5)
       {
	      fprintf(fp_ep,"%s %s %f\n",epon,onom,b);
	      ep++;
       }
	   else
         fprintf(fp_ap,"%s %s %f\n",epon,onom,b);
       ar++;
	}
	fclose(fp);
	fclose(fp_ep);
	fclose(fp_ap);
	printf("Plithos foititon %d\n",ar);
	printf("Pososto epitixonton %5.1f%%\n",100*(float)ep/ar);
    
    return 0;
}


