#include <stdio.h> 
#include <stdlib.h> 

void display_char(int ar, char ch);

int main(void) 
{
	display_char(10,'*');
	display_char(7,'a');
	display_char(10,'-');	
    
    return 0;
}

void display_char(int ar, char ch)
{
    int i;
    for (i=1;i<=ar;i++) putchar(ch);
    putchar('\n');
}
