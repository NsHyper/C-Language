#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[])
{
	FILE *fp;
	int i;

	fp=fopen("arithmoi.txt","w");
	if(fp == NULL)
	{
		puts("Provlima me to anoigma tou arxeiou!");
		exit(2);
	}
	for(i=5;i<106;i++)
	{
		fprintf(fp,"%d\n",i);
	}
	fclose(fp);
	return 0;
}