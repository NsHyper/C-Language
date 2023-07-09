#include <stdio.h>
#include <stdlib.h>

int mkd(int m, int n);

int main(void)
{
	int a,b;
	printf("Dose dyo ariumoys:");
	scanf("%d %d",&a,&b);
    printf("O MKD toy %d kai toy %d einai %d\n",a,b,mkd(a,b));
    
    return 0;
}

int mkd(int m, int n)
{
   int temp;
   if (n>m)
   {
      temp=m;
      m=n;
      n=temp;
   }  
   if (n==0) 
       return m;
   else 
       return mkd(n, m % n);
}
