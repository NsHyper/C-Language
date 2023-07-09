#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char fraseis[10][50];
	char (*ptr)[10][50];
	int i,j,k=0;
	for (i=0;i<10;i++)
    {
        printf("Dose frasi %d ->",i+1);
        gets(fraseis[i]);
    }
    ptr=&fraseis;
    for (i=0;i<10;i++)
    {
      for (j=0;j<strlen((*ptr)[i]);j++)
        if ((*ptr)[i][j]==' ') k++;             
    } 
    printf("Yparxoyn %d kena diastimata\n",k);    
    
    return 0;
}



