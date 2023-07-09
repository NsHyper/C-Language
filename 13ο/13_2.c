#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cars
{
	char ar_kykl[8];
	char xroma[15];
	char marka[15];
	int kybika;
	int ipodynami;
};

 
int main(void)
{
	struct cars mycars[100];
	int i;
	for(i=0;i<100;i++)
	{
		printf("Arithmos mykloforias:");
		gets(mycars[i].ar_kykl);
		if(strcmp(mycars[i].ar_kykl,"")==0)
			break;
		printf("Xroma:");
		gets(mycars[i].xroma);
		printf("Marka:");
		gets(mycars[i].marka);
		printf("Kybika:");
		scanf("%d",&mycars[i].kybika);
		printf("Ipodynami:");
		scanf("%d",&mycars[i].ipodynami);
		getchar();                       // Διαβάζει το εναπομείναν \n στον buffer εισόδου
	} 
	
	return 0;
}
