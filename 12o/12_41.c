#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *anakatema(char *str);

int main(void)
{
	char lex[20];
	gets(lex);
	printf(anakatema(lex));
	printf("\n----\n");
    
    return 0;
}

char *anakatema(char *str)
{
    int i,ta1,ta2,len;
    char temp;
    len=strlen(str);
    //Αρχικοποίηση της γενήτριας τυχαίων αριθμων
    srand(time(NULL));
    for (i=0;i<100;i++)
    {
        ta1=rand()%len;
        ta2=rand()%len;
        temp=str[ta1];
        str[ta1]=str[ta2];
        str[ta2]=temp;
    } 
    return str;  
}

