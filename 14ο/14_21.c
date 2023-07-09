#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int ar,i,ch,first;
	char frasi[50];
    FILE *fp;
	fp=fopen("code","rb");
	fseek(fp,4167,0);
	i=0;
	while (1)
	{
		fread(&ch,sizeof(int),1,fp);
		fread(&ar,sizeof(int),1,fp);
		frasi[i]=ch;
		if (ar==-1)
		{
			frasi[i+1]='\0';
			break;
		}
		i++;
		fseek(fp,ar,0);
	}
	printf(frasi);
	fclose(fp);
	return 0;
}


