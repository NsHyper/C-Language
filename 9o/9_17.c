#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool bouncy(int a);

int main()
{
	int i, cnt=0;
	for (i=100;i<=9999;i++)
	   if (bouncy(i)) cnt++;
    printf("%d\n",cnt);
    return 0;
}

bool bouncy(int a)
{
    int p,mx=0,mn=9;
    bool ayx=true, fth=true;
    if (a<100) return false;
    do
    {
        p = a %10;
        if (p>mx)
            mx=p;
        else if (p<mx)
            ayx=false;
        if (p<mn)
            mn=p;
        else if (p>mn)
            fth=false;
        a=a /10 ;
    } while (a>0);
    return !(ayx||fth);
}
