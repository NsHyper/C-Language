#include <stdio.h> 
#include <stdlib.h> 

void display_char(int ar, char ch);

int main(void) 
{
	char c;
	for (c='A';c<='Z';c++)
        display_char(20,c);
	
    return 0;
}

void display_char(int ar, char ch)
{
    int i;
    for (i=1;i<=ar;i++) putchar(ch);
    putchar('\n');
}
