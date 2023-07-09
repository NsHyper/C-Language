#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char o[10][20];
	int i,j,k,found,koino,yparxoyn_koina=0;
	for (i=0;i<10;i++)
    {
        printf("Dose onoma %d ->",i+1);
        gets(o[i]);
    }
    for (i=0;i<strlen(o[0]);i++)
    {
      koino=1;
      for (j=1;j<10;j++)
      {
        found=0;
        for (k=0;k<strlen(o[j]);k++)
           if (o[0][i]==o[j][k]) found=1;
        if (found==0)
        {
           koino=0;
           break;
        }        
      }
      if (koino) 
      {  
          printf("%c\n",o[0][i]); 
          yparxoyn_koina=1;
      }    
    } 
    if (!yparxoyn_koina) 
        printf("Den yparxoyn koinoi xaraktires\n");    
    
    return 0;
}



