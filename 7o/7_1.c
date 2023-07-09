#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float timi,kostos,e;
	int pos;
	printf("Dose posotita kai timi :");
	scanf("%d %f",&pos,&timi);
	kostos=timi*pos;
	if(pos>100)
	{
		e=kostos*25/100;
		kostos=kostos-e;
	}
	else if (pos>=80 && pos<=100)
	{
		e=kostos*15/100;
		kostos=kostos-e;
	}
	else if (pos<20)
	{
		e=kostos*10/100;
		kostos=kostos+e;
	}
	printf("To teliko kostos einai %f\n",kostos);
	
	return 0;
}


