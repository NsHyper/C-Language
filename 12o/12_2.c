#include <stdio.h> 
#include <stdlib.h> 
 
int main(void)
{
    int a[100],i,max,thesi;
    //srand(time(NULL));
    for (i=0;i<100;i++)
        a[i]=rand();
    max=a[0];
    thesi=1;
    for (i=0;i<100;i++)
    {
        if (a[i]>max)
        {
           max=a[i];
           thesi=i;
        }
    }    
    printf("Megistos %d sti uesi %d\n",max,thesi);
	
	return 0;
}
