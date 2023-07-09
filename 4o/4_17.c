#include <stdio.h>
int main(void)
{
	int a,ok,ar1,ar2;
	printf("Dose arithmo:");
	scanf("%d",&a);
	ok=a&128;
	ar1=(a&120)>>3;
	ar2=a&7;
	if (ok!=0)
        printf("OK\n");
    else
        printf("Provlima!!!\n");
	printf("ar1=%d ar2=%d\n",ar1,ar2);
	return 0;
}
