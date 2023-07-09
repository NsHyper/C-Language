#include <stdlib.h>
#include <stdio.h>

int total(int ar);

int main(void)
{
	printf("Athr 1 ... 100  = %d\n",total(100)); //Υπολογισμός αθροίσματος από 1 μέχρι 100
	printf("Athr 1 ... 1000 = %d\n",total(1000)); //Υπολογισμός αθροίσματος από 1 μέχρι 1000
	
    return 0;
}


int total(int ar)
{
	int i,sum=0;
	for(i=1;i<=ar;i++)
			sum=sum+i;
	return sum;
}

