#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i,k,n;
	char onomata[50][30],temp[30];
	for(i=0;i<50;i++)
	{
		gets(onomata[i]);
        if (strcmp(onomata[i],"")==0) break;	
	}
	for(i=1;i<50;i++)
	{
	 for(k=49;k>=i;k--)
	 {
    	if(strcmp(onomata[k],onomata[k-1])==-1)
		{
          strcpy(temp,onomata[k]);
		  strcpy(onomata[k],onomata[k-1]);
		  strcpy(onomata[k-1],temp);
	    }
	 }
    }
    
    for(i=0;i<n;i++)
	    puts(onomata[i]);
		
	return 0;
}


