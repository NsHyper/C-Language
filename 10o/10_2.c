#include <stdio.h>
#include <stdlib.h>

void disp();
int step;
int get();

int main(void)
{
	step=2;
	disp();
	
	return 0;
}

void disp()
{
	int a,b;
	printf("Mia synartisi\n");
	a=get();
	b=get();
	if (a==0 && b==0)
		exit(0);
	else
	{
		int i;
		for (i=a;i<=b;i=i+step)
			printf("%d\n",i);
	}
}

int get()
{
	int x;
	scanf("%d",&x);
	return x;
}
