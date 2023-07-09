#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double fx,x;

    for (x=0.0;x<=1;x=x+0.05)
    {
        fx=pow(x,4)-5*pow(x,2)+3;
        printf("x=%f  f(x)=%f\n",x,fx);
    }

    return 0;
}
