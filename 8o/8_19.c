#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float poso,sum=0,max,min;
	int plithos=0;
	while (sum<100000)
	{
		printf("Dose poso :");
		scanf("%f",&poso);
		sum=sum+poso;
		plithos++;
        if (plithos==1) max=min=poso;
		if (poso>max) max=poso;
		if (poso<min) min=poso;
	}
    printf("Plithos atomon: %d\n",plithos);
    printf("Synoliko poso %7.2f\n",sum);
    printf("Megalitero poso: %7.2f  Mikrotero poso: %7.2f\n",max,min);
    
    return 0;
}
