#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>

int main(void)
{ 
	char ch;
	int ar;
	bool c; 
	scanf("%c %d",&ch,&ar);
	if (ch==ar) 
		c=true; 
	else 
		c=false;
	printf("c=%d\n",c);
	
	return 0;
}


