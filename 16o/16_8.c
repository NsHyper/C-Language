#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_files(char on[][20], float vol[][6]);

int main(void)
{
	int i,j,k,akyres=0;
	char onomata[10][20],temp[20];
	float voles[10][6],max[10],tt;
	
	read_files(onomata,voles);
	
	for(i=0;i<10;i++)
	{
		max[i]=voles[i][0];
		for(j=0;j<6;j++)
		{
           if (voles[i][j]>max[i]) max[i]=voles[i][j];
           if (voles[i][j]==0) akyres++;
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
	    printf("%s %5.2f\n",onomata[i],max[i]);
	printf("Akyres voles -> %d\n",akyres);
	
	return 0;
}

void read_files(char on[][20], float vol[][6])
{
   	FILE *fp1,*fp2; 
   	int i,j;
   	fp1=fopen("onomata.txt","r");
	if (fp1==NULL)
	{
       puts("problima sto anoigma toy arxeioy onomata");
       
       exit(1);
    }
    for(i=0;i<10;i++)
	   fscanf(fp1,"%s",on[i]);
	fclose(fp1);
	fp2=fopen("voles.txt","r");
	if (fp2==NULL)
	{
       puts("problima sto anoigma toy arxeioy voles");
       
       exit(1);
    }
    for(i=0;i<10;i++)
	{
	    for(j=0;j<6;j++)
		    fscanf(fp2,"%f",&vol[i][j]);
    }
	fclose(fp2);
}
