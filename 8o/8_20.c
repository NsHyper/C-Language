#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main(void) 
{
	int a,b;
    float d,r1,r2;
    for (a=-10;a<=10;a++)
    {
        for (b=-10;b<=10;b++)
        {
           if (a==0 || b==0) continue; 
           d=b*b-4*a*3;
           if (d>=0)
           {
              r1=(-b+sqrt(d))/(2*a);
              r2=(-b-sqrt(d))/(2*a);
              printf("a=%d b=%d r1=%f  r2=%f\n",a,b,r1,r2);
           }
           else
              printf("gia a=%d b=%d den exei pragmatikes rizes\n",a,b);
        }   
    }
    
    return 0;
}
