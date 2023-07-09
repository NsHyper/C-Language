#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	char ch;
	ch=getchar();
	switch(ch)
	{
		case 'K':
			printf("Kalimera\n");
			break;
		case '2':
			printf("2\n");
			break;
		case 'T':
			printf("Telos\n");
			break;
		default:
			printf("Lathos epilogi\n");
	}
	
	return 0;
}


