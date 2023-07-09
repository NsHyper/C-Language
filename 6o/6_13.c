#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>

int main(void)
{ 
	bool a,b,c=false; 
	a=10>5;
	b=(a==c);
	c=12;   
	printf("a=%d b=%d c=%d\n",a,b,c);
	
	return 0;
}


