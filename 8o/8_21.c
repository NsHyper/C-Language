#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m,n,mkd,r,temp;
    printf("Dose dyo arithmous :");
    scanf("%d %d",&m,&n);
    if (n>m) 
    {
       temp=m;
       m=n;
       n=temp;
    }
    if (n==0)
       mkd=m;
    else
    {
       do
       {
         r=m%n;    
         if (r!=0)
         {
            m=n;
            n=r;
            }              
       } while (r!=0);
       mkd=n;
    }
    printf("O MKD einai %d\n",mkd);
    
    return 0;
}

