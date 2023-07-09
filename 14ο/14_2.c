#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	float ar,mo,synolo=0.0;
	int cnt=0;
	if((fp=fopen("input.txt","r")) == NULL)
	{
		puts("Provlima sto anoigma toy arxeioy");
		exit(2);
	}	
	while(!feof(fp))
	{
		fscanf(fp,"%f",&ar);
		cnt++;
		synolo=synolo+ar;
	}
	mo=synolo/cnt;
	fclose(fp);
	printf("Synolo=%f\n",synolo);
	printf("Mesos oros=%f\n",mo);
	
	return 0;
}
