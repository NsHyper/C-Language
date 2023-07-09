#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int a,b,aa,bb,x,y;
	x = y = 100;
	a = ++x;
	b = y++;
	aa = ++x;
	bb = y++;
	printf("H timi toy a einai %d\n",a);
	printf("H timi toy b einai %d\n",b);
	printf("H timi toy aa einai %d\n",aa);
	printf("H timi toy bb einai %d\n",bb);
    
    return 0;
}
