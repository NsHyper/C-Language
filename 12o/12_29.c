#include <stdio.h> 
#include <stdlib.h> 

char func1(char p);
void func2(char *p);
void func3(char *p, int num);

int main(void)
{
	char a[10]="MANOLHS", *ptr;
	printf("%c\n",func1(a[6]));	
	func2(a);
	func2(&a[5]);
	func2(a+5);
	func3(a,5);
	func3(a+3,2);
	
	return 0;
}

char func1(char p)
{  
	return p+1;
}

void func2(char *p)
{
	puts(p);
}


void func3(char *p, int num)
{
	int i;
	for (i=num-1; i>=0; i--) putchar(p[i]);
	  putchar('\n');
}
