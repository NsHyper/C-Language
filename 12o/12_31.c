#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void func4(char *p1, char *p2);

int main(void)
{
	char a[10], *ptr;
	strcpy(a,"MYTILHNH");
    func4(a,a+6);
	puts(a);
	
	return 0;
}
	
void func4(char *p1, char *p2)
{
	char ch;
	while(p1<p2)
	{
		ch=*p1;
		*p1=*p2;
		*p2=ch;
		p1++;
		p2--;
	}
}
