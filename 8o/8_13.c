#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ar,y,p,sum=0;
	printf("Dose arithmo:");
	scanf("%d",&ar);
	do
	{
		y=ar % 10;
		p=ar/10;
		sum=sum+y;
		ar=p;
	} while (p!=0);
	printf("To athroisma ton psifion einai %d\n",sum);
	
	return 0;
}


