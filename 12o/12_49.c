#include <stdio.h>
#include <stdlib.h>

void fill(int (*pin[5])[10]);

int main(void)
{
	int a[10],b[10],c[10],d[10],e[10];
	int (*p[5])[10];
	int i;
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	p[3]=&d;
	p[4]=&e;
    fill(p);
    for (i=0;i<10;i++)
        printf("%6d %6d %6d %6d %6d\n",a[i],b[i],c[i],d[i],e[i]); 
    
    return 0;
}

void fill(int (*pin[5])[10])
{
	int i,j;
	for (i=0;i<5;i++)
		for (j=0;j<10;j++)
			(*pin[i])[j]=rand();
}



