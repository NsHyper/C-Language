#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int x,y,a;
	x=5;
    y=100;
    a=0;
    x = y>x || a;
    printf("x=%d y=%d\n",x,y);
    
    x=5;
    y=100;
    a=0;
    x = y | a;
    printf("x=%d y=%d\n",x,y);
    
    x=5;
    y=100;
    a=0;
    y = x & a;
    printf("x=%d y=%d\n",x,y);

    x=5;
    y=100;
    a=0;
    x = x & y;
    printf("x=%d y=%d\n",x,y);
 
    x=5;
    y=100;
    a=0;
    x = x | y;
    printf("x=%d y=%d\n",x,y);
    
    x=5;
    y=100;
    a=0;
    x = --x && y || a;
    printf("x=%d y=%d\n",x,y);
    
	
	return 0;
}

