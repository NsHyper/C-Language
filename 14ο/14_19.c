#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char onoma[30],frasi[50],line[80];
	int codes[256],i=0;
	FILE *fp; 
	printf("Onoma arxeioy:");
	gets(onoma);
	printf("Dose frasi:");
	gets(frasi);
	fp=fopen(onoma,"r");
	if (fp==NULL) exit(1);
	while (!feof(fp))
	{
		fgets(line,80,fp);
		i++;
		if (strstr(line,frasi)!=NULL)
			printf("%d-> %s",i,line);
	}
	fclose(fp);
	return 0;
}

