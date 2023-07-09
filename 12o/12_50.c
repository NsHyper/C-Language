#include <stdio.h>
#include <stdlib.h>

void fill(double p[],int n);

int main(void)
{
	int a,i;
	printf("Dose plithos arithmon>");
	scanf("%d",&a);
	double pin[a];
	fill(pin,a);
    for (i=0;i<a;i++)
      printf("%f\n",pin[i]);        
    
    return 0;
}

void fill(double p[],int n)
{
     int i;
     for (i=0;i<n;i++)
         scanf("%lf",&p[i]);
}             



