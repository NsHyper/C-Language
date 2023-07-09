#include <stdio.h>
#include <stdlib.h>

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
	struct cars mycar;
	printf("Arithmos kykloforias:");
	gets(mycar.ar_kykl);
	printf("Xroma:");
	gets(mycar.xroma);
	printf("Marka:");
	gets(mycar.marka);
	printf("Kybika:");
	scanf("%d",&mycar.kybika);
	printf("Ipodinami:");
	scanf("%d",&mycar.ipodynami);
	
	return 0;
}
