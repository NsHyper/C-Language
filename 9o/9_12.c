#include <stdio.h>
#include <stdlib.h>

void display_char(int ar, char ch)
{
int i;
for (i=1;i<=ar;i++) putchar(ch);
putchar('\n');
}

int main(void)
{
	display_char(15,'=');
	display_char(40,65);
	display_char(50,'#');
}
