#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int x,y;
	y=100;
	x=y;
    printf("x=%d y=%d\n",x,y);
    y=100;
    x = --y * 4;
    printf("x=%d y=%d\n",x,y);
    y=100;
    x = y = y++;
    printf("x=%d y=%d\n",x,y);
    y=100;
    x = y == 100;
    printf("x=%d y=%d\n",x,y);
    y=100;
    x = y == y++;
    printf("x=%d y=%d\n",x,y);
    y=100;
    x = y == ++y;
    printf("x=%d y=%d\n",x,y);
	
	return 0;
}

