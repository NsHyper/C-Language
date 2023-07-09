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
	struct stoixeia mathitis,kaliteros;
	float max_mo=0.0;
	fp=fopen("sxoleio","rb");
	while(!feof(fp))
	{
		fread(&mathitis,sizeof(struct stoixeia),1,fp);
		if(mathitis.mesos_oros>max_mo)
		{
			max_mo=mathitis.mesos_oros;
			kaliteros=mathitis;
		}
	}
	fclose(fp);
	printf("Stoixeia kalyteroy mathiti\n");
	printf("Eponymo:%s\n",kaliteros.eponymo);
	printf("Taxi:%s\n",kaliteros.taxi);
	printf("Mesos oros:%f\n",kaliteros.mesos_oros);
	printf("Hlikia:%d\n",kaliteros.ilikia);
	
	return 0;
}
