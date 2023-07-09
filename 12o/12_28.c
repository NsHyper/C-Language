#include <stdio.h> 
#include <stdlib.h> 

char *blablabla(char *str1,char *str2,int num);

int main(void)
{
	char lexi1[40], lexi2[40];
	puts("Dose mia lexi :");
	gets(lexi1);
	blablabla(lexi1,lexi2,7);
	puts(lexi2);
	
    return 0;
}

char *blablabla(char *str1,char *str2,int num)
{
	int i=0;
	while((str1[i] != '\0') && (i<num))
	{
		str2[i]=str1[i];
		i++;
	}
	str2[num]='\0';
	return str2;
}
