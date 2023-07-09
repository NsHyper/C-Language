#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int plithos;
	char eidos;
	float poso;
	printf("Dose plithos kai eidos:");
	scanf("%d %c",&plithos,&eidos);
	switch(eidos)
	{	
		case 'E':
			poso=plithos*0.23;
			break;
		case 'A':
			poso=plithos*0.70;
			break;
		case 'T':
			poso=plithos*0.15;
			break;
		default:
			printf("Lathos eidos\n");
			
			exit(1);
	}
	printf("Poso:%6.2f\n",poso);
	
	return 0;
}

   
