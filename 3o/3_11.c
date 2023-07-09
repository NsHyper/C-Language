#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
	int plithos;
	float poso=0;
	char eidos;
	printf("Dose plithos kai eidos :");
	scanf("%d %c",&plithos,&eidos);
	if (eidos=='E') poso=plithos*0.23;
	if (eidos=='A') poso=plithos*0.70;
	if (eidos=='T') poso=plithos*0.15;   
	printf("To teliko poso einai %f\n",poso);
    
	return 0;    
}
