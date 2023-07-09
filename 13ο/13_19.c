#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
  int ar1;
  int ar2;
} numbers, pairs[100];

typedef int cnt;

void disp(pairs p);

int main(void) 
{
	numbers n;
	cnt a;
	pairs all;
	for (a=0;a<100;a++)
	{
 		n.ar1=rand();
		n.ar2=rand();
		all[a]=n;
	}
	disp(all);
	return 0;
}

void disp(pairs p)
{
	cnt i;
	numbers two;
	for (i=0;i<100;i++)
	{
 		two=p[i];
		printf("%d %d\n",two.ar1,two.ar2);
	}
}



