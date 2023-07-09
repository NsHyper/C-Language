#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	char ch,b='A';
	ch='A';
	if(ch==b)
		printf("NAI-1");
	else
		printf("OXI-1");
	if("A"=='A')
		printf("NAI-2");
	else
		printf("OXI-2");
    
    return 0;
}
