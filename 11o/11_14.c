#include <stdio.h> 
#include <stdlib.h>

char* first_space(const char *p);

int main(void)
{

	printf(first_space("arnaki aspro"));
    
    return 0;
}

char* first_space(const char *p)
{
	while(*p != '\0')
	{
		if(*p == ' ') return p;
		p++;
	}
}

