#include <stdio.h>
#include <stdlib.h>

struct stoixeia
{
	char onoma[15];
	char address[20];
	char thl[13];
	int ilikia;
};

int main(void)
{
	int ar;
	struct stoixeia *pin;
	printf("Dose plithos mathiton:");
	scanf("%d",&ar);
	pin=calloc(ar,sizeof(struct stoixeia));
	printf("Dose onoma:");
	fflush(stdin);        // Αδειάζει τον buffer εισόδου
    gets(pin[0].onoma);
	printf("Dose dieythinsi:");
	gets(pin[0].address);
	printf("Dose tilefono:");
	gets(pin[0].thl);
	printf("Dose ilikia:");
	scanf("%d",&pin[0].ilikia);
    
    return 0;
}

