#include <stdio.h>
#include <stdbool.h>

bool palindromos(int num);

int main(void)
{
	int ar;
	printf("dose enan arithmo:");
	scanf("%d",&ar);
	if (palindromos(ar))
		printf("O arithmos einai palindromos\n");
	else
		printf("O arithmos den einai palindromos\n");
    return 0;
}

bool palindromos(int num)
{
	int temp,digit, rev = 0;
	temp=num;
	if (num<=9) return true; 
    do
    {
         digit = num%10;
         rev = (rev*10) + digit;
         num = num/10;
    } while (num!=0);
    printf("rev=%d\n",rev);
    if (rev==temp)
		return true;
	else
		return false;
}



