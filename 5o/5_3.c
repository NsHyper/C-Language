#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;
	printf("1-Emfanise th lexi Hello\n");
	printf("2-Emfanise ton arithmo 2\n");
	printf("3-Emfanise bye bye\n");
	printf("4-Min kaneis tipota\n");
	printf("Dose epilogi:");
	ch=getchar();
	if (ch=='1') printf("Hello\n");
	if (ch=='2') printf("2\n");
	if (ch=='3') printf("bye bye\n");
	if (ch!='1' && ch!='2' && ch!='3' && ch!='4')
		printf("Lathos epilogi");

    return 0;
}
