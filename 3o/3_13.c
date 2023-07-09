#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	float litra,poso,timi_ana_litro;
	printf("Dose arithmo litron :");
	scanf("%f",&litra);
	printf("Dose poso :");
	scanf("%f",&poso);
	timi_ana_litro=poso/litra;
	if (timi_ana_litro>1.7)
		printf("Akribi banzini\n");
	else
		printf("Ftini benzini\n");
    
	return 0;
}
