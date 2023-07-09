#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int a,b,c,d,e;
	a=b=c=d=5;
	a++;
	b=++a;
	c=--d;
	e= ++a * d--;
	printf("H timi toy a einai %d\n",a);
	printf("H timi toy b einai %d\n",b);
	printf("H timi toy c einai %d\n",c);
	printf("H timi toy d einai %d\n",d);
	printf("H timi toy e einai %d\n",e);
    
    return 0;
}
