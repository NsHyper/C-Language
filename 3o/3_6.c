#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
		max=a;
	else
		max=b;
	if(max>c)
		printf("%d",max);
	else
		printf("%d",c);
	
	return 0;	
}
