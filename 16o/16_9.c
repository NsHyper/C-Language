#include <stdio.h>
#include <stdlib.h>

int check_sort(int pin[],int n)
{
    int ayxousa=1,fthinousa=1,i;
    for (i=0;i<n-1;i++)
    {
        if (pin[i]>pin[i+1]) ayxousa=0;
        if (pin[i]<pin[i+1]) fthinousa=0;
    }   
    if (ayxousa)
       return 1;
    else if (fthinousa)
       return -1;
    else
        return 0;      
}

int main(void)
{
	int test[10]={5,67,8,3,56,87,12,14,9,27},tt,i,k;
    printf("prin tin taxinomisi=%d\n",check_sort(test,10));
   	//Αυξουσα ταξινόμηση πίνακα test[]
    for(i=1;i<10;i++)
	{
	 for(k=9;k>=i;k--)
	 {
    	if(test[k]<test[k-1])
		{
          tt=test[k];
          test[k]=test[k-1];
          test[k-1]=tt;
        }
	 }
    }
    printf("meta apo tin proti taxinomisi=%d\n",check_sort(test,10));
    
    //Φθίνουσα ταξινόμηση πίνακα test[]
    for(i=1;i<10;i++)
	{ 
	 for(k=9;k>=i;k--)
	 {
    	if(test[k]>test[k-1])
		{
          tt=test[k];
          test[k]=test[k-1];
          test[k-1]=tt;
        }
	 }
    }
    printf("meta apo tin deyteri taxinomisi=%d\n",check_sort(test,10));
	
	return 0;
}

