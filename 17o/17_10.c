#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ar,i,j,k;
	int *imeres;
	int **metriseis;
	float ***therm,sum,mo;
	printf("Dose arithmo ereyniton : ");
	scanf("%d",&ar);
	imeres=malloc(ar*sizeof(int));
	metriseis=malloc(ar*sizeof(int*));
	for (i=0;i<ar;i++)
    {
        printf("Dose hmeres ergasias erevniti %d -> ",i+1);
        scanf("%d",&imeres[i]);
        metriseis[i]=malloc(imeres[i]*sizeof(int));
        printf("\tDose plithos metriseon imeras erevniti %d\n",i+1);
        for (j=0;j<imeres[i];j++)
        {
        	printf("\tPlithos metriseon imeras %d -> ",j+1);
        	scanf("%d",&metriseis[i][j]);
    	}
    }
    therm=malloc(ar*sizeof(float**));
    for (i=0;i<ar;i++)
    {
    	therm[i]=malloc(imeres[i]*sizeof(float*));
    	for (j=0;j<imeres[i];j++)
    		therm[i][j]=malloc(metriseis[i][j]*sizeof(float));
    }
    for (i=0;i<ar;i++)
    {
    	printf("\nErevnitis No %d\n",i+1);
    	printf("==========================\n");
    	for (j=0;j<imeres[i];j++)
    	{
    		printf("\t### Imera %d ###\n",j+1);
    		for (k=0;k<metriseis[i][j];k++)
    		{
    			printf("\t\t Metrisi %d ->",k+1);
    			scanf("%f",&therm[i][j][k]);
    		}
    	}
   	}
   	for (i=0;i<ar;i++)
    {
    	printf("\nErevnitis No %d\n",i+1);
    	printf("==========================\n");
    	for (j=0;j<imeres[i];j++)
    	{
    		printf("\t### Imera %d ###\n",j+1);
    		sum=0;
    		for (k=0;k<metriseis[i][j];k++)
				sum=sum+therm[i][j][k];
    		mo=sum/metriseis[i][j];
    		printf("\nMesi thermokrasia %f\n",mo);
    	}
   	}
 	return 0;
}






