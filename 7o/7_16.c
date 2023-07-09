#include <stdio.h>
int main(void)
{
	float b1,b2,b3,mo,d1,d2;
	printf("Dose bathmoys 1oy kai 2oy exetasti: ");
	scanf("%f %f",&b1,&b2);
	if ((b1-b2)>2 || (b2-b1)>2)
	{
		printf("Dose bathmo 3oy exetasti: ");
		scanf("%f",&b3);
		d1=b3-b1;
		if (d1<0) d1=-d1;
		d2=b3-b2;
		if (d2<0) d2=-d2;
		if (d1<d2)
			mo=(b3+b1)/2;
		else
		 	mo=(b3+b2)/2;
	}
	else
	    mo=(b1+b2)/2;
    printf("mesos oros = %f\n",mo);
	return 0;
}
