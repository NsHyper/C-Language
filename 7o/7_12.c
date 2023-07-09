#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int fot;
    float poso;
    printf("Dose plithos fototypion :");
    scanf("%d",&fot);
    if (fot<=5)
       poso=fot*1;
    else if (fot<=50)
       poso=5*1 + (fot-5)*1.5;
    else if (fot<=150)
       poso=5*1 + 45*1.5 + (fot-50)*2;
    else
       poso=5*1 + 45*1.5 + 100*2 + (fot-140)*4;
    printf("Synoliko poso se euro: %f\n",poso/100);   
    return 0;
}
