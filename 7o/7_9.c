#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int kafedes,ker_10,ker_20,ker_50,ker_1,ker_2;
	int resta;
	printf("Dose kafedes:");
	scanf("%d",&kafedes);
	resta=500-kafedes*70;
	if (resta<0) 
	{
		printf("Den ftanoun ta xrimata gia tosoys kafedes\n");
		exit(1);  
	}
	ker_2=resta/200;
	resta=resta % 200;
	ker_1=resta/100;
	resta=resta % 100;
	ker_50=resta/50;
	resta=resta % 50;
	ker_20=resta/20;
	resta=resta % 20;
	ker_10=resta/10;
	resta=resta % 10;
	printf("Resta\n");
	if (ker_2>0) printf("Kermata 2E :%d\n",ker_2);
	if (ker_1>0) printf("Kermata 1E :%d\n",ker_1);
	if (ker_50>0) printf("Kermata 50L :%d\n",ker_50);
	if (ker_20>0)printf("Kermata 20L :%d\n",ker_20);
	if (ker_10>0)printf("Kermata 10L :%d\n",ker_10);
	
	return 0;
}


