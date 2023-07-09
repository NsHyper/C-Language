#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	float b1,b2,b3,mo;
	printf("Dose treis bathmous :");
	scanf("%f,%f,%f",&b1,&b2,&b3);
    if ((b1>=b3) && (b2>=b3))
		mo=(b1+b2)/2;
	if ((b1>=b2) && (b3>=b2))
		mo=(b1+b3)/2;
	if ((b2>=b1) && (b3>=b1))
		mo=(b2+b3)/2;

	if (mo>=10)
	   printf("Perases me %f\n",mo);
    else
        printf("Kopikes\n");
    
    return 0;
}
