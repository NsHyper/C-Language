#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	b=44;
	a=getch();
	switch(a)
	{
		case 66:
			printf("%c\n",a);
			printf("-------\n");
		case 7:
			printf("%d\n",b);
			break;
		case 'A':
		case 'a':
			printf("aaaaaaaaaaa");
			break;
		default:
			printf("1234567890");
	}
	
	return 0;
}


