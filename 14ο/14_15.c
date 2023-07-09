#include <stdio.h>
#include <stdlib.h>
#define FOIT 100

int main(void)
{
	int i,mitroo,ar,brika;
	char onoma[30];
	FILE *fp;
	fp=fopen("MHTROO","rb");
	if (fp==NULL)
	{
       puts("problima sto anoigma toy arxeioy");
       exit(1);
    }
    fseek(fp,0,SEEK_SET);
    fread(&mitroo,sizeof(int),1,fp);
    fread(onoma,30,1,fp);
    printf("%s %d\n",onoma,mitroo);
    
    fseek(fp,-34,SEEK_END);
    fread(&mitroo,sizeof(int),1,fp);
    fread(onoma,30,1,fp);
    printf("%s %d\n",onoma,mitroo);
    
    printf("Dose arithmo mitrooy:");
    scanf("%d",&ar);
    
    brika=0;
    fseek(fp,0,SEEK_SET);
    for (i=0;i<FOIT;i++)
    {
       fread(&mitroo,sizeof(int),1,fp);
       fread(onoma,30,1,fp);
       if(mitroo==ar)
       {
          printf("%s %d\n",onoma,mitroo);          
          brika=1;
          break;
       }  
    }  
    if (brika==0)
       printf("Den yparxei ayto to mitroo\n");  
    fclose(fp);
    
    return 0;
}


