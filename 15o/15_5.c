#include <stdio.h>
#include <stdlib.h>

int metra_kena(char *s);

int main(void)
{
    char lex[30];
	gets(lex);
	printf("%d \n",metra_kena(lex));
	return 0;
}
          
int metra_kena(char *s)
{
	if (*s=='\0') 
		return 0;
	else if	(*s==' ') 
		return  1+metra_kena(s+1);
	else
		return  0+metra_kena(s+1);
}


  
