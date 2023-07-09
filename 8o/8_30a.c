#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
	int i,j,s=10;
    for (i=1;i<=5;i=i+2)
    {
	    s=s+15;
	    for (j=4;j>=0;j--)
		    s=s-j;
    }	    
    printf("%d %d %d\n",i,j,s);
    
    return 0;
}
