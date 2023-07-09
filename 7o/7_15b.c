#include <stdio.h>
int main()
{
	char ch;
	int a=100,b;
	b=44;
	scanf("%c",&ch);
	if (ch==66)
	{
		printf("%d\n",a);
        printf("-------\n");
	}
	else if (ch==7)
    {
        --b;
		printf("%d\n",b);
    }
	else if (ch=='A' || ch=='a')
        printf("aaaaaaaaaaa\n");
    else
    {
        b++;
        printf("1234567890\n");
    }
	return 0;
}
