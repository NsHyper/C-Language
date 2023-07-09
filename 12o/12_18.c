#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(void)
{
	char lex[30]="H GLOSSA C SE BATHOS";
	int i,s=0;
	for (i=0;i<strlen(lex);i++)
	{
		if (lex[i]==lex[i+1]) s=i;
		if (lex[i]==' ') lex[i]='-';
	}
	puts(lex);
	puts(lex+s);
	
	return 0;
}
