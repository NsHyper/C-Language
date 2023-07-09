#include <stdio.h>
#include <stdarg.h>

int mx(int n,...)
{
	va_list v;
	int mm;
	int i,ar;
	va_start(v,n);
	mm=va_arg(v,int);
	for (i=1;i<=n-1;i++)
	{ 
		ar=va_arg(v,int);
		if (ar>mm) mm=ar;
	}
	va_end(v);
	return mm;
}

 
int main(void) 
{
	printf("%d\n", mx(4,2,8,4,5));
	printf("%d\n", mx(1,5));
	printf("%d\n", mx(3,5,10,6,15,20,12));
	return 0;
}


