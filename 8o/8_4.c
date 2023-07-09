#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,num,num1,num2;
	num1=num2=0;
	for (a=1;a<=100;++a)
	{
		scanf("%d",&num);
		switch(num % 2)
		{
			case 0:
				++num2;
				break;	
			case 1:
				++num1;
				break;
		}
	}
	printf("num1=%d\n num2=%d\n",num1,num2);
	
	return 0;
}


