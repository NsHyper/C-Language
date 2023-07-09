#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ar,p,yp;
	printf("Dose arithmo:");
	scanf("%d",&ar);
	printf("--------------------------------");
	do 
	{
		p=ar/2;
		yp=ar % 2;
		printf("%d\b\b",yp);
		ar=p;
	} while (p!=0);
	putchar('\n');	
	return 0;
}


