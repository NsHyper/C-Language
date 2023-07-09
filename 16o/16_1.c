#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i,k,n;
	char ch,lex[30];
	printf("Dose lexi:");
	gets(lex);
	n=strlen(lex);
	for(i=0;i<n;i++)
	{
		for(k=n-1;k>=i;k--)
		{
	    	if(lex[k]<lex[k-1])
			{
	        	ch=lex[k];
				lex[k]=lex[k-1];
				lex[k-1]=ch;
			}
		}
	}
	puts(lex);
    
    return 0;
}


