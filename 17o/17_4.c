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
	k=realloc(k,50*sizeof(float));	// ���� � ������� k ������� �� ���� 50 ������ ��� ��� 100
	
	return 0;
}

