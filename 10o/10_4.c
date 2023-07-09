#include <stdio.h> 
#include <stdlib.h> 

void out(int a, int b, int c);
int func1(int x, int y);
void func2(int d);
int d,e;

int main(void)
{
	int m=2,n=3,j;
	j=func1(m,n);
	func2(j);
	out(m,n,4);
	
	return 0;
}

int func1(int x, int y)
{
	d=12;
	return x+y;
}

void func2(int d)
{
	d=20;
	e=d;
}

void out(int a, int b, int c)
{
	printf("a=%d b=%d\n",a,b);
	printf("c=%d d=%d e=%d\n",c,d,e);
}
