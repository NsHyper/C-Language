#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main(void)
{
	char lex[5][25],*p="-AIGAIOY";
	int i;
	strcpy(*(lex+2),"MYTILINI");
	strcpy(lex,"LESVOS");
	strcpy(*(lex+1),"AIGAIO");
	strcpy(*(lex+1)+6,"-PELAGOS");
	strcpy(*(lex+4),"-----");
	*(*(lex+4))='*';
	*(*(lex+4)+4)='*';
	strcpy(*(lex+3),"PANEPISTIMIO");
	strcat(*(lex+3),p);
	for (i=0;i<5;i++)
		printf("%s\n",*(lex+i));
	for (i=0;i<125;i++)
		if (*(*lex+i)=='-')
			*(*lex+i)=' ';	
	for (i=0;i<5;i++)
		printf("%s\n",*(lex+i));
	return 0;
}


