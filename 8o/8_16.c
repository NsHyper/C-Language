#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
    float mo,sum,bathmos,max1,max2;
    sum=0;
    for (i=1;i<=10;i++)
    {
        printf("Dose baumo %d ->",i);
        scanf("%f",&bathmos);
        sum=sum+bathmos;
        if (i==1)
           max1=bathmos;
        else if (i==2)
           max2=bathmos;
        else
        {
           if (bathmos>max1)
           {
              max2=max1;
              max1=bathmos;
                            
           }
           else if (bathmos>max2)
           {
              max2=bathmos;  
           }              
        }          
    }
    mo=sum/10;
    printf("MO=%5.2f\n",mo);
    printf("MAX1=%5.2f\n",max1);
    printf("MAX2=%5.2f\n",max2);
    
    return 0;
}
