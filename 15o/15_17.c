#include <stdio.h>     
#include <stdarg.h> 

void PrintArxika(int num, ...)
{
	char *str;
	int i;
	va_list vl;
	va_start(vl,num);
	for (i=0;i<num;i++) 
	{
		str=va_arg(vl,char *);
		putchar(*str);
	} 
	va_end(vl);
}

int main(void)
{
	PrintArxika(5,"Nai","Isos","Kathiso","Orthios","Simera");
	return 0;
}



