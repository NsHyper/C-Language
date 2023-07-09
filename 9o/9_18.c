#include <stdio.h>
#include <stdbool.h>

int rev(int num);

int main(void)
{
	int ar;
	printf("dose enan arithmo:");
	scanf("%d",&ar);
	printf("%d\n",rev(ar));
    return 0;
}

int rev(int num)
{
	int digit, sum = 0;
    do
    {
         digit = num%10;
         sum = (sum*10) + digit;
         num = num/10;
    } while (num!=0);
    return sum;
}



