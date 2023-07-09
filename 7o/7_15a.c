#include <stdio.h>
int main()
{
	char ch;
	int a=100,b;
	b=44;
	scanf("%c",&ch);
	switch (ch)
	{
		case 66:
			printf("%d\n",a);
			printf("-------\n");
			break;
		case 7:
			--b;
			printf("%d\n",b);
			break;
		case 'A':
		case 'a':	
			printf("aaaaaaaaaaa\n");
			break;
		default:
			b++;
			printf("1234567890\n");
	}
	return 0;
}
