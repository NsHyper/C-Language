#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int a,b,temp;
	printf("Dose dyo arithmous :");
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d b=%d\n",a,b);
    
   	return 0; 
}
