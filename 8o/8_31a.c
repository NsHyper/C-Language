#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
	float b1,b2,b3,mo;
    arxi:
    scanf("%f %f %f",&b1,&b2,&b3);
	if (b1==0 && b2==0 && b3==0) goto telos;
	mo=(b1+b2+b3)/3;
	if (mo<5) goto kopikes;
	printf("Perases!!!\n");
	printf("Mesos oros %f\n",mo);
	goto arxi;
	kopikes:
	printf("Kopikes!!!\n");
	printf("Mesos oros %f\n",mo);	
    goto arxi;
    telos:
    printf("Telos\n");
    return 0;
}
