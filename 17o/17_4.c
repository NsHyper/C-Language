#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float *k;
	int i;
	k=calloc(100,sizeof(float));
	if(k==NULL)
	{
		puts("Den yparxei arketi mnimi");
		exit(1);
	}
	for(i=0;i<10;i++)
		scanf("%f",&k[i]);
	k=realloc(k,50*sizeof(float));	// Τώρα ο δείκτης k δείχνει σε χώρο 50 θέσεων και όχι 100
	
	return 0;
}

