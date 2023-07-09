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
	fp=fopen("sxoleio","rb");
	fseek(fp,14*sizeof(struct stoixeia),0);
	fread(&mathitis,sizeof(struct stoixeia),1,fp);
	fclose(fp);
	printf("Stoixeia 15oy mathiti\n");
	printf("Eponymo:%s\n",mathitis.eponymo);
	printf("Taxi:%s\n",mathitis.taxi);
	printf("Mesos oros:%f\n",mathitis.mesos_oros);
	printf("Hlikia:%d\n",mathitis.ilikia);
	
	return 0;
}
