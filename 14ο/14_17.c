#include <stdio.h>

int main(void)
{
	int ar,pl,k,a;
	FILE *fp;
	fp=fopen("bath.txt","r");
	if (fp==NULL) 
		exit(1);
	pl=a=k=0;
	while (!feof(fp))
	{
		fscanf(fp,"%d",&ar);
		pl++;
		if (ar>=18) a++;
		if (ar<=10) k++;;
	}
	fclose(fp);
	printf("%d %d %d\n",pl,a,k);
	return 0;
}

