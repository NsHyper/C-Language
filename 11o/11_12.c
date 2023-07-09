#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is(char *p1, char *p2);

int main(void)
{
	if (is("nikos","nikos"))
	   printf("Einai idia\n");
	else
       printf("Den einai idia\n");
	if (is("nikas","nikos"))
	   printf("omoia\n");
	else
       printf("anomoia\n");
	
	return 0;
}

bool is(char *p1, char *p2)
{	
	bool yes=true;
	while(*(p1++) != '\0' && *(p2++)!='\0')
		if (*p1!=*p2) yes=false; 
	return yes;
}



