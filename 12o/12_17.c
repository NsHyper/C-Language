#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
 
int main(void)
{
	char frasi[100];
	int i,j,k,cnt,epomenos;
    printf("Dose mia frasi:");
    gets(frasi);
    for (i=0;i<strlen(frasi);i++)
    {
        cnt=1;
        epomenos=0;
        for (k=0;k<i;k++)
            if(frasi[i]==frasi[k])
            { 
               epomenos=1;
               break;
            } 
        if (epomenos) continue;      
        for (j=i+1;j<strlen(frasi);j++)
            if(frasi[i]==frasi[j]) cnt++;   
        printf("O xaraktiras %c einai %d fores\n",frasi[i],cnt);     
    }    
	
	return 0;
}
