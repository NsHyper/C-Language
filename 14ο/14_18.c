#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch,onoma[30];
	int codes[256],i;
	FILE *fp; 
	
	printf("Onoma arxeioy:");
	gets(onoma);

	fp=fopen(onoma,"r");
	if (fp==NULL) exit(1);
	for (i=0;i<256;i++) codes[i]=0;
	while ((ch=fgetc(fp))!=EOF)
		codes[ch]++;
	fclose(fp);
	for (i=32;i<256;i++) 
        if (codes[i]!=0) printf("%c->%d\n",i,codes[i]);
    
	return 0;
}

