#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	float poso,fpa,synolo;
	printf("Dose poso :");
    scanf("%f",&poso);
    printf("Dose pososto FPA :");
    scanf("%f",&fpa);
    synolo=poso+poso*fpa/100;
    printf("To teliko kostos einai %f\n",synolo);
    
   	return 0;
}
