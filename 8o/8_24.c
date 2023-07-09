#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,gr,st;
	printf("Dose ypsos kai platos orthogoniou : ");
	scanf("%d %d",&gr,&st);
	for (j=1;j<=st;j++) putchar('*');
	putchar('\n');
	for (i=1;i<=gr-2;i++)
    {
         putchar('*');
         for (j=1;j<=st-2;j++)
             putchar(' ');
         putchar('*');  
         putchar('\n');    
    }    
    for (j=1;j<=st;j++) putchar('*');
	putchar('\n');
    
    return 0;
}

