#include <stdio.h>
#include <string.h>

struct biblio
{
	char titlos[30];
	float timi;
	int etos_ekdosis;
};

int main(void)
{
	struct biblio b1,b2,*p1,*p2;
	p1=&b1;
	strcpy(p1->titlos,"H glossa C se bathos");
	p1->timi=60;
	p2=p1;
	p1=&b2;
	strcpy(p1->titlos,"H glossa C++ se bathos");
	p1->timi=p2->timi+20;
	p1->etos_ekdosis=2017;
	p2->etos_ekdosis=b2.etos_ekdosis-3;
	printf("%s %5.2f %d\n",b1.titlos,b1.timi,b1.etos_ekdosis);
	printf("%s %5.2f %d\n",b2.titlos,b2.timi,b2.etos_ekdosis);
	return 0;
}

