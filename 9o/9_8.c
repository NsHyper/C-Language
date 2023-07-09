#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool disekto(int et);

int main(void)
{
	int apo,eos,xr;
	printf("Apo etos:");
	scanf("%d",&apo);
	printf("Eos etos:");
	scanf("%d",&eos);
	for (xr=apo;xr<=eos;xr++)
	{
	   if(disekto(xr)) printf("%d Disekto\n",xr);
    }

	return 0;
}

bool disekto(int et)
{
	if (((et%4 == 0)&& (et%100 != 0))||(et%400 == 0))
		return true;
	else
		return false;
}

