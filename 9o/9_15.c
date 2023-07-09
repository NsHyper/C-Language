#include <stdio.h> 
#include <stdlib.h> 

void display_rectangle(int gr, int st);

int main(void) 
{
	display_rectangle(6,10);
	
    return 0;
}

void display_rectangle(int gr, int st)
{
    int i,j;
    putchar(201);
    for (i=1;i<=st-2;i++) putchar(205);
    putchar(187);
    putchar('\n');
    for (j=1;j<=gr-2;j++)
    {
        putchar(186);
        for (i=1;i<=st-2;i++) putchar(' ');
        putchar(186);
        putchar('\n');
    }
    putchar(200);
    for (i=1;i<=st-2;i++) putchar(205);
    putchar(188);
    putchar('\n');
}
