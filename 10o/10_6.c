#include <stdio.h> 
#include <stdlib.h> 

char next_char();

int main(void)
{
	int i;
	for(i=1;i<=100;i++) 
       printf("%c",next_char()); //����� ��� next_char() 100 �����
	
    return 0;
}

char next_char()
{
	static char ch='a';
	if(ch>'z') ch='a';
	return ch++;
}

