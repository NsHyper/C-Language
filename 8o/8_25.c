#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,gr;
	do
	{
        printf("Dose ypsos dendroy : ");
        scanf("%d",&gr);
        if (!(gr>=4 && gr<=20))
           printf("H timi den einai apodekti ksanadostin\n");
    } while (!(gr>=4 && gr<=20));
	for (i=0;i<=gr-2;i++)
	{
	    for (j=1;j<=gr-2-i;j++) putchar(' ');
	    for (j=1;j<=i*2+1;j++) putchar('*');
	    putchar('\n');
    }  
    for (j=1;j<=gr-2;j++) putchar(' ');
    printf("*\n");
	
    return 0;
}

