#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexeis(char *str);

int main(void)
{
	char lex[100];
	gets(lex);
	printf("%d\n",lexeis(lex));

    
    return 0;
}

int lexeis(char *p)
{
    int cnt=0;
    while (*p!='\0')
    {
        while (*p==' ' && *p!='\0') p++;  
        if (*p=='\0') break;
        while (*p!=' ' && *p!='\0') p++; 
        cnt++;    
    }      
    return cnt;  
}

