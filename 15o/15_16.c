#include <stdio.h>
#include <stdarg.h>

int mx(int n,...)
{
	va_list v;
	int mm;
	int i,ar;
	va_start(v,n);
	mm=n;
	if (mm<0) return 0;
	do
	{ 
		ar=va_arg(v,int);
		if (ar>mm) mm=ar;
	} while (ar>=0);
	va_end(v);
	return mm;
}


int main(void) 
{
	printf("%d\n", mx(2,8,4,5,-2));
	printf("%d\n", mx(2,-2));
	printf("%d\n", mx(-8));
	printf("%d\n", mx(3,5,10,6,-15,20,12));
	printf("%d\n", mx(2,10,20,3,4));
	return 0;
}

