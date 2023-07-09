#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int a,b,c,*p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	scanf("%d %d",p1,p2);
	*p3=*p1 + *p2;
	printf("To periexomeno tis c einai %d\n",*p3);
    
    return 0;
}


