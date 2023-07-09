#include <stdio.h> 
#include <stdlib.h> 

int main(void) 

{
	int i;

 
    for (i=1;i<=100;i++)
    {
        printf("epomenos protos %d \n",next_first());
    }
    
    return 0;
}

int next_first()
{
    static int num=0;
    int i,found;
    while (found)
    {
     found=0;
     num=num+1;
     for (i=2;i<=num/2;i++)
        if (num%i==0) found=1;
    }    
    return num;
}
