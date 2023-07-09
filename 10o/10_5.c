#include <stdio.h> 
#include <stdlib.h> 

int x=10;
void out1();
void out2();
void out3();

int main(void)
{
	int i;
	for(i=1;i<=5;i++) out1();
	for(i=1;i<=5;i++) out2();
	for(i=1;i<=5;i++) out3();
	
	return 0;
}

void out1()
{
	static int x=4;
	printf("%d\n",x++);
}

void out2()
{
	static int x;
	x=4;
	printf("%d\n",x++);
}

void out3()
{
	printf("%d\n",x++);
}
