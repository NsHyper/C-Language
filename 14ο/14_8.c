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
	fp=fopen("sxoleio","rb+");
	fseek(fp,14*sizeof(struct stoixeia),0);
	printf("Eponymo:");
	scanf("%s",mathitis.eponymo);
	printf("Taxi:");
	scanf("%s",mathitis.taxi);

	printf("Mesos oros:");
	scanf("%f",&mathitis.mesos_oros);
	printf("Hlikia:");
	scanf("%d",&mathitis.ilikia);
	fwrite(&mathitis,sizeof(struct stoixeia),1,fp);
	fclose(fp);
	
	return 0;
}
