#include <stdio.h>
#include <stdlib.h>

struct stoixeia
{
	char eponymo[30];
	char taxi[5];
	float mesos_oros;
	int ilikia;
};

int main(void)
{
	FILE *fp;
	struct stoixeia mathitis;
	char ch;
	fp=fopen("sxoleio","rb");
	printf("Dose xaraktira:");
	ch=getchar();
	while(!feof(fp))
	{
		fread(&mathitis,sizeof(struct stoixeia),1,fp);
		if (mathitis.eponymo[0]==ch)
		{
			printf("%s %d\n",mathitis.eponymo,mathitis.ilikia);
		}
	}
	fclose(fp);

	return 0;
}

