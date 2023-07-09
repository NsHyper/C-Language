#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
	int a=5,b=13;
    do
    {
	   printf("%d\n",a);
	   if (b<12) continue;
	    printf("=====\n");
    } while (a++!=b--);

    
    return 0;
}
