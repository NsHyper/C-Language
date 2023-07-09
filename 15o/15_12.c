#include <stdio.h>
#include <stdlib.h>

void print_mo(double x, double y)
{
	printf("MO=%5.2f\n",(x+y)/2);
}

int einai_isa(double x, double y)
{
	if(x==y) return 1; else return 0;
}

int main(void)
{
	void (*ptr1)(double x, double y);
    int (*ptr2)(double x, double y);
	int i;
	ptr1=print_mo;
	ptr2=einai_isa; 
	ptr1(10,20);
	if (ptr2(10,20)) 
	   printf("Isa\n");
	else
       printf("Anisa\n");   
	
	return 0;
}


