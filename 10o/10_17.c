#include <stdio.h> 
#include <stdlib.h> 

int next_5();

int main(void)
{
	int i;
	for (i=1;i<=15;i++)
	   printf("%d\n",next_5());
	   
	return 0;
}

int next_5()
{
	static int a=0;
	a=a+5;
	return a;
}
