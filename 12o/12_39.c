#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void common(char *s1,char *s2);
void common_once(char *s1,char *s2);

int main(void)
{
	char lex1[20],lex2[20];
	gets(lex1);
	gets(lex2);
	printf("Koinoi xaraktires ton %s kai %s:",lex1,lex2);
	common(lex1,lex2);
	printf("\n----\n");
	printf("Koinoi xaraktires ton %s kai %s:",lex1,lex2);
	common_once(lex1,lex2);
	printf("\n----\n");
	
	return 0;
}

void common(char *s1,char *s2)
{
	int i,j,ls1,ls2;
	ls1=strlen(s1);
	ls2=strlen(s2);
	for (i=0;i<ls1;i++)
		for (j=0;j<ls2;j++)
			if (s1[i]==s2[j]) 
			{
				putchar(s1[i]);           
				break;
            }   
}

void common_once(char *s1,char *s2)
{
	int i,j,k,ls1,ls2;
    bool found;
	ls1=strlen(s1);
	ls2=strlen(s2);
	for (i=0;i<ls1;i++)
	{
		found=false;
		for (k=0;k<i;k++) if(s1[k]==s1[i]) found=true;
		if (found) continue;
		for (j=0;j<ls2;j++)
			if (s1[i]==s2[j]) 
			{
				putchar(s1[i]);           
				break;
			}   
	}        
}
