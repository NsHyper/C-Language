#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	float ar1,ar2,ar3,mo;
	if((fp=fopen("bath.txt","r")) == NULL)
	{
		puts("Provlima sto anoigma toy arxeioy");
		
		exit(2);
	}	
	while(!feof(fp))
	{
		fscanf(fp,"%f %f %f",&ar1,&ar2,&ar3);
		mo=(ar1+ar2+ar3)/3;
		printf("mo=%f\n",mo);
	}
	fclose(fp);
	
	return 0;
}
