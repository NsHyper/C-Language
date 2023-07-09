#include <stdlib.h>
#include <stdio.h>

int test(char ch);

int main(void)
{
	test('J');
	test('9');

	return 0;
}


int test(char ch)
{
	char m;
	if(!(ch>='A' && ch<='Z')) return 0;
	for(m='A';m<=ch;m++)
		putchar(m);
	return 1;
}


