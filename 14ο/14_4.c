#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	float min_ar,max_ar,ar;
	if((fp=fopen("input.txt","r")) == NULL)
	{
		puts("Provlima sto anoigma toy arxeioy");
		exit(2);
	}	
	fscanf(fp,"%f",&ar);
	min_ar=max_ar=ar;
	while(!feof(fp))
	{
		fscanf(fp,"%f",&ar);
		if (ar>max_ar)	max_ar=ar;
		if (ar<min_ar)	min_ar=ar;
	}
	fclose(fp);
	printf("Mikroteros=%f\n",min_ar);
	printf("Megalyteros=%f\n",max_ar);
	
	return 0;
}
