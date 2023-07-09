#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char ch,file_in[30];
	printf("Dose onoma arxeioy:");
	gets(file_in);
	fp=fopen(file_in,"r");
	if (fp==NULL)
	{
		printf("Problima sto anoigma toy arxeioy");
		exit(2);
	}
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		putch(ch-1);
	}
	fclose(fp);
	
	return 0;
}

