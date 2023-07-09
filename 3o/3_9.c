#include <stdio.h> 
#include <stdlib.h> 
#define pi 3.141592

int main(void)
{
	float aktina,per,emvado;
	printf("Dose aktina :");
	scanf("%f",&aktina);
	per=2*pi*aktina;
	emvado=pi*aktina*aktina;
    printf("To emvado kykloy aktinas %f einai %f m2 kai i perimetros %f\n",aktina,emvado,per);
    
	return 0;    
}
