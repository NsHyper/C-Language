#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

float f(float xx);

int main(void) 
{
	float x;
 
    for (x=0.0;x<=1;x=x+0.05)
    {
        printf("x=%6.3f  fx=%6.3f\n",x,f(x));
    }
    
    return 0;
}

float f(float xx)
{
    return pow(xx,4)-10*pow(xx,2)+2;
}
