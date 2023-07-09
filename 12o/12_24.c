#include <stdio.h> 
#include <stdlib.h> 
int megaloi(float pin[], float ar);

int main(void)
{
    int i,pl;
    float a[100];
    srand(time(NULL));
    for (i=0;i<100;i++)
        a[i]=rand()/2.0;
    pl=megaloi(a,5000);
    printf("Pio megaloi apo to 5000 einai %d arithmoi\n",pl);
	
	return 0;
}

int megaloi(float pin[], float ar)
{
    int i,m=0;
    for (i=0;i<100;i++)
        if (pin[i]>=ar) m++;
    return m;
}
